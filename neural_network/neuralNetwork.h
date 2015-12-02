//#ifndef NEURALNETWORK_H
#define NEURALNETWORK_H

#define learningRate 0.001
#define momentum     0.8
#define maxEpoch     4
#define INPUTSIZE    784
#define HIDDENSIZE    500
#define OUTPUTSIZE    10

typedef struct _NeuralNetwork NeuralNetwork;

// construct the neural network
NeuralNetwork* neuralNetwork(int nInput, int nOutput);

void saveNetwork(NeuralNetwork* neuralNetwork, const char outputfile[]);
NeuralNetwork* loadNetwork(const char inputfile[]);

void feedForward(NeuralNetwork* nn, float pattern[INPUTSIZE]);
int guessClassification(int nOutput, float output[OUTPUTSIZE]);
float getTestAccuracy(NeuralNetwork* nn, float inputs[][INPUTSIZE], int labels[INPUTSIZE], int size);
void trainNetwork(NeuralNetwork* nn, 
                  float inputs[][INPUTSIZE], int labels[INPUTSIZE], int size,
                  float testInputs[][INPUTSIZE], int testLabels[INPUTSIZE], int testSize);

//#endif