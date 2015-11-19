//=========================================================================
// testbench.cpp
//=========================================================================
// @brief: testbench for k-nearest-neighbor digit recongnition application

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>

#include "voicerec.h"
#include "timer.h"
#include "filter.h"

//------------------------------------------------------------------------
// Helper function for hex to int conversion
//------------------------------------------------------------------------
int64_t hexstring_to_int64 (std::string h) {
  int64_t x = 0;
  for (int i = 0; i < h.length(); ++i) {
    char c = h[i];
    int i = (c > '9') ? toupper(c)-'A'+10 : c - '0';
    x = x*16 + i;
  }
  return x;
}
float filter_testOutput[127];
#define NUM_BANKS 26
//------------------------------------------------------------------------
// Digitrec testbench
//------------------------------------------------------------------------
int main() 
{
  // Output file that saves the test bench results
  std::ofstream outfile;
  outfile.open("out.dat");
  // HLS streams for communicating with the cordic block
  hls::stream<bit32_t> digitrec_in;
  hls::stream<bit32_t> digitrec_out;

  // Number of test instances
  const int N = 180;
  
  // Arrays to store test data and expected results
  digit inputs[N];
  int   expecteds[N];

  // Timer
  Timer timer("voicerec FPGA");
  
  int nbytes;
  int error = 0;
  int num_test_insts = 0;
  bit32_t interpreted_digit;

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
}


