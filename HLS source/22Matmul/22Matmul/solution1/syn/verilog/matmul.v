// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="matmul,hls_ip_2019_2,{HLS_INPUT_TYPE=c,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7z020-clg400-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=8.510000,HLS_SYN_LAT=45,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=3,HLS_SYN_FF=121,HLS_SYN_LUT=184,HLS_VERSION=2019_2}" *)

module matmul (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        a_address0,
        a_ce0,
        a_q0,
        b_address0,
        b_ce0,
        b_q0,
        c_address0,
        c_ce0,
        c_we0,
        c_d0
);

parameter    ap_ST_fsm_state1 = 7'd1;
parameter    ap_ST_fsm_state2 = 7'd2;
parameter    ap_ST_fsm_state3 = 7'd4;
parameter    ap_ST_fsm_state4 = 7'd8;
parameter    ap_ST_fsm_state5 = 7'd16;
parameter    ap_ST_fsm_state6 = 7'd32;
parameter    ap_ST_fsm_state7 = 7'd64;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [1:0] a_address0;
output   a_ce0;
input  [31:0] a_q0;
output  [1:0] b_address0;
output   b_ce0;
input  [31:0] b_q0;
output  [1:0] c_address0;
output   c_ce0;
output   c_we0;
output  [31:0] c_d0;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg a_ce0;
reg b_ce0;
reg c_ce0;
reg c_we0;

(* fsm_encoding = "none" *) reg   [6:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [1:0] i_fu_105_p2;
reg   [1:0] i_reg_204;
wire    ap_CS_fsm_state2;
wire   [3:0] zext_ln5_fu_119_p1;
reg   [3:0] zext_ln5_reg_209;
wire   [0:0] icmp_ln4_fu_99_p2;
wire   [1:0] j_fu_129_p2;
reg   [1:0] j_reg_218;
wire    ap_CS_fsm_state3;
wire   [3:0] zext_ln7_fu_135_p1;
reg   [3:0] zext_ln7_reg_223;
wire   [0:0] icmp_ln5_fu_123_p2;
reg   [1:0] c_addr_reg_228;
wire   [1:0] k_fu_155_p2;
reg   [1:0] k_reg_236;
wire    ap_CS_fsm_state4;
wire   [0:0] icmp_ln6_fu_149_p2;
reg  signed [31:0] a_load_reg_251;
wire    ap_CS_fsm_state5;
reg  signed [31:0] b_load_reg_256;
wire   [31:0] mul_ln7_fu_197_p2;
reg   [31:0] mul_ln7_reg_261;
wire    ap_CS_fsm_state6;
reg   [1:0] i_0_reg_66;
reg   [1:0] j_0_reg_77;
reg   [1:0] k_0_reg_88;
wire    ap_CS_fsm_state7;
wire   [63:0] zext_ln7_1_fu_144_p1;
wire   [63:0] zext_ln7_3_fu_170_p1;
wire   [63:0] zext_ln7_5_fu_192_p1;
wire   [2:0] tmp_fu_111_p3;
wire   [3:0] add_ln7_fu_139_p2;
wire   [3:0] zext_ln7_2_fu_161_p1;
wire   [3:0] add_ln7_1_fu_165_p2;
wire   [2:0] tmp_1_fu_175_p3;
wire   [3:0] zext_ln7_4_fu_183_p1;
wire   [3:0] add_ln7_2_fu_187_p2;
reg   [6:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 7'd1;
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln5_fu_123_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
        i_0_reg_66 <= i_reg_204;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        i_0_reg_66 <= 2'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln6_fu_149_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state4))) begin
        j_0_reg_77 <= j_reg_218;
    end else if (((icmp_ln4_fu_99_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        j_0_reg_77 <= 2'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln5_fu_123_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        k_0_reg_88 <= 2'd0;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        k_0_reg_88 <= k_reg_236;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        a_load_reg_251 <= a_q0;
        b_load_reg_256 <= b_q0;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln5_fu_123_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        c_addr_reg_228 <= zext_ln7_1_fu_144_p1;
        zext_ln7_reg_223[1 : 0] <= zext_ln7_fu_135_p1[1 : 0];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        i_reg_204 <= i_fu_105_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        j_reg_218 <= j_fu_129_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        k_reg_236 <= k_fu_155_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        mul_ln7_reg_261 <= mul_ln7_fu_197_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln4_fu_99_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        zext_ln5_reg_209[2 : 1] <= zext_ln5_fu_119_p1[2 : 1];
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        a_ce0 = 1'b1;
    end else begin
        a_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln4_fu_99_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln4_fu_99_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        b_ce0 = 1'b1;
    end else begin
        b_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        c_ce0 = 1'b1;
    end else begin
        c_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        c_we0 = 1'b1;
    end else begin
        c_we0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((icmp_ln4_fu_99_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((icmp_ln5_fu_123_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state4 : begin
            if (((icmp_ln6_fu_149_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state4))) begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end
        end
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state6;
        end
        ap_ST_fsm_state6 : begin
            ap_NS_fsm = ap_ST_fsm_state7;
        end
        ap_ST_fsm_state7 : begin
            ap_NS_fsm = ap_ST_fsm_state4;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign a_address0 = zext_ln7_3_fu_170_p1;

assign add_ln7_1_fu_165_p2 = (zext_ln7_2_fu_161_p1 + zext_ln5_reg_209);

assign add_ln7_2_fu_187_p2 = (zext_ln7_reg_223 + zext_ln7_4_fu_183_p1);

assign add_ln7_fu_139_p2 = (zext_ln5_reg_209 + zext_ln7_fu_135_p1);

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign b_address0 = zext_ln7_5_fu_192_p1;

assign c_address0 = c_addr_reg_228;

assign c_d0 = mul_ln7_reg_261;

assign i_fu_105_p2 = (i_0_reg_66 + 2'd1);

assign icmp_ln4_fu_99_p2 = ((i_0_reg_66 == 2'd2) ? 1'b1 : 1'b0);

assign icmp_ln5_fu_123_p2 = ((j_0_reg_77 == 2'd2) ? 1'b1 : 1'b0);

assign icmp_ln6_fu_149_p2 = ((k_0_reg_88 == 2'd2) ? 1'b1 : 1'b0);

assign j_fu_129_p2 = (j_0_reg_77 + 2'd1);

assign k_fu_155_p2 = (k_0_reg_88 + 2'd1);

assign mul_ln7_fu_197_p2 = ($signed(a_load_reg_251) * $signed(b_load_reg_256));

assign tmp_1_fu_175_p3 = {{k_0_reg_88}, {1'd0}};

assign tmp_fu_111_p3 = {{i_0_reg_66}, {1'd0}};

assign zext_ln5_fu_119_p1 = tmp_fu_111_p3;

assign zext_ln7_1_fu_144_p1 = add_ln7_fu_139_p2;

assign zext_ln7_2_fu_161_p1 = k_0_reg_88;

assign zext_ln7_3_fu_170_p1 = add_ln7_1_fu_165_p2;

assign zext_ln7_4_fu_183_p1 = tmp_1_fu_175_p3;

assign zext_ln7_5_fu_192_p1 = add_ln7_2_fu_187_p2;

assign zext_ln7_fu_135_p1 = j_0_reg_77;

always @ (posedge ap_clk) begin
    zext_ln5_reg_209[0] <= 1'b0;
    zext_ln5_reg_209[3] <= 1'b0;
    zext_ln7_reg_223[3:2] <= 2'b00;
end

endmodule //matmul
