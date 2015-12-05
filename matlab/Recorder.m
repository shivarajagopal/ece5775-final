function Recorder(iterations, filename)
% This script records a sound, cleans it up, runs a piecewise FFT, and finally a Mell Transform on it.
% Be ready to speak quickly after running
fid = fopen(strcat(filename, '.h'), 'w');
if (fid==1)
    return
end
recObj = audiorecorder;

% Record a 2-second sample at 8 kHz
for i = 1:iterations
    fprintf(fid, 'double %s%d[16000]={', filename, i);
    pause(0.5);
    disp('Say something...')
    recordblocking(recObj,2);
    disp('Recording ended')
    y=getaudiodata(recObj);
    for j= 1:16000
        if j == 16000
            fprintf(fid, '%f', y(j));
        elseif mod(j,10) == 0
            fprintf(fid, '%f,\n', y(j));
        else          
            fprintf(fid, '%f,', y(j));
        end
    end
    fprintf(fid, '};\n\n');
end
fclose('all');