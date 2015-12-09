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
#include "test_forward2.h"
#include "test_backup.h"
#include "test_reverse.h"
#include "test_reverse2.h"
#include "test_right2.h"
#include "test_left2.h"
#include "test_left3.h"
#include "leftTest.h"
#include "rightTest.h"
#include "forwardTest.h"
#include "neuralNetworkSynth.h"

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
  int classification;

  // Number of test instances
  const int N = 180;
  
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
#ifdef GENTRAIN
  //voicerec(inSound);
  voicerec(forward21);
#endif
#ifdef TEST 
  //classification = voicerec(backup1);
  std::cout << "should be 0 ****************" << "\n";
  classification = classifySound(forwardTest1);
  classification = classifySound(forwardTest2);
  classification = classifySound(forwardTest3);
  classification = classifySound(forwardTest4);
  classification = classifySound(forwardTest5);
  classification = voicerec(forward21);
  classification = voicerec(forward22);
  classification = voicerec(forward23);
  classification = voicerec(forward24);
  classification = voicerec(forward25);

  std::cout << "should be 1 ****************" << "\n";
  classification = classifySound(rightTest1);
  classification = classifySound(rightTest2);
  classification = classifySound(rightTest3);
  classification = classifySound(rightTest4);
  classification = classifySound(rightTest5);
  classification = voicerec(right21);
  classification = voicerec(right22);
  classification = voicerec(right23);
  classification = voicerec(right24);
  classification = voicerec(right25);

  std::cout << "should be 2 ****************" << "\n";
  classification = classifySound(leftTest1);
  classification = classifySound(leftTest2);
  classification = classifySound(leftTest3);
  classification = classifySound(leftTest4);
  classification = classifySound(leftTest5);
  classification = voicerec(left21);
  classification = voicerec(left22);
  classification = voicerec(left23);
  classification = voicerec(left24);
  classification = voicerec(left25);
  classification = voicerec(left31);
  classification = voicerec(left32);
  classification = voicerec(left33);
  classification = voicerec(left34);
  classification = voicerec(left35);

  std::cout << "should be 3 ****************" << "\n";
  classification = voicerec(reverse1);
  classification = voicerec(reverse2);
  classification = voicerec(reverse3);
  classification = voicerec(reverse4);
  classification = voicerec(reverse5);
  classification = voicerec(reverse21);
  classification = voicerec(reverse22);
  classification = voicerec(reverse23);
  classification = voicerec(reverse24);
  classification = voicerec(reverse25);

  //classification = classifySound(nn, result);
  //std::cout << "classification: " << classification << "\n";
#endif
  return 0;
}


