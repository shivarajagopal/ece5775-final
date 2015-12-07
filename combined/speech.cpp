/**********************************************************************************************************************
* A testbench for the digit set provided to us for the knn digitrec lab
**********************************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>
#include <assert.h>

#include "neuralNetwork.h"

#define TRAINING_SIZE 180
#define TESTING_SIZE 20
#define TRAINING_CYCLES 100

#define FORWARD 0
#define RIGHT 1
#define LEFT 2
#define BACK 3

#define LOADNETWORK 1

int main() {

  // input file stream
  std::string line;
  std::ifstream myfile;

  NeuralNetwork* nn;
  srand((unsigned int)time(0));

  int training_label[TRAINING_SIZE];
  float training_data[TRAINING_SIZE][INPUT_SIZE];

  int testing_label[TESTING_SIZE];
  float testing_data[TESTING_SIZE][INPUT_SIZE];

  char inputfile[23];

  /********************************************************************************************************************
  * Load the FORWARD input data
  ********************************************************************************************************************/

  myfile.open("data/forward.dat");

  for (int i = 0; i < TRAINING_SIZE/4; i++) {
    for (int j = 0; j < INPUT_SIZE; j++) {
      std::getline(myfile, line);
      training_data[i][j] =  strtof(line.c_str(), NULL);
    }
    training_label[i] = FORWARD;
  }
  for (int i = 0; i < TESTING_SIZE/4; i++) {
    for (int j = 0; j < INPUT_SIZE; j++) {
      std::getline(myfile, line);
      testing_data[i][j] =  strtof(line.c_str(), NULL);
    }
    testing_label[i] = FORWARD;
  }

  myfile.close();
  myfile.clear();

  /********************************************************************************************************************
  * Load the RIGHT input data
  ********************************************************************************************************************/

  myfile.open("data/right.dat");

  for (int i = TRAINING_SIZE/4; i < 2*TRAINING_SIZE/4; i++) {
    for (int j = 0; j < INPUT_SIZE; j++) {
      std::getline(myfile, line);
      training_data[i][j] =  strtof(line.c_str(), NULL);
    }
    training_label[i] = RIGHT;
  }
  for (int i = TESTING_SIZE/4; i < 2*TESTING_SIZE/4; i++) {
    for (int j = 0; j < INPUT_SIZE; j++) {
      std::getline(myfile, line);
      testing_data[i][j] =  strtof(line.c_str(), NULL);
    }
    testing_label[i] = RIGHT;
  }

  myfile.close();
  myfile.clear();

  /********************************************************************************************************************
  * Load the BACK data
  ********************************************************************************************************************/

  myfile.open("data/back.dat");

  for (int i = 2*TRAINING_SIZE/4; i < 3*TRAINING_SIZE/4; i++) {
    for (int j = 0; j < INPUT_SIZE; j++) {
      std::getline(myfile, line);
      training_data[i][j] =  strtof(line.c_str(), NULL);
    }
    training_label[i] = BACK;
  }
  for (int i = 2*TESTING_SIZE/4; i < 3*TESTING_SIZE/4; i++) {
    for (int j = 0; j < INPUT_SIZE; j++) {
      std::getline(myfile, line);
      testing_data[i][j] =  strtof(line.c_str(), NULL);
    }
    testing_label[i] = BACK;
  }

  myfile.close();
  myfile.clear();

  /********************************************************************************************************************
  * Load the LEFT data
  ********************************************************************************************************************/

  myfile.open("data/left.dat");

  for (int i = 3*TRAINING_SIZE/4; i < TRAINING_SIZE; i++) {
    for (int j = 0; j < INPUT_SIZE; j++) {
      std::getline(myfile, line);
      training_data[i][j] =  strtof(line.c_str(), NULL);
    }
    training_label[i] = LEFT;
  }
  for (int i = 3*TESTING_SIZE/4; i < TESTING_SIZE; i++) {
    for (int j = 0; j < INPUT_SIZE; j++) {
      std::getline(myfile, line);
      testing_data[i][j] =  strtof(line.c_str(), NULL);
    }
    testing_label[i] = LEFT;
  }

  myfile.close();
  myfile.clear();

  /********************************************************************************************************************
  * instantiate the network
  ********************************************************************************************************************/

  if (LOADNETWORK == 1)
    nn = loadNetwork("speech_weights.dat");
  else
    nn = neuralNetwork();

  /********************************************************************************************************************
  * train the network, shift training/testing sets periodically to avoid overfitting
  ********************************************************************************************************************/

  int j1, j2, temp;
  float temp_f;
  float* templ;
  float accuracy = 0;


  for (int x = 0; x < TRAINING_CYCLES && accuracy < DESIRED_ACCURACY; x++) {
    // move items between the training and testing sets
    for (int i = 0; i < 1000; i++) {
      j1 = rand() % (TRAINING_SIZE);
      j2 = rand() % (TESTING_SIZE);
      temp = training_label[j1];
      training_label[j1] = testing_label[j2];
      testing_label[j2] = temp;
      for (int k = 0; k < INPUT_SIZE; k++) {
        temp_f = training_data[j1][k];
        training_data[j1][k] = testing_data[j2][k];
        testing_data[j2][k] = temp_f;
      }
    }

    // "shuffle" the data order (it's not perfectly random but i don't care)
    for (int i = 0; i < 450; i++) {
      j1 = rand() % (TRAINING_SIZE);
      j2 = rand() % (TRAINING_SIZE);
      temp = training_label[j1];
      training_label[j1] = training_label[j2];
      training_label[j2] = temp;
      for (int k = 0; k < INPUT_SIZE; k++) {
        temp_f = training_data[j1][k];
        training_data[j1][k] = training_data[j2][k];
        training_data[j2][k] = temp_f;
      }
    }
    for (int i = 0; i < 50; i++) {
      j1 = rand() % (TESTING_SIZE);
      j2 = rand() % (TESTING_SIZE);
      temp = testing_label[j1];
      testing_label[j1] = testing_label[j2];
      testing_label[j2] = temp;
      for (int k = 0; k < INPUT_SIZE; k++) {
        temp_f = testing_data[j1][k];
        testing_data[j1][k] = testing_data[j2][k];
        testing_data[j2][k] = temp_f;
      }
    }

    std::cout << "***** training iteration " << x << " *****\n";
    accuracy = trainNetwork(nn, training_data, training_label, TRAINING_SIZE,
                   testing_data, testing_label, TESTING_SIZE);
  }


  if (LOADNETWORK == 0) {
      saveNetwork(nn, "speech_weights.dat");
      saveNetworkHeaderFile(nn, "speech_weights.h");
  }
  myfile.close();
}
