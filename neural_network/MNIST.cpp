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

#define COLS 28
#define ROWS 28

int main() {

  NeuralNetwork* nn;
  srand((unsigned int)time(0));

  int training_label[TRAINING_SIZE];
  float training_data[TRAINING_SIZE * IMAGE_SIZE];

  int testing_label[TESTING_SIZE];
  float testing_data[TESTING_SIZE * IMAGE_SIZE];

  char inputfile[23];

  read_mnist(training_data, training_label, testing_data, testing_label);

  // Read input file for the testing set
  std::string line;
  std::ifstream myfile;

  // "shuffle" the data (it's not perfectly random but i don't care)
  int j1, j2, temp;
  float temp_f;
  float* templ;
  for (int i = 0; i < 50000; i++) {
    j1 = rand() % (TRAINING_SIZE);
    j2 = rand() % (TRAINING_SIZE);
    temp = training_label[j1];
    training_label[j1] = training_label[j2];
    training_label[j2] = temp;
    for (int k = 0; k < IMAGE_SIZE; k++) {
      temp_f = training_data[j1*IMAGE_SIZE + k];
      training_data[j1*IMAGE_SIZE + k] = training_data[j2*IMAGE_SIZE + k];
      training_data[j2*IMAGE_SIZE + k] = temp_f;
    }
  }
  for (int i = 0; i < 5000; i++) {
    j1 = rand() % (TESTING_SIZE);
    j2 = rand() % (TESTING_SIZE);
    temp = testing_label[j1];
    testing_label[j1] = testing_label[j2];
    testing_label[j2] = temp;
    for (int k = 0; k < IMAGE_SIZE; k++) {
      temp_f = testing_data[j1*IMAGE_SIZE + k];
      testing_data[j1*IMAGE_SIZE + k] = testing_data[j2*IMAGE_SIZE + k];
      testing_data[j2*IMAGE_SIZE + k] = temp_f;
    }
  }

  std::cout << "files read\n";

  // for (int i = 0; i < 10; i++) {
  //   std::cout << "==============" << training_label[i] << "=============\n";
  //   for (int j = 0; j < ROWS; j++) {
  //     for (int k = 0; k < COLS; k++) {
  //       std::cout << training_data[i*IMAGE_SIZE + COLS*j+k];
  //       if (training_data[i*IMAGE_SIZE + COLS*j+k] > 99)
  //         std::cout << " ";
  //       else if (training_data[i*IMAGE_SIZE + COLS*j+k] > 9)
  //         std::cout << "  ";
  //       else
  //         std::cout << "   ";
  //     }
  //     std::cout << "\n";
  //   }
  //   std::cout << "\n";
  // }

  nn = neuralNetwork(IMAGE_SIZE, 10);
  trainNetwork(nn, training_data, training_label, TRAINING_SIZE,
                   testing_data, testing_label, TESTING_SIZE); 

  myfile.close();
}
