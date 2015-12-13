# ECE 5775 Final Project
## A neural network-based method for recognizing speech commands with fixed-latency on a Xilinx Zedboard

A description of each folder and its contents is below

## audio_lab

This contains the Xilinx Vivado and SDK projects to program the bitstream to the FPGA and configure how the data is sent into the FPGA.

## combined

This contains our integration tests for the FPGA synthesis using Xilinx Vivado HLS, based on 3 different data types as a basis. These are based on the float datatype, double-precision float datatype, and the Xilinx ap_fixed datatype. The ap_fixed datatype has the fastest runtime, but is not very optimized as far as bitwidths go.

## components

### MATLAB

This folder contains all necessary files for generating both training and test data in MATLAB. 


### Neural Network

A three layer neural network implementation that learns through a feed-forward network followed by backpropagation. The number of hidden layers is determined in the call to the constructor of the network. The number of hidden neurons can be varied along with the learning rate and momentum (constants in neural network) to modify how fast and how well the network fits itself to the training data.

This could probably be improved for larger networks by doing layer-by-layer pretraining using Restricted Boltzmann machines before doing backpropagation.
