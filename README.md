# ECE 5775 Final Project
## A neural network-based method for recognizing speech commands with fixed-latency on a Xilinx Zedboard
## A project by [taylorpritchard](https://github.com/taylorpritchard/), [shivarajagopal](https://github.com/shivarajagopal/), and [ianvermeulen](ianvermeulen).

A description of each folder and its contents is below

## audio_lab

This contains the Xilinx Vivado and SDK projects to program the bitstream to the FPGA and configure how the data is sent into the FPGA.

## combined

This contains our integration tests for the FPGA synthesis using Xilinx Vivado HLS, based on 3 different data types as a basis. These are based on the float datatype, double-precision float datatype, and the Xilinx ap_fixed datatype. The ap_fixed datatype has the fastest runtime, but is *not* very optimized as far as bitwidths go.

## components

#### matlab

This folder contains all necessary files for generating both training and test data in MATLAB. Find further details in the files

#### neural_network

This folder contains a three layer neural network implementation. It learns using a feed-forward network followed by backpropagation. Classified inputs are entered into the network in a random order. After each input is fed through the network, the value at each output neuron is examined and compared to the desired output in order to get the error. This error is propagated back through all the edges between the layers and the weights are adjusted in a "learning" process. This process is repeated until a desired accuracy is achieved. A separate header file (neuralNetworkConstants.h) defines constants related to how quickly the network learns and the size of each of the layers.

The training of the network is performed offline, not on the FPGA. To do this, the neuralNetwork struct is used which contains edge weights, neuron values, and other values used for training. The trainNetwork function passes in training and testing data with associated labels. The training data is used to adjust the weights in the network and the testing data is classified without updating weights to ensure that the data generalizes to values outside of the training set.

After training is performed, the network can be saved in two ways. The first way (saveNetwork) saves the edge weights in plain text with one value per line. This format can then be used to reload the network and continue training. The second way (saveNetworkHeaderFile) saves all the edge weights to 2-D arrays (weightIH and weightHO) in a header file. This header file can then be included in another program.

For synthesis, many parts of the training program were incompatible. The I/O streams and struct definitions were not able to be synthesized. However, since the goal of the hardware implementation was just to classify speech, we created a modified neuralNetwork file called neuralNetworkSynth.cpp. This file includes the header file with saved weights and just contains the logic required to classify inputs.

#### signal_proc

This folder contains all of the signal processing code and the necessary scripts to ensure it synthesizes to Vivado HLS.

## final_code

This folder contains the final implementation that was put onto the FPGA and achieved the best results. This also contains everything needed to synthesize to Vivado HLS. Use the audio_lab folder and the provided instructions to compile it to the FPGA
