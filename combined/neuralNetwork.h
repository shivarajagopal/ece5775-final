#ifndef NEURALNETWORK_H
#define NEURALNETWORK_H

#include "neuralNetworkConstants.h"

typedef struct _NeuralNetwork NeuralNetwork;

// construct the neural network
NeuralNetwork* neuralNetwork();

void saveNetwork(NeuralNetwork* nn, const char outputfile[]);
void saveNetworkHeaderFile(NeuralNetwork* nn, const char outputfile[]);
NeuralNetwork* loadNetwork(const char inputfile[]);

void feedForward(NeuralNetwork* nn, float pattern[INPUT_SIZE]);
int guessClassification(float output[OUTPUT_SIZE]);
float getTestAccuracy(NeuralNetwork* nn, float inputs[][INPUT_SIZE], int labels[INPUT_SIZE], int size);
int classifySound(NeuralNetwork* nn, double input[63][14]);
void trainNetwork(NeuralNetwork* nn, 
                  float inputs[][INPUT_SIZE], int labels[INPUT_SIZE], int size,
                  float testInputs[][INPUT_SIZE], int testLabels[INPUT_SIZE], int testSize);

#endif
