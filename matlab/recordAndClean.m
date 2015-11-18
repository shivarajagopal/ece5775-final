function out = recordAndClean()
while(1)
    % Record a 2-second sample at 8 kHz
    recObj = audiorecorder;
    disp('Say something...')
    recordblocking(recObj,2);
    disp('Recording ended')
    y=getaudiodata(recObj);
    scrsz = get(groot,'ScreenSize');
    figure('Position', [1 (scrsz(4)/2)-120 scrsz(3)/2 scrsz(4)/2])
    plot(y);
    title('original')
    
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

    figure('Position', [scrsz(3)/2 (scrsz(4)/2)-120 scrsz(3)/2 scrsz(4)/2])
    plot(y2);
    title('Filtered and Normalized')
    soundsc(y);
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