//#ifndef NEURALNETWORK_H
#define NEURALNETWORK_H

typedef struct _NeuralNetwork NeuralNetwork;

// construct the neural network
NeuralNetwork* neuralNetwork(int nInput, int nOutput);

void loadWeights(NeuralNetwork* neuralNetwork, const char* inputFile);
void saveWeights(NeuralNetwork* neuralNetwork, const char* outputFile);

void feedForward(NeuralNetwork* nn, float* pattern);
int guessClassification(int nOutput, float* output);
float getTestAccuracy(NeuralNetwork* nn, float* inputs, int* labels, int size);
void trainNetwork(NeuralNetwork* nn, 
                  float* inputs, int* labels, int size,
                  float* testInputs, int* testLabels, int testSize);

//#endif