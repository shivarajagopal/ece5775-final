

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "constArrays.h"
#include "testSound.h"
#include "voicerec.h"

#define M_PI 3.14159265358979323846
#define LINESIZE 256

#define MAX_COEFF 0.947543636291F
#define MIN_COEFF 0.392485425092F

#define NUM_BANKS 26

void FFT( double *c, int N, int isign );

/****************************************************
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
https://unix4lyfe.org/dct-1d/
****************************************************/

void dct_ii(int N, double *x, double *X) {
  for (int k = 0; k < N; ++k) {
    double sum = 0.;
    double s = (k == 0) ? 0.707106781186548 : 1.;
    for (int n = 0; n < N; ++n) {
      sum += s * x[n] * dctMatrix[k][n];
    }
    X[k] = sum * 0.277350098112615;
  }
}

/*
 *                            COPYRIGHT
 *
 *  fft - Takes the FFT of a data (time domain) file, and outputs to file
 *   the complex FFT data.
 *
 *  Copyright (C) 2003, 2004, 2005 Exstrom Laboratories LLC
 */
/**********************************************************************
  FFT - calculates the discrete fourier transform of an array of double
  precision complex numbers using the FFT algorithm.

  c = pointer to an array of size 2*N that contains the real and
    imaginary parts of the complex numbers. The even numbered indices contain
    the real parts and the odd numbered indices contain the imaginary parts.
      c[2*k] = real part of kth data point.
      c[2*k+1] = imaginary part of kth data point.
  N = number of data points. The array, c, should contain 2*N elements
  isign = 1 for forward FFT, -1 for inverse FFT.
*/

void FFT( double *c, int N, int isign )
{
  int n, n2, nb, j, k, i0, i1;
  double wr, wi, wrk, wik;
  double d, dr, di, d0r, d0i, d1r, d1i;
  double *cp;

  j = 0;
  n2 = N / 2;
  for( k = 0; k < N; ++k )
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
    n = N >> 1;
    while( (n >= 2) && (j >= n) )
    {
      j -= n;
    n = n >> 1;
    }
    j += n;
  }

  for( n = 2; n <= N; n = n << 1 )
  {
    wr = cosVec[n-1];
    wi = sinVec[n-1];
    if( isign == 1 ) wi = -wi;
    cp = c;
    nb = N / n;
    n2 = n >> 1;
    for( j = 0; j < nb; ++j )
    {
      wrk = 1.0;
      wik = 0.0;
      for( k = 0; k < n2; ++k )
      {
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
      cp += n << 1;
    }
  }
}



int processChunk( int sp, int np, double *ret )
{
  int i = 0;

  double *c = (double *)malloc( 2 * np * sizeof(double) );
  double *d = (double *)malloc( np * sizeof(double) );

  //printf("\ninput:\n");
  for( i = 0; i < np; ++i )
  {
    c[2*i] = testSound[sp+i];
    c[2*i+1] = 0.0;
  }

  FFT( c, np, 1 );

  for( i = 0; i < np; ++i )
  {
    d[i] = (c[2*i]*c[2*i] + c[2*i+1]*c[2*i+1])/256.0;
  }

  free( c );

  c = (double *)calloc( (NUM_BANKS) , sizeof(double));

  int mellIdx = 0;
  for ( i = 0; i < np; ++i ) {
    if ( i==mell[mellIdx] ) {
      c[ 0 ] += d[ mell[mellIdx] ];
    }

    if (( i > mell[ mellIdx ] ) && ( i <= mell[ mellIdx+1 ] )) {
      c[ mellIdx ] += d[i];
    }

    if (i == mell[ mellIdx+1 ]) {
      mellIdx++;
    } 
  }

  for (i=0 ; i < NUM_BANKS ; i++ ) {
    if (c[i] <= 0.0) {
      c[i] = 0.0;
    } else {
      c[i] = fastlog(c[i]);
    }
  }

  free(d);

  dct_ii(NUM_BANKS, c, ret);

  /*printf("\nDCT Results:\n");
  for ( i = 0; i < NUM_BANKS ; ++i) {
    printf("%lf\n", ret[i]);
  }*/
  
  
}

/*int main( int argc, char *argv[]) {
  int i = 0, j=0, sp=0, np = 0, stride = 0;

  if( argc < 2 )
  {
    printf("\n fft takes the FFT of an input array, and outputs\n");
    printf(" an complex fft data.\n");
    printf(" All lines at top of input file starting with # are ignored.\n");
    printf("\n Usage: fft sp np outfile\n");
    printf("  sp = starting point (0 based)\n");
    printf("  np = number of points to fft\n");
    return(-1);
  }
  sp = 0;
  np = atoi( argv[1] );
  stride = np/2;
  int num_results = (8000/stride);
  double **results;
  results = (double **) malloc(num_results * sizeof(double*)); 
  for (i=0; i < num_results; i++) {
    results[i] = (double *) malloc(NUM_BANKS * sizeof(double));
  }
  int index = 0;
  for (i = 0; i+np <8000 ; i += stride) {
    processChunk(i, np, results[index]);
    sp += stride;  
    index++;
  }
  printf("\nDCT Results:\n");
  for ( i = 0; i < num_results ; ++i) {
    printf("\niteration %d\n", i);
    for ( j = 0; j < NUM_BANKS ; ++j ) {
      printf("%lf\n", results[i][j]);
    }
  }
  return 0;
}*/
