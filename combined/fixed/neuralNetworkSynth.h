#ifndef NEURALNETWORKSYNTH_H
#define NEURALNETWORKSYNTH_H

#include "neuralNetworkConstants.h"

void feedForward(float pattern[INPUT_SIZE]);
int guessClassification();
int classifySound(double input[INPUT_ROWS][INPUT_COLS]);

#endif
