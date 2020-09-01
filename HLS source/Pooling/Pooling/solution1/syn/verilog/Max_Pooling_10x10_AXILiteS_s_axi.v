// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
`timescale 1ns/1ps
module Max_Pooling_10x10_AXILiteS_s_axi
#(parameter
    C_S_AXI_ADDR_WIDTH = 10,
    C_S_AXI_DATA_WIDTH = 32
)(
    input  wire                          ACLK,
    input  wire                          ARESET,
    input  wire                          ACLK_EN,
    input  wire [C_S_AXI_ADDR_WIDTH-1:0] AWADDR,
    input  wire                          AWVALID,
    output wire                          AWREADY,
    input  wire [C_S_AXI_DATA_WIDTH-1:0] WDATA,
    input  wire [C_S_AXI_DATA_WIDTH/8-1:0] WSTRB,
    input  wire                          WVALID,
    output wire                          WREADY,
    output wire [1:0]                    BRESP,
    output wire                          BVALID,
    input  wire                          BREADY,
    input  wire [C_S_AXI_ADDR_WIDTH-1:0] ARADDR,
    input  wire                          ARVALID,
    output wire                          ARREADY,
    output wire [C_S_AXI_DATA_WIDTH-1:0] RDATA,
    output wire [1:0]                    RRESP,
    output wire                          RVALID,
    input  wire                          RREADY,
    input  wire [3:0]                    ifmap_0_address0,
    input  wire                          ifmap_0_ce0,
    output wire [31:0]                   ifmap_0_q0,
    input  wire [3:0]                    ifmap_1_address0,
    input  wire                          ifmap_1_ce0,
    output wire [31:0]                   ifmap_1_q0,
    input  wire [3:0]                    ifmap_2_address0,
    input  wire                          ifmap_2_ce0,
    output wire [31:0]                   ifmap_2_q0,
    input  wire [3:0]                    ifmap_3_address0,
    input  wire                          ifmap_3_ce0,
    output wire [31:0]                   ifmap_3_q0,
    input  wire [3:0]                    ifmap_4_address0,
    input  wire                          ifmap_4_ce0,
    output wire [31:0]                   ifmap_4_q0,
    input  wire [3:0]                    ifmap_5_address0,
    input  wire                          ifmap_5_ce0,
    output wire [31:0]                   ifmap_5_q0,
    input  wire [3:0]                    ifmap_6_address0,
    input  wire                          ifmap_6_ce0,
    output wire [31:0]                   ifmap_6_q0,
    input  wire [3:0]                    ifmap_7_address0,
    input  wire                          ifmap_7_ce0,
    output wire [31:0]                   ifmap_7_q0,
    input  wire [3:0]                    ifmap_8_address0,
    input  wire                          ifmap_8_ce0,
    output wire [31:0]                   ifmap_8_q0,
    input  wire [3:0]                    ifmap_9_address0,
    input  wire                          ifmap_9_ce0,
    output wire [31:0]                   ifmap_9_q0,
    input  wire [4:0]                    result_address0,
    input  wire                          result_ce0,
    input  wire                          result_we0,
    input  wire [31:0]                   result_d0
);
//------------------------Address Info-------------------
// 0x040 ~
// 0x07f : Memory 'ifmap_0' (10 * 32b)
//         Word n : bit [31:0] - ifmap_0[n]
// 0x080 ~
// 0x0bf : Memory 'ifmap_1' (10 * 32b)
//         Word n : bit [31:0] - ifmap_1[n]
// 0x0c0 ~
// 0x0ff : Memory 'ifmap_2' (10 * 32b)
//         Word n : bit [31:0] - ifmap_2[n]
// 0x100 ~
// 0x13f : Memory 'ifmap_3' (10 * 32b)
//         Word n : bit [31:0] - ifmap_3[n]
// 0x140 ~
// 0x17f : Memory 'ifmap_4' (10 * 32b)
//         Word n : bit [31:0] - ifmap_4[n]
// 0x180 ~
// 0x1bf : Memory 'ifmap_5' (10 * 32b)
//         Word n : bit [31:0] - ifmap_5[n]
// 0x1c0 ~
// 0x1ff : Memory 'ifmap_6' (10 * 32b)
//         Word n : bit [31:0] - ifmap_6[n]
// 0x200 ~
// 0x23f : Memory 'ifmap_7' (10 * 32b)
//         Word n : bit [31:0] - ifmap_7[n]
// 0x240 ~
// 0x27f : Memory 'ifmap_8' (10 * 32b)
//         Word n : bit [31:0] - ifmap_8[n]
// 0x280 ~
// 0x2bf : Memory 'ifmap_9' (10 * 32b)
//         Word n : bit [31:0] - ifmap_9[n]
// 0x300 ~
// 0x37f : Memory 'result' (25 * 32b)
//         Word n : bit [31:0] - result[n]
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

//------------------------Parameter----------------------
localparam
    ADDR_IFMAP_0_BASE = 10'h040,
    ADDR_IFMAP_0_HIGH = 10'h07f,
    ADDR_IFMAP_1_BASE = 10'h080,
    ADDR_IFMAP_1_HIGH = 10'h0bf,
    ADDR_IFMAP_2_BASE = 10'h0c0,
    ADDR_IFMAP_2_HIGH = 10'h0ff,
    ADDR_IFMAP_3_BASE = 10'h100,
    ADDR_IFMAP_3_HIGH = 10'h13f,
    ADDR_IFMAP_4_BASE = 10'h140,
    ADDR_IFMAP_4_HIGH = 10'h17f,
    ADDR_IFMAP_5_BASE = 10'h180,
    ADDR_IFMAP_5_HIGH = 10'h1bf,
    ADDR_IFMAP_6_BASE = 10'h1c0,
    ADDR_IFMAP_6_HIGH = 10'h1ff,
    ADDR_IFMAP_7_BASE = 10'h200,
    ADDR_IFMAP_7_HIGH = 10'h23f,
    ADDR_IFMAP_8_BASE = 10'h240,
    ADDR_IFMAP_8_HIGH = 10'h27f,
    ADDR_IFMAP_9_BASE = 10'h280,
    ADDR_IFMAP_9_HIGH = 10'h2bf,
    ADDR_RESULT_BASE  = 10'h300,
    ADDR_RESULT_HIGH  = 10'h37f,
    WRIDLE            = 2'd0,
    WRDATA            = 2'd1,
    WRRESP            = 2'd2,
    WRRESET           = 2'd3,
    RDIDLE            = 2'd0,
    RDDATA            = 2'd1,
    RDRESET           = 2'd2,
    ADDR_BITS         = 10;

//------------------------Local signal-------------------
    reg  [1:0]                    wstate = WRRESET;
    reg  [1:0]                    wnext;
    reg  [ADDR_BITS-1:0]          waddr;
    wire [31:0]                   wmask;
    wire                          aw_hs;
    wire                          w_hs;
    reg  [1:0]                    rstate = RDRESET;
    reg  [1:0]                    rnext;
    reg  [31:0]                   rdata;
    wire                          ar_hs;
    wire [ADDR_BITS-1:0]          raddr;
    // memory signals
    wire [3:0]                    int_ifmap_0_address0;
    wire                          int_ifmap_0_ce0;
    wire                          int_ifmap_0_we0;
    wire [3:0]                    int_ifmap_0_be0;
    wire [31:0]                   int_ifmap_0_d0;
    wire [31:0]                   int_ifmap_0_q0;
    wire [3:0]                    int_ifmap_0_address1;
    wire                          int_ifmap_0_ce1;
    wire                          int_ifmap_0_we1;
    wire [3:0]                    int_ifmap_0_be1;
    wire [31:0]                   int_ifmap_0_d1;
    wire [31:0]                   int_ifmap_0_q1;
    reg                           int_ifmap_0_read;
    reg                           int_ifmap_0_write;
    wire [3:0]                    int_ifmap_1_address0;
    wire                          int_ifmap_1_ce0;
    wire                          int_ifmap_1_we0;
    wire [3:0]                    int_ifmap_1_be0;
    wire [31:0]                   int_ifmap_1_d0;
    wire [31:0]                   int_ifmap_1_q0;
    wire [3:0]                    int_ifmap_1_address1;
    wire                          int_ifmap_1_ce1;
    wire                          int_ifmap_1_we1;
    wire [3:0]                    int_ifmap_1_be1;
    wire [31:0]                   int_ifmap_1_d1;
    wire [31:0]                   int_ifmap_1_q1;
    reg                           int_ifmap_1_read;
    reg                           int_ifmap_1_write;
    wire [3:0]                    int_ifmap_2_address0;
    wire                          int_ifmap_2_ce0;
    wire                          int_ifmap_2_we0;
    wire [3:0]                    int_ifmap_2_be0;
    wire [31:0]                   int_ifmap_2_d0;
    wire [31:0]                   int_ifmap_2_q0;
    wire [3:0]                    int_ifmap_2_address1;
    wire                          int_ifmap_2_ce1;
    wire                          int_ifmap_2_we1;
    wire [3:0]                    int_ifmap_2_be1;
    wire [31:0]                   int_ifmap_2_d1;
    wire [31:0]                   int_ifmap_2_q1;
    reg                           int_ifmap_2_read;
    reg                           int_ifmap_2_write;
    wire [3:0]                    int_ifmap_3_address0;
    wire                          int_ifmap_3_ce0;
    wire                          int_ifmap_3_we0;
    wire [3:0]                    int_ifmap_3_be0;
    wire [31:0]                   int_ifmap_3_d0;
    wire [31:0]                   int_ifmap_3_q0;
    wire [3:0]                    int_ifmap_3_address1;
    wire                          int_ifmap_3_ce1;
    wire                          int_ifmap_3_we1;
    wire [3:0]                    int_ifmap_3_be1;
    wire [31:0]                   int_ifmap_3_d1;
    wire [31:0]                   int_ifmap_3_q1;
    reg                           int_ifmap_3_read;
    reg                           int_ifmap_3_write;
    wire [3:0]                    int_ifmap_4_address0;
    wire                          int_ifmap_4_ce0;
    wire                          int_ifmap_4_we0;
    wire [3:0]                    int_ifmap_4_be0;
    wire [31:0]                   int_ifmap_4_d0;
    wire [31:0]                   int_ifmap_4_q0;
    wire [3:0]                    int_ifmap_4_address1;
    wire                          int_ifmap_4_ce1;
    wire                          int_ifmap_4_we1;
    wire [3:0]                    int_ifmap_4_be1;
    wire [31:0]                   int_ifmap_4_d1;
    wire [31:0]                   int_ifmap_4_q1;
    reg                           int_ifmap_4_read;
    reg                           int_ifmap_4_write;
    wire [3:0]                    int_ifmap_5_address0;
    wire                          int_ifmap_5_ce0;
    wire                          int_ifmap_5_we0;
    wire [3:0]                    int_ifmap_5_be0;
    wire [31:0]                   int_ifmap_5_d0;
    wire [31:0]                   int_ifmap_5_q0;
    wire [3:0]                    int_ifmap_5_address1;
    wire                          int_ifmap_5_ce1;
    wire                          int_ifmap_5_we1;
    wire [3:0]                    int_ifmap_5_be1;
    wire [31:0]                   int_ifmap_5_d1;
    wire [31:0]                   int_ifmap_5_q1;
    reg                           int_ifmap_5_read;
    reg                           int_ifmap_5_write;
    wire [3:0]                    int_ifmap_6_address0;
    wire                          int_ifmap_6_ce0;
    wire                          int_ifmap_6_we0;
    wire [3:0]                    int_ifmap_6_be0;
    wire [31:0]                   int_ifmap_6_d0;
    wire [31:0]                   int_ifmap_6_q0;
    wire [3:0]                    int_ifmap_6_address1;
    wire                          int_ifmap_6_ce1;
    wire                          int_ifmap_6_we1;
    wire [3:0]                    int_ifmap_6_be1;
    wire [31:0]                   int_ifmap_6_d1;
    wire [31:0]                   int_ifmap_6_q1;
    reg                           int_ifmap_6_read;
    reg                           int_ifmap_6_write;
    wire [3:0]                    int_ifmap_7_address0;
    wire                          int_ifmap_7_ce0;
    wire                          int_ifmap_7_we0;
    wire [3:0]                    int_ifmap_7_be0;
    wire [31:0]                   int_ifmap_7_d0;
    wire [31:0]                   int_ifmap_7_q0;
    wire [3:0]                    int_ifmap_7_address1;
    wire                          int_ifmap_7_ce1;
    wire                          int_ifmap_7_we1;
    wire [3:0]                    int_ifmap_7_be1;
    wire [31:0]                   int_ifmap_7_d1;
    wire [31:0]                   int_ifmap_7_q1;
    reg                           int_ifmap_7_read;
    reg                           int_ifmap_7_write;
    wire [3:0]                    int_ifmap_8_address0;
    wire                          int_ifmap_8_ce0;
    wire                          int_ifmap_8_we0;
    wire [3:0]                    int_ifmap_8_be0;
    wire [31:0]                   int_ifmap_8_d0;
    wire [31:0]                   int_ifmap_8_q0;
    wire [3:0]                    int_ifmap_8_address1;
    wire                          int_ifmap_8_ce1;
    wire                          int_ifmap_8_we1;
    wire [3:0]                    int_ifmap_8_be1;
    wire [31:0]                   int_ifmap_8_d1;
    wire [31:0]                   int_ifmap_8_q1;
    reg                           int_ifmap_8_read;
    reg                           int_ifmap_8_write;
    wire [3:0]                    int_ifmap_9_address0;
    wire                          int_ifmap_9_ce0;
    wire                          int_ifmap_9_we0;
    wire [3:0]                    int_ifmap_9_be0;
    wire [31:0]                   int_ifmap_9_d0;
    wire [31:0]                   int_ifmap_9_q0;
    wire [3:0]                    int_ifmap_9_address1;
    wire                          int_ifmap_9_ce1;
    wire                          int_ifmap_9_we1;
    wire [3:0]                    int_ifmap_9_be1;
    wire [31:0]                   int_ifmap_9_d1;
    wire [31:0]                   int_ifmap_9_q1;
    reg                           int_ifmap_9_read;
    reg                           int_ifmap_9_write;
    wire [4:0]                    int_result_address0;
    wire                          int_result_ce0;
    wire                          int_result_we0;
    wire [3:0]                    int_result_be0;
    wire [31:0]                   int_result_d0;
    wire [31:0]                   int_result_q0;
    wire [4:0]                    int_result_address1;
    wire                          int_result_ce1;
    wire                          int_result_we1;
    wire [3:0]                    int_result_be1;
    wire [31:0]                   int_result_d1;
    wire [31:0]                   int_result_q1;
    reg                           int_result_read;
    reg                           int_result_write;

//------------------------Instantiation------------------
// int_ifmap_0
Max_Pooling_10x10_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 10 )
) int_ifmap_0 (
    .clk0     ( ACLK ),
    .address0 ( int_ifmap_0_address0 ),
    .ce0      ( int_ifmap_0_ce0 ),
    .we0      ( int_ifmap_0_we0 ),
    .be0      ( int_ifmap_0_be0 ),
    .d0       ( int_ifmap_0_d0 ),
    .q0       ( int_ifmap_0_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_ifmap_0_address1 ),
    .ce1      ( int_ifmap_0_ce1 ),
    .we1      ( int_ifmap_0_we1 ),
    .be1      ( int_ifmap_0_be1 ),
    .d1       ( int_ifmap_0_d1 ),
    .q1       ( int_ifmap_0_q1 )
);
// int_ifmap_1
Max_Pooling_10x10_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 10 )
) int_ifmap_1 (
    .clk0     ( ACLK ),
    .address0 ( int_ifmap_1_address0 ),
    .ce0      ( int_ifmap_1_ce0 ),
    .we0      ( int_ifmap_1_we0 ),
    .be0      ( int_ifmap_1_be0 ),
    .d0       ( int_ifmap_1_d0 ),
    .q0       ( int_ifmap_1_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_ifmap_1_address1 ),
    .ce1      ( int_ifmap_1_ce1 ),
    .we1      ( int_ifmap_1_we1 ),
    .be1      ( int_ifmap_1_be1 ),
    .d1       ( int_ifmap_1_d1 ),
    .q1       ( int_ifmap_1_q1 )
);
// int_ifmap_2
Max_Pooling_10x10_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 10 )
) int_ifmap_2 (
    .clk0     ( ACLK ),
    .address0 ( int_ifmap_2_address0 ),
    .ce0      ( int_ifmap_2_ce0 ),
    .we0      ( int_ifmap_2_we0 ),
    .be0      ( int_ifmap_2_be0 ),
    .d0       ( int_ifmap_2_d0 ),
    .q0       ( int_ifmap_2_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_ifmap_2_address1 ),
    .ce1      ( int_ifmap_2_ce1 ),
    .we1      ( int_ifmap_2_we1 ),
    .be1      ( int_ifmap_2_be1 ),
    .d1       ( int_ifmap_2_d1 ),
    .q1       ( int_ifmap_2_q1 )
);
// int_ifmap_3
Max_Pooling_10x10_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 10 )
) int_ifmap_3 (
    .clk0     ( ACLK ),
    .address0 ( int_ifmap_3_address0 ),
    .ce0      ( int_ifmap_3_ce0 ),
    .we0      ( int_ifmap_3_we0 ),
    .be0      ( int_ifmap_3_be0 ),
    .d0       ( int_ifmap_3_d0 ),
    .q0       ( int_ifmap_3_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_ifmap_3_address1 ),
    .ce1      ( int_ifmap_3_ce1 ),
    .we1      ( int_ifmap_3_we1 ),
    .be1      ( int_ifmap_3_be1 ),
    .d1       ( int_ifmap_3_d1 ),
    .q1       ( int_ifmap_3_q1 )
);
// int_ifmap_4
Max_Pooling_10x10_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 10 )
) int_ifmap_4 (
    .clk0     ( ACLK ),
    .address0 ( int_ifmap_4_address0 ),
    .ce0      ( int_ifmap_4_ce0 ),
    .we0      ( int_ifmap_4_we0 ),
    .be0      ( int_ifmap_4_be0 ),
    .d0       ( int_ifmap_4_d0 ),
    .q0       ( int_ifmap_4_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_ifmap_4_address1 ),
    .ce1      ( int_ifmap_4_ce1 ),
    .we1      ( int_ifmap_4_we1 ),
    .be1      ( int_ifmap_4_be1 ),
    .d1       ( int_ifmap_4_d1 ),
    .q1       ( int_ifmap_4_q1 )
);
// int_ifmap_5
Max_Pooling_10x10_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 10 )
) int_ifmap_5 (
    .clk0     ( ACLK ),
    .address0 ( int_ifmap_5_address0 ),
    .ce0      ( int_ifmap_5_ce0 ),
    .we0      ( int_ifmap_5_we0 ),
    .be0      ( int_ifmap_5_be0 ),
    .d0       ( int_ifmap_5_d0 ),
    .q0       ( int_ifmap_5_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_ifmap_5_address1 ),
    .ce1      ( int_ifmap_5_ce1 ),
    .we1      ( int_ifmap_5_we1 ),
    .be1      ( int_ifmap_5_be1 ),
    .d1       ( int_ifmap_5_d1 ),
    .q1       ( int_ifmap_5_q1 )
);
// int_ifmap_6
Max_Pooling_10x10_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 10 )
) int_ifmap_6 (
    .clk0     ( ACLK ),
    .address0 ( int_ifmap_6_address0 ),
    .ce0      ( int_ifmap_6_ce0 ),
    .we0      ( int_ifmap_6_we0 ),
    .be0      ( int_ifmap_6_be0 ),
    .d0       ( int_ifmap_6_d0 ),
    .q0       ( int_ifmap_6_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_ifmap_6_address1 ),
    .ce1      ( int_ifmap_6_ce1 ),
    .we1      ( int_ifmap_6_we1 ),
    .be1      ( int_ifmap_6_be1 ),
    .d1       ( int_ifmap_6_d1 ),
    .q1       ( int_ifmap_6_q1 )
);
// int_ifmap_7
Max_Pooling_10x10_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 10 )
) int_ifmap_7 (
    .clk0     ( ACLK ),
    .address0 ( int_ifmap_7_address0 ),
    .ce0      ( int_ifmap_7_ce0 ),
    .we0      ( int_ifmap_7_we0 ),
    .be0      ( int_ifmap_7_be0 ),
    .d0       ( int_ifmap_7_d0 ),
    .q0       ( int_ifmap_7_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_ifmap_7_address1 ),
    .ce1      ( int_ifmap_7_ce1 ),
    .we1      ( int_ifmap_7_we1 ),
    .be1      ( int_ifmap_7_be1 ),
    .d1       ( int_ifmap_7_d1 ),
    .q1       ( int_ifmap_7_q1 )
);
// int_ifmap_8
Max_Pooling_10x10_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 10 )
) int_ifmap_8 (
    .clk0     ( ACLK ),
    .address0 ( int_ifmap_8_address0 ),
    .ce0      ( int_ifmap_8_ce0 ),
    .we0      ( int_ifmap_8_we0 ),
    .be0      ( int_ifmap_8_be0 ),
    .d0       ( int_ifmap_8_d0 ),
    .q0       ( int_ifmap_8_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_ifmap_8_address1 ),
    .ce1      ( int_ifmap_8_ce1 ),
    .we1      ( int_ifmap_8_we1 ),
    .be1      ( int_ifmap_8_be1 ),
    .d1       ( int_ifmap_8_d1 ),
    .q1       ( int_ifmap_8_q1 )
);
// int_ifmap_9
Max_Pooling_10x10_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 10 )
) int_ifmap_9 (
    .clk0     ( ACLK ),
    .address0 ( int_ifmap_9_address0 ),
    .ce0      ( int_ifmap_9_ce0 ),
    .we0      ( int_ifmap_9_we0 ),
    .be0      ( int_ifmap_9_be0 ),
    .d0       ( int_ifmap_9_d0 ),
    .q0       ( int_ifmap_9_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_ifmap_9_address1 ),
    .ce1      ( int_ifmap_9_ce1 ),
    .we1      ( int_ifmap_9_we1 ),
    .be1      ( int_ifmap_9_be1 ),
    .d1       ( int_ifmap_9_d1 ),
    .q1       ( int_ifmap_9_q1 )
);
// int_result
Max_Pooling_10x10_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 25 )
) int_result (
    .clk0     ( ACLK ),
    .address0 ( int_result_address0 ),
    .ce0      ( int_result_ce0 ),
    .we0      ( int_result_we0 ),
    .be0      ( int_result_be0 ),
    .d0       ( int_result_d0 ),
    .q0       ( int_result_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_result_address1 ),
    .ce1      ( int_result_ce1 ),
    .we1      ( int_result_we1 ),
    .be1      ( int_result_be1 ),
    .d1       ( int_result_d1 ),
    .q1       ( int_result_q1 )
);

//------------------------AXI write fsm------------------
assign AWREADY = (wstate == WRIDLE);
assign WREADY  = (wstate == WRDATA);
assign BRESP   = 2'b00;  // OKAY
assign BVALID  = (wstate == WRRESP);
assign wmask   = { {8{WSTRB[3]}}, {8{WSTRB[2]}}, {8{WSTRB[1]}}, {8{WSTRB[0]}} };
assign aw_hs   = AWVALID & AWREADY;
assign w_hs    = WVALID & WREADY;

// wstate
always @(posedge ACLK) begin
    if (ARESET)
        wstate <= WRRESET;
    else if (ACLK_EN)
        wstate <= wnext;
end

// wnext
always @(*) begin
    case (wstate)
        WRIDLE:
            if (AWVALID)
                wnext = WRDATA;
            else
                wnext = WRIDLE;
        WRDATA:
            if (WVALID)
                wnext = WRRESP;
            else
                wnext = WRDATA;
        WRRESP:
            if (BREADY)
                wnext = WRIDLE;
            else
                wnext = WRRESP;
        default:
            wnext = WRIDLE;
    endcase
end

// waddr
always @(posedge ACLK) begin
    if (ACLK_EN) begin
        if (aw_hs)
            waddr <= AWADDR[ADDR_BITS-1:0];
    end
end

//------------------------AXI read fsm-------------------
assign ARREADY = (rstate == RDIDLE);
assign RDATA   = rdata;
assign RRESP   = 2'b00;  // OKAY
assign RVALID  = (rstate == RDDATA) & !int_ifmap_0_read & !int_ifmap_1_read & !int_ifmap_2_read & !int_ifmap_3_read & !int_ifmap_4_read & !int_ifmap_5_read & !int_ifmap_6_read & !int_ifmap_7_read & !int_ifmap_8_read & !int_ifmap_9_read & !int_result_read;
assign ar_hs   = ARVALID & ARREADY;
assign raddr   = ARADDR[ADDR_BITS-1:0];

// rstate
always @(posedge ACLK) begin
    if (ARESET)
        rstate <= RDRESET;
    else if (ACLK_EN)
        rstate <= rnext;
end

// rnext
always @(*) begin
    case (rstate)
        RDIDLE:
            if (ARVALID)
                rnext = RDDATA;
            else
                rnext = RDIDLE;
        RDDATA:
            if (RREADY & RVALID)
                rnext = RDIDLE;
            else
                rnext = RDDATA;
        default:
            rnext = RDIDLE;
    endcase
end

// rdata
always @(posedge ACLK) begin
    if (ACLK_EN) begin
        if (ar_hs) begin
            rdata <= 1'b0;
        end
        else if (int_ifmap_0_read) begin
            rdata <= int_ifmap_0_q1;
        end
        else if (int_ifmap_1_read) begin
            rdata <= int_ifmap_1_q1;
        end
        else if (int_ifmap_2_read) begin
            rdata <= int_ifmap_2_q1;
        end
        else if (int_ifmap_3_read) begin
            rdata <= int_ifmap_3_q1;
        end
        else if (int_ifmap_4_read) begin
            rdata <= int_ifmap_4_q1;
        end
        else if (int_ifmap_5_read) begin
            rdata <= int_ifmap_5_q1;
        end
        else if (int_ifmap_6_read) begin
            rdata <= int_ifmap_6_q1;
        end
        else if (int_ifmap_7_read) begin
            rdata <= int_ifmap_7_q1;
        end
        else if (int_ifmap_8_read) begin
            rdata <= int_ifmap_8_q1;
        end
        else if (int_ifmap_9_read) begin
            rdata <= int_ifmap_9_q1;
        end
        else if (int_result_read) begin
            rdata <= int_result_q1;
        end
    end
end


//------------------------Register logic-----------------

//------------------------Memory logic-------------------
// ifmap_0
assign int_ifmap_0_address0 = ifmap_0_address0;
assign int_ifmap_0_ce0      = ifmap_0_ce0;
assign int_ifmap_0_we0      = 1'b0;
assign int_ifmap_0_be0      = 1'b0;
assign int_ifmap_0_d0       = 1'b0;
assign ifmap_0_q0           = int_ifmap_0_q0;
assign int_ifmap_0_address1 = ar_hs? raddr[5:2] : waddr[5:2];
assign int_ifmap_0_ce1      = ar_hs | (int_ifmap_0_write & WVALID);
assign int_ifmap_0_we1      = int_ifmap_0_write & WVALID;
assign int_ifmap_0_be1      = WSTRB;
assign int_ifmap_0_d1       = WDATA;
// ifmap_1
assign int_ifmap_1_address0 = ifmap_1_address0;
assign int_ifmap_1_ce0      = ifmap_1_ce0;
assign int_ifmap_1_we0      = 1'b0;
assign int_ifmap_1_be0      = 1'b0;
assign int_ifmap_1_d0       = 1'b0;
assign ifmap_1_q0           = int_ifmap_1_q0;
assign int_ifmap_1_address1 = ar_hs? raddr[5:2] : waddr[5:2];
assign int_ifmap_1_ce1      = ar_hs | (int_ifmap_1_write & WVALID);
assign int_ifmap_1_we1      = int_ifmap_1_write & WVALID;
assign int_ifmap_1_be1      = WSTRB;
assign int_ifmap_1_d1       = WDATA;
// ifmap_2
assign int_ifmap_2_address0 = ifmap_2_address0;
assign int_ifmap_2_ce0      = ifmap_2_ce0;
assign int_ifmap_2_we0      = 1'b0;
assign int_ifmap_2_be0      = 1'b0;
assign int_ifmap_2_d0       = 1'b0;
assign ifmap_2_q0           = int_ifmap_2_q0;
assign int_ifmap_2_address1 = ar_hs? raddr[5:2] : waddr[5:2];
assign int_ifmap_2_ce1      = ar_hs | (int_ifmap_2_write & WVALID);
assign int_ifmap_2_we1      = int_ifmap_2_write & WVALID;
assign int_ifmap_2_be1      = WSTRB;
assign int_ifmap_2_d1       = WDATA;
// ifmap_3
assign int_ifmap_3_address0 = ifmap_3_address0;
assign int_ifmap_3_ce0      = ifmap_3_ce0;
assign int_ifmap_3_we0      = 1'b0;
assign int_ifmap_3_be0      = 1'b0;
assign int_ifmap_3_d0       = 1'b0;
assign ifmap_3_q0           = int_ifmap_3_q0;
assign int_ifmap_3_address1 = ar_hs? raddr[5:2] : waddr[5:2];
assign int_ifmap_3_ce1      = ar_hs | (int_ifmap_3_write & WVALID);
assign int_ifmap_3_we1      = int_ifmap_3_write & WVALID;
assign int_ifmap_3_be1      = WSTRB;
assign int_ifmap_3_d1       = WDATA;
// ifmap_4
assign int_ifmap_4_address0 = ifmap_4_address0;
assign int_ifmap_4_ce0      = ifmap_4_ce0;
assign int_ifmap_4_we0      = 1'b0;
assign int_ifmap_4_be0      = 1'b0;
assign int_ifmap_4_d0       = 1'b0;
assign ifmap_4_q0           = int_ifmap_4_q0;
assign int_ifmap_4_address1 = ar_hs? raddr[5:2] : waddr[5:2];
assign int_ifmap_4_ce1      = ar_hs | (int_ifmap_4_write & WVALID);
assign int_ifmap_4_we1      = int_ifmap_4_write & WVALID;
assign int_ifmap_4_be1      = WSTRB;
assign int_ifmap_4_d1       = WDATA;
// ifmap_5
assign int_ifmap_5_address0 = ifmap_5_address0;
assign int_ifmap_5_ce0      = ifmap_5_ce0;
assign int_ifmap_5_we0      = 1'b0;
assign int_ifmap_5_be0      = 1'b0;
assign int_ifmap_5_d0       = 1'b0;
assign ifmap_5_q0           = int_ifmap_5_q0;
assign int_ifmap_5_address1 = ar_hs? raddr[5:2] : waddr[5:2];
assign int_ifmap_5_ce1      = ar_hs | (int_ifmap_5_write & WVALID);
assign int_ifmap_5_we1      = int_ifmap_5_write & WVALID;
assign int_ifmap_5_be1      = WSTRB;
assign int_ifmap_5_d1       = WDATA;
// ifmap_6
assign int_ifmap_6_address0 = ifmap_6_address0;
assign int_ifmap_6_ce0      = ifmap_6_ce0;
assign int_ifmap_6_we0      = 1'b0;
assign int_ifmap_6_be0      = 1'b0;
assign int_ifmap_6_d0       = 1'b0;
assign ifmap_6_q0           = int_ifmap_6_q0;
assign int_ifmap_6_address1 = ar_hs? raddr[5:2] : waddr[5:2];
assign int_ifmap_6_ce1      = ar_hs | (int_ifmap_6_write & WVALID);
assign int_ifmap_6_we1      = int_ifmap_6_write & WVALID;
assign int_ifmap_6_be1      = WSTRB;
assign int_ifmap_6_d1       = WDATA;
// ifmap_7
assign int_ifmap_7_address0 = ifmap_7_address0;
assign int_ifmap_7_ce0      = ifmap_7_ce0;
assign int_ifmap_7_we0      = 1'b0;
assign int_ifmap_7_be0      = 1'b0;
assign int_ifmap_7_d0       = 1'b0;
assign ifmap_7_q0           = int_ifmap_7_q0;
assign int_ifmap_7_address1 = ar_hs? raddr[5:2] : waddr[5:2];
assign int_ifmap_7_ce1      = ar_hs | (int_ifmap_7_write & WVALID);
assign int_ifmap_7_we1      = int_ifmap_7_write & WVALID;
assign int_ifmap_7_be1      = WSTRB;
assign int_ifmap_7_d1       = WDATA;
// ifmap_8
assign int_ifmap_8_address0 = ifmap_8_address0;
assign int_ifmap_8_ce0      = ifmap_8_ce0;
assign int_ifmap_8_we0      = 1'b0;
assign int_ifmap_8_be0      = 1'b0;
assign int_ifmap_8_d0       = 1'b0;
assign ifmap_8_q0           = int_ifmap_8_q0;
assign int_ifmap_8_address1 = ar_hs? raddr[5:2] : waddr[5:2];
assign int_ifmap_8_ce1      = ar_hs | (int_ifmap_8_write & WVALID);
assign int_ifmap_8_we1      = int_ifmap_8_write & WVALID;
assign int_ifmap_8_be1      = WSTRB;
assign int_ifmap_8_d1       = WDATA;
// ifmap_9
assign int_ifmap_9_address0 = ifmap_9_address0;
assign int_ifmap_9_ce0      = ifmap_9_ce0;
assign int_ifmap_9_we0      = 1'b0;
assign int_ifmap_9_be0      = 1'b0;
assign int_ifmap_9_d0       = 1'b0;
assign ifmap_9_q0           = int_ifmap_9_q0;
assign int_ifmap_9_address1 = ar_hs? raddr[5:2] : waddr[5:2];
assign int_ifmap_9_ce1      = ar_hs | (int_ifmap_9_write & WVALID);
assign int_ifmap_9_we1      = int_ifmap_9_write & WVALID;
assign int_ifmap_9_be1      = WSTRB;
assign int_ifmap_9_d1       = WDATA;
// result
assign int_result_address0  = result_address0;
assign int_result_ce0       = result_ce0;
assign int_result_we0       = result_we0;
assign int_result_be0       = {4{result_we0}};
assign int_result_d0        = result_d0;
assign int_result_address1  = ar_hs? raddr[6:2] : waddr[6:2];
assign int_result_ce1       = ar_hs | (int_result_write & WVALID);
assign int_result_we1       = int_result_write & WVALID;
assign int_result_be1       = WSTRB;
assign int_result_d1        = WDATA;
// int_ifmap_0_read
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_0_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_IFMAP_0_BASE && raddr <= ADDR_IFMAP_0_HIGH)
            int_ifmap_0_read <= 1'b1;
        else
            int_ifmap_0_read <= 1'b0;
    end
end

// int_ifmap_0_write
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_0_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_IFMAP_0_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_IFMAP_0_HIGH)
            int_ifmap_0_write <= 1'b1;
        else if (WVALID)
            int_ifmap_0_write <= 1'b0;
    end
end

// int_ifmap_1_read
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_1_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_IFMAP_1_BASE && raddr <= ADDR_IFMAP_1_HIGH)
            int_ifmap_1_read <= 1'b1;
        else
            int_ifmap_1_read <= 1'b0;
    end
end

// int_ifmap_1_write
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_1_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_IFMAP_1_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_IFMAP_1_HIGH)
            int_ifmap_1_write <= 1'b1;
        else if (WVALID)
            int_ifmap_1_write <= 1'b0;
    end
end

// int_ifmap_2_read
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_2_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_IFMAP_2_BASE && raddr <= ADDR_IFMAP_2_HIGH)
            int_ifmap_2_read <= 1'b1;
        else
            int_ifmap_2_read <= 1'b0;
    end
end

// int_ifmap_2_write
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_2_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_IFMAP_2_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_IFMAP_2_HIGH)
            int_ifmap_2_write <= 1'b1;
        else if (WVALID)
            int_ifmap_2_write <= 1'b0;
    end
end

// int_ifmap_3_read
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_3_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_IFMAP_3_BASE && raddr <= ADDR_IFMAP_3_HIGH)
            int_ifmap_3_read <= 1'b1;
        else
            int_ifmap_3_read <= 1'b0;
    end
end

// int_ifmap_3_write
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_3_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_IFMAP_3_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_IFMAP_3_HIGH)
            int_ifmap_3_write <= 1'b1;
        else if (WVALID)
            int_ifmap_3_write <= 1'b0;
    end
end

// int_ifmap_4_read
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_4_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_IFMAP_4_BASE && raddr <= ADDR_IFMAP_4_HIGH)
            int_ifmap_4_read <= 1'b1;
        else
            int_ifmap_4_read <= 1'b0;
    end
end

// int_ifmap_4_write
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_4_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_IFMAP_4_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_IFMAP_4_HIGH)
            int_ifmap_4_write <= 1'b1;
        else if (WVALID)
            int_ifmap_4_write <= 1'b0;
    end
end

// int_ifmap_5_read
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_5_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_IFMAP_5_BASE && raddr <= ADDR_IFMAP_5_HIGH)
            int_ifmap_5_read <= 1'b1;
        else
            int_ifmap_5_read <= 1'b0;
    end
end

// int_ifmap_5_write
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_5_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_IFMAP_5_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_IFMAP_5_HIGH)
            int_ifmap_5_write <= 1'b1;
        else if (WVALID)
            int_ifmap_5_write <= 1'b0;
    end
end

// int_ifmap_6_read
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_6_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_IFMAP_6_BASE && raddr <= ADDR_IFMAP_6_HIGH)
            int_ifmap_6_read <= 1'b1;
        else
            int_ifmap_6_read <= 1'b0;
    end
end

// int_ifmap_6_write
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_6_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_IFMAP_6_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_IFMAP_6_HIGH)
            int_ifmap_6_write <= 1'b1;
        else if (WVALID)
            int_ifmap_6_write <= 1'b0;
    end
end

// int_ifmap_7_read
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_7_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_IFMAP_7_BASE && raddr <= ADDR_IFMAP_7_HIGH)
            int_ifmap_7_read <= 1'b1;
        else
            int_ifmap_7_read <= 1'b0;
    end
end

// int_ifmap_7_write
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_7_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_IFMAP_7_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_IFMAP_7_HIGH)
            int_ifmap_7_write <= 1'b1;
        else if (WVALID)
            int_ifmap_7_write <= 1'b0;
    end
end

// int_ifmap_8_read
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_8_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_IFMAP_8_BASE && raddr <= ADDR_IFMAP_8_HIGH)
            int_ifmap_8_read <= 1'b1;
        else
            int_ifmap_8_read <= 1'b0;
    end
end

// int_ifmap_8_write
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_8_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_IFMAP_8_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_IFMAP_8_HIGH)
            int_ifmap_8_write <= 1'b1;
        else if (WVALID)
            int_ifmap_8_write <= 1'b0;
    end
end

// int_ifmap_9_read
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_9_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_IFMAP_9_BASE && raddr <= ADDR_IFMAP_9_HIGH)
            int_ifmap_9_read <= 1'b1;
        else
            int_ifmap_9_read <= 1'b0;
    end
end

// int_ifmap_9_write
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_9_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_IFMAP_9_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_IFMAP_9_HIGH)
            int_ifmap_9_write <= 1'b1;
        else if (WVALID)
            int_ifmap_9_write <= 1'b0;
    end
end

// int_result_read
always @(posedge ACLK) begin
    if (ARESET)
        int_result_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_RESULT_BASE && raddr <= ADDR_RESULT_HIGH)
            int_result_read <= 1'b1;
        else
            int_result_read <= 1'b0;
    end
end

// int_result_write
always @(posedge ACLK) begin
    if (ARESET)
        int_result_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_RESULT_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_RESULT_HIGH)
            int_result_write <= 1'b1;
        else if (WVALID)
            int_result_write <= 1'b0;
    end
end


endmodule


`timescale 1ns/1ps

module Max_Pooling_10x10_AXILiteS_s_axi_ram
#(parameter
    BYTES  = 4,
    DEPTH  = 256,
    AWIDTH = log2(DEPTH)
) (
    input  wire               clk0,
    input  wire [AWIDTH-1:0]  address0,
    input  wire               ce0,
    input  wire               we0,
    input  wire [BYTES-1:0]   be0,
    input  wire [BYTES*8-1:0] d0,
    output reg  [BYTES*8-1:0] q0,
    input  wire               clk1,
    input  wire [AWIDTH-1:0]  address1,
    input  wire               ce1,
    input  wire               we1,
    input  wire [BYTES-1:0]   be1,
    input  wire [BYTES*8-1:0] d1,
    output reg  [BYTES*8-1:0] q1
);
//------------------------Local signal-------------------
reg  [BYTES*8-1:0] mem[0:DEPTH-1];
//------------------------Task and function--------------
function integer log2;
    input integer x;
    integer n, m;
begin
    n = 1;
    m = 2;
    while (m < x) begin
        n = n + 1;
        m = m * 2;
    end
    log2 = n;
end
endfunction
//------------------------Body---------------------------
// read port 0
always @(posedge clk0) begin
    if (ce0) q0 <= mem[address0];
end

// read port 1
always @(posedge clk1) begin
    if (ce1) q1 <= mem[address1];
end

genvar i;
generate
    for (i = 0; i < BYTES; i = i + 1) begin : gen_write
        // write port 0
        always @(posedge clk0) begin
            if (ce0 & we0 & be0[i]) begin
                mem[address0][8*i+7:8*i] <= d0[8*i+7:8*i];
            end
        end
        // write port 1
        always @(posedge clk1) begin
            if (ce1 & we1 & be1[i]) begin
                mem[address1][8*i+7:8*i] <= d1[8*i+7:8*i];
            end
        end
    end
endgenerate

endmodule

