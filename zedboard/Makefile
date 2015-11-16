#==========================================================================
# Makefile
#==========================================================================
# @brief: A makefile the compiles and runs the digitrec program
#
# @desc: 1. "make" or "make sw" runs software execution by default
#        2. "make fpga" invokes the HW accelerator
#        3. "make clean" cleans up the directory


INC_PATH=/usr/include/vivado_hls/2015.2
TARGET = voicerec
CFLAGS = -I${INC_PATH}

all: sw

sw: $(TARGET).cpp $(TARGET)_test.cpp
	@echo "Compiling & executing $(TARGET) software program on ARM ..."
	g++ ${CFLAGS} $(TARGET).cpp $(TARGET)_test.cpp -o $(TARGET)-arm
	./$(TARGET)-arm

fpga: host.cpp
	@echo "Compiling host program & running $(TARGET) accelerator ..."
	g++ ${CFLAGS} host.cpp -o $(TARGET)-fpga
	./$(TARGET)-fpga

# Clean up the directory before submission
clean:
	@echo "Clean up output files"
	rm -rf $(TARGET)-sw vivado_hls.log *.prj result out.dat *~
	rm -rf $(TARGET)-fpga
