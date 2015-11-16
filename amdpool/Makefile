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

all: csim

csim: $(TARGET).cpp $(TARGET)_test.cpp
	@echo "Compiling & simulating $(TARGET) on amdpool ..."
	g++ ${CFLAGS} $^ -o $(TARGET)
	./$(TARGET)

bitstream: 
	@echo "Synthesizing $(TARGET) and creating bitstream on amdpool ..."
	vivado_hls -f run_pipeline.tcl
	./run_bitstream.sh

clean:
	rm -rf $(TARGET) *.dat *.prj *.log
	rm -rf zedboard_project* xillydemo.bit
