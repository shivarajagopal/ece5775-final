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
// Voicerec testbench
//------------------------------------------------------------------------

int main(int argc, char *argv[]) 
{
  int classification, i;

  // Number of test instances
  const int N = 20;
  
  // Timer
  Timer timer("voicerec");
  
  timer.start();
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

  std::cout << "should be 3 ****************" << "\n";
  for (i = 0; i < 16000; i++) classification = voicerec(&reverse1[i]);
  for (i = 0; i < 16000; i++) classification = voicerec(&reverse2[i]);
  for (i = 0; i < 16000; i++) classification = voicerec(&reverse3[i]);
  for (i = 0; i < 16000; i++) classification = voicerec(&reverse4[i]);
  for (i = 0; i < 16000; i++) classification = voicerec(&reverse5[i]);

  timer.stop();

  //classification = classifySound(nn, result);
  //std::cout << "classification: " << classification << "\n";
  return 0;
}


