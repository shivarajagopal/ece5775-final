#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>
#include <iostream>
#include <fstream>
#include <string>

#include "neuralNetwork.h"

typedef struct _NeuralNetwork {
  // neuron values
  float input[INPUTSIZE+1];
  float hidden[HIDDENSIZE+1];
  float output[OUTPUTSIZE];

  // inter-layer weight matrices
  float weightIH[INPUTSIZE+1][HIDDENSIZE];
  float weightHO[HIDDENSIZE+1][OUTPUTSIZE];
  
  // changes to weights for backpropagation
  float deltaIH[INPUTSIZE+1][HIDDENSIZE];
  float deltaHO[HIDDENSIZE+1][OUTPUTSIZE];

  // error gradients for backpropagation
  float hiddenErrorGradients[HIDDENSIZE];
  float outputErrorGradients[OUTPUTSIZE];

  //accuracy stats per epoch
  float trainingSetAccuracy, testSetAccuracy;
} NeuralNetwork;

void initialize(NeuralNetwork* nn);

// construct the neural network
// Important Note:
//  the '+1' in all the malloc's is to include an extra neuron whose
//  value is set to -1. This works to set a bias value to each connection.
//  the _<____+1 in the for loop conditions could be _<=____ instead
NeuralNetwork* neuralNetwork(int nInput, int nOutput) {
  assert(nInput == INPUTSIZE);
  assert(nOutput == OUTPUTSIZE);

  // allocate memory for struct pointer
  NeuralNetwork* nn = new NeuralNetwork;
  initialize(nn);

  // set bounding variables for the initial weights
  float rangeIH = 1/sqrt((float)INPUTSIZE);
  float rangeHO = 1/sqrt((float)HIDDENSIZE); 
  
  // initialize the the IH weights to some constrained random values
  for(int i = 0; i < nInput+1; i++) {   
    for(int j = 0; j < HIDDENSIZE; j++) {
      nn->weightIH[i][j] = (((float)(rand()%100)+1)/100  * 2 * rangeIH) - rangeIH;
    }
  }
  // initialize the the HO weights to some constrained random values
  for(int i = 0; i < HIDDENSIZE+1; i++) {   
    if (i != HIDDENSIZE) nn->hiddenErrorGradients[i] = 0;
    for(int j = 0; j < nOutput; j++) {
      nn->weightHO[i][j] = (((float)(rand()%100)+1)/100  * 2 * rangeHO) - rangeHO;      
    }
  }

  return nn;
}

void initialize(NeuralNetwork* nn) {

  // initialize the the IH weights to some constrained random values
  for(int i = 0; i < INPUTSIZE+1; i++) {   
    nn->input[i] = 0;
    for(int j = 0; j < HIDDENSIZE; j++) {
      nn->deltaIH[i][j] = 0;      
    }
  }
  nn->input[INPUTSIZE] = -1;

  // initialize the the HO weights to some constrained random values
  for(int i = 0; i < HIDDENSIZE+1; i++) {   
    nn->hidden[i] = 0;
    if (i != HIDDENSIZE) {
      nn->hiddenErrorGradients[i] = 0;
    }
    for(int j = 0; j < OUTPUTSIZE; j++) {
      nn->deltaHO[i][j] = 0; 
    }
  }
  nn->hidden[HIDDENSIZE] = -1;

  for (int i=0; i < OUTPUTSIZE; i++) {
    nn->output[i] = 0;
    nn->outputErrorGradients[i] = 0;
  }
}

void feedForward(NeuralNetwork* nn, float pattern[INPUTSIZE]) {
  std::ofstream outfile;
  outfile.open("feedforward.dat", std::ofstream::app);
  // enter pattern value into input neurons
  for (int j = 0; j < INPUTSIZE; j++){
    //outfile << "input[" << j << "] = " << pattern[j] << "\n";
    nn->input[j] = pattern[j];
  }
  for (int j = 0; j < HIDDENSIZE; j++) {
    nn->hidden[j] = 0;
    // sum the inputs times the weights between them and the hidden neurons
    // and then enter them into an activation function: 1/(1+exp(-x))
    for (int k = 0; k < INPUTSIZE+1; k++)
      nn->hidden[j] += nn->input[k] * nn->weightIH[k][j];
    nn->hidden[j] = 1/(1+exp(-1*(nn->hidden[j])));
    //outfile << "hidden[" << j << "] = " << nn->hidden[j] << "\n";
  }

  // enter value generated in the hidden layer to the output neurons
  for (int j = 0; j < OUTPUTSIZE; j++) {
    nn->output[j] = 0;
    // sum the hidden values times the weights between them and the output neurons
    // and then enter them into an activation function: 1/(1+exp(-x))
    for (int k = 0; k < HIDDENSIZE+1; k++)
      nn->output[j] += nn->hidden[k] * nn->weightHO[k][j];
    nn->output[j] = 1/(1+exp(-1*(nn->output[j])));
    //outfile << "output[" << j << "] = " << nn->output[j] << "\n";
  }
  outfile.close();
}

int guessClassification(int nOutput, float output[OUTPUTSIZE]) {
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
float getTestAccuracy(NeuralNetwork* nn, float inputs[][INPUTSIZE], int labels[INPUTSIZE], int size) {
  int incorrectPatterns = 0;

  for (int i = 0; i < size; i++) {
    feedForward(nn, inputs[i]);
    int guess = guessClassification(OUTPUTSIZE, nn->output);
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
                   float inputs[][INPUTSIZE], int labels[INPUTSIZE], int size,
                   float testInputs[][INPUTSIZE], int testLabels[INPUTSIZE], int testSize) {
  int epoch = 0;

  std::ofstream outfile;
  // outfile.open("feedforward.dat");
  // outfile.close();
  // outfile.clear();
  // outfile.open("out.dat");

  while (epoch < maxEpoch) {
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

      for (int j = 0; j < OUTPUTSIZE; j++) {
        float target = labels[i] == j;
        //outfile << "label: " << labels[i] << "     j: " << j << "\n";
        // set error gradient for the output node
        nn->outputErrorGradients[j] = nn->output[j] * (1-nn->output[j]) * (target - nn->output[j]);
        //outfile << "outputErrorGradients[" << j << "]= " << nn->outputErrorGradients[j] << "\n";
        for (int k = 0; k < HIDDENSIZE+1; k++) {
          nn->deltaHO[k][j] = learningRate * nn->hidden[k] * nn->outputErrorGradients[j] + momentum * nn->deltaHO[k][j];
          //outfile << "deltaHO[" << k << "][" << j << "= " << nn->deltaHO[k][j] << "\n";
        }
      }

      for (int j = 0; j < HIDDENSIZE; j++) {
        // set error gradient for the output node based on weightsHO times outputErrorGradients
        float sum = 0;
        for (int k = 0; k < OUTPUTSIZE; k++) sum+= nn->weightHO[j][k] * nn->outputErrorGradients[k];
        nn->hiddenErrorGradients[j] = nn->hidden[j] * (1-nn->hidden[j]) * sum;
        //outfile << "hiddenErrorGradients[" << j << "]= " << nn->hiddenErrorGradients[j] << "\n";
        for (int k = 0; k < INPUTSIZE+1; k++)
          nn->deltaIH[k][j] = learningRate * nn->input[k] * nn->hiddenErrorGradients[j] + momentum * nn->deltaIH[k][j];
      }

      //***************************************************************************************************************
      // update weights
      //***************************************************************************************************************      
      for (int j = 0; j < INPUTSIZE+1; j++) {
        for (int k = 0; k < HIDDENSIZE; k++) {
          nn->weightIH[j][k] += nn->deltaIH[j][k];
        }
      }
      for (int j = 0; j < HIDDENSIZE+1; j++) {
        for (int k = 0; k < OUTPUTSIZE; k++) {
          nn->weightHO[j][k] += nn->deltaHO[j][k];
        }
      }

      //***************************************************************************************************************
      // check if pattern was correctly identified
      //*************************************************************************************************************** 
      int guess = guessClassification(OUTPUTSIZE, nn->output);
      if (guess != labels[i]) incorrectPatterns++;

      // if (i % (size/10) == 0) {
      //   nn->trainingSetAccuracy = 1.0 - (float)incorrectPatterns / (float)size * 10.0;

      //   nn->testSetAccuracy = getTestAccuracy(nn, testInputs, testLabels, testSize);

      //   std::cout << "Epoch :" << epoch << "\n";
      //   std::cout << " Training Set Acc:" << nn->trainingSetAccuracy << "\n";
      //   std::cout << " Test Set Acc:" << nn->testSetAccuracy << "\n";
      //   incorrectPatterns = 0;
      // }
    }

    nn->trainingSetAccuracy = 1.0 - (float)incorrectPatterns / (float)size;

    nn->testSetAccuracy = getTestAccuracy(nn, testInputs, testLabels, testSize);

    std::cout << "Epoch :" << epoch << "\n";
    std::cout << " Training Set Acc:" << nn->trainingSetAccuracy << "\n";
    std::cout << " Test Set Acc:" << nn->testSetAccuracy << "\n";
    
    epoch++;
  }
  //outfile.close();
}

void saveNetwork(NeuralNetwork* nn, const char outputfile[]) {
  std::ofstream savefile(outputfile);

  savefile << INPUTSIZE << "\n";
  savefile << HIDDENSIZE << "\n";
  savefile << OUTPUTSIZE << "\n";

  for (int i = 0; i < INPUTSIZE+1; i++) {
    for (int j = 0; j < HIDDENSIZE; j++) {
      savefile <<  nn->weightIH[i][j] << "\n";
    }
  }
  for (int i = 0; i < HIDDENSIZE+1; i++) {
    for (int j = 0; j < OUTPUTSIZE; j++) {
      savefile << nn->weightHO[i][j] << "\n";
    }
  }

  savefile.close();
}

NeuralNetwork* loadNetwork(const char inputfile[]) {
  std::ifstream loadfile(inputfile);
  std::string line;

  if (!loadfile.is_open())
    return NULL;

  std::getline(loadfile, line);
  int inputSize =  strtol(line.c_str(), NULL, 10);
  assert(INPUTSIZE == inputSize);

  std::getline(loadfile, line);
  int hiddenSize =  strtol(line.c_str(), NULL, 10);
  assert(HIDDENSIZE == hiddenSize);

  std::getline(loadfile, line);
  int outputSize =  strtol(line.c_str(), NULL, 10);
  assert(OUTPUTSIZE == outputSize);

  NeuralNetwork* nn = new NeuralNetwork;
  initialize(nn);

  for (int i = 0; i < INPUTSIZE+1; i++) {
    for (int j = 0; j < HIDDENSIZE; j++) {
      std::getline(loadfile, line);
      nn->weightIH[i][j] = strtof(line.c_str(), NULL);
    }
  }
  for (int i = 0; i < HIDDENSIZE+1; i++) {
    for (int j = 0; j < OUTPUTSIZE; j++) {
      std::getline(loadfile, line);
      nn->weightHO[i][j] = strtof(line.c_str(), NULL);
    }
  }

  return nn;
}
