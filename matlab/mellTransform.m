function xformed = mellTransform(FFTMatrix, minFreq, maxFreq, nBanks)

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
indices = floor(((length(FFTMatrix(:,1)))+1).*spacedFreqs / maxFreq);

% Calculate a series of Mell-based coefficients

cols = length(FFTMatrix(1,:));
rows = nBanks;
mellCoeffs = zeros(rows,cols);

% For all columns
for i=1:cols
    % Initialize the two indices
    for j = 1:nBanks
        mellCoeffs(j, i) = sum(FFTMatrix(indices(j)+1:indices(j+1),i));
        if (j==1) 
            mellCoeffs(j,i) = mellCoeffs(j,i) + FFTMatrix(indices(1),i);
        end
    end
end

xformed = mellCoeffs;
