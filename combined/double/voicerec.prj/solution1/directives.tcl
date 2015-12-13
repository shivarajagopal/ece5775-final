############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 2015 Xilinx Inc. All rights reserved.
############################################################
set_directive_resource -core RAM_1P_BRAM -metadata {-bus_bundle voicerec_io} "voicerec" inSound
set_directive_interface -mode s_axilite -bundle voicerec_ctrl "voicerec"
set_directive_interface -mode m_axi -bundle voicerec_inSound "voicerec" inSound
