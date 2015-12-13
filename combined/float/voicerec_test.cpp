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
  float result[NUMRESULTS][(NUM_BANKS/2)+1];
  int i=0, j=0;
  for (i = 0; i < NUMRESULTS ; ++i) {
    for (j = 0; j < (NUM_BANKS/2)+1 ; ++j) {
      result[i][j] = 0.0;
    }
  }
  //classification = voicerec(backup1);
  std::cout << "should be 0 ****************" << "\n";
  for (i = 0; i < 16000; i++) classification = voicerec(&forward21[i]);
  for (i = 0; i < 16000; i++) classification = voicerec(&forward22[i]);
  for (i = 0; i < 16000; i++) classification = voicerec(&forward23[i]);
  for (i = 0; i < 16000; i++) classification = voicerec(&forward24[i]);
  for (i = 0; i < 16000; i++) classification = voicerec(&forward25[i]);

  std::cout << "should be 1 ****************" << "\n";
  for (i = 0; i < 16000; i++) classification = voicerec(&right21[i]);
  for (i = 0; i < 16000; i++) classification = voicerec(&right22[i]);
  for (i = 0; i < 16000; i++) classification = voicerec(&right23[i]);
  for (i = 0; i < 16000; i++) classification = voicerec(&right24[i]);
  for (i = 0; i < 16000; i++) classification = voicerec(&right25[i]);

  std::cout << "should be 2 ****************" << "\n";
  for (i = 0; i < 16000; i++) classification = voicerec(&left21[i]);
  for (i = 0; i < 16000; i++) classification = voicerec(&left22[i]);
  for (i = 0; i < 16000; i++) classification = voicerec(&left23[i]);
  for (i = 0; i < 16000; i++) classification = voicerec(&left24[i]);
  for (i = 0; i < 16000; i++) classification = voicerec(&left25[i]);
  for (i = 0; i < 16000; i++) classification = voicerec(&left31[i]);
  for (i = 0; i < 16000; i++) classification = voicerec(&left32[i]);
  for (i = 0; i < 16000; i++) classification = voicerec(&left33[i]);
  for (i = 0; i < 16000; i++) classification = voicerec(&left34[i]);
  for (i = 0; i < 16000; i++) classification = voicerec(&left35[i]);

  std::cout << "should be 3 ****************" << "\n";
  for (i = 0; i < 16000; i++) classification = voicerec(&reverse1[i]);
  for (i = 0; i < 16000; i++) classification = voicerec(&reverse2[i]);
  for (i = 0; i < 16000; i++) classification = voicerec(&reverse3[i]);
  for (i = 0; i < 16000; i++) classification = voicerec(&reverse4[i]);
  for (i = 0; i < 16000; i++) classification = voicerec(&reverse5[i]);
  for (i = 0; i < 16000; i++) classification = voicerec(&reverse21[i]);
  for (i = 0; i < 16000; i++) classification = voicerec(&reverse22[i]);
  for (i = 0; i < 16000; i++) classification = voicerec(&reverse23[i]);
  for (i = 0; i < 16000; i++) classification = voicerec(&reverse24[i]);
  for (i = 0; i < 16000; i++) classification = voicerec(&reverse25[i]);

  //classification = classifySound(nn, result);
  //std::cout << "classification: " << classification << "\n";
  return 0;
}


