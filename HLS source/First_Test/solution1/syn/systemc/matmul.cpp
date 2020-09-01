// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "matmul.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic matmul::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic matmul::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<7> matmul::ap_ST_fsm_state1 = "1";
const sc_lv<7> matmul::ap_ST_fsm_state2 = "10";
const sc_lv<7> matmul::ap_ST_fsm_state3 = "100";
const sc_lv<7> matmul::ap_ST_fsm_state4 = "1000";
const sc_lv<7> matmul::ap_ST_fsm_state5 = "10000";
const sc_lv<7> matmul::ap_ST_fsm_state6 = "100000";
const sc_lv<7> matmul::ap_ST_fsm_state7 = "1000000";
const sc_lv<32> matmul::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> matmul::ap_const_lv32_1 = "1";
const sc_lv<1> matmul::ap_const_lv1_0 = "0";
const sc_lv<32> matmul::ap_const_lv32_2 = "10";
const sc_lv<32> matmul::ap_const_lv32_3 = "11";
const sc_lv<32> matmul::ap_const_lv32_4 = "100";
const sc_lv<32> matmul::ap_const_lv32_5 = "101";
const sc_lv<2> matmul::ap_const_lv2_0 = "00";
const sc_lv<1> matmul::ap_const_lv1_1 = "1";
const sc_lv<32> matmul::ap_const_lv32_6 = "110";
const sc_lv<2> matmul::ap_const_lv2_2 = "10";
const sc_lv<2> matmul::ap_const_lv2_1 = "1";
const bool matmul::ap_const_boolean_1 = true;

matmul::matmul(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_a_address0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( zext_ln7_3_fu_170_p1 );

    SC_METHOD(thread_a_ce0);
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_add_ln7_1_fu_165_p2);
    sensitive << ( zext_ln5_reg_209 );
    sensitive << ( zext_ln7_2_fu_161_p1 );

    SC_METHOD(thread_add_ln7_2_fu_187_p2);
    sensitive << ( zext_ln7_reg_223 );
    sensitive << ( zext_ln7_4_fu_183_p1 );

    SC_METHOD(thread_add_ln7_fu_139_p2);
    sensitive << ( zext_ln5_reg_209 );
    sensitive << ( zext_ln7_fu_135_p1 );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state4);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state5);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state6);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state7);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln4_fu_99_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln4_fu_99_p2 );

    SC_METHOD(thread_b_address0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( zext_ln7_5_fu_192_p1 );

    SC_METHOD(thread_b_ce0);
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_c_address0);
    sensitive << ( c_addr_reg_228 );
    sensitive << ( ap_CS_fsm_state7 );

    SC_METHOD(thread_c_ce0);
    sensitive << ( ap_CS_fsm_state7 );

    SC_METHOD(thread_c_d0);
    sensitive << ( mul_ln7_reg_261 );
    sensitive << ( ap_CS_fsm_state7 );

    SC_METHOD(thread_c_we0);
    sensitive << ( ap_CS_fsm_state7 );

    SC_METHOD(thread_i_fu_105_p2);
    sensitive << ( i_0_reg_66 );

    SC_METHOD(thread_icmp_ln4_fu_99_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( i_0_reg_66 );

    SC_METHOD(thread_icmp_ln5_fu_123_p2);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( j_0_reg_77 );

    SC_METHOD(thread_icmp_ln6_fu_149_p2);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( k_0_reg_88 );

    SC_METHOD(thread_j_fu_129_p2);
    sensitive << ( j_0_reg_77 );

    SC_METHOD(thread_k_fu_155_p2);
    sensitive << ( k_0_reg_88 );

    SC_METHOD(thread_mul_ln7_fu_197_p2);
    sensitive << ( a_load_reg_251 );
    sensitive << ( b_load_reg_256 );

    SC_METHOD(thread_tmp_1_fu_175_p3);
    sensitive << ( k_0_reg_88 );

    SC_METHOD(thread_tmp_fu_111_p3);
    sensitive << ( i_0_reg_66 );

    SC_METHOD(thread_zext_ln5_fu_119_p1);
    sensitive << ( tmp_fu_111_p3 );

    SC_METHOD(thread_zext_ln7_1_fu_144_p1);
    sensitive << ( add_ln7_fu_139_p2 );

    SC_METHOD(thread_zext_ln7_2_fu_161_p1);
    sensitive << ( k_0_reg_88 );

    SC_METHOD(thread_zext_ln7_3_fu_170_p1);
    sensitive << ( add_ln7_1_fu_165_p2 );

    SC_METHOD(thread_zext_ln7_4_fu_183_p1);
    sensitive << ( tmp_1_fu_175_p3 );

    SC_METHOD(thread_zext_ln7_5_fu_192_p1);
    sensitive << ( add_ln7_2_fu_187_p2 );

    SC_METHOD(thread_zext_ln7_fu_135_p1);
    sensitive << ( j_0_reg_77 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln4_fu_99_p2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( icmp_ln5_fu_123_p2 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( icmp_ln6_fu_149_p2 );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    ap_CS_fsm = "0000001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "matmul_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, a_address0, "(port)a_address0");
    sc_trace(mVcdFile, a_ce0, "(port)a_ce0");
    sc_trace(mVcdFile, a_q0, "(port)a_q0");
    sc_trace(mVcdFile, b_address0, "(port)b_address0");
    sc_trace(mVcdFile, b_ce0, "(port)b_ce0");
    sc_trace(mVcdFile, b_q0, "(port)b_q0");
    sc_trace(mVcdFile, c_address0, "(port)c_address0");
    sc_trace(mVcdFile, c_ce0, "(port)c_ce0");
    sc_trace(mVcdFile, c_we0, "(port)c_we0");
    sc_trace(mVcdFile, c_d0, "(port)c_d0");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, i_fu_105_p2, "i_fu_105_p2");
    sc_trace(mVcdFile, i_reg_204, "i_reg_204");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, zext_ln5_fu_119_p1, "zext_ln5_fu_119_p1");
    sc_trace(mVcdFile, zext_ln5_reg_209, "zext_ln5_reg_209");
    sc_trace(mVcdFile, icmp_ln4_fu_99_p2, "icmp_ln4_fu_99_p2");
    sc_trace(mVcdFile, j_fu_129_p2, "j_fu_129_p2");
    sc_trace(mVcdFile, j_reg_218, "j_reg_218");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, zext_ln7_fu_135_p1, "zext_ln7_fu_135_p1");
    sc_trace(mVcdFile, zext_ln7_reg_223, "zext_ln7_reg_223");
    sc_trace(mVcdFile, icmp_ln5_fu_123_p2, "icmp_ln5_fu_123_p2");
    sc_trace(mVcdFile, c_addr_reg_228, "c_addr_reg_228");
    sc_trace(mVcdFile, k_fu_155_p2, "k_fu_155_p2");
    sc_trace(mVcdFile, k_reg_236, "k_reg_236");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, icmp_ln6_fu_149_p2, "icmp_ln6_fu_149_p2");
    sc_trace(mVcdFile, a_load_reg_251, "a_load_reg_251");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, b_load_reg_256, "b_load_reg_256");
    sc_trace(mVcdFile, mul_ln7_fu_197_p2, "mul_ln7_fu_197_p2");
    sc_trace(mVcdFile, mul_ln7_reg_261, "mul_ln7_reg_261");
    sc_trace(mVcdFile, ap_CS_fsm_state6, "ap_CS_fsm_state6");
    sc_trace(mVcdFile, i_0_reg_66, "i_0_reg_66");
    sc_trace(mVcdFile, j_0_reg_77, "j_0_reg_77");
    sc_trace(mVcdFile, k_0_reg_88, "k_0_reg_88");
    sc_trace(mVcdFile, ap_CS_fsm_state7, "ap_CS_fsm_state7");
    sc_trace(mVcdFile, zext_ln7_1_fu_144_p1, "zext_ln7_1_fu_144_p1");
    sc_trace(mVcdFile, zext_ln7_3_fu_170_p1, "zext_ln7_3_fu_170_p1");
    sc_trace(mVcdFile, zext_ln7_5_fu_192_p1, "zext_ln7_5_fu_192_p1");
    sc_trace(mVcdFile, tmp_fu_111_p3, "tmp_fu_111_p3");
    sc_trace(mVcdFile, add_ln7_fu_139_p2, "add_ln7_fu_139_p2");
    sc_trace(mVcdFile, zext_ln7_2_fu_161_p1, "zext_ln7_2_fu_161_p1");
    sc_trace(mVcdFile, add_ln7_1_fu_165_p2, "add_ln7_1_fu_165_p2");
    sc_trace(mVcdFile, tmp_1_fu_175_p3, "tmp_1_fu_175_p3");
    sc_trace(mVcdFile, zext_ln7_4_fu_183_p1, "zext_ln7_4_fu_183_p1");
    sc_trace(mVcdFile, add_ln7_2_fu_187_p2, "add_ln7_2_fu_187_p2");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
    mHdltvinHandle.open("matmul.hdltvin.dat");
    mHdltvoutHandle.open("matmul.hdltvout.dat");
}

matmul::~matmul() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
}

void matmul::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(icmp_ln5_fu_123_p2.read(), ap_const_lv1_1))) {
        i_0_reg_66 = i_reg_204.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        i_0_reg_66 = ap_const_lv2_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(icmp_ln6_fu_149_p2.read(), ap_const_lv1_1))) {
        j_0_reg_77 = j_reg_218.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(icmp_ln4_fu_99_p2.read(), ap_const_lv1_0))) {
        j_0_reg_77 = ap_const_lv2_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln5_fu_123_p2.read()))) {
        k_0_reg_88 = ap_const_lv2_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        k_0_reg_88 = k_reg_236.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        a_load_reg_251 = a_q0.read();
        b_load_reg_256 = b_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln5_fu_123_p2.read()))) {
        c_addr_reg_228 =  (sc_lv<2>) (zext_ln7_1_fu_144_p1.read());
        zext_ln7_reg_223 = zext_ln7_fu_135_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        i_reg_204 = i_fu_105_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        j_reg_218 = j_fu_129_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        k_reg_236 = k_fu_155_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        mul_ln7_reg_261 = mul_ln7_fu_197_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln4_fu_99_p2.read(), ap_const_lv1_0))) {
        zext_ln5_reg_209 = zext_ln5_fu_119_p1.read();
    }
}

void matmul::thread_a_address0() {
    a_address0 =  (sc_lv<2>) (zext_ln7_3_fu_170_p1.read());
}

void matmul::thread_a_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        a_ce0 = ap_const_logic_1;
    } else {
        a_ce0 = ap_const_logic_0;
    }
}

void matmul::thread_add_ln7_1_fu_165_p2() {
    add_ln7_1_fu_165_p2 = (!zext_ln7_2_fu_161_p1.read().is_01() || !zext_ln5_reg_209.read().is_01())? sc_lv<4>(): (sc_biguint<4>(zext_ln7_2_fu_161_p1.read()) + sc_biguint<4>(zext_ln5_reg_209.read()));
}

void matmul::thread_add_ln7_2_fu_187_p2() {
    add_ln7_2_fu_187_p2 = (!zext_ln7_reg_223.read().is_01() || !zext_ln7_4_fu_183_p1.read().is_01())? sc_lv<4>(): (sc_biguint<4>(zext_ln7_reg_223.read()) + sc_biguint<4>(zext_ln7_4_fu_183_p1.read()));
}

void matmul::thread_add_ln7_fu_139_p2() {
    add_ln7_fu_139_p2 = (!zext_ln5_reg_209.read().is_01() || !zext_ln7_fu_135_p1.read().is_01())? sc_lv<4>(): (sc_biguint<4>(zext_ln5_reg_209.read()) + sc_biguint<4>(zext_ln7_fu_135_p1.read()));
}

void matmul::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void matmul::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void matmul::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void matmul::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void matmul::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void matmul::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void matmul::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[6];
}

void matmul::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(icmp_ln4_fu_99_p2.read(), ap_const_lv1_1))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void matmul::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void matmul::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(icmp_ln4_fu_99_p2.read(), ap_const_lv1_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void matmul::thread_b_address0() {
    b_address0 =  (sc_lv<2>) (zext_ln7_5_fu_192_p1.read());
}

void matmul::thread_b_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_ce0 = ap_const_logic_1;
    } else {
        b_ce0 = ap_const_logic_0;
    }
}

void matmul::thread_c_address0() {
    c_address0 = c_addr_reg_228.read();
}

void matmul::thread_c_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        c_ce0 = ap_const_logic_1;
    } else {
        c_ce0 = ap_const_logic_0;
    }
}

void matmul::thread_c_d0() {
    c_d0 = mul_ln7_reg_261.read();
}

void matmul::thread_c_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        c_we0 = ap_const_logic_1;
    } else {
        c_we0 = ap_const_logic_0;
    }
}

void matmul::thread_i_fu_105_p2() {
    i_fu_105_p2 = (!i_0_reg_66.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(i_0_reg_66.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void matmul::thread_icmp_ln4_fu_99_p2() {
    icmp_ln4_fu_99_p2 = (!i_0_reg_66.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i_0_reg_66.read() == ap_const_lv2_2);
}

void matmul::thread_icmp_ln5_fu_123_p2() {
    icmp_ln5_fu_123_p2 = (!j_0_reg_77.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(j_0_reg_77.read() == ap_const_lv2_2);
}

void matmul::thread_icmp_ln6_fu_149_p2() {
    icmp_ln6_fu_149_p2 = (!k_0_reg_88.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k_0_reg_88.read() == ap_const_lv2_2);
}

void matmul::thread_j_fu_129_p2() {
    j_fu_129_p2 = (!j_0_reg_77.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(j_0_reg_77.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void matmul::thread_k_fu_155_p2() {
    k_fu_155_p2 = (!k_0_reg_88.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k_0_reg_88.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void matmul::thread_mul_ln7_fu_197_p2() {
    mul_ln7_fu_197_p2 = (!a_load_reg_251.read().is_01() || !b_load_reg_256.read().is_01())? sc_lv<32>(): sc_bigint<32>(a_load_reg_251.read()) * sc_bigint<32>(b_load_reg_256.read());
}

void matmul::thread_tmp_1_fu_175_p3() {
    tmp_1_fu_175_p3 = esl_concat<2,1>(k_0_reg_88.read(), ap_const_lv1_0);
}

void matmul::thread_tmp_fu_111_p3() {
    tmp_fu_111_p3 = esl_concat<2,1>(i_0_reg_66.read(), ap_const_lv1_0);
}

void matmul::thread_zext_ln5_fu_119_p1() {
    zext_ln5_fu_119_p1 = esl_zext<4,3>(tmp_fu_111_p3.read());
}

void matmul::thread_zext_ln7_1_fu_144_p1() {
    zext_ln7_1_fu_144_p1 = esl_zext<64,4>(add_ln7_fu_139_p2.read());
}

void matmul::thread_zext_ln7_2_fu_161_p1() {
    zext_ln7_2_fu_161_p1 = esl_zext<4,2>(k_0_reg_88.read());
}

void matmul::thread_zext_ln7_3_fu_170_p1() {
    zext_ln7_3_fu_170_p1 = esl_zext<64,4>(add_ln7_1_fu_165_p2.read());
}

void matmul::thread_zext_ln7_4_fu_183_p1() {
    zext_ln7_4_fu_183_p1 = esl_zext<4,3>(tmp_1_fu_175_p3.read());
}

void matmul::thread_zext_ln7_5_fu_192_p1() {
    zext_ln7_5_fu_192_p1 = esl_zext<64,4>(add_ln7_2_fu_187_p2.read());
}

void matmul::thread_zext_ln7_fu_135_p1() {
    zext_ln7_fu_135_p1 = esl_zext<4,2>(j_0_reg_77.read());
}

void matmul::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln4_fu_99_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(icmp_ln5_fu_123_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state4;
            }
            break;
        case 8 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(icmp_ln6_fu_149_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state3;
            } else {
                ap_NS_fsm = ap_ST_fsm_state5;
            }
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state6;
            break;
        case 32 : 
            ap_NS_fsm = ap_ST_fsm_state7;
            break;
        case 64 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        default : 
            ap_NS_fsm = "XXXXXXX";
            break;
    }
}

void matmul::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_address0\" :  \"" << a_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_ce0\" :  \"" << a_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"a_q0\" :  \"" << a_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"b_address0\" :  \"" << b_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"b_ce0\" :  \"" << b_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"b_q0\" :  \"" << b_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"c_address0\" :  \"" << c_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"c_ce0\" :  \"" << c_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"c_we0\" :  \"" << c_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"c_d0\" :  \"" << c_d0.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

