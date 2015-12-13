// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.2
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ===========================================================

#ifndef _voicerec_feedForward_HH_
#define _voicerec_feedForward_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "voicerec_fadd_32ns_32ns_32_5_full_dsp.h"
#include "voicerec_fmul_32ns_32ns_32_4_max_dsp.h"
#include "voicerec_fptrunc_64ns_32_1.h"
#include "voicerec_fpext_32ns_64_1.h"
#include "voicerec_dadd_64ns_64ns_64_5_full_dsp.h"
#include "voicerec_ddiv_64ns_64ns_64_31.h"
#include "voicerec_dexp_64ns_64ns_64_18_full_dsp.h"
#include "voicerec_feedForward_input_r.h"
#include "voicerec_processChunk_e.h"
#include "voicerec_feedForward_weightIH.h"
#include "voicerec_feedForward_weightHO.h"

namespace ap_rtl {

struct voicerec_feedForward : public sc_module {
    // Port declarations 13
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<10> > pattern_address0;
    sc_out< sc_logic > pattern_ce0;
    sc_in< sc_lv<32> > pattern_q0;
    sc_out< sc_lv<2> > output_r_address0;
    sc_out< sc_logic > output_r_ce0;
    sc_out< sc_logic > output_r_we0;
    sc_out< sc_lv<32> > output_r_d0;


    // Module declarations
    voicerec_feedForward(sc_module_name name);
    SC_HAS_PROCESS(voicerec_feedForward);

    ~voicerec_feedForward();

    sc_trace_file* mVcdFile;

    voicerec_feedForward_input_r* input_r_U;
    voicerec_processChunk_e* hidden_U;
    voicerec_feedForward_weightIH* weightIH_U;
    voicerec_feedForward_weightHO* weightHO_U;
    voicerec_fadd_32ns_32ns_32_5_full_dsp<1,5,32,32,32>* voicerec_fadd_32ns_32ns_32_5_full_dsp_U34;
    voicerec_fmul_32ns_32ns_32_4_max_dsp<1,4,32,32,32>* voicerec_fmul_32ns_32ns_32_4_max_dsp_U35;
    voicerec_fptrunc_64ns_32_1<1,1,64,32>* voicerec_fptrunc_64ns_32_1_U36;
    voicerec_fpext_32ns_64_1<1,1,32,64>* voicerec_fpext_32ns_64_1_U37;
    voicerec_dadd_64ns_64ns_64_5_full_dsp<1,5,64,64,64>* voicerec_dadd_64ns_64ns_64_5_full_dsp_U38;
    voicerec_ddiv_64ns_64ns_64_31<1,31,64,64,64>* voicerec_ddiv_64ns_64ns_64_31_U39;
    voicerec_dexp_64ns_64ns_64_18_full_dsp<1,18,64,64,64>* voicerec_dexp_64ns_64ns_64_18_full_dsp_U40;
    sc_signal< sc_lv<139> > ap_CS_fsm;
    sc_signal< sc_logic > ap_sig_cseq_ST_st1_fsm_0;
    sc_signal< bool > ap_sig_bdd_157;
    sc_signal< sc_lv<10> > input_r_address0;
    sc_signal< sc_logic > input_r_ce0;
    sc_signal< sc_logic > input_r_we0;
    sc_signal< sc_lv<32> > input_r_d0;
    sc_signal< sc_lv<32> > input_r_q0;
    sc_signal< sc_lv<5> > hidden_address0;
    sc_signal< sc_logic > hidden_ce0;
    sc_signal< sc_logic > hidden_we0;
    sc_signal< sc_lv<32> > hidden_d0;
    sc_signal< sc_lv<32> > hidden_q0;
    sc_signal< sc_lv<15> > weightIH_address0;
    sc_signal< sc_logic > weightIH_ce0;
    sc_signal< sc_lv<32> > weightIH_q0;
    sc_signal< sc_lv<7> > weightHO_address0;
    sc_signal< sc_logic > weightHO_ce0;
    sc_signal< sc_lv<32> > weightHO_q0;
    sc_signal< sc_lv<64> > grp_fu_262_p1;
    sc_signal< sc_lv<64> > reg_280;
    sc_signal< sc_logic > ap_sig_cseq_ST_st5_fsm_4;
    sc_signal< bool > ap_sig_bdd_216;
    sc_signal< sc_lv<1> > exitcond2_fu_357_p2;
    sc_signal< sc_logic > ap_sig_cseq_ST_st73_fsm_72;
    sc_signal< bool > ap_sig_bdd_228;
    sc_signal< sc_lv<1> > exitcond_fu_426_p2;
    sc_signal< sc_lv<32> > grp_fu_251_p2;
    sc_signal< sc_lv<32> > reg_285;
    sc_signal< sc_logic > ap_sig_cseq_ST_st9_fsm_8;
    sc_signal< bool > ap_sig_bdd_242;
    sc_signal< sc_logic > ap_sig_cseq_ST_st77_fsm_76;
    sc_signal< bool > ap_sig_bdd_249;
    sc_signal< sc_lv<32> > grp_fu_245_p2;
    sc_signal< sc_lv<32> > reg_290;
    sc_signal< sc_logic > ap_sig_cseq_ST_st14_fsm_13;
    sc_signal< bool > ap_sig_bdd_259;
    sc_signal< sc_logic > ap_sig_cseq_ST_st82_fsm_81;
    sc_signal< bool > ap_sig_bdd_266;
    sc_signal< sc_lv<64> > grp_fu_275_p2;
    sc_signal< sc_lv<64> > reg_298;
    sc_signal< sc_logic > ap_sig_cseq_ST_st33_fsm_32;
    sc_signal< bool > ap_sig_bdd_276;
    sc_signal< sc_logic > ap_sig_cseq_ST_st101_fsm_100;
    sc_signal< bool > ap_sig_bdd_283;
    sc_signal< sc_lv<64> > grp_fu_265_p2;
    sc_signal< sc_lv<64> > reg_303;
    sc_signal< sc_logic > ap_sig_cseq_ST_st38_fsm_37;
    sc_signal< bool > ap_sig_bdd_293;
    sc_signal< sc_logic > ap_sig_cseq_ST_st106_fsm_105;
    sc_signal< bool > ap_sig_bdd_300;
    sc_signal< sc_lv<64> > grp_fu_270_p2;
    sc_signal< sc_lv<64> > reg_308;
    sc_signal< sc_logic > ap_sig_cseq_ST_st69_fsm_68;
    sc_signal< bool > ap_sig_bdd_310;
    sc_signal< sc_logic > ap_sig_cseq_ST_st137_fsm_136;
    sc_signal< bool > ap_sig_bdd_317;
    sc_signal< sc_lv<32> > grp_fu_259_p1;
    sc_signal< sc_lv<32> > reg_313;
    sc_signal< sc_logic > ap_sig_cseq_ST_st70_fsm_69;
    sc_signal< bool > ap_sig_bdd_327;
    sc_signal< sc_logic > ap_sig_cseq_ST_st138_fsm_137;
    sc_signal< bool > ap_sig_bdd_334;
    sc_signal< sc_lv<10> > j_1_fu_325_p2;
    sc_signal< sc_lv<10> > j_1_reg_483;
    sc_signal< sc_logic > ap_sig_cseq_ST_st2_fsm_1;
    sc_signal< bool > ap_sig_bdd_344;
    sc_signal< sc_lv<64> > tmp_fu_331_p1;
    sc_signal< sc_lv<64> > tmp_reg_488;
    sc_signal< sc_lv<1> > exitcond4_fu_319_p2;
    sc_signal< sc_lv<5> > j_2_fu_342_p2;
    sc_signal< sc_lv<5> > j_2_reg_501;
    sc_signal< sc_logic > ap_sig_cseq_ST_st4_fsm_3;
    sc_signal< bool > ap_sig_bdd_360;
    sc_signal< sc_lv<5> > hidden_addr_reg_506;
    sc_signal< sc_lv<1> > exitcond3_fu_336_p2;
    sc_signal< sc_lv<15> > tmp_2_trn_cast_fu_353_p1;
    sc_signal< sc_lv<15> > tmp_2_trn_cast_reg_511;
    sc_signal< sc_lv<10> > k_1_fu_363_p2;
    sc_signal< sc_lv<10> > k_1_reg_519;
    sc_signal< sc_lv<15> > next_mul_fu_374_p2;
    sc_signal< sc_lv<15> > next_mul_reg_529;
    sc_signal< sc_logic > ap_sig_cseq_ST_st6_fsm_5;
    sc_signal< bool > ap_sig_bdd_384;
    sc_signal< sc_lv<3> > j_3_fu_411_p2;
    sc_signal< sc_lv<3> > j_3_reg_552;
    sc_signal< sc_logic > ap_sig_cseq_ST_st72_fsm_71;
    sc_signal< bool > ap_sig_bdd_394;
    sc_signal< sc_lv<2> > output_addr_reg_557;
    sc_signal< sc_lv<1> > exitcond1_fu_405_p2;
    sc_signal< sc_lv<8> > tmp_4_trn_cast_fu_422_p1;
    sc_signal< sc_lv<8> > tmp_4_trn_cast_reg_562;
    sc_signal< sc_lv<5> > k_2_fu_432_p2;
    sc_signal< sc_lv<5> > k_2_reg_570;
    sc_signal< sc_logic > ap_sig_cseq_ST_st74_fsm_73;
    sc_signal< bool > ap_sig_bdd_416;
    sc_signal< sc_lv<10> > j_reg_155;
    sc_signal< sc_logic > ap_sig_cseq_ST_st3_fsm_2;
    sc_signal< bool > ap_sig_bdd_430;
    sc_signal< sc_lv<5> > j1_reg_166;
    sc_signal< sc_logic > ap_sig_cseq_ST_st71_fsm_70;
    sc_signal< bool > ap_sig_bdd_439;
    sc_signal< sc_lv<32> > tmp_3_reg_177;
    sc_signal< sc_logic > ap_sig_cseq_ST_st15_fsm_14;
    sc_signal< bool > ap_sig_bdd_451;
    sc_signal< sc_lv<10> > k_reg_189;
    sc_signal< sc_lv<15> > phi_mul_reg_200;
    sc_signal< sc_lv<3> > j2_reg_211;
    sc_signal< sc_logic > ap_sig_cseq_ST_st139_fsm_138;
    sc_signal< bool > ap_sig_bdd_465;
    sc_signal< sc_lv<32> > tmp_12_reg_222;
    sc_signal< sc_logic > ap_sig_cseq_ST_st83_fsm_82;
    sc_signal< bool > ap_sig_bdd_477;
    sc_signal< sc_lv<5> > k3_reg_234;
    sc_signal< sc_lv<64> > tmp_2_fu_348_p1;
    sc_signal< sc_lv<64> > tmp_1_fu_369_p1;
    sc_signal< sc_lv<64> > tmp_22_fu_385_p1;
    sc_signal< sc_lv<64> > tmp_4_fu_417_p1;
    sc_signal< sc_lv<64> > tmp_19_fu_438_p1;
    sc_signal< sc_lv<64> > tmp_24_fu_460_p1;
    sc_signal< sc_lv<32> > grp_fu_245_p0;
    sc_signal< sc_lv<32> > grp_fu_245_p1;
    sc_signal< sc_logic > ap_sig_cseq_ST_st10_fsm_9;
    sc_signal< bool > ap_sig_bdd_508;
    sc_signal< sc_logic > ap_sig_cseq_ST_st78_fsm_77;
    sc_signal< bool > ap_sig_bdd_515;
    sc_signal< sc_lv<32> > grp_fu_251_p0;
    sc_signal< sc_lv<32> > grp_fu_251_p1;
    sc_signal< sc_lv<64> > grp_fu_259_p0;
    sc_signal< sc_lv<32> > grp_fu_262_p0;
    sc_signal< sc_lv<32> > tmp_5_fu_400_p1;
    sc_signal< sc_lv<32> > tmp_13_fu_475_p1;
    sc_signal< sc_lv<64> > grp_fu_265_p0;
    sc_signal< sc_lv<64> > grp_fu_265_p1;
    sc_signal< sc_logic > ap_sig_cseq_ST_st34_fsm_33;
    sc_signal< bool > ap_sig_bdd_532;
    sc_signal< sc_logic > ap_sig_cseq_ST_st102_fsm_101;
    sc_signal< bool > ap_sig_bdd_539;
    sc_signal< sc_lv<64> > grp_fu_270_p0;
    sc_signal< sc_lv<64> > grp_fu_270_p1;
    sc_signal< sc_logic > ap_sig_cseq_ST_st39_fsm_38;
    sc_signal< bool > ap_sig_bdd_549;
    sc_signal< sc_logic > ap_sig_cseq_ST_st107_fsm_106;
    sc_signal< bool > ap_sig_bdd_556;
    sc_signal< sc_lv<64> > grp_fu_275_p1;
    sc_signal< sc_logic > ap_sig_cseq_ST_st16_fsm_15;
    sc_signal< bool > ap_sig_bdd_565;
    sc_signal< sc_logic > ap_sig_cseq_ST_st84_fsm_83;
    sc_signal< bool > ap_sig_bdd_572;
    sc_signal< sc_lv<15> > weightIH_addr2_fu_380_p2;
    sc_signal< sc_lv<32> > tmp_5_to_int_fu_390_p1;
    sc_signal< sc_lv<32> > tmp_5_neg_fu_394_p2;
    sc_signal< sc_lv<7> > tmp_23_fu_443_p3;
    sc_signal< sc_lv<8> > weightHO_addr3_cast_fu_451_p1;
    sc_signal< sc_lv<8> > weightHO_addr4_fu_455_p2;
    sc_signal< sc_lv<32> > tmp_13_to_int_fu_465_p1;
    sc_signal< sc_lv<32> > tmp_13_neg_fu_469_p2;
    sc_signal< sc_logic > grp_fu_245_ce;
    sc_signal< sc_logic > grp_fu_251_ce;
    sc_signal< sc_logic > grp_fu_265_ce;
    sc_signal< sc_logic > grp_fu_270_ce;
    sc_signal< sc_lv<64> > grp_fu_275_p0;
    sc_signal< sc_logic > grp_fu_275_ce;
    sc_signal< sc_lv<139> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<139> ap_ST_st1_fsm_0;
    static const sc_lv<139> ap_ST_st2_fsm_1;
    static const sc_lv<139> ap_ST_st3_fsm_2;
    static const sc_lv<139> ap_ST_st4_fsm_3;
    static const sc_lv<139> ap_ST_st5_fsm_4;
    static const sc_lv<139> ap_ST_st6_fsm_5;
    static const sc_lv<139> ap_ST_st7_fsm_6;
    static const sc_lv<139> ap_ST_st8_fsm_7;
    static const sc_lv<139> ap_ST_st9_fsm_8;
    static const sc_lv<139> ap_ST_st10_fsm_9;
    static const sc_lv<139> ap_ST_st11_fsm_10;
    static const sc_lv<139> ap_ST_st12_fsm_11;
    static const sc_lv<139> ap_ST_st13_fsm_12;
    static const sc_lv<139> ap_ST_st14_fsm_13;
    static const sc_lv<139> ap_ST_st15_fsm_14;
    static const sc_lv<139> ap_ST_st16_fsm_15;
    static const sc_lv<139> ap_ST_st17_fsm_16;
    static const sc_lv<139> ap_ST_st18_fsm_17;
    static const sc_lv<139> ap_ST_st19_fsm_18;
    static const sc_lv<139> ap_ST_st20_fsm_19;
    static const sc_lv<139> ap_ST_st21_fsm_20;
    static const sc_lv<139> ap_ST_st22_fsm_21;
    static const sc_lv<139> ap_ST_st23_fsm_22;
    static const sc_lv<139> ap_ST_st24_fsm_23;
    static const sc_lv<139> ap_ST_st25_fsm_24;
    static const sc_lv<139> ap_ST_st26_fsm_25;
    static const sc_lv<139> ap_ST_st27_fsm_26;
    static const sc_lv<139> ap_ST_st28_fsm_27;
    static const sc_lv<139> ap_ST_st29_fsm_28;
    static const sc_lv<139> ap_ST_st30_fsm_29;
    static const sc_lv<139> ap_ST_st31_fsm_30;
    static const sc_lv<139> ap_ST_st32_fsm_31;
    static const sc_lv<139> ap_ST_st33_fsm_32;
    static const sc_lv<139> ap_ST_st34_fsm_33;
    static const sc_lv<139> ap_ST_st35_fsm_34;
    static const sc_lv<139> ap_ST_st36_fsm_35;
    static const sc_lv<139> ap_ST_st37_fsm_36;
    static const sc_lv<139> ap_ST_st38_fsm_37;
    static const sc_lv<139> ap_ST_st39_fsm_38;
    static const sc_lv<139> ap_ST_st40_fsm_39;
    static const sc_lv<139> ap_ST_st41_fsm_40;
    static const sc_lv<139> ap_ST_st42_fsm_41;
    static const sc_lv<139> ap_ST_st43_fsm_42;
    static const sc_lv<139> ap_ST_st44_fsm_43;
    static const sc_lv<139> ap_ST_st45_fsm_44;
    static const sc_lv<139> ap_ST_st46_fsm_45;
    static const sc_lv<139> ap_ST_st47_fsm_46;
    static const sc_lv<139> ap_ST_st48_fsm_47;
    static const sc_lv<139> ap_ST_st49_fsm_48;
    static const sc_lv<139> ap_ST_st50_fsm_49;
    static const sc_lv<139> ap_ST_st51_fsm_50;
    static const sc_lv<139> ap_ST_st52_fsm_51;
    static const sc_lv<139> ap_ST_st53_fsm_52;
    static const sc_lv<139> ap_ST_st54_fsm_53;
    static const sc_lv<139> ap_ST_st55_fsm_54;
    static const sc_lv<139> ap_ST_st56_fsm_55;
    static const sc_lv<139> ap_ST_st57_fsm_56;
    static const sc_lv<139> ap_ST_st58_fsm_57;
    static const sc_lv<139> ap_ST_st59_fsm_58;
    static const sc_lv<139> ap_ST_st60_fsm_59;
    static const sc_lv<139> ap_ST_st61_fsm_60;
    static const sc_lv<139> ap_ST_st62_fsm_61;
    static const sc_lv<139> ap_ST_st63_fsm_62;
    static const sc_lv<139> ap_ST_st64_fsm_63;
    static const sc_lv<139> ap_ST_st65_fsm_64;
    static const sc_lv<139> ap_ST_st66_fsm_65;
    static const sc_lv<139> ap_ST_st67_fsm_66;
    static const sc_lv<139> ap_ST_st68_fsm_67;
    static const sc_lv<139> ap_ST_st69_fsm_68;
    static const sc_lv<139> ap_ST_st70_fsm_69;
    static const sc_lv<139> ap_ST_st71_fsm_70;
    static const sc_lv<139> ap_ST_st72_fsm_71;
    static const sc_lv<139> ap_ST_st73_fsm_72;
    static const sc_lv<139> ap_ST_st74_fsm_73;
    static const sc_lv<139> ap_ST_st75_fsm_74;
    static const sc_lv<139> ap_ST_st76_fsm_75;
    static const sc_lv<139> ap_ST_st77_fsm_76;
    static const sc_lv<139> ap_ST_st78_fsm_77;
    static const sc_lv<139> ap_ST_st79_fsm_78;
    static const sc_lv<139> ap_ST_st80_fsm_79;
    static const sc_lv<139> ap_ST_st81_fsm_80;
    static const sc_lv<139> ap_ST_st82_fsm_81;
    static const sc_lv<139> ap_ST_st83_fsm_82;
    static const sc_lv<139> ap_ST_st84_fsm_83;
    static const sc_lv<139> ap_ST_st85_fsm_84;
    static const sc_lv<139> ap_ST_st86_fsm_85;
    static const sc_lv<139> ap_ST_st87_fsm_86;
    static const sc_lv<139> ap_ST_st88_fsm_87;
    static const sc_lv<139> ap_ST_st89_fsm_88;
    static const sc_lv<139> ap_ST_st90_fsm_89;
    static const sc_lv<139> ap_ST_st91_fsm_90;
    static const sc_lv<139> ap_ST_st92_fsm_91;
    static const sc_lv<139> ap_ST_st93_fsm_92;
    static const sc_lv<139> ap_ST_st94_fsm_93;
    static const sc_lv<139> ap_ST_st95_fsm_94;
    static const sc_lv<139> ap_ST_st96_fsm_95;
    static const sc_lv<139> ap_ST_st97_fsm_96;
    static const sc_lv<139> ap_ST_st98_fsm_97;
    static const sc_lv<139> ap_ST_st99_fsm_98;
    static const sc_lv<139> ap_ST_st100_fsm_99;
    static const sc_lv<139> ap_ST_st101_fsm_100;
    static const sc_lv<139> ap_ST_st102_fsm_101;
    static const sc_lv<139> ap_ST_st103_fsm_102;
    static const sc_lv<139> ap_ST_st104_fsm_103;
    static const sc_lv<139> ap_ST_st105_fsm_104;
    static const sc_lv<139> ap_ST_st106_fsm_105;
    static const sc_lv<139> ap_ST_st107_fsm_106;
    static const sc_lv<139> ap_ST_st108_fsm_107;
    static const sc_lv<139> ap_ST_st109_fsm_108;
    static const sc_lv<139> ap_ST_st110_fsm_109;
    static const sc_lv<139> ap_ST_st111_fsm_110;
    static const sc_lv<139> ap_ST_st112_fsm_111;
    static const sc_lv<139> ap_ST_st113_fsm_112;
    static const sc_lv<139> ap_ST_st114_fsm_113;
    static const sc_lv<139> ap_ST_st115_fsm_114;
    static const sc_lv<139> ap_ST_st116_fsm_115;
    static const sc_lv<139> ap_ST_st117_fsm_116;
    static const sc_lv<139> ap_ST_st118_fsm_117;
    static const sc_lv<139> ap_ST_st119_fsm_118;
    static const sc_lv<139> ap_ST_st120_fsm_119;
    static const sc_lv<139> ap_ST_st121_fsm_120;
    static const sc_lv<139> ap_ST_st122_fsm_121;
    static const sc_lv<139> ap_ST_st123_fsm_122;
    static const sc_lv<139> ap_ST_st124_fsm_123;
    static const sc_lv<139> ap_ST_st125_fsm_124;
    static const sc_lv<139> ap_ST_st126_fsm_125;
    static const sc_lv<139> ap_ST_st127_fsm_126;
    static const sc_lv<139> ap_ST_st128_fsm_127;
    static const sc_lv<139> ap_ST_st129_fsm_128;
    static const sc_lv<139> ap_ST_st130_fsm_129;
    static const sc_lv<139> ap_ST_st131_fsm_130;
    static const sc_lv<139> ap_ST_st132_fsm_131;
    static const sc_lv<139> ap_ST_st133_fsm_132;
    static const sc_lv<139> ap_ST_st134_fsm_133;
    static const sc_lv<139> ap_ST_st135_fsm_134;
    static const sc_lv<139> ap_ST_st136_fsm_135;
    static const sc_lv<139> ap_ST_st137_fsm_136;
    static const sc_lv<139> ap_ST_st138_fsm_137;
    static const sc_lv<139> ap_ST_st139_fsm_138;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_48;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_4C;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_51;
    static const sc_lv<32> ap_const_lv32_20;
    static const sc_lv<32> ap_const_lv32_64;
    static const sc_lv<32> ap_const_lv32_25;
    static const sc_lv<32> ap_const_lv32_69;
    static const sc_lv<32> ap_const_lv32_44;
    static const sc_lv<32> ap_const_lv32_88;
    static const sc_lv<32> ap_const_lv32_45;
    static const sc_lv<32> ap_const_lv32_89;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_47;
    static const sc_lv<32> ap_const_lv32_49;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_46;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<15> ap_const_lv15_0;
    static const sc_lv<32> ap_const_lv32_8A;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<32> ap_const_lv32_52;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_4D;
    static const sc_lv<64> ap_const_lv64_3FF0000000000000;
    static const sc_lv<32> ap_const_lv32_21;
    static const sc_lv<32> ap_const_lv32_65;
    static const sc_lv<32> ap_const_lv32_26;
    static const sc_lv<32> ap_const_lv32_6A;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_53;
    static const sc_lv<10> ap_const_lv10_372;
    static const sc_lv<10> ap_const_lv10_1;
    static const sc_lv<5> ap_const_lv5_19;
    static const sc_lv<5> ap_const_lv5_1;
    static const sc_lv<10> ap_const_lv10_373;
    static const sc_lv<15> ap_const_lv15_19;
    static const sc_lv<32> ap_const_lv32_80000000;
    static const sc_lv<3> ap_const_lv3_4;
    static const sc_lv<3> ap_const_lv3_1;
    static const sc_lv<5> ap_const_lv5_1A;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<64> ap_const_lv64_0;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_sig_bdd_157();
    void thread_ap_sig_bdd_216();
    void thread_ap_sig_bdd_228();
    void thread_ap_sig_bdd_242();
    void thread_ap_sig_bdd_249();
    void thread_ap_sig_bdd_259();
    void thread_ap_sig_bdd_266();
    void thread_ap_sig_bdd_276();
    void thread_ap_sig_bdd_283();
    void thread_ap_sig_bdd_293();
    void thread_ap_sig_bdd_300();
    void thread_ap_sig_bdd_310();
    void thread_ap_sig_bdd_317();
    void thread_ap_sig_bdd_327();
    void thread_ap_sig_bdd_334();
    void thread_ap_sig_bdd_344();
    void thread_ap_sig_bdd_360();
    void thread_ap_sig_bdd_384();
    void thread_ap_sig_bdd_394();
    void thread_ap_sig_bdd_416();
    void thread_ap_sig_bdd_430();
    void thread_ap_sig_bdd_439();
    void thread_ap_sig_bdd_451();
    void thread_ap_sig_bdd_465();
    void thread_ap_sig_bdd_477();
    void thread_ap_sig_bdd_508();
    void thread_ap_sig_bdd_515();
    void thread_ap_sig_bdd_532();
    void thread_ap_sig_bdd_539();
    void thread_ap_sig_bdd_549();
    void thread_ap_sig_bdd_556();
    void thread_ap_sig_bdd_565();
    void thread_ap_sig_bdd_572();
    void thread_ap_sig_cseq_ST_st101_fsm_100();
    void thread_ap_sig_cseq_ST_st102_fsm_101();
    void thread_ap_sig_cseq_ST_st106_fsm_105();
    void thread_ap_sig_cseq_ST_st107_fsm_106();
    void thread_ap_sig_cseq_ST_st10_fsm_9();
    void thread_ap_sig_cseq_ST_st137_fsm_136();
    void thread_ap_sig_cseq_ST_st138_fsm_137();
    void thread_ap_sig_cseq_ST_st139_fsm_138();
    void thread_ap_sig_cseq_ST_st14_fsm_13();
    void thread_ap_sig_cseq_ST_st15_fsm_14();
    void thread_ap_sig_cseq_ST_st16_fsm_15();
    void thread_ap_sig_cseq_ST_st1_fsm_0();
    void thread_ap_sig_cseq_ST_st2_fsm_1();
    void thread_ap_sig_cseq_ST_st33_fsm_32();
    void thread_ap_sig_cseq_ST_st34_fsm_33();
    void thread_ap_sig_cseq_ST_st38_fsm_37();
    void thread_ap_sig_cseq_ST_st39_fsm_38();
    void thread_ap_sig_cseq_ST_st3_fsm_2();
    void thread_ap_sig_cseq_ST_st4_fsm_3();
    void thread_ap_sig_cseq_ST_st5_fsm_4();
    void thread_ap_sig_cseq_ST_st69_fsm_68();
    void thread_ap_sig_cseq_ST_st6_fsm_5();
    void thread_ap_sig_cseq_ST_st70_fsm_69();
    void thread_ap_sig_cseq_ST_st71_fsm_70();
    void thread_ap_sig_cseq_ST_st72_fsm_71();
    void thread_ap_sig_cseq_ST_st73_fsm_72();
    void thread_ap_sig_cseq_ST_st74_fsm_73();
    void thread_ap_sig_cseq_ST_st77_fsm_76();
    void thread_ap_sig_cseq_ST_st78_fsm_77();
    void thread_ap_sig_cseq_ST_st82_fsm_81();
    void thread_ap_sig_cseq_ST_st83_fsm_82();
    void thread_ap_sig_cseq_ST_st84_fsm_83();
    void thread_ap_sig_cseq_ST_st9_fsm_8();
    void thread_exitcond1_fu_405_p2();
    void thread_exitcond2_fu_357_p2();
    void thread_exitcond3_fu_336_p2();
    void thread_exitcond4_fu_319_p2();
    void thread_exitcond_fu_426_p2();
    void thread_grp_fu_245_ce();
    void thread_grp_fu_245_p0();
    void thread_grp_fu_245_p1();
    void thread_grp_fu_251_ce();
    void thread_grp_fu_251_p0();
    void thread_grp_fu_251_p1();
    void thread_grp_fu_259_p0();
    void thread_grp_fu_262_p0();
    void thread_grp_fu_265_ce();
    void thread_grp_fu_265_p0();
    void thread_grp_fu_265_p1();
    void thread_grp_fu_270_ce();
    void thread_grp_fu_270_p0();
    void thread_grp_fu_270_p1();
    void thread_grp_fu_275_ce();
    void thread_grp_fu_275_p0();
    void thread_grp_fu_275_p1();
    void thread_hidden_address0();
    void thread_hidden_ce0();
    void thread_hidden_d0();
    void thread_hidden_we0();
    void thread_input_r_address0();
    void thread_input_r_ce0();
    void thread_input_r_d0();
    void thread_input_r_we0();
    void thread_j_1_fu_325_p2();
    void thread_j_2_fu_342_p2();
    void thread_j_3_fu_411_p2();
    void thread_k_1_fu_363_p2();
    void thread_k_2_fu_432_p2();
    void thread_next_mul_fu_374_p2();
    void thread_output_r_address0();
    void thread_output_r_ce0();
    void thread_output_r_d0();
    void thread_output_r_we0();
    void thread_pattern_address0();
    void thread_pattern_ce0();
    void thread_tmp_13_fu_475_p1();
    void thread_tmp_13_neg_fu_469_p2();
    void thread_tmp_13_to_int_fu_465_p1();
    void thread_tmp_19_fu_438_p1();
    void thread_tmp_1_fu_369_p1();
    void thread_tmp_22_fu_385_p1();
    void thread_tmp_23_fu_443_p3();
    void thread_tmp_24_fu_460_p1();
    void thread_tmp_2_fu_348_p1();
    void thread_tmp_2_trn_cast_fu_353_p1();
    void thread_tmp_4_fu_417_p1();
    void thread_tmp_4_trn_cast_fu_422_p1();
    void thread_tmp_5_fu_400_p1();
    void thread_tmp_5_neg_fu_394_p2();
    void thread_tmp_5_to_int_fu_390_p1();
    void thread_tmp_fu_331_p1();
    void thread_weightHO_addr3_cast_fu_451_p1();
    void thread_weightHO_addr4_fu_455_p2();
    void thread_weightHO_address0();
    void thread_weightHO_ce0();
    void thread_weightIH_addr2_fu_380_p2();
    void thread_weightIH_address0();
    void thread_weightIH_ce0();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif