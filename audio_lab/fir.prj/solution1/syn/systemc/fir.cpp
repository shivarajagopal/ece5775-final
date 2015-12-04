// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2014.2
// Copyright (C) 2014 Xilinx Inc. All rights reserved.
// 
// ===========================================================

#include "fir.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic fir::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic fir::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<3> fir::ap_ST_st1_fsm_0 = "000";
const sc_lv<3> fir::ap_ST_st2_fsm_1 = "1";
const sc_lv<3> fir::ap_ST_st3_fsm_2 = "10";
const sc_lv<3> fir::ap_ST_pp0_stg0_fsm_3 = "11";
const sc_lv<3> fir::ap_ST_st7_fsm_4 = "100";
const int fir::C_DATA_WIDTH = "100000";
const sc_lv<1> fir::ap_const_lv1_0 = "0";
const sc_lv<6> fir::ap_const_lv6_39 = "111001";
const sc_lv<6> fir::ap_const_lv6_0 = "000000";
const sc_lv<26> fir::ap_const_lv26_3FFFE86 = "11111111111111111010000110";
const sc_lv<6> fir::ap_const_lv6_3F = "111111";
const sc_lv<32> fir::ap_const_lv32_F = "1111";
const sc_lv<32> fir::ap_const_lv32_1E = "11110";

fir::fir(sc_module_name name) : sc_module(name), mVcdFile(0) {
    shift_reg_U = new fir_shift_reg("shift_reg_U");
    shift_reg_U->clk(ap_clk);
    shift_reg_U->reset(fir_ap_rst);
    shift_reg_U->address0(shift_reg_address0);
    shift_reg_U->ce0(shift_reg_ce0);
    shift_reg_U->q0(shift_reg_q0);
    shift_reg_U->address1(shift_reg_address1);
    shift_reg_U->ce1(shift_reg_ce1);
    shift_reg_U->we1(shift_reg_we1);
    shift_reg_U->d1(shift_reg_d1);
    c_U = new fir_c("c_U");
    c_U->clk(ap_clk);
    c_U->reset(fir_ap_rst);
    c_U->address0(c_address0);
    c_U->ce0(c_ce0);
    c_U->q0(c_q0);
    fir_fir_io_s_axi_U = new fir_fir_io_s_axi<C_S_AXI_FIR_IO_ADDR_WIDTH,C_S_AXI_FIR_IO_DATA_WIDTH>("fir_fir_io_s_axi_U");
    fir_fir_io_s_axi_U->AWVALID(s_axi_fir_io_AWVALID);
    fir_fir_io_s_axi_U->AWREADY(s_axi_fir_io_AWREADY);
    fir_fir_io_s_axi_U->AWADDR(s_axi_fir_io_AWADDR);
    fir_fir_io_s_axi_U->WVALID(s_axi_fir_io_WVALID);
    fir_fir_io_s_axi_U->WREADY(s_axi_fir_io_WREADY);
    fir_fir_io_s_axi_U->WDATA(s_axi_fir_io_WDATA);
    fir_fir_io_s_axi_U->WSTRB(s_axi_fir_io_WSTRB);
    fir_fir_io_s_axi_U->ARVALID(s_axi_fir_io_ARVALID);
    fir_fir_io_s_axi_U->ARREADY(s_axi_fir_io_ARREADY);
    fir_fir_io_s_axi_U->ARADDR(s_axi_fir_io_ARADDR);
    fir_fir_io_s_axi_U->RVALID(s_axi_fir_io_RVALID);
    fir_fir_io_s_axi_U->RREADY(s_axi_fir_io_RREADY);
    fir_fir_io_s_axi_U->RDATA(s_axi_fir_io_RDATA);
    fir_fir_io_s_axi_U->RRESP(s_axi_fir_io_RRESP);
    fir_fir_io_s_axi_U->BVALID(s_axi_fir_io_BVALID);
    fir_fir_io_s_axi_U->BREADY(s_axi_fir_io_BREADY);
    fir_fir_io_s_axi_U->BRESP(s_axi_fir_io_BRESP);
    fir_fir_io_s_axi_U->ACLK(ap_clk);
    fir_fir_io_s_axi_U->ARESETN(ap_rst_n);
    fir_fir_io_s_axi_U->ACLK_EN(fir_fir_io_s_axi_U_ap_dummy_ce);
    fir_fir_io_s_axi_U->ap_start(ap_start);
    fir_fir_io_s_axi_U->interrupt(interrupt);
    fir_fir_io_s_axi_U->ap_ready(ap_ready);
    fir_fir_io_s_axi_U->ap_done(ap_done);
    fir_fir_io_s_axi_U->ap_idle(ap_idle);
    fir_fir_io_s_axi_U->y(y);
    fir_fir_io_s_axi_U->y_ap_vld(y_ap_vld);
    fir_fir_io_s_axi_U->x(x);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_acc_1_fu_216_p1);
    sensitive << ( ap_CS_fsm );
    sensitive << ( tmp_5_fu_206_p2 );

    SC_METHOD(thread_acc_1_fu_216_p2);
    sensitive << ( tmp_2_reg_272 );
    sensitive << ( acc_1_fu_216_p1 );

    SC_METHOD(thread_acc_2_fu_197_p0);
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_reg_ppiten_pp0_it2 );
    sensitive << ( tmp_1_fu_187_p2 );

    SC_METHOD(thread_acc_2_fu_197_p2);
    sensitive << ( acc1_reg_126 );
    sensitive << ( acc_2_fu_197_p0 );

    SC_METHOD(thread_acc_cast_fu_150_p1);
    sensitive << ( acc_fu_144_p2 );

    SC_METHOD(thread_acc_fu_144_p0);
    sensitive << ( ap_CS_fsm );
    sensitive << ( reg_136 );

    SC_METHOD(thread_acc_fu_144_p2);
    sensitive << ( acc_fu_144_p0 );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_c_address0);
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_reg_ppiten_pp0_it0 );
    sensitive << ( tmp_6_fu_171_p1 );

    SC_METHOD(thread_c_ce0);
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_reg_ppiten_pp0_it0 );

    SC_METHOD(thread_fir_ap_rst);
    sensitive << ( ap_rst_n );

    SC_METHOD(thread_fir_fir_io_s_axi_U_ap_dummy_ce);

    SC_METHOD(thread_i_1_fu_160_p2);
    sensitive << ( i_phi_fu_119_p4 );

    SC_METHOD(thread_i_phi_fu_119_p4);
    sensitive << ( ap_CS_fsm );
    sensitive << ( i_reg_115 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( tmp_3_reg_243 );
    sensitive << ( i_1_reg_247 );

    SC_METHOD(thread_shift_reg_address0);
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_reg_ppiten_pp0_it0 );
    sensitive << ( tmp_s_fu_166_p1 );

    SC_METHOD(thread_shift_reg_address1);
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( tmp_6_reg_257 );

    SC_METHOD(thread_shift_reg_ce0);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_reg_ppiten_pp0_it0 );

    SC_METHOD(thread_shift_reg_ce1);
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_reg_ppiten_pp0_it1 );

    SC_METHOD(thread_shift_reg_d1);
    sensitive << ( ap_CS_fsm );
    sensitive << ( x );
    sensitive << ( shift_reg_q0 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );

    SC_METHOD(thread_shift_reg_we1);
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( tmp_3_reg_243 );

    SC_METHOD(thread_tmp_1_fu_187_p0);
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_reg_ppiten_pp0_it2 );
    sensitive << ( c_load_reg_267 );

    SC_METHOD(thread_tmp_1_fu_187_p1);
    sensitive << ( ap_CS_fsm );
    sensitive << ( reg_136 );
    sensitive << ( ap_reg_ppiten_pp0_it2 );

    SC_METHOD(thread_tmp_1_fu_187_p2);
    sensitive << ( tmp_1_fu_187_p0 );
    sensitive << ( tmp_1_fu_187_p1 );

    SC_METHOD(thread_tmp_2_fu_176_p1);
    sensitive << ( acc1_reg_126 );

    SC_METHOD(thread_tmp_3_fu_154_p2);
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_reg_ppiten_pp0_it0 );
    sensitive << ( i_phi_fu_119_p4 );

    SC_METHOD(thread_tmp_5_fu_206_p0);
    sensitive << ( ap_CS_fsm );
    sensitive << ( x );

    SC_METHOD(thread_tmp_5_fu_206_p2);
    sensitive << ( tmp_5_fu_206_p0 );

    SC_METHOD(thread_tmp_6_fu_171_p1);
    sensitive << ( i_phi_fu_119_p4 );

    SC_METHOD(thread_tmp_s_fu_166_p1);
    sensitive << ( i_1_fu_160_p2 );

    SC_METHOD(thread_y);
    sensitive << ( ap_CS_fsm );
    sensitive << ( acc_1_fu_216_p2 );

    SC_METHOD(thread_y_ap_vld);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( ap_reg_ppiten_pp0_it2 );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    ap_CS_fsm = "000";
    ap_reg_ppiten_pp0_it1 = SC_LOGIC_0;
    ap_reg_ppiten_pp0_it0 = SC_LOGIC_0;
    ap_reg_ppiten_pp0_it2 = SC_LOGIC_0;
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "fir_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT__
    sc_trace(mVcdFile, s_axi_fir_io_AWVALID, "(port)s_axi_fir_io_AWVALID");
    sc_trace(mVcdFile, s_axi_fir_io_AWREADY, "(port)s_axi_fir_io_AWREADY");
    sc_trace(mVcdFile, s_axi_fir_io_AWADDR, "(port)s_axi_fir_io_AWADDR");
    sc_trace(mVcdFile, s_axi_fir_io_WVALID, "(port)s_axi_fir_io_WVALID");
    sc_trace(mVcdFile, s_axi_fir_io_WREADY, "(port)s_axi_fir_io_WREADY");
    sc_trace(mVcdFile, s_axi_fir_io_WDATA, "(port)s_axi_fir_io_WDATA");
    sc_trace(mVcdFile, s_axi_fir_io_WSTRB, "(port)s_axi_fir_io_WSTRB");
    sc_trace(mVcdFile, s_axi_fir_io_ARVALID, "(port)s_axi_fir_io_ARVALID");
    sc_trace(mVcdFile, s_axi_fir_io_ARREADY, "(port)s_axi_fir_io_ARREADY");
    sc_trace(mVcdFile, s_axi_fir_io_ARADDR, "(port)s_axi_fir_io_ARADDR");
    sc_trace(mVcdFile, s_axi_fir_io_RVALID, "(port)s_axi_fir_io_RVALID");
    sc_trace(mVcdFile, s_axi_fir_io_RREADY, "(port)s_axi_fir_io_RREADY");
    sc_trace(mVcdFile, s_axi_fir_io_RDATA, "(port)s_axi_fir_io_RDATA");
    sc_trace(mVcdFile, s_axi_fir_io_RRESP, "(port)s_axi_fir_io_RRESP");
    sc_trace(mVcdFile, s_axi_fir_io_BVALID, "(port)s_axi_fir_io_BVALID");
    sc_trace(mVcdFile, s_axi_fir_io_BREADY, "(port)s_axi_fir_io_BREADY");
    sc_trace(mVcdFile, s_axi_fir_io_BRESP, "(port)s_axi_fir_io_BRESP");
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst_n, "(port)ap_rst_n");
    sc_trace(mVcdFile, interrupt, "(port)interrupt");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_start, "ap_start");
    sc_trace(mVcdFile, ap_done, "ap_done");
    sc_trace(mVcdFile, ap_idle, "ap_idle");
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_ready, "ap_ready");
    sc_trace(mVcdFile, y, "y");
    sc_trace(mVcdFile, y_ap_vld, "y_ap_vld");
    sc_trace(mVcdFile, x, "x");
    sc_trace(mVcdFile, fir_ap_rst, "fir_ap_rst");
    sc_trace(mVcdFile, shift_reg_address0, "shift_reg_address0");
    sc_trace(mVcdFile, shift_reg_ce0, "shift_reg_ce0");
    sc_trace(mVcdFile, shift_reg_q0, "shift_reg_q0");
    sc_trace(mVcdFile, shift_reg_address1, "shift_reg_address1");
    sc_trace(mVcdFile, shift_reg_ce1, "shift_reg_ce1");
    sc_trace(mVcdFile, shift_reg_we1, "shift_reg_we1");
    sc_trace(mVcdFile, shift_reg_d1, "shift_reg_d1");
    sc_trace(mVcdFile, c_address0, "c_address0");
    sc_trace(mVcdFile, c_ce0, "c_ce0");
    sc_trace(mVcdFile, c_q0, "c_q0");
    sc_trace(mVcdFile, fir_fir_io_s_axi_U_ap_dummy_ce, "fir_fir_io_s_axi_U_ap_dummy_ce");
    sc_trace(mVcdFile, i_reg_115, "i_reg_115");
    sc_trace(mVcdFile, acc1_reg_126, "acc1_reg_126");
    sc_trace(mVcdFile, reg_136, "reg_136");
    sc_trace(mVcdFile, ap_reg_ppiten_pp0_it1, "ap_reg_ppiten_pp0_it1");
    sc_trace(mVcdFile, ap_reg_ppiten_pp0_it0, "ap_reg_ppiten_pp0_it0");
    sc_trace(mVcdFile, ap_reg_ppiten_pp0_it2, "ap_reg_ppiten_pp0_it2");
    sc_trace(mVcdFile, tmp_3_reg_243, "tmp_3_reg_243");
    sc_trace(mVcdFile, acc_cast_fu_150_p1, "acc_cast_fu_150_p1");
    sc_trace(mVcdFile, tmp_3_fu_154_p2, "tmp_3_fu_154_p2");
    sc_trace(mVcdFile, ap_reg_ppstg_tmp_3_reg_243_pp0_it1, "ap_reg_ppstg_tmp_3_reg_243_pp0_it1");
    sc_trace(mVcdFile, i_1_fu_160_p2, "i_1_fu_160_p2");
    sc_trace(mVcdFile, i_1_reg_247, "i_1_reg_247");
    sc_trace(mVcdFile, tmp_6_fu_171_p1, "tmp_6_fu_171_p1");
    sc_trace(mVcdFile, tmp_6_reg_257, "tmp_6_reg_257");
    sc_trace(mVcdFile, c_load_reg_267, "c_load_reg_267");
    sc_trace(mVcdFile, tmp_2_fu_176_p1, "tmp_2_fu_176_p1");
    sc_trace(mVcdFile, tmp_2_reg_272, "tmp_2_reg_272");
    sc_trace(mVcdFile, acc_2_fu_197_p2, "acc_2_fu_197_p2");
    sc_trace(mVcdFile, i_phi_fu_119_p4, "i_phi_fu_119_p4");
    sc_trace(mVcdFile, tmp_s_fu_166_p1, "tmp_s_fu_166_p1");
    sc_trace(mVcdFile, acc_fu_144_p0, "acc_fu_144_p0");
    sc_trace(mVcdFile, acc_fu_144_p2, "acc_fu_144_p2");
    sc_trace(mVcdFile, tmp_1_fu_187_p0, "tmp_1_fu_187_p0");
    sc_trace(mVcdFile, tmp_1_fu_187_p1, "tmp_1_fu_187_p1");
    sc_trace(mVcdFile, tmp_1_fu_187_p2, "tmp_1_fu_187_p2");
    sc_trace(mVcdFile, acc_2_fu_197_p0, "acc_2_fu_197_p0");
    sc_trace(mVcdFile, tmp_5_fu_206_p0, "tmp_5_fu_206_p0");
    sc_trace(mVcdFile, tmp_5_fu_206_p2, "tmp_5_fu_206_p2");
    sc_trace(mVcdFile, acc_1_fu_216_p1, "acc_1_fu_216_p1");
    sc_trace(mVcdFile, acc_1_fu_216_p2, "acc_1_fu_216_p2");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
    mHdltvinHandle.open("fir.hdltvin.dat");
    mHdltvoutHandle.open("fir.hdltvout.dat");
}

fir::~fir() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
    delete shift_reg_U;
    delete c_U;
    delete fir_fir_io_s_axi_U;
}

void fir::thread_ap_clk_no_reset_() {
    if ((esl_seteq<1,3,3>(ap_ST_pp0_stg0_fsm_3, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_3_reg_243_pp0_it1.read()))) {
        acc1_reg_126 = acc_2_fu_197_p2.read();
    } else if (esl_seteq<1,3,3>(ap_ST_st3_fsm_2, ap_CS_fsm.read())) {
        acc1_reg_126 = acc_cast_fu_150_p1.read();
    }
    if ( ap_rst_n.read() == ap_const_logic_0) {
        ap_CS_fsm = ap_ST_st1_fsm_0;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst_n.read() == ap_const_logic_0) {
        ap_reg_ppiten_pp0_it0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,3,3>(ap_ST_pp0_stg0_fsm_3, ap_CS_fsm.read()) && 
             !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_154_p2.read()))) {
            ap_reg_ppiten_pp0_it0 = ap_const_logic_0;
        } else if (esl_seteq<1,3,3>(ap_ST_st3_fsm_2, ap_CS_fsm.read())) {
            ap_reg_ppiten_pp0_it0 = ap_const_logic_1;
        }
    }
    if ( ap_rst_n.read() == ap_const_logic_0) {
        ap_reg_ppiten_pp0_it1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,3,3>(ap_ST_pp0_stg0_fsm_3, ap_CS_fsm.read())) {
            ap_reg_ppiten_pp0_it1 = ap_reg_ppiten_pp0_it0.read();
        } else if (esl_seteq<1,3,3>(ap_ST_st3_fsm_2, ap_CS_fsm.read())) {
            ap_reg_ppiten_pp0_it1 = ap_const_logic_0;
        }
    }
    if ( ap_rst_n.read() == ap_const_logic_0) {
        ap_reg_ppiten_pp0_it2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,3,3>(ap_ST_pp0_stg0_fsm_3, ap_CS_fsm.read())) {
            ap_reg_ppiten_pp0_it2 = ap_reg_ppiten_pp0_it1.read();
        } else if (esl_seteq<1,3,3>(ap_ST_st3_fsm_2, ap_CS_fsm.read())) {
            ap_reg_ppiten_pp0_it2 = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,3,3>(ap_ST_pp0_stg0_fsm_3, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(tmp_3_reg_243.read(), ap_const_lv1_0))) {
        i_reg_115 = i_1_reg_247.read();
    } else if (esl_seteq<1,3,3>(ap_ST_st3_fsm_2, ap_CS_fsm.read())) {
        i_reg_115 = ap_const_lv6_39;
    }
    if (esl_seteq<1,3,3>(ap_ST_pp0_stg0_fsm_3, ap_CS_fsm.read())) {
        ap_reg_ppstg_tmp_3_reg_243_pp0_it1 = tmp_3_reg_243.read();
    }
    if ((esl_seteq<1,3,3>(ap_ST_pp0_stg0_fsm_3, ap_CS_fsm.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && esl_seteq<1,1,1>(tmp_3_reg_243.read(), ap_const_lv1_0))) {
        c_load_reg_267 = c_q0.read();
    }
    if ((esl_seteq<1,3,3>(ap_ST_pp0_stg0_fsm_3, ap_CS_fsm.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_3_fu_154_p2.read()))) {
        i_1_reg_247 = i_1_fu_160_p2.read();
        tmp_6_reg_257 = tmp_6_fu_171_p1.read();
    }
    if ((esl_seteq<1,3,3>(ap_ST_st2_fsm_1, ap_CS_fsm.read()) || (esl_seteq<1,3,3>(ap_ST_pp0_stg0_fsm_3, ap_CS_fsm.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
  esl_seteq<1,1,1>(tmp_3_reg_243.read(), ap_const_lv1_0)))) {
        reg_136 = shift_reg_q0.read();
    }
    if ((esl_seteq<1,3,3>(ap_ST_pp0_stg0_fsm_3, ap_CS_fsm.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()))) {
        tmp_2_reg_272 = tmp_2_fu_176_p1.read();
    }
    if ((esl_seteq<1,3,3>(ap_ST_pp0_stg0_fsm_3, ap_CS_fsm.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        tmp_3_reg_243 = tmp_3_fu_154_p2.read();
    }
}

void fir::thread_acc_1_fu_216_p1() {
    acc_1_fu_216_p1 = esl_sext<31,26>(tmp_5_fu_206_p2.read());
}

void fir::thread_acc_1_fu_216_p2() {
    acc_1_fu_216_p2 = (!tmp_2_reg_272.read().is_01() || !acc_1_fu_216_p1.read().is_01())? sc_lv<31>(): (sc_bigint<31>(tmp_2_reg_272.read()) + sc_biguint<31>(acc_1_fu_216_p1.read()));
}

void fir::thread_acc_2_fu_197_p0() {
    acc_2_fu_197_p0 = esl_sext<37,32>(tmp_1_fu_187_p2.read());
}

void fir::thread_acc_2_fu_197_p2() {
    acc_2_fu_197_p2 = (!acc_2_fu_197_p0.read().is_01() || !acc1_reg_126.read().is_01())? sc_lv<37>(): (sc_bigint<37>(acc_2_fu_197_p0.read()) + sc_biguint<37>(acc1_reg_126.read()));
}

void fir::thread_acc_cast_fu_150_p1() {
    acc_cast_fu_150_p1 = esl_sext<37,26>(acc_fu_144_p2.read());
}

void fir::thread_acc_fu_144_p0() {
    acc_fu_144_p0 = reg_136.read();
}

void fir::thread_acc_fu_144_p2() {
    acc_fu_144_p2 = (!acc_fu_144_p0.read().is_01() || !ap_const_lv26_3FFFE86.is_01())? sc_lv<26>(): sc_bigint<16>(acc_fu_144_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE86);
}

void fir::thread_ap_done() {
    if (esl_seteq<1,3,3>(ap_ST_st7_fsm_4, ap_CS_fsm.read())) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void fir::thread_ap_idle() {
    if ((!esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()) && 
         esl_seteq<1,3,3>(ap_ST_st1_fsm_0, ap_CS_fsm.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void fir::thread_ap_ready() {
    if (esl_seteq<1,3,3>(ap_ST_st7_fsm_4, ap_CS_fsm.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void fir::thread_c_address0() {
    c_address0 =  (sc_lv<6>) (tmp_6_fu_171_p1.read());
}

void fir::thread_c_ce0() {
    if ((esl_seteq<1,3,3>(ap_ST_pp0_stg0_fsm_3, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        c_ce0 = ap_const_logic_1;
    } else {
        c_ce0 = ap_const_logic_0;
    }
}

void fir::thread_fir_ap_rst() {
    fir_ap_rst =  (sc_logic) (~ap_rst_n.read());
}

void fir::thread_fir_fir_io_s_axi_U_ap_dummy_ce() {
    fir_fir_io_s_axi_U_ap_dummy_ce = ap_const_logic_1;
}

void fir::thread_i_1_fu_160_p2() {
    i_1_fu_160_p2 = (!i_phi_fu_119_p4.read().is_01() || !ap_const_lv6_3F.is_01())? sc_lv<6>(): (sc_bigint<6>(i_phi_fu_119_p4.read()) + sc_biguint<6>(ap_const_lv6_3F));
}

void fir::thread_i_phi_fu_119_p4() {
    if ((esl_seteq<1,3,3>(ap_ST_pp0_stg0_fsm_3, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(tmp_3_reg_243.read(), ap_const_lv1_0))) {
        i_phi_fu_119_p4 = i_1_reg_247.read();
    } else {
        i_phi_fu_119_p4 = i_reg_115.read();
    }
}

void fir::thread_shift_reg_address0() {
    if ((esl_seteq<1,3,3>(ap_ST_pp0_stg0_fsm_3, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        shift_reg_address0 =  (sc_lv<6>) (tmp_s_fu_166_p1.read());
    } else if (esl_seteq<1,3,3>(ap_ST_st1_fsm_0, ap_CS_fsm.read())) {
        shift_reg_address0 = ap_const_lv6_39;
    } else {
        shift_reg_address0 = "XXXXXX";
    }
}

void fir::thread_shift_reg_address1() {
    if (esl_seteq<1,3,3>(ap_ST_st7_fsm_4, ap_CS_fsm.read())) {
        shift_reg_address1 = ap_const_lv6_0;
    } else if ((esl_seteq<1,3,3>(ap_ST_pp0_stg0_fsm_3, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()))) {
        shift_reg_address1 =  (sc_lv<6>) (tmp_6_reg_257.read());
    } else {
        shift_reg_address1 = "XXXXXX";
    }
}

void fir::thread_shift_reg_ce0() {
    if (((esl_seteq<1,3,3>(ap_ST_pp0_stg0_fsm_3, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,3,3>(ap_ST_st1_fsm_0, ap_CS_fsm.read()) && 
          !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)))) {
        shift_reg_ce0 = ap_const_logic_1;
    } else {
        shift_reg_ce0 = ap_const_logic_0;
    }
}

void fir::thread_shift_reg_ce1() {
    if (((esl_seteq<1,3,3>(ap_ST_pp0_stg0_fsm_3, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())) || 
         esl_seteq<1,3,3>(ap_ST_st7_fsm_4, ap_CS_fsm.read()))) {
        shift_reg_ce1 = ap_const_logic_1;
    } else {
        shift_reg_ce1 = ap_const_logic_0;
    }
}

void fir::thread_shift_reg_d1() {
    if (esl_seteq<1,3,3>(ap_ST_st7_fsm_4, ap_CS_fsm.read())) {
        shift_reg_d1 = x.read();
    } else if ((esl_seteq<1,3,3>(ap_ST_pp0_stg0_fsm_3, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()))) {
        shift_reg_d1 = shift_reg_q0.read();
    } else {
        shift_reg_d1 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void fir::thread_shift_reg_we1() {
    if (((esl_seteq<1,3,3>(ap_ST_pp0_stg0_fsm_3, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(tmp_3_reg_243.read(), ap_const_lv1_0)) || 
         esl_seteq<1,3,3>(ap_ST_st7_fsm_4, ap_CS_fsm.read()))) {
        shift_reg_we1 = ap_const_logic_1;
    } else {
        shift_reg_we1 = ap_const_logic_0;
    }
}

void fir::thread_tmp_1_fu_187_p0() {
    tmp_1_fu_187_p0 = c_load_reg_267.read();
}

void fir::thread_tmp_1_fu_187_p1() {
    tmp_1_fu_187_p1 = reg_136.read();
}

void fir::thread_tmp_1_fu_187_p2() {
    tmp_1_fu_187_p2 = (!tmp_1_fu_187_p0.read().is_01() || !tmp_1_fu_187_p1.read().is_01())? sc_lv<32>(): sc_bigint<16>(tmp_1_fu_187_p0.read()) * sc_bigint<16>(tmp_1_fu_187_p1.read());
}

void fir::thread_tmp_2_fu_176_p1() {
    tmp_2_fu_176_p1 = acc1_reg_126.read().range(31-1, 0);
}

void fir::thread_tmp_3_fu_154_p2() {
    tmp_3_fu_154_p2 = (!i_phi_fu_119_p4.read().is_01() || !ap_const_lv6_0.is_01())? sc_lv<1>(): sc_lv<1>(i_phi_fu_119_p4.read() == ap_const_lv6_0);
}

void fir::thread_tmp_5_fu_206_p0() {
    tmp_5_fu_206_p0 = x.read();
}

void fir::thread_tmp_5_fu_206_p2() {
    tmp_5_fu_206_p2 = (!tmp_5_fu_206_p0.read().is_01() || !ap_const_lv26_3FFFE86.is_01())? sc_lv<26>(): sc_bigint<16>(tmp_5_fu_206_p0.read()) * sc_bigint<26>(ap_const_lv26_3FFFE86);
}

void fir::thread_tmp_6_fu_171_p1() {
    tmp_6_fu_171_p1 = esl_zext<64,6>(i_phi_fu_119_p4.read());
}

void fir::thread_tmp_s_fu_166_p1() {
    tmp_s_fu_166_p1 = esl_zext<64,6>(i_1_fu_160_p2.read());
}

void fir::thread_y() {
    y = acc_1_fu_216_p2.read().range(30, 15);
}

void fir::thread_y_ap_vld() {
    if (esl_seteq<1,3,3>(ap_ST_st7_fsm_4, ap_CS_fsm.read())) {
        y_ap_vld = ap_const_logic_1;
    } else {
        y_ap_vld = ap_const_logic_0;
    }
}

void fir::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 0 : 
            if (!esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) {
                ap_NS_fsm = ap_ST_st2_fsm_1;
            } else {
                ap_NS_fsm = ap_ST_st1_fsm_0;
            }
            break;
        case 1 : 
            ap_NS_fsm = ap_ST_st3_fsm_2;
            break;
        case 2 : 
            ap_NS_fsm = ap_ST_pp0_stg0_fsm_3;
            break;
        case 3 : 
            if (!(esl_seteq<1,3,3>(ap_ST_pp0_stg0_fsm_3, ap_CS_fsm.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && !esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()))) {
                ap_NS_fsm = ap_ST_pp0_stg0_fsm_3;
            } else {
                ap_NS_fsm = ap_ST_st7_fsm_4;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_st1_fsm_0;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<3>) ("XXX");
            break;
    }
}

void fir::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"s_axi_fir_io_AWVALID\" :  \"" << s_axi_fir_io_AWVALID.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"s_axi_fir_io_AWREADY\" :  \"" << s_axi_fir_io_AWREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_fir_io_AWADDR\" :  \"" << s_axi_fir_io_AWADDR.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_fir_io_WVALID\" :  \"" << s_axi_fir_io_WVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_fir_io_WREADY\" :  \"" << s_axi_fir_io_WREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_fir_io_WDATA\" :  \"" << s_axi_fir_io_WDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_fir_io_WSTRB\" :  \"" << s_axi_fir_io_WSTRB.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_fir_io_ARVALID\" :  \"" << s_axi_fir_io_ARVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_fir_io_ARREADY\" :  \"" << s_axi_fir_io_ARREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_fir_io_ARADDR\" :  \"" << s_axi_fir_io_ARADDR.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_fir_io_RVALID\" :  \"" << s_axi_fir_io_RVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_fir_io_RREADY\" :  \"" << s_axi_fir_io_RREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_fir_io_RDATA\" :  \"" << s_axi_fir_io_RDATA.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_fir_io_RRESP\" :  \"" << s_axi_fir_io_RRESP.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_fir_io_BVALID\" :  \"" << s_axi_fir_io_BVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_fir_io_BREADY\" :  \"" << s_axi_fir_io_BREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_fir_io_BRESP\" :  \"" << s_axi_fir_io_BRESP.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_rst_n\" :  \"" << ap_rst_n.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"interrupt\" :  \"" << interrupt.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}
