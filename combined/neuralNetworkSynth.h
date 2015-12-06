#ifndef NEURALNETWORKSYNTH_H
#define NEURALNETWORKSYNTH_H

#include "neuralNetworkConstants.h"
#include "speech_weights.h"

float input[INPUT_SIZE+1];
float hidden[HIDDEN_SIZE+1];
float output[OUTPUT_SIZE];

void feedForward(float pattern[INPUT_SIZE]);
int guessClassification();
int classifySound(double input[INPUT_ROWS][INPUT_COLS]);

#endif
