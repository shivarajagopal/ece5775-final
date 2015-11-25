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
#include "testSound.h"

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
// Voicerec testbench
//------------------------------------------------------------------------

int main(int argc, char *argv[]) 
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
  double result[NUMRESULTS][(NUM_BANKS/2)+1];
  int i=0, j=0;
  for (i = 0; i < NUMRESULTS ; ++i) {
    for (j = 0; j < (NUM_BANKS/2)+1 ; ++j) {
      result[i][j] = 0.0;
    }
  }
 
  voicerec(NP, inSound, result);
  for (i = 0; i < NUMRESULTS ; ++i) {
    for (j = 0; j < (NUM_BANKS/2)+1 ; ++j) {
      printf("%lf\n", result[i][j]);
    }
  }
  return 0;
}


