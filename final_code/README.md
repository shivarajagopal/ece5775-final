# Final Code

This code contains both the signal processing component and the neural network. The neuralNetworkSynth files are combined with the signal processing component to compile for the FPGA, while the neuralNetwork code is more used for training, in conjunction with the speech.cpp

#### Training the Neural Net

To train the neural network, follow the examples set in speech.cpp (add more)

#### High Level Synthesis

Run vivado_hls run.tcl in this folder to synthesize the code and get an implementation that can be imported into Vivado.
