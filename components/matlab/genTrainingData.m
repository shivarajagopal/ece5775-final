function genTrainingData(iterations, filename)
% This script records 2 seconds of sound, cleans it up, runs a 
% piecewise FFT, followed by a Mell Transform, combination of Mell buckets,
% and then an inverse Mell transform. Finally, we run a DCT on the result.
% This is then output to a C data file of type double. This ends up with 
% a 2D array of size 63x14.
%
% @in: iterations- number of test samples to generate
% @in: filename- String of name of samples and filename
%
% Output: File of name train_<filename>.dat containing arrays 
%   of format <filename>x[63][14]

fid = fopen(strcat('train_',strcat(filename, '.dat')), 'w');
if (fid==1)
    return
end
for i= 1:iterations
%     fprintf(fid, 'const double %s%d[63][14]={', filename, i);
    close all
    disp('Sample number: ');
    disp(i);
    pause(0.5)
    sound = recordAndClean;
    xform = FFTandMell(sound, 256, 128, 300, 4000, 26);
    dctans = (dct(xform));
    dctans = dctans(1:14,:);
    for j= 1:63
%         fprintf(fid, '{');
        for k=1:14
%             if k == 14
%                 fprintf(fid, '%f', dctans(k,j));
%             else
%                 fprintf(fid, '%f,', dctans(k,j));
%             end     
            fprintf(fid,'%f\n', dctans(k,j));
        end
%         if j==63
%             fprintf(fid, '}\n');
%         else
%             fprintf(fid, '},\n');
%         end
    end
%     fprintf(fid, '};\n\n');
end
fclose('all')
end


function out = recordAndClean()
while(1)
    % Record a 2-second sample at 8 kHz
    recObj = audiorecorder;
    disp('Say something...')
    recordblocking(recObj,2);
    disp('Recording ended')
    y=getaudiodata(recObj);
    %scrsz = get(groot,'ScreenSize');
    %figure('Position', [1 (scrsz(4)/2)-120 scrsz(3)/2 scrsz(4)/2])
    %plot(y);
    %title('original')
    
    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    % Clean Signal
    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    % copy signal
    y1=y;
    
    % Trim off ends
    first = find((y1>0.15),1,'first');
    last = find((y1>0.15),1,'last');
    y1 = y1(first:last);
    
    % Set amplitude and sample thresholds 
    % We need threshold number of under ampthreshold to define a deletion
    % region
    threshold = 200;        % The number of samples to define the need for a zero-out
    ampThreshold = 0.15;    % The amplitude threshold to define a bad sample

    % Beginning marker of deletion region
    markbegin = 0;
    % Count of under-threshold amplitudes
    count = 0; 
    % Delete Flag
    delete = 0;
    
    % Scan over y1
    for i=1:length(y1)
        % if we're not in a potential deletion region
        if (markbegin == 0)
            % If we're under the threshold, set i as the beginning marker
            if (abs(y1(i)) < ampThreshold)
                markbegin = i;
            end
        else % markbegin is set, we might be in a deletion region
            if (abs(y1(i)) < ampThreshold) % If we're still under threshold
                count = count + 1;         % Increment Counter
                if (count == threshold)    % Set the delete marker if we're over the count threshold
                    delete = 1;
                end
            else %We've gone over threshold. Reset all the vars
                % Did we need to delete? If so, do it.
                if (delete == 1)
                    y1(markbegin:i-1) = 0;
                end
                delete = 0;
                markbegin = 0;
                count = 0;
            end
            
            % Are we in the deletion region and we hit the end of file?
            % If so, delete out.
            if (i == length(i))
                y1(markbegin:i) = 0;
            end
        end
    end
        
    % Trim off beginning
    y2 = y1(abs(y1)>0);
    
    % If we're down to less than a second, pad it.
    
    if (length(y2) < 8000)
          needZeros = 8000 - length(y2);
          zeropad = zeros(needZeros,1);
          y2 = [y2;zeropad];
    end

%     figure('Position', [scrsz(3)/2 (scrsz(4)/2)-120 scrsz(3)/2 scrsz(4)/2])
%     plot(y2);
%     title('Filtered and Normalized')
    %soundsc(y);
    soundsc(y2);
    str = input('Rerecord? (y or n) (default:n)\n','s');
    if (numel(str)== 0)
        break;
    end
    if (str(1) == 'n')
        break;
    end
end
out=y2;
close all
end

function outMatrix = FFTandMell(soundIn, stepSize, stride, minFreq, maxFreq, nMell)
% Returns the spaced FFTs as columns
first = 1;
last = stepSize;
done=0;
idx = 1;
cols = ceil(length(soundIn) / stepSize);
outXForm = zeros(nMell, cols);
while(~done)

    if (last > length(soundIn))
        piece = soundIn(first:end);
        needZeros = 256 - length(piece);
        zeropad = zeros(needZeros,1);
        piece = [piece;zeropad];
    else
        piece = soundIn(first:last);
    end
    outFFTvec = abs(fft(piece));
    outPowerSpec = (outFFTvec.^2)./stepSize;
    outXForm(1:nMell, idx) = mellTransform(outPowerSpec, minFreq, maxFreq, nMell);

    idx= idx + 1;
    first = first + stride;
    last = last + stride;
    if (first > length(soundIn))
        done = 1;
    end
end
outMatrix = outXForm;

end

function xformed = mellTransform(FFTvector, minFreq, maxFreq, nBanks)

%Get Mell of Low and High frequencies
mellLow = 1125 * log(1+(minFreq/700));
mellHigh = 1125 * log(1+(maxFreq/700));

% Get a spacing for the filters, based on the number of desired banks
spacing = (mellHigh-mellLow)/(nBanks);

% Get all Mell Freqs on frequency
mellFreqs = mellLow:spacing:mellHigh;

% Convert back to regular frequencies
spacedFreqs = 700*(exp(mellFreqs./1125) -1);

% Get as indices of FFT
indices = floor(((length(FFTvector(:,1)))+1).*spacedFreqs / maxFreq);

% Calculate a series of Mell-based coefficients

cols = length(FFTvector(1,:));
rows = nBanks;
mellCoeffs = zeros(rows,1);

for j = 1:nBanks
    mellCoeffs(j, 1) = sum(FFTvector(indices(j)+1:indices(j+1),1));
    if (j==1) 
        mellCoeffs(j,1) = mellCoeffs(j,1) + FFTvector(indices(1),1);
    end
    if (mellCoeffs(j,1) <= 0)
        mellCoeffs(j,1) = 0;
    else
        mellCoeffs(j,1) = log(mellCoeffs(j,1));
    end
end

xformed = mellCoeffs;
end
