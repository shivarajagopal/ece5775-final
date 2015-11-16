#!/bin/bash
#===================================================
# setup_amdpool.sh
#===================================================
# @brief: A bash script to set up Vivado HLS 2015.2
# @desc: To run the script, enter "source set_amdpool.sh"

# Set up license server
unset LM_LICENSE_FILE
export XILINXD_LICENSE_FILE=2100@flex.ece.cornell.edu
# Source Vivado 2014.2 setup script
source /research/brg/install/bare-pkgs/x86_64-centos6/xilinx-vivado-2015.2/Vivado/2015.2/settings64.sh &> /dev/null
