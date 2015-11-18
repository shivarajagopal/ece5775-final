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
