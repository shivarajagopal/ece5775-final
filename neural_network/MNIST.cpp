/**********************************************************************************************************************
* A testbench for the digit set provided to us for the knn digitrec lab
**********************************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>

#include "neuralNetwork.h"
#include "MNISTParser.h"

int main() {
  NeuralNetwork* nn;
  srand((unsigned int)time(0));

  int* training_label = (int*) malloc(TRAINING_SIZE * sizeof(int));
  float** training_data = (float**) malloc(TRAINING_SIZE * sizeof(float*));
  for (int i = 0; i < TRAINING_SIZE*10; i++)
    training_data[i] = (float*) malloc(IMAGE_SIZE*sizeof(float));

  int* testing_label = (int*) malloc(TESTING_SIZE * sizeof(int));
  float** testing_data = (float**) malloc(TESTING_SIZE * sizeof(float*));
  for (int i = 0; i < TESTING_SIZE; i++)
    testing_data[i] = (float*) malloc(IMAGE_SIZE*sizeof(float));

  char inputfile[23];

  read_mnist(training_data, training_label, testing_data, testing_label);

  std::cout << "files read\n";

  // Read input file for the testing set
  std::string line;
  std::ifstream myfile;


  // "shuffle" the data (it's not perfectly random but i don't care)
  int j1, j2, temp;
  float* templ;
  for (int i = 0; i < 50000; i++) {
    j1 = rand() % (TRAINING_SIZE);
    j2 = rand() % (TRAINING_SIZE);
    templ = training_data[j1];
    temp = training_label[j1];
    training_data[j1] = training_data[j2];
    training_label[j1] = training_label[j2];
    training_data[j2] = templ;
    training_label[j2] = temp;
  }
  for (int i = 0; i < 5000; i++) {
    j1 = rand() % (TESTING_SIZE);
    j2 = rand() % (TESTING_SIZE);
    templ = testing_data[j1];
    temp = testing_label[j1];
    testing_data[j1] = testing_data[j2];
    testing_label[j1] = testing_label[j2];
    testing_data[j2] = templ;
    testing_label[j2] = temp;
  }

  for (int i = 0; i < 10; i++) {
    std::cout << "==============" << training_label[i] << "=============\n";
    for (int j = 0; j < 28; j++) {
      for (int k = 0; k < 28; k++) {
        std::cout << training_data[i][28*j+k];
        if (training_data[i][28*j+k] > 99)
          std::cout << " ";
        else if (training_data[i][28*j+k] > 9)
          std::cout << "  ";
        else
          std::cout << "   ";
      }
      std::cout << "\n";
    }
    std::cout << "\n";
  }

  nn = neuralNetwork(IMAGE_SIZE, 500, 10);
  trainNetwork(nn, training_data, training_label, TRAINING_SIZE,
                   testing_data, testing_label, TESTING_SIZE); 
  destroyNeuralNetwork(nn);

  free(training_label);
  for (int i = 0; i < TRAINING_SIZE; i++)
    free(training_data[i]);
  free(training_data);

  free(testing_label);
  for (int i = 0; i < TESTING_SIZE; i++)
    free(testing_data[i]);
  free(testing_data);

  myfile.close();

}
