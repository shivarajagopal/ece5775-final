#!/bin/sh

# 
# Vivado(TM)
# runme.sh: a Vivado-generated Runs Script for UNIX
# Copyright 1986-2015 Xilinx, Inc. All Rights Reserved.
# 

if [ -z "$PATH" ]; then
  PATH=/usr/tools/Xilinx/SDAccel/2015.4/SDK/2015.4/bin:/usr/tools/Xilinx/SDAccel/2015.4/Vivado/2015.4/ids_lite/ISE/bin/lin64:/usr/tools/Xilinx/SDAccel/2015.4/Vivado/2015.4/bin
else
  PATH=/usr/tools/Xilinx/SDAccel/2015.4/SDK/2015.4/bin:/usr/tools/Xilinx/SDAccel/2015.4/Vivado/2015.4/ids_lite/ISE/bin/lin64:/usr/tools/Xilinx/SDAccel/2015.4/Vivado/2015.4/bin:$PATH
fi
export PATH

if [ -z "$LD_LIBRARY_PATH" ]; then
  LD_LIBRARY_PATH=/usr/tools/Xilinx/SDAccel/2015.4/Vivado/2015.4/ids_lite/ISE/lib/lin64
else
  LD_LIBRARY_PATH=/usr/tools/Xilinx/SDAccel/2015.4/Vivado/2015.4/ids_lite/ISE/lib/lin64:$LD_LIBRARY_PATH
fi
export LD_LIBRARY_PATH

HD_PWD='/home/rz252/tjp79/ece5775-final/audio_lab/audio2/audio.runs/impl_1'
cd "$HD_PWD"

HD_LOG=runme.log
/bin/touch $HD_LOG

ISEStep="./ISEWrap.sh"
EAStep()
{
     $ISEStep $HD_LOG "$@" >> $HD_LOG 2>&1
     if [ $? -ne 0 ]
     then
         exit
     fi
}

# pre-commands:
/bin/touch .write_bitstream.begin.rst
EAStep vivado -log system_wrapper.vdi -applog -m64 -messageDb vivado.pb -mode batch -source system_wrapper.tcl -notrace


