function runAll(iterations, filename)
% This script records a sound, cleans it up, runs a piecewise FFT, and finally a Mell Transform on it.
% Be ready to speak quickly after running
fid = fopen(strcat(filename, '.h'), 'w');
if (fid==1)
    return
end
for i= 1:iterations
    fprintf(fid, 'const double %s%d[63][14]={', filename, i);
    close all
    disp('Sample number: ');
    disp(i);
    pause(0.5)
    sound = recordAndClean;
    xform = FFTandMell(sound, 256, 128, 300, 4000, 26);
    dctans = (dct(xform));
    dctans = dctans(1:14,:);
    for j= 1:63
        fprintf(fid, '{');
        for k=1:14
            if k == 14
                fprintf(fid, '%f', dctans(k,j));
            else
                fprintf(fid, '%f,', dctans(k,j));
            end            
        end
        if j==63
            fprintf(fid, '}\n');
        else
            fprintf(fid, '},\n');
        end
    end
    fprintf(fid, '};\n\n');
end
fclose('all')