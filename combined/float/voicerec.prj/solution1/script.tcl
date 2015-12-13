############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 2014 Xilinx Inc. All rights reserved.
############################################################
open_project voicerec.prj
set_top voicerec
add_files neuralNetworkSynth.cpp
add_files voicerec.cpp
add_files -tb data
add_files -tb voicerec_test.cpp
open_solution "solution1"
set_part {xc7z020clg484-1}
create_clock -period 10 -name default
source "./voicerec.prj/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
