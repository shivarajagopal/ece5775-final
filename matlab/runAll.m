function [xform,dctans] = runAll()
% This script records a sound, cleans it up, runs a piecewise FFT, and finally a Mell Transform on it.
% Be ready to speak quickly after running

close all
sound = recordAndClean;
%FFTMatrix = piecewiseFFT(sound, 256, 128);
%xform = mellTransform(FFTMatrix, 300, 4000, 10);
xform = FFTandMell(sound, 256, 128, 300, 4000, 26);
dctans = (dct(xform));
dctans = dctans(1:13);
surf(xform)