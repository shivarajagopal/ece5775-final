

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "constArrays.h"
#include "testSound.h"

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
    double s = (k == 0) ? sqrt(.5) : 1.;
    for (int n = 0; n < N; ++n) {
      sum += s * x[n] * cos(M_PI * (n + .5) * k / N);
    }
    X[k] = sum * sqrt(2. / N);
  }
}

int main( int argc, char *argv[] )
{
  int i=0, sp=0, np=0;
  //double *c, *d;

  if( argc < 3 )
  {
    printf("\n fft takes the FFT of an input array, and outputs\n");
    printf(" an complex fft data.\n");
    printf(" All lines at top of input file starting with # are ignored.\n");
    printf("\n Usage: fft sp np outfile\n");
    printf("  sp = starting point (0 based)\n");
    printf("  np = number of points to fft\n");
    printf("  outfile = output file name\n");
    return(-1);
  }

  sp = atoi( argv[1] );
  np = atoi( argv[2] );


  double *c = (double *)malloc( 2 * np * sizeof(double) );
  double *d = (double *)malloc( np * sizeof(double) );

  //printf("\ninput:\n");
  for( i = 0; i < np; ++i )
  {
    c[2*i] = testSound[sp+i];
    c[2*i+1] = 0.0;
    //printf("%lf\t%lf\n", c[2*i], c[2*i+1]);
  }

  FFT( c, np, 1 );

  //printf("\noutput amplitude:\n");
  for( i = 0; i < np; ++i )
  {
    /*double absRe = (c[2*i] < 0) ? -c[2*i] : c[2*i];
    double absIm = (c[2*i+1] < 0) ? -c[2*i+1] : c[2*i+1];
    double max = fmax(absRe, absIm);
    double min = fmin(absRe, absIm);
    d[i] = ((MAX_COEFF*max) + (MIN_COEFF*min))/256.0;*/
    d[i] = (c[2*i]*c[2*i] + c[2*i+1]*c[2*i+1])/256.0;
    //printf("%d: %f\n", i, d[i]);
  }

  free( c );

  c = (double *)calloc( (NUM_BANKS) , sizeof(double));

  int mellIdx = 0;
  //printf("Starting on Mell Index 0, which is %d\n", mell[mellIdx]);
  for ( i = 0; i < np; ++i ) {
    if ( i==mell[mellIdx] ) {
      //printf("Summing d index %d onto c[%d], (%lf)\n", i, mellIdx, d[mell[mellIdx]]);
      c[ 0 ] += d[ mell[mellIdx] ];
    }

    if (( i > mell[ mellIdx ] ) && ( i <= mell[ mellIdx+1 ] )) {
      //printf("Summing d index %d onto c[%d], (%lf)\n", i, mellIdx, d[i]);
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
  
  for ( i = 0; i < NUM_BANKS ; ++i) {
    printf("%lf\n", c[i]);
  }
  
  free(d);
  d= (double *)calloc( NUM_BANKS , sizeof(double));
  dct_ii(NUM_BANKS, c, d);

  printf("\nDCT Results:\n");
  for ( i = 0; i < NUM_BANKS ; ++i) {
    printf("%lf\n", d[i]);
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
