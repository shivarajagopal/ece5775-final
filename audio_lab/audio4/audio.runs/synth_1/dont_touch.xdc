# This file is automatically generated.
# It contains project source information necessary for synthesis and implementation.

# XDC: imports/audio_lab/zed_audio_constraints.xdc

# Block Designs: bd/system/system.bd
set_property DONT_TOUCH TRUE [get_cells -hier -filter {REF_NAME==system || ORIG_REF_NAME==system}]

# IP: bd/system/ip/system_processing_system7_0_0/system_processing_system7_0_0.xci
set_property DONT_TOUCH TRUE [get_cells -hier -filter {REF_NAME==system_processing_system7_0_0 || ORIG_REF_NAME==system_processing_system7_0_0}]

# IP: bd/system/ip/system_axi_gpio_0_0/system_axi_gpio_0_0.xci
set_property DONT_TOUCH TRUE [get_cells -hier -filter {REF_NAME==system_axi_gpio_0_0 || ORIG_REF_NAME==system_axi_gpio_0_0}]

# IP: bd/system/ip/system_zed_audio_ctrl_0_0/system_zed_audio_ctrl_0_0.xci
set_property DONT_TOUCH TRUE [get_cells -hier -filter {REF_NAME==system_zed_audio_ctrl_0_0 || ORIG_REF_NAME==system_zed_audio_ctrl_0_0}]

# IP: bd/system/ip/system_processing_system7_0_axi_periph_0/system_processing_system7_0_axi_periph_0.xci
set_property DONT_TOUCH TRUE [get_cells -hier -filter {REF_NAME==system_processing_system7_0_axi_periph_0 || ORIG_REF_NAME==system_processing_system7_0_axi_periph_0}]

# IP: bd/system/ip/system_rst_processing_system7_0_100M_0/system_rst_processing_system7_0_100M_0.xci
set_property DONT_TOUCH TRUE [get_cells -hier -filter {REF_NAME==system_rst_processing_system7_0_100M_0 || ORIG_REF_NAME==system_rst_processing_system7_0_100M_0}]

# IP: bd/system/ip/system_xbar_0/system_xbar_0.xci
set_property DONT_TOUCH TRUE [get_cells -hier -filter {REF_NAME==system_xbar_0 || ORIG_REF_NAME==system_xbar_0}]

# IP: bd/system/ip/system_voicerec_0_1/system_voicerec_0_1.xci
set_property DONT_TOUCH TRUE [get_cells -hier -filter {REF_NAME==system_voicerec_0_1 || ORIG_REF_NAME==system_voicerec_0_1}]

# IP: bd/system/ip/system_auto_ds_0/system_auto_ds_0.xci
set_property DONT_TOUCH TRUE [get_cells -hier -filter {REF_NAME==system_auto_ds_0 || ORIG_REF_NAME==system_auto_ds_0}]

# IP: bd/system/ip/system_auto_pc_0/system_auto_pc_0.xci
set_property DONT_TOUCH TRUE [get_cells -hier -filter {REF_NAME==system_auto_pc_0 || ORIG_REF_NAME==system_auto_pc_0}]

# IP: bd/system/ip/system_auto_ds_1/system_auto_ds_1.xci
set_property DONT_TOUCH TRUE [get_cells -hier -filter {REF_NAME==system_auto_ds_1 || ORIG_REF_NAME==system_auto_ds_1}]

# IP: bd/system/ip/system_auto_pc_1/system_auto_pc_1.xci
set_property DONT_TOUCH TRUE [get_cells -hier -filter {REF_NAME==system_auto_pc_1 || ORIG_REF_NAME==system_auto_pc_1}]

# IP: bd/system/ip/system_auto_ds_2/system_auto_ds_2.xci
set_property DONT_TOUCH TRUE [get_cells -hier -filter {REF_NAME==system_auto_ds_2 || ORIG_REF_NAME==system_auto_ds_2}]

# IP: bd/system/ip/system_auto_pc_2/system_auto_pc_2.xci
set_property DONT_TOUCH TRUE [get_cells -hier -filter {REF_NAME==system_auto_pc_2 || ORIG_REF_NAME==system_auto_pc_2}]

# IP: bd/system/ip/system_auto_pc_3/system_auto_pc_3.xci
set_property DONT_TOUCH TRUE [get_cells -hier -filter {REF_NAME==system_auto_pc_3 || ORIG_REF_NAME==system_auto_pc_3}]

# IP: bd/system/ip/system_auto_us_0/system_auto_us_0.xci
set_property DONT_TOUCH TRUE [get_cells -hier -filter {REF_NAME==system_auto_us_0 || ORIG_REF_NAME==system_auto_us_0}]

# XDC: bd/system/ip/system_processing_system7_0_0/system_processing_system7_0_0.xdc
set_property DONT_TOUCH TRUE [get_cells [split [join [get_cells -hier -filter {REF_NAME==system_processing_system7_0_0 || ORIG_REF_NAME==system_processing_system7_0_0}] {/inst }]/inst ]]

# XDC: bd/system/ip/system_axi_gpio_0_0/system_axi_gpio_0_0_board.xdc
set_property DONT_TOUCH TRUE [get_cells [split [join [get_cells -hier -filter {REF_NAME==system_axi_gpio_0_0 || ORIG_REF_NAME==system_axi_gpio_0_0}] {/U0 }]/U0 ]]

# XDC: bd/system/ip/system_axi_gpio_0_0/system_axi_gpio_0_0_ooc.xdc

# XDC: bd/system/ip/system_axi_gpio_0_0/system_axi_gpio_0_0.xdc
#dup# set_property DONT_TOUCH TRUE [get_cells [split [join [get_cells -hier -filter {REF_NAME==system_axi_gpio_0_0 || ORIG_REF_NAME==system_axi_gpio_0_0}] {/U0 }]/U0 ]]

# XDC: bd/system/ip/system_rst_processing_system7_0_100M_0/system_rst_processing_system7_0_100M_0_board.xdc
#dup# set_property DONT_TOUCH TRUE [get_cells -hier -filter {REF_NAME==system_rst_processing_system7_0_100M_0 || ORIG_REF_NAME==system_rst_processing_system7_0_100M_0}]

# XDC: bd/system/ip/system_rst_processing_system7_0_100M_0/system_rst_processing_system7_0_100M_0.xdc
#dup# set_property DONT_TOUCH TRUE [get_cells -hier -filter {REF_NAME==system_rst_processing_system7_0_100M_0 || ORIG_REF_NAME==system_rst_processing_system7_0_100M_0}]

# XDC: bd/system/ip/system_rst_processing_system7_0_100M_0/system_rst_processing_system7_0_100M_0_ooc.xdc

# XDC: bd/system/ip/system_xbar_0/system_xbar_0_ooc.xdc

# XDC: ipshared/xilinx.com/voicerec_v1_0/9e33f810/constraints/voicerec_ooc.xdc

# XDC: bd/system/ip/system_auto_ds_0/system_auto_ds_0_ooc.xdc

# XDC: bd/system/ip/system_auto_ds_0/system_auto_ds_0_clocks.xdc
set_property DONT_TOUCH TRUE [get_cells [split [join [get_cells -hier -filter {REF_NAME==system_auto_ds_0 || ORIG_REF_NAME==system_auto_ds_0}] {/inst }]/inst ]]

# XDC: bd/system/ip/system_auto_pc_0/system_auto_pc_0_ooc.xdc

# XDC: bd/system/ip/system_auto_ds_1/system_auto_ds_1_ooc.xdc

# XDC: bd/system/ip/system_auto_ds_1/system_auto_ds_1_clocks.xdc
set_property DONT_TOUCH TRUE [get_cells [split [join [get_cells -hier -filter {REF_NAME==system_auto_ds_1 || ORIG_REF_NAME==system_auto_ds_1}] {/inst }]/inst ]]

# XDC: bd/system/ip/system_auto_pc_1/system_auto_pc_1_ooc.xdc

# XDC: bd/system/ip/system_auto_ds_2/system_auto_ds_2_ooc.xdc

# XDC: bd/system/ip/system_auto_ds_2/system_auto_ds_2_clocks.xdc
set_property DONT_TOUCH TRUE [get_cells [split [join [get_cells -hier -filter {REF_NAME==system_auto_ds_2 || ORIG_REF_NAME==system_auto_ds_2}] {/inst }]/inst ]]

# XDC: bd/system/ip/system_auto_pc_2/system_auto_pc_2_ooc.xdc

# XDC: bd/system/ip/system_auto_pc_3/system_auto_pc_3_ooc.xdc

# XDC: bd/system/ip/system_auto_us_0/system_auto_us_0_ooc.xdc

# XDC: bd/system/ip/system_auto_us_0/system_auto_us_0_clocks.xdc
set_property DONT_TOUCH TRUE [get_cells [split [join [get_cells -hier -filter {REF_NAME==system_auto_us_0 || ORIG_REF_NAME==system_auto_us_0}] {/inst }]/inst ]]

# XDC: bd/system/system_ooc.xdc