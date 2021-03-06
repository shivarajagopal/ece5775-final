#==========================================================================
# Makefile
#==========================================================================
# @brief: A makefile the compiles and synthesizes the digitrec program
#
# @desc: 1. "make" runs csim by default
#        2. "make csim" compiles & executes the fixed-point implementation
#        3. "make clean" cleans up the directory


# Extract Vivado HLS include path
VHLS_PATH := $(dir $(shell which vivado_hls))/..
VHLS_INC ?= ${VHLS_PATH}/include
TARGET = voicerec
CFLAGS = -g -I${VHLS_INC} 
TRAINFILE = forward.dat
ZBINCPATH = /usr/include/vivado_hls/2015.2

all: csim

csim: $(TARGET).cpp $(TARGET)_test.cpp neuralNetworkSynth.cpp
	@echo "Compiling & simulating $(TARGET) on amdpool ..."
	g++ ${CFLAGS} $^ -o $(TARGET)
	./$(TARGET)

zb: $(TARGET).cpp $(TARGET)_test.cpp neuralNetworkSynth.cpp
	@echo "Compiling & simulating $(TARGET) on amdpool ..."
	g++ -I$(ZBINCPATH) $^ -o $(TARGET)-arm
	./$(TARGET)-arm

bitstream: 
	@echo "Synthesizing $(TARGET) and creating bitstream on amdpool ..."
	vivado_hls -f run_pipeline.tcl
	./run_bitstream.sh

# Use this command to train the network offline
speech: speech.cpp neuralNetwork.cpp
	g++ -g -o $@ $^
	./speech

clean:
	rm -rf $(TARGET) *.dat *.prj *.log
	rm -rf zedboard_project* xillydemo.bit speech voicerec
