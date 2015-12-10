

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <inttypes.h>
#include "constArrays.h"
#include "voicerec.h"
#include "neuralNetworkSynth.h"

/****************************************************
 * GLOBAL VARIABLES
*****************************************************/
double result[NUMRESULTS][(NUM_BANKS/2)+1];
double c[2*NP];
double spec[NP];
double e[NUM_BANKS];
int begins[80];
int ends[80];

/****************************************************
 * Math and Signal Processing Helper Functions
*****************************************************/

/****************************************************
Fast Logarithm function from:
http://www.machinedlearnings.com/2011/06/fast-approximate-logarithm-exponential.html
*****************************************************/
static inline float 
fastlog2 (float x)
{
  union { float f; uint32_t i; } vx = { x };
  union { uint32_t i; float f; } mx = { (vx.i & 0x007FFFFF) | 0x3f000000 };
  float y = vx.i;
  y *= 1.1920928955078125e-7f;

  return y - 124.22551499f
           - 1.498030302f * mx.f 
           - 1.72587999f / (0.3520887068f + mx.f);
}

static inline float
fastlog (float x)
{
  return 0.69314718f * fastlog2 (x);
}

/****************************************************
1D DCT II from:
https://unix4lyfe.org/dct-1d/
****************************************************/

void dct_ii(int N, double *x, double *X) {
  for (int k = 0; k < (N/2)+1 ; ++k) {
    double sum = 0.;
    double s = (k == 0) ? 0.707106781186548 : 1.;
    for (int n = 0; n < N; ++n) {
      sum += s * x[n] * dctMatrix[k][n];
    }
    X[k] = sum * 0.277350098112615;
  }
}

/* COPYRIGHT
 fft - Takes the FFT of a data (time domain) 
 file, and outputs to file the complex FFT data.
 
 Copyright (C) 2003, 2004, 2005 Exstrom 
 Laboratories LLC

 FFT - calculates the discrete fourier transform of 
 an array of double precision complex numbers using 
 the FFT algorithm.

 c = pointer to an array of size 2*N that contains 
 the real and imaginary parts of the complex numbers.
 The even numbered indices contain the real parts and
 the odd numbered indices contain the imaginary parts

 c[2*k] = real part of kth data point.
 c[2*k+1] = imaginary part of kth data point.
*/

void FFT( double *c )
{
  int n, n2, nb, j, k, i0, i1, q;
  double wr, wi, wrk, wik;
  double d, dr, di, d0r, d0i, d1r, d1i;
  double *cp;

  j = 0;
  n2 = NP / 2;
  for( k = 0; k < NP; ++k )
  {
    if( k < j )
    {
      i0 = k << 1;
      i1 = j << 1;
      dr = c[i0];
      di = c[i0+1];
      c[i0] = c[i1];
      c[i0+1] = c[i1+1];
      c[i1] = dr;
      c[i1+1] = di;
    }
    n = NP >> 1;
    for (q=0; q < 8; ++q) {
      if ( (j >= n) && (n >= 2) ) {
        j -= n;
        n = n >> 1;
      }
    }
    j += n;
  }

  for( n = 2; n <= NP; n = n << 1 )
  {
    wr = cosVec[n-1];
    wi = sinVec[n-1];
    cp = c;
    nb = NP / n;
    n2 = n >> 1;
    for( j = 0; j < 128; ++j )
    {
      if (j < nb) {
        wrk = 1.0;
        wik = 0.0;
        for( k = 0; k < (NP >> 1); ++k )
        {
          if (k < n2) {
            i0 = k << 1;
            i1 = i0 + n;
            d0r = cp[i0];
            d0i = cp[i0+1];
            d1r = cp[i1];
            d1i = cp[i1+1];
            dr = wrk * d1r - wik * d1i;
            di = wrk * d1i + wik * d1r;
            cp[i0] = d0r + dr;
            cp[i0+1] = d0i + di;
            cp[i1] = d0r - dr;
            cp[i1+1] = d0i - di;
            d = wrk;
            wrk = wr * wrk - wi * wik;
            wik = wr * wik + wi * d;
          }
        }
        cp += n << 1;
      }
    }
  }
}

/****************************************************
 * HELPER FUNCTIONS
*****************************************************/

/****************************************************
Processor for a 256-sample (32ms) chunk of sound to 
generate fingerprint.
*****************************************************/

void processChunk( int sp, double *ret, double *inputSound)
{
  int i = 0;

  for( i = 0; i < NP; ++i )
  {
    c[2*i] = inputSound[sp+i];
    c[2*i+1] = 0.0;
    if (i < NUM_BANKS) e[i] = 0; 
  }

  FFT( c );

  for( i = 0; i < NP; ++i )
  {
    spec[i] = (c[2*i]*c[2*i] + c[2*i+1]*c[2*i+1])/256.0;
  }

  int mellIdx = 0;
  for ( i = 0; i < NP; ++i ) {
    if ( i==mell[mellIdx] ) {
      e[ 0 ] += spec[ mell[mellIdx] ];
    }

    if (( i > mell[ mellIdx ] ) && ( i <= mell[ mellIdx+1 ] )) {
      e[ mellIdx ] += spec[i];
    }

    if (i == mell[ mellIdx+1 ]) {
      mellIdx++;
    } 
  }

  for (i=0 ; i < NUM_BANKS ; i++ ) {
    if (e[i] <= 0.0) {
      e[i] = 0.0;
    } else {
      e[i] = fastlog(e[i]);
    }
  }

  // Calculate a DCT and only keep the first (NUM_BANKS/2) +1 coeffs
  dct_ii(NUM_BANKS, e, ret);

}

/****************************************************
Sound preprocessor. Takes a 16000 size sample (2s),
gets rid of noise, and normalizes to 8000 samples (1s)
*****************************************************/
void preprocessSound(double *inSound, int inSize, double *outSound, int outSize) {
  int i = 0;
  int first = 0;
  int last = 0;

  for (i=0; i<80; i++) {
    begins[i] = -1;
    ends[i] = -1;
  }
  int firstSet = 0;
  for (i = 0 ; i < inSize ; i++ ) {
    if (inSound[i] > 0.15 && firstSet == 0) {
      first = i;
      firstSet = 1;
    } else if (inSound[i] > 0.15) {
      last = i;
    }
  }
  int numThreshold = 200;
  double ampThreshold = 0.15;
  int markBegin = 0;
  int count = 0;
  int deleteFlag = 0;
  int j = 0;
  int index = 0;

  for ( i = 0 ; i < inSize ; i++ ) {
    if ((i >= first) && (i <= last)) {
      if (markBegin == 0) {
        if ( fabs(inSound[i]) < ampThreshold ) {
          markBegin = i;
        }
      } 
      else {
        if ( fabs(inSound[i]) < ampThreshold ) {
          count++;
          if (count == numThreshold) {
            deleteFlag = 1;
          }
        }
        else {
          if (deleteFlag == 1) {
            begins[index] = markBegin;
            ends[index] = i;
            index++;
          }
          deleteFlag = 0;
          markBegin = 0;
          count = 0;
        }
      }
    }
  }

  index = 0; j = 0;
  for (i=0; i<inSize; i++) {
    if (begins[index] != -1) {
      if ((i > begins[index]) && (i < ends[index])) {
        inSound[i] = 0;
      } else if (i == ends[index]) {
        index++;
      }
    }
    if (j != 8000 && i >= first && i <= last) {
      if (fabs(inSound[i]) > 0) {
        outSound[j] = inSound[i];
        j++;
      }
    } else if (j < 8000 && i >= first) {
      outSound[j] = 0;
      j++;
    }
  }
}

/****************************************************
 * TOP LEVEL FUNCTION
 * Takes in a sound of size 16000 samples at 8kHz
 * (2 seconds), generates a fingerprint, and runs
 * it through the neural network classifier to get
 * the most likely result
*****************************************************/
int voicerec(double inSound[ORIGSIZE]) {
  int i = 0, j=0, stride = 0, classification = -1;

  stride = NP/2;
  double outSound[8000];
  preprocessSound(inSound, 16000, outSound, 8000);
  int index = 0;
  for (i = 0; i+NP <8000 ; i += stride) {
    processChunk(i, result[index], outSound);
    index++;
  }
  classification = classifySound(result);
  return classification;
}
