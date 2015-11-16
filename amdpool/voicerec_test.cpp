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
//#include "filter.h"

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

  filter_runTests();

  return 0;
}

 void filter_runTests(  void  )
{
  float actual;
  int samplesProcessed;

  filterType *filter = filter_create(); // Create an instance of the filter

  printf( "\n\nRunning tests for: filter\n" );

  printf( "\nimpulse test\n" );
  filter_reset( filter );
  samplesProcessed = filter_filterInChunks( filter, filter_impulseInput, filter_testOutput, 63 );   // Filter the input test signal
  filter_compareResult( filter_testOutput, filter_impulseOutput, samplesProcessed, 0.000001, 0.000001 );  // Compare with the pre-computed output signal

  printf( "\nnoise test\n" );
  filter_reset( filter );
  samplesProcessed = filter_filterInChunks( filter, filter_noiseInput, filter_testOutput, 127 );    // Filter the input test signal
  filter_compareResult( filter_testOutput, filter_noiseOutput, samplesProcessed, 0.000001, 0.000001 );  // Compare with the pre-computed output signal

  printf( "\nmultiSine test\n" );
  filter_reset( filter );
  samplesProcessed = filter_filterInChunks( filter, filter_multiSineInput, filter_testOutput, 126 );    // Filter the input test signal
  filter_compareResult( filter_testOutput, filter_multiSineOutput, samplesProcessed, 0.000001, 0.000001 );  // Compare with the pre-computed output signal

  printf( "\noverflow test\n" );
  filter_reset( filter );
  samplesProcessed = filter_filterInChunks( filter, filter_overflowInput, filter_testOutput, 63 );    // Filter the input test signal
  filter_compareResult( filter_testOutput, filter_overflowOutput, samplesProcessed, 0.000001, 0.000001 ); // Compare with the pre-computed output signal
  actual = filter_outputToFloat( filter_testOutput[62] );

  printf( "Overflow test = (%f). Expected = 1.670. ratio=%f. %s\n",
    actual, actual / 1.670f, actual / 1.670f > 0.95f && actual / 1.670f < 1.05f ? "PASS":"FAIL" );

  filter_destroy( filter );

}
