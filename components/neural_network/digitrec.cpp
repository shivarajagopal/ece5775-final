/**********************************************************************************************************************
* A testbench for the digit set provided to us for the knn digitrec lab
**********************************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>

#include "neuralNetwork.h"

#define TRAINING_SIZE 1800
#define TESTING_SIZE 180
#define IMAGE_SIZE 49

int main() {
  NeuralNetwork* nn;
  srand((unsigned int)time(0));

  long training_data[TRAINING_SIZE*10];
  int training_label[TRAINING_SIZE*10];
  float training_input[TRAINING_SIZE*10 * IMAGE_SIZE];

  long testing_data[TESTING_SIZE*10];
  int testing_label[TESTING_SIZE*10];
  float testing_input[TESTING_SIZE*10 * IMAGE_SIZE];

  char inputfile[23];
  
  // Read input file for the testing set
  std::string line;
  std::ifstream myfile;

  // load hex input and labels
  for (int i = 0; i < 10; i++) {
    sprintf(inputfile, "data/training_set_%d.dat", i);
    std::ifstream myfile;
    myfile.open(inputfile);
    for (int j = 0; j < TRAINING_SIZE; j++) {
      std::getline(myfile, line);
      training_data[i*TRAINING_SIZE + j] = strtoul(line.substr(0, line.find(',')).c_str(), NULL, 16);
      training_label[i*TRAINING_SIZE + j] = i;
    }
    myfile.close();
    myfile.clear();
  }
  myfile.open("data/testing_set.dat");
  for (int j = 0; j < TESTING_SIZE; j++) {
    std::getline(myfile, line);
    testing_data[j] = strtoul(line.substr(0, line.find(",")).c_str(), NULL, 16);
    testing_label[j] = strtoul(line.substr(line.find(",") + 1, line.length()).c_str(), NULL, 10);
  }
  myfile.close();
  myfile.clear();

  // "shuffle" the data (it's not perfectly random but i don't care)
  int j1, j2, temp;
  long templ;
  for (int i = 0; i < 50000; i++) {
    j1 = rand() % (TRAINING_SIZE*10);
    j2 = rand() % (TRAINING_SIZE*10);
    templ = training_data[j1];
    temp = training_label[j1];
    training_data[j1] = training_data[j2];
    training_label[j1] = training_label[j2];
    training_data[j2] = templ;
    training_label[j2] = temp;
  }
  for (int i = 0; i < 500; i++) {
    j1 = rand() % (TESTING_SIZE);
    j2 = rand() % (TESTING_SIZE);
    templ = testing_data[j1];
    temp = testing_label[j1];
    testing_data[j1] = testing_data[j2];
    testing_label[j1] = testing_label[j2];
    testing_data[j2] = templ;
    testing_label[j2] = temp;
  }

  // convert to pixel 
  for (int i = 0; i < TRAINING_SIZE*10; i++) {
    templ = training_data[i];
    for (int j = 0; j < IMAGE_SIZE; j++) {
      training_input[i*IMAGE_SIZE + j] = templ % 2;
      templ = templ >> 1;
    }
  }
  for (int i = 0; i < TESTING_SIZE; i++) {
    templ = testing_data[i];
    for (int j = 0; j < IMAGE_SIZE; j++) {
      testing_input[i*IMAGE_SIZE + j] = templ % 2;
      templ = templ >> 1;
    }
  }

  nn = neuralNetwork(IMAGE_SIZE, 10);
  trainNetwork(nn, training_input, training_label, TRAINING_SIZE*10,
                   testing_input, testing_label, TESTING_SIZE); 

  myfile.close();

}
