# This script segment is generated automatically by AutoPilot

set id 1
set name voicerec_dcmp_64ns_64ns_1_1
set corename simcore_dcmp
set op dcmp
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 64
set in0_signed 0
set in1_width 64
set in1_signed 0
set out_width 1
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_dcmp] == "ap_gen_simcore_dcmp"} {
eval "ap_gen_simcore_dcmp { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_dcmp, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op dcmp
set corename DCmp
if {${::AESL::PGuard_autocg_gen} && (${::AESL::PGuard_autocg_fpip} || ${::AESL::PGuard_autocg_fpv6en} || ${::AESL::PGuard_autocg_hpen})} {
if {[info proc ::AESL_LIB_XILINX_FPV6::fpv6_gen] == "::AESL_LIB_XILINX_FPV6::fpv6_gen"} {
eval "::AESL_LIB_XILINX_FPV6::fpv6_gen { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_XILINX_FPV6::fpv6_gen, check your platform lib"
}
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 3 \
    name outSound \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename outSound \
    op interface \
    ports { outSound_address0 { O 13 vector } outSound_ce0 { O 1 bit } outSound_we0 { O 1 bit } outSound_d0 { O 64 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'outSound'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2 \
    name inSound \
    type other \
    dir IO \
    reset_level 1 \
    sync_rst true \
    corename dc_inSound \
    op interface \
    ports { m_axi_inSound_AWVALID { O 1 bit } m_axi_inSound_AWREADY { I 1 bit } m_axi_inSound_AWADDR { O 32 vector } m_axi_inSound_AWID { O 1 vector } m_axi_inSound_AWLEN { O 32 vector } m_axi_inSound_AWSIZE { O 3 vector } m_axi_inSound_AWBURST { O 2 vector } m_axi_inSound_AWLOCK { O 2 vector } m_axi_inSound_AWCACHE { O 4 vector } m_axi_inSound_AWPROT { O 3 vector } m_axi_inSound_AWQOS { O 4 vector } m_axi_inSound_AWREGION { O 4 vector } m_axi_inSound_AWUSER { O 1 vector } m_axi_inSound_WVALID { O 1 bit } m_axi_inSound_WREADY { I 1 bit } m_axi_inSound_WDATA { O 64 vector } m_axi_inSound_WSTRB { O 8 vector } m_axi_inSound_WLAST { O 1 bit } m_axi_inSound_WID { O 1 vector } m_axi_inSound_WUSER { O 1 vector } m_axi_inSound_ARVALID { O 1 bit } m_axi_inSound_ARREADY { I 1 bit } m_axi_inSound_ARADDR { O 32 vector } m_axi_inSound_ARID { O 1 vector } m_axi_inSound_ARLEN { O 32 vector } m_axi_inSound_ARSIZE { O 3 vector } m_axi_inSound_ARBURST { O 2 vector } m_axi_inSound_ARLOCK { O 2 vector } m_axi_inSound_ARCACHE { O 4 vector } m_axi_inSound_ARPROT { O 3 vector } m_axi_inSound_ARQOS { O 4 vector } m_axi_inSound_ARREGION { O 4 vector } m_axi_inSound_ARUSER { O 1 vector } m_axi_inSound_RVALID { I 1 bit } m_axi_inSound_RREADY { O 1 bit } m_axi_inSound_RDATA { I 64 vector } m_axi_inSound_RLAST { I 1 bit } m_axi_inSound_RID { I 1 vector } m_axi_inSound_RUSER { I 1 vector } m_axi_inSound_RRESP { I 2 vector } m_axi_inSound_BVALID { I 1 bit } m_axi_inSound_BREADY { O 1 bit } m_axi_inSound_BRESP { I 2 vector } m_axi_inSound_BID { I 1 vector } m_axi_inSound_BUSER { I 1 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -2 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


