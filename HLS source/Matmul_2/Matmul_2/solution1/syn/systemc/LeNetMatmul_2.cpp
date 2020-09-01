#include "LeNetMatmul.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void LeNetMatmul::thread_ap_clk_no_reset_() {
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state2.read()))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_0;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            if (esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state2.read())) {
                ap_enable_reg_pp0_iter1 = (ap_condition_pp0_exit_iter0_state2.read() ^ ap_const_logic_1);
            } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
                ap_enable_reg_pp0_iter1 = ap_enable_reg_pp0_iter0.read();
            }
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter2 = ap_enable_reg_pp0_iter1.read();
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter3 = ap_enable_reg_pp0_iter2.read();
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter4 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter4 = ap_enable_reg_pp0_iter3.read();
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter5 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter5 = ap_enable_reg_pp0_iter4.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
            ap_enable_reg_pp0_iter5 = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln12_reg_10323.read(), ap_const_lv1_0))) {
        i_0_reg_9291 = i_reg_10327.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        i_0_reg_9291 = ap_const_lv10_0;
    }
    if (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) {
        add_ln15_16_reg_10855 = add_ln15_16_fu_9425_p2.read();
        add_ln15_20_reg_10860 = add_ln15_20_fu_9437_p2.read();
        add_ln15_22_reg_10875 = add_ln15_22_fu_9524_p2.read();
        add_ln15_4_reg_10865 = add_ln15_4_fu_9461_p2.read();
        add_ln15_9_reg_10870 = add_ln15_9_fu_9485_p2.read();
        filter_0_read_reg_10390_pp0_iter2_reg = filter_0_read_reg_10390.read();
        filter_12_read_reg_10510_pp0_iter2_reg = filter_12_read_reg_10510.read();
        filter_13_read_reg_10520_pp0_iter2_reg = filter_13_read_reg_10520.read();
        filter_14_read_reg_10530_pp0_iter2_reg = filter_14_read_reg_10530.read();
        filter_15_read_reg_10540_pp0_iter2_reg = filter_15_read_reg_10540.read();
        filter_16_read_reg_10550_pp0_iter2_reg = filter_16_read_reg_10550.read();
        filter_17_read_reg_10560_pp0_iter2_reg = filter_17_read_reg_10560.read();
        filter_18_read_reg_10570_pp0_iter2_reg = filter_18_read_reg_10570.read();
        filter_19_read_reg_10580_pp0_iter2_reg = filter_19_read_reg_10580.read();
        filter_1_read_reg_10400_pp0_iter2_reg = filter_1_read_reg_10400.read();
        filter_20_read_reg_10590_pp0_iter2_reg = filter_20_read_reg_10590.read();
        filter_21_read_reg_10600_pp0_iter2_reg = filter_21_read_reg_10600.read();
        filter_22_read_reg_10610_pp0_iter2_reg = filter_22_read_reg_10610.read();
        filter_23_read_reg_10620_pp0_iter2_reg = filter_23_read_reg_10620.read();
        filter_2_read_reg_10410_pp0_iter2_reg = filter_2_read_reg_10410.read();
        filter_3_read_reg_10420_pp0_iter2_reg = filter_3_read_reg_10420.read();
        filter_4_read_reg_10430_pp0_iter2_reg = filter_4_read_reg_10430.read();
        filter_5_read_reg_10440_pp0_iter2_reg = filter_5_read_reg_10440.read();
        filter_6_read_reg_10450_pp0_iter2_reg = filter_6_read_reg_10450.read();
        i_0_reg_9291_pp0_iter2_reg = i_0_reg_9291_pp0_iter1_reg.read();
        i_0_reg_9291_pp0_iter3_reg = i_0_reg_9291_pp0_iter2_reg.read();
        i_0_reg_9291_pp0_iter4_reg = i_0_reg_9291_pp0_iter3_reg.read();
        mat_0_load_reg_10635 = mat_0_q0.read();
        mat_12_load_reg_10695 = mat_12_q0.read();
        mat_13_load_reg_10700 = mat_13_q0.read();
        mat_14_load_reg_10705 = mat_14_q0.read();
        mat_15_load_reg_10710 = mat_15_q0.read();
        mat_16_load_reg_10715 = mat_16_q0.read();
        mat_17_load_reg_10720 = mat_17_q0.read();
        mat_18_load_reg_10725 = mat_18_q0.read();
        mat_19_load_reg_10730 = mat_19_q0.read();
        mat_1_load_reg_10640 = mat_1_q0.read();
        mat_20_load_reg_10735 = mat_20_q0.read();
        mat_21_load_reg_10740 = mat_21_q0.read();
        mat_22_load_reg_10745 = mat_22_q0.read();
        mat_23_load_reg_10750 = mat_23_q0.read();
        mat_2_load_reg_10645 = mat_2_q0.read();
        mat_3_load_reg_10650 = mat_3_q0.read();
        mat_4_load_reg_10655 = mat_4_q0.read();
        mat_5_load_reg_10660 = mat_5_q0.read();
        mat_6_load_reg_10665 = mat_6_q0.read();
        mul_ln15_10_reg_10685 = mul_ln15_10_fu_9337_p2.read();
        mul_ln15_11_reg_10690 = mul_ln15_11_fu_9341_p2.read();
        mul_ln15_12_reg_10795 = mul_ln15_12_fu_9377_p2.read();
        mul_ln15_13_reg_10800 = mul_ln15_13_fu_9381_p2.read();
        mul_ln15_14_reg_10805 = mul_ln15_14_fu_9385_p2.read();
        mul_ln15_15_reg_10810 = mul_ln15_15_fu_9389_p2.read();
        mul_ln15_16_reg_10815 = mul_ln15_16_fu_9393_p2.read();
        mul_ln15_17_reg_10820 = mul_ln15_17_fu_9397_p2.read();
        mul_ln15_18_reg_10825 = mul_ln15_18_fu_9401_p2.read();
        mul_ln15_19_reg_10830 = mul_ln15_19_fu_9405_p2.read();
        mul_ln15_1_reg_10765 = mul_ln15_1_fu_9353_p2.read();
        mul_ln15_20_reg_10835 = mul_ln15_20_fu_9409_p2.read();
        mul_ln15_21_reg_10840 = mul_ln15_21_fu_9413_p2.read();
        mul_ln15_22_reg_10845 = mul_ln15_22_fu_9417_p2.read();
        mul_ln15_23_reg_10850 = mul_ln15_23_fu_9421_p2.read();
        mul_ln15_24_reg_10755 = mul_ln15_24_fu_9345_p2.read();
        mul_ln15_2_reg_10770 = mul_ln15_2_fu_9357_p2.read();
        mul_ln15_3_reg_10775 = mul_ln15_3_fu_9361_p2.read();
        mul_ln15_4_reg_10780 = mul_ln15_4_fu_9365_p2.read();
        mul_ln15_5_reg_10785 = mul_ln15_5_fu_9369_p2.read();
        mul_ln15_6_reg_10790 = mul_ln15_6_fu_9373_p2.read();
        mul_ln15_7_reg_10670 = mul_ln15_7_fu_9325_p2.read();
        mul_ln15_8_reg_10675 = mul_ln15_8_fu_9329_p2.read();
        mul_ln15_9_reg_10680 = mul_ln15_9_fu_9333_p2.read();
        mul_ln15_reg_10760 = mul_ln15_fu_9349_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        filter_0_read_reg_10390 = filter_0.read();
        filter_10_read_reg_10490 = filter_10.read();
        filter_11_read_reg_10500 = filter_11.read();
        filter_12_read_reg_10510 = filter_12.read();
        filter_13_read_reg_10520 = filter_13.read();
        filter_14_read_reg_10530 = filter_14.read();
        filter_15_read_reg_10540 = filter_15.read();
        filter_16_read_reg_10550 = filter_16.read();
        filter_17_read_reg_10560 = filter_17.read();
        filter_18_read_reg_10570 = filter_18.read();
        filter_19_read_reg_10580 = filter_19.read();
        filter_1_read_reg_10400 = filter_1.read();
        filter_20_read_reg_10590 = filter_20.read();
        filter_21_read_reg_10600 = filter_21.read();
        filter_22_read_reg_10610 = filter_22.read();
        filter_23_read_reg_10620 = filter_23.read();
        filter_24_read_reg_10630 = filter_24.read();
        filter_2_read_reg_10410 = filter_2.read();
        filter_3_read_reg_10420 = filter_3.read();
        filter_4_read_reg_10430 = filter_4.read();
        filter_5_read_reg_10440 = filter_5.read();
        filter_6_read_reg_10450 = filter_6.read();
        filter_7_read_reg_10460 = filter_7.read();
        filter_8_read_reg_10470 = filter_8.read();
        filter_9_read_reg_10480 = filter_9.read();
        i_0_reg_9291_pp0_iter1_reg = i_0_reg_9291.read();
        icmp_ln12_reg_10323 = icmp_ln12_fu_9303_p2.read();
        mat_10_load_reg_10485 = mat_10_q0.read();
        mat_11_load_reg_10495 = mat_11_q0.read();
        mat_24_load_reg_10625 = mat_24_q0.read();
        mat_7_load_reg_10455 = mat_7_q0.read();
        mat_8_load_reg_10465 = mat_8_q0.read();
        mat_9_load_reg_10475 = mat_9_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        i_reg_10327 = i_fu_9309_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln12_fu_9303_p2.read(), ap_const_lv1_0))) {
        zext_ln15_reg_10332 = zext_ln15_fu_9315_p1.read();
    }
}

void LeNetMatmul::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            break;
        case 2 : 
            if ((!(esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter4.read(), ap_const_logic_0)) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln12_fu_9303_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter4.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(icmp_ln12_fu_9303_p2.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_state8;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm = "XXX";
            break;
    }
}

}

