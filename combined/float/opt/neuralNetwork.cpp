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
  float input[INPUT_SIZE+1];
  float hidden[HIDDEN_SIZE+1];
  float output[OUTPUT_SIZE];

  // inter-layer weight matrices
  float weightIH[INPUT_SIZE+1][HIDDEN_SIZE];
  float weightHO[HIDDEN_SIZE+1][OUTPUT_SIZE];
  
  // changes to weights for backpropagation
  float deltaIH[INPUT_SIZE+1][HIDDEN_SIZE];
  float deltaHO[HIDDEN_SIZE+1][OUTPUT_SIZE];

  // error gradients for backpropagation
  float hiddenErrorGradients[HIDDEN_SIZE];
  float outputErrorGradients[OUTPUT_SIZE];

  //accuracy stats per epoch
  float trainingSetAccuracy, testSetAccuracy;
} NeuralNetwork;

void initialize(NeuralNetwork* nn);

// construct the neural network
// Important Note:
//  the '+1' in all the malloc's is to include an extra neuron whose
//  value is set to -1. This works to set a bias value to each connection.
//  the _<____+1 in the for loop conditions could be _<=____ instead
NeuralNetwork* neuralNetwork() {

  // allocate memory for struct pointer
  NeuralNetwork* nn = new NeuralNetwork;
  initialize(nn);

  // set bounding variables for the initial weights
  float rangeIH = 1/sqrt((float)INPUT_SIZE);
  float rangeHO = 1/sqrt((float)HIDDEN_SIZE); 
  
  // initialize the the IH weights to some constrained random values
  for(int i = 0; i < INPUT_SIZE+1; i++) {   
    for(int j = 0; j < HIDDEN_SIZE; j++) {
      nn->weightIH[i][j] = (((float)(rand()%100)+1)/100  * 2 * rangeIH) - rangeIH;
    }
  }
  // initialize the the HO weights to some constrained random values
  for(int i = 0; i < HIDDEN_SIZE+1; i++) {   
    if (i != HIDDEN_SIZE) nn->hiddenErrorGradients[i] = 0;
    for(int j = 0; j < OUTPUT_SIZE; j++) {
      nn->weightHO[i][j] = (((float)(rand()%100)+1)/100  * 2 * rangeHO) - rangeHO;      
    }
  }

  return nn;
}

void initialize(NeuralNetwork* nn) {

  // initialize the the IH weights to some constrained random values
  for(int i = 0; i < INPUT_SIZE+1; i++) {   
    nn->input[i] = 0;
    for(int j = 0; j < HIDDEN_SIZE; j++) {
      nn->deltaIH[i][j] = 0;      
    }
  }
  nn->input[INPUT_SIZE] = -1;

  // initialize the the HO weights to some constrained random values
  for(int i = 0; i < HIDDEN_SIZE+1; i++) {   
    nn->hidden[i] = 0;
    if (i != HIDDEN_SIZE) {
      nn->hiddenErrorGradients[i] = 0;
    }
    for(int j = 0; j < OUTPUT_SIZE; j++) {
      nn->deltaHO[i][j] = 0; 
    }
  }
  nn->hidden[HIDDEN_SIZE] = -1;

  for (int i=0; i < OUTPUT_SIZE; i++) {
    nn->output[i] = 0;
    nn->outputErrorGradients[i] = 0;
  }
}

void feedForward(NeuralNetwork* nn, float pattern[INPUT_SIZE]) {
  // std::ofstream outfile;
  // outfile.open("feedforward.dat", std::ofstream::app);
  // enter pattern value into input neurons
  for (int j = 0; j < INPUT_SIZE; j++){
    //outfile << "input[" << j << "] = " << pattern[j] << "\n";
    nn->input[j] = pattern[j];
  }
  for (int j = 0; j < HIDDEN_SIZE; j++) {
    nn->hidden[j] = 0;
    // sum the inputs times the weights between them and the hidden neurons
    // and then enter them into an activation function: 1/(1+exp(-x))
    for (int k = 0; k < INPUT_SIZE+1; k++)
      nn->hidden[j] += nn->input[k] * nn->weightIH[k][j];
    //outfile << "hidden[" << j << "] = " << nn->hidden[j] << "\n";
    nn->hidden[j] = 1/(1+exp(-1*(nn->hidden[j])));
    //outfile << "hidden[" << j << "] = " << nn->hidden[j] << "\n";
  }

  // enter value generated in the hidden layer to the output neurons
  for (int j = 0; j < OUTPUT_SIZE; j++) {
    nn->output[j] = 0;
    // sum the hidden values times the weights between them and the output neurons
    // and then enter them into an activation function: 1/(1+exp(-x))
    for (int k = 0; k < HIDDEN_SIZE+1; k++)
      nn->output[j] += nn->hidden[k] * nn->weightHO[k][j];
    nn->output[j] = 1/(1+exp(-1*(nn->output[j])));
    //outfile << "output[" << j << "] = " << nn->output[j] << "\n";
  }
  //outfile.close();
}

int guessClassification(float output[OUTPUT_SIZE]) {
  float max = 0;
  int guess;
  for (int j = 0; j < OUTPUT_SIZE; j++) {
    //std::cout << "output: " << j << " = " << output[j] << "\n";
    if (output[j] > max) {
      guess = j;
      max = output[j];
    }
  }
  return guess;
}

// get the classification accuracy of the provided data set
// PRECONDITIONS:
//   * each individual input MUST be composed of INPUT_SIZE values
//   * inputs and labels MUST BOTH have 'size' number of elements
float getTestAccuracy(NeuralNetwork* nn, float inputs[][INPUT_SIZE], int labels[INPUT_SIZE], int size) {
  int incorrectPatterns = 0;

  for (int i = 0; i < size; i++) {
    feedForward(nn, inputs[i]);
    int guess = guessClassification(nn->output);
    if (guess != labels[i]) incorrectPatterns++;
  }
  return 1.0 - (float)incorrectPatterns / (float)size;
}

int classifySound(NeuralNetwork* nn, float input[63][14]) {
  int guess;
  float flatInput[INPUT_SIZE];
  for (int i = 0; i < 63; i++) {
    for (int j = 0; j < 14; j++) {
      flatInput[i*14 + j] = (float)(input[i][j]);
    }
  }

  feedForward(nn, flatInput);
  return guessClassification(nn->output);
}

// train the network 
// note: the _<____+1 in the for loop conditions could be _<=____ instead
// PRECONDITIONS:
//   * each individual input MUST be composed of INPUT_SIZE values
//   * inputs and labels MUST BOTH have 'size' number of elements
void trainNetwork( NeuralNetwork* nn, 
                   float inputs[][INPUT_SIZE], int labels[INPUT_SIZE], int size,
                   float testInputs[][INPUT_SIZE], int testLabels[INPUT_SIZE], int testSize) {
  int epoch = 0;
  int done_training = 0;

  std::ofstream outfile;
  // outfile.open("feedforward.dat");
  // outfile.close();
  // outfile.clear();
  // outfile.open("out.dat");

  while (!done_training && epoch < maxEpoch) {
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

      for (int j = 0; j < OUTPUT_SIZE; j++) {
        float target = labels[i] == j;
        //outfile << "label: " << labels[i] << "     j: " << j << "\n";
        // set error gradient for the output node
        nn->outputErrorGradients[j] = nn->output[j] * (1-nn->output[j]) * (target - nn->output[j]);
        //outfile << "outputErrorGradients[" << j << "]= " << nn->outputErrorGradients[j] << "\n";
        for (int k = 0; k < HIDDEN_SIZE+1; k++) {
          nn->deltaHO[k][j] = learningRate * nn->hidden[k] * nn->outputErrorGradients[j] + momentum * nn->deltaHO[k][j];
          //outfile << "deltaHO[" << k << "][" << j << "= " << nn->deltaHO[k][j] << "\n";
        }
      }

      for (int j = 0; j < HIDDEN_SIZE; j++) {
        // set error gradient for the output node based on weightsHO times outputErrorGradients
        float sum = 0;
        for (int k = 0; k < OUTPUT_SIZE; k++) sum+= nn->weightHO[j][k] * nn->outputErrorGradients[k];
        nn->hiddenErrorGradients[j] = nn->hidden[j] * (1-nn->hidden[j]) * sum;
        //outfile << "hiddenErrorGradients[" << j << "]= " << nn->hiddenErrorGradients[j] << "\n";
        for (int k = 0; k < INPUT_SIZE+1; k++)
          nn->deltaIH[k][j] = learningRate * nn->input[k] * nn->hiddenErrorGradients[j] + momentum * nn->deltaIH[k][j];
      }

      //***************************************************************************************************************
      // update weights
      //***************************************************************************************************************      
      for (int j = 0; j < INPUT_SIZE+1; j++) {
        for (int k = 0; k < HIDDEN_SIZE; k++) {
          nn->weightIH[j][k] += nn->deltaIH[j][k];
        }
      }
      for (int j = 0; j < HIDDEN_SIZE+1; j++) {
        for (int k = 0; k < OUTPUT_SIZE; k++) {
          nn->weightHO[j][k] += nn->deltaHO[j][k];
        }
      }

      //***************************************************************************************************************
      // check if pattern was correctly identified
      //*************************************************************************************************************** 
      int guess = guessClassification(nn->output);
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
    done_training = (nn->trainingSetAccuracy + nn->testSetAccuracy >= DESIRED_ACCURACY*2);
  }
  //outfile.close();
}

void saveNetwork(NeuralNetwork* nn, const char outputfile[]) {
  std::ofstream savefile(outputfile);

  savefile << INPUT_SIZE << "\n";
  savefile << HIDDEN_SIZE << "\n";
  savefile << OUTPUT_SIZE << "\n";

  for (int i = 0; i < INPUT_SIZE+1; i++) {
    for (int j = 0; j < HIDDEN_SIZE; j++) {
      savefile <<  nn->weightIH[i][j] << "\n";
    }
  }
  for (int i = 0; i < HIDDEN_SIZE+1; i++) {
    for (int j = 0; j < OUTPUT_SIZE; j++) {
      savefile << nn->weightHO[i][j] << "\n";
    }
  }

  savefile.close();
}

void saveNetworkHeaderFile(NeuralNetwork* nn, const char outputfile[]) {
  std::ofstream savefile(outputfile);

  savefile << "float weightIH[" << INPUT_SIZE+1 << "][" << HIDDEN_SIZE << "] = {\n";
  for (int i = 0; i < INPUT_SIZE; i++) {
    savefile << "\t{";
    for (int j = 0; j < HIDDEN_SIZE-1; j++) {
      savefile <<  nn->weightIH[i][j] << ", ";
    }
    savefile << nn->weightIH[i][HIDDEN_SIZE-1] << "},\n";
  }
  savefile << "\t{";
  for (int j = 0; j < HIDDEN_SIZE-1; j++) {
    savefile <<  nn->weightIH[INPUT_SIZE][j] << ", ";
  }
  savefile << nn->weightIH[INPUT_SIZE][HIDDEN_SIZE-1] << "}\n};\n\n";


  savefile << "float weightHO[" << HIDDEN_SIZE+1 << "][" << OUTPUT_SIZE << "] = {\n";
  for (int i = 0; i < HIDDEN_SIZE; i++) {
    savefile << "\t{";
    for (int j = 0; j < OUTPUT_SIZE-1; j++) {
      savefile << nn->weightHO[i][j] << ", ";
    }
    savefile << nn->weightHO[i][OUTPUT_SIZE-1] << "},\n";
  }
  savefile << "\t{";
  for (int j = 0; j < OUTPUT_SIZE-1; j++) {
    savefile <<  nn->weightHO[HIDDEN_SIZE][j] << ", ";
  }
  savefile << nn->weightHO[HIDDEN_SIZE][OUTPUT_SIZE-1] << "}\n};\n\n";

  savefile.close();
}

NeuralNetwork* loadNetwork(const char inputfile[]) {
  std::ifstream loadfile(inputfile);
  std::string line;

  if (!loadfile.is_open())
    return NULL;

  std::getline(loadfile, line);
  int inputSize =  strtol(line.c_str(), NULL, 10);
  assert(INPUT_SIZE == inputSize);

  std::getline(loadfile, line);
  int hiddenSize =  strtol(line.c_str(), NULL, 10);
  assert(HIDDEN_SIZE == hiddenSize);

  std::getline(loadfile, line);
  int outputSize =  strtol(line.c_str(), NULL, 10);
  assert(OUTPUT_SIZE == outputSize);

  NeuralNetwork* nn = new NeuralNetwork;
  initialize(nn);

  for (int i = 0; i < INPUT_SIZE+1; i++) {
    for (int j = 0; j < HIDDEN_SIZE; j++) {
      std::getline(loadfile, line);
      nn->weightIH[i][j] = strtof(line.c_str(), NULL);
    }
  }
  for (int i = 0; i < HIDDEN_SIZE+1; i++) {
    for (int j = 0; j < OUTPUT_SIZE; j++) {
      std::getline(loadfile, line);
      nn->weightHO[i][j] = strtof(line.c_str(), NULL);
    }
  }

  return nn;
}
