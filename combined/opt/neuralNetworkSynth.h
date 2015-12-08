#ifndef NEURALNETWORKSYNTH_H
#define NEURALNETWORKSYNTH_H

#include "neuralNetworkConstants.h"
#include "typedefs.h"
void feedForward(float pattern[INPUT_SIZE]);
int guessClassification();
int classifySound(precise_t input[INPUT_ROWS][INPUT_COLS]);

#endif
