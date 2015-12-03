############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 2014 Xilinx Inc. All rights reserved.
############################################################
open_project fir.prj
set_top fir
add_files fir_coef.dat
add_files fir.c
add_files -tb fir_test.c
open_solution "solution1"
set_part {xc7z020clg484-1}
create_clock -period 10 -name default
source "./fir.prj/solution1/directives.tcl"
csim_design
csynth_design
cosim_design -rtl systemc
export_design -format ip_catalog
