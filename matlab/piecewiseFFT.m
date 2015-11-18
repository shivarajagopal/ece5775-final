function outMatrix = piecewiseFFT(soundIn, stepSize, stride)
% Returns the spaced FFTs as columns
first = 1;
last = stepSize;
done=0;
idx = 1;
cols = ceil(length(soundIn) / stepSize);
outFFT = zeros(stepSize, cols);
while(~done)

    if (last > length(soundIn))
        piece = soundIn(first:end);
        needZeros = 256 - length(piece);
        zeropad = zeros(needZeros,1);
        piece = [piece;zeropad];
    else
        piece = soundIn(first:last);
    end
    outFFT(1:256, idx) = abs(fft(piece));
    idx= idx + 1;
%     first = currIndex+1;
%     last = currIndex + stepSize;    
    first = first + stride;
    last = last + stride;
    if (first > length(soundIn))
        done = 1;
    end
end
outMatrix = outFFT;