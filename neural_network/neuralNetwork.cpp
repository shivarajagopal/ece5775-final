#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <fstream>
#include <string>

#define learningRate 0.005
#define momentum     0.9
#define maxEpoch     150
//#define desiredAccuracy

typedef struct _NeuralNetwork {
  // sizes of each layer
  int nInput, nHidden, nOutput;

  // neuron values
  float* input;
  float* hidden;
  float* output;

  // inter-layer weight matrices
  float** weightIH;
  float** weightHO;
  
  // changes to weights for backpropagation
  float** deltaIH;
  float** deltaHO;

  // error gradients for backpropagation
  float* hiddenErrorGradients;
  float* outputErrorGradients;

  //accuracy stats per epoch
  float trainingSetAccuracy, testSetAccuracy;
} NeuralNetwork;

// construct the neural network
// Important Note:
//  the '+1' in all the malloc's is to include an extra neuron whose
//  value is set to -1. This works to set a bias value to each connection.
//  the _<____+1 in the for loop conditions could be _<=____ instead
NeuralNetwork* neuralNetwork(int nInput, int nHidden, int nOutput) {
  // set bounding variables for the initial weights
  float rangeIH = 1/sqrt((float)nInput);
  float rangeHO = 1/sqrt((float)nHidden); 

  // allocate memory for struct pointer
  NeuralNetwork* nn = (NeuralNetwork*) malloc(sizeof(NeuralNetwork));

  // set layer sizes
  nn->nInput = nInput;
  nn->nHidden = nHidden;
  nn->nOutput = nOutput;
  
  // allocate memory for neuron values and error gradients
  nn->input =  (float*) malloc((nInput+1) * sizeof(float));
  nn->hidden = (float*) malloc((nHidden+1) * sizeof(float));
  nn->hiddenErrorGradients = (float*) malloc((nHidden+1) * sizeof(float));
  nn->output = (float*) malloc(nOutput * sizeof(float));
  nn->outputErrorGradients = (float*) malloc(nOutput * sizeof(float));
  
  // allocate memory for 2-D IH weight arrays and intialize the input biases to 0
  // also initialize the the IH weights to some constrained random values
  nn->weightIH = (float**) malloc((nInput+1) * sizeof(float*));
  nn->deltaIH = (float**) malloc((nInput+1) * sizeof(float*));
  for(int i = 0; i < nInput+1; i++) {   
    nn->input[i] = 0;
    nn->weightIH[i] = (float*) malloc(nHidden * sizeof(float));
    nn->deltaIH[i] = (float*) malloc(nHidden * sizeof(float));
    for(int j = 0; j < nHidden; j++) {
      nn->weightIH[i][j] = (((float)(rand()%100)+1)/100  * 2 * rangeIH) - rangeIH;
      nn->deltaIH[i][j] = 0;      
    }
  }
  nn->input[nInput] = -1;

  // allocate memory for 2-D HO weight arrays and intialize the output biases to 0
  // also initialize the the HO weights to some constrained random values
  nn->weightHO = (float**) malloc((nHidden+1) * sizeof(float*));
  nn->deltaHO = (float**) malloc((nHidden+1) * sizeof(float*));
  for(int i = 0; i < nHidden+1; i++) {   
    nn->hidden[i] = 0;
    nn->hiddenErrorGradients[i] = 0;
    nn->weightHO[i] = (float*) malloc(nOutput * sizeof(float));
    nn->deltaHO[i] = (float*) malloc(nOutput * sizeof(float));
    for(int j = 0; j < nOutput; j++) {
      nn->weightHO[i][j] = (((float)(rand()%100)+1)/100  * 2 * rangeHO) - rangeHO;      
      nn->deltaHO[i][j] = 0; 
    }
  }
  nn->hidden[nHidden] = -1;

  for (int i=0; i < nOutput; i++) {
    nn->output[i] = 0;
    
    // TODO: Size of this array???????????????????????
    nn->outputErrorGradients[i] = 0;
  }

  return nn;
}

void destroyNeuralNetwork(NeuralNetwork* nn) {
  free(nn->input);
  free(nn->hidden);
  free(nn->hiddenErrorGradients);
  free(nn->output);
  free(nn->outputErrorGradients);
  for(int i = 0; i < nn->nInput+1; i++) {   
    free(nn->weightIH[i]);
    free(nn->deltaIH[i]);
  }
  free(nn->weightIH);
  free(nn->deltaIH);
  for(int i = 0; i < nn->nHidden+1; i++) {   
    free(nn->weightHO[i]);
    free(nn->deltaHO[i]);    
  }
  free(nn->weightHO);
  free(nn->deltaHO);
  free(nn);
}

void loadWeights(NeuralNetwork* neuralNetwork, const char* inputFile) {
  // TODO: Implement a loading function
}
void saveWeights(NeuralNetwork* neuralNetwork, const char* outputFile) {
  // TODO: Implement a saving function
}

void feedForward(NeuralNetwork* nn, float* pattern) {
  std::ofstream outfile;
  outfile.open("feedforward.dat", std::ofstream::app);
  // enter pattern value into input neurons
  for (int j = 0; j < nn->nInput; j++){
    //outfile << "input[" << j << "] = " << pattern[j] << "\n";
    nn->input[j] = pattern[j];
  }
  for (int j = 0; j < nn->nHidden; j++) {
    nn->hidden[j] = 0;
    // sum the inputs times the weights between them and the hidden neurons
    // and then enter them into an activation function: 1/(1+exp(-x))
    for (int k = 0; k < nn->nInput+1; k++)
      nn->hidden[j] += nn->input[k] * nn->weightIH[k][j];
    nn->hidden[j] = 1/(1+exp(-1*(nn->hidden[j])));
    //outfile << "hidden[" << j << "] = " << nn->hidden[j] << "\n";
  }

  // enter value generated in the hidden layer to the output neurons
  for (int j = 0; j < nn->nOutput; j++) {
    nn->output[j] = 0;
    // sum the hidden values times the weights between them and the output neurons
    // and then enter them into an activation function: 1/(1+exp(-x))
    for (int k = 0; k < nn->nHidden+1; k++)
      nn->output[j] += nn->hidden[k] * nn->weightHO[k][j];
    nn->output[j] = 1/(1+exp(-1*(nn->output[j])));
    //outfile << "output[" << j << "] = " << nn->output[j] << "\n";
  }
  outfile.close();
}

int guessClassification(int nOutput, float* output) {
  float max = 0;
  int guess;
  for (int j = 0; j < nOutput; j++) {
    if (output[j] > max) {
      guess = j;
      max = output[j];
    }
  }
  return guess;
}

// get the classification accuracy of the provided data set
// PRECONDITIONS:
//   * each individual input MUST be composed of nInput values
//   * inputs and labels MUST BOTH have 'size' number of elements
float getTestAccuracy(NeuralNetwork* nn, float** inputs, int* labels, int size) {
  int incorrectPatterns = 0;

  for (int i = 0; i < size; i++) {
    feedForward(nn, inputs[i]);
    int guess = guessClassification(nn->nOutput, nn->output);
    if (guess != labels[i]) incorrectPatterns++;
  }
  return 1.0 - (float)incorrectPatterns / (float)size;
}

// train the network 
// note: the _<____+1 in the for loop conditions could be _<=____ instead
// PRECONDITIONS:
//   * each individual input MUST be composed of nInput values
//   * inputs and labels MUST BOTH have 'size' number of elements
void trainNetwork( NeuralNetwork* nn, 
                   float** inputs, int* labels, int size,
                   float** testInputs, int* testLabels, int testSize) {
  int epoch = 0;
  float* input = nn->input;
  float* hidden = nn->hidden;
  float* output = nn->output;
  float** weightIH = nn->weightIH;
  float** weightHO = nn->weightHO;

  std::ofstream outfile;
  outfile.open("feedforward.dat");
  outfile.close();
  outfile.clear();
  outfile.open("out.dat");

  while (epoch < maxEpoch) {
    outfile << "Epoch " << epoch << "\n";
    int incorrectPatterns = 0;

    for (int i = 0; i < size; i++) {

      //***************************************************************************************************************
      // Feedforward training input
      //***************************************************************************************************************

      feedForward(nn, inputs[i]);

      //***************************************************************************************************************
      // backpropagate errors
      // note: can this be improved with the calculation of error gradients?
      //***************************************************************************************************************

      for (int j = 0; j < nn->nOutput; j++) {
        float target = labels[i] == j;
        outfile << "label: " << labels[i] << "     j: " << j << "\n";
        // set error gradient for the output node
        nn->outputErrorGradients[j] = output[j] * (1-output[j]) * (target - output[j]);
        //outfile << "outputErrorGradients[" << j << "]= " << nn->outputErrorGradients[j] << "\n";
        for (int k = 0; k < nn->nHidden+1; k++) {
          nn->deltaHO[k][j] = learningRate * hidden[k] * nn->outputErrorGradients[j] + momentum * nn->deltaHO[k][j];
          //outfile << "deltaHO[" << k << "][" << j << "= " << nn->deltaHO[k][j] << "\n";
        }
      }

      for (int j = 0; j < nn->nHidden; j++) {
        // set error gradient for the output node based on weightsHO times outputErrorGradients
        float sum = 0;
        for (int k = 0; k < nn->nOutput; k++) sum+= weightHO[j][k] * nn->outputErrorGradients[k];
        nn->hiddenErrorGradients[j] = hidden[j] * (1-hidden[j]) * sum;
        //outfile << "hiddenErrorGradients[" << j << "]= " << nn->hiddenErrorGradients[j] << "\n";
        for (int k = 0; k < nn->nInput+1; k++)
          nn->deltaIH[k][j] = learningRate * input[k] * nn->hiddenErrorGradients[j] + momentum * nn->deltaIH[k][j];
      }

      //***************************************************************************************************************
      // update weights
      //***************************************************************************************************************      
      for (int j = 0; j < nn->nInput+1; j++) {
        for (int k = 0; k < nn->nHidden; k++) {
          weightIH[j][k] += nn->deltaIH[j][k];
        }
      }
      for (int j = 0; j < nn->nHidden+1; j++) {
        for (int k = 0; k < nn->nOutput; k++) {
          weightHO[j][k] += nn->deltaHO[j][k];
        }
      }

      //***************************************************************************************************************
      // check if pattern was correctly identified
      //*************************************************************************************************************** 
      int guess = guessClassification(nn->nOutput, output);
      if (guess != labels[i]) incorrectPatterns++;

      if (i % (size/10) == 0) {
        nn->trainingSetAccuracy = 1.0 - (float)incorrectPatterns / (float)size * 10.0;

        nn->testSetAccuracy = getTestAccuracy(nn, testInputs, testLabels, testSize);

        std::cout << "Epoch :" << epoch << "\n";
        std::cout << " Training Set Acc:" << nn->trainingSetAccuracy << "\n";
        std::cout << " Test Set Acc:" << nn->testSetAccuracy << "\n";
        incorrectPatterns = 0;
      }
    }
    

    epoch++;
  }
  outfile.close();
}



























