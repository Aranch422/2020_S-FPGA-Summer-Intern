// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
// AXILiteS
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

#define XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_0_BASE 0x040
#define XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_0_HIGH 0x07f
#define XMAX_POOLING_10X10_AXILITES_WIDTH_IFMAP_0     32
#define XMAX_POOLING_10X10_AXILITES_DEPTH_IFMAP_0     10
#define XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_1_BASE 0x080
#define XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_1_HIGH 0x0bf
#define XMAX_POOLING_10X10_AXILITES_WIDTH_IFMAP_1     32
#define XMAX_POOLING_10X10_AXILITES_DEPTH_IFMAP_1     10
#define XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_2_BASE 0x0c0
#define XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_2_HIGH 0x0ff
#define XMAX_POOLING_10X10_AXILITES_WIDTH_IFMAP_2     32
#define XMAX_POOLING_10X10_AXILITES_DEPTH_IFMAP_2     10
#define XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_3_BASE 0x100
#define XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_3_HIGH 0x13f
#define XMAX_POOLING_10X10_AXILITES_WIDTH_IFMAP_3     32
#define XMAX_POOLING_10X10_AXILITES_DEPTH_IFMAP_3     10
#define XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_4_BASE 0x140
#define XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_4_HIGH 0x17f
#define XMAX_POOLING_10X10_AXILITES_WIDTH_IFMAP_4     32
#define XMAX_POOLING_10X10_AXILITES_DEPTH_IFMAP_4     10
#define XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_5_BASE 0x180
#define XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_5_HIGH 0x1bf
#define XMAX_POOLING_10X10_AXILITES_WIDTH_IFMAP_5     32
#define XMAX_POOLING_10X10_AXILITES_DEPTH_IFMAP_5     10
#define XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_6_BASE 0x1c0
#define XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_6_HIGH 0x1ff
#define XMAX_POOLING_10X10_AXILITES_WIDTH_IFMAP_6     32
#define XMAX_POOLING_10X10_AXILITES_DEPTH_IFMAP_6     10
#define XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_7_BASE 0x200
#define XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_7_HIGH 0x23f
#define XMAX_POOLING_10X10_AXILITES_WIDTH_IFMAP_7     32
#define XMAX_POOLING_10X10_AXILITES_DEPTH_IFMAP_7     10
#define XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_8_BASE 0x240
#define XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_8_HIGH 0x27f
#define XMAX_POOLING_10X10_AXILITES_WIDTH_IFMAP_8     32
#define XMAX_POOLING_10X10_AXILITES_DEPTH_IFMAP_8     10
#define XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_9_BASE 0x280
#define XMAX_POOLING_10X10_AXILITES_ADDR_IFMAP_9_HIGH 0x2bf
#define XMAX_POOLING_10X10_AXILITES_WIDTH_IFMAP_9     32
#define XMAX_POOLING_10X10_AXILITES_DEPTH_IFMAP_9     10
#define XMAX_POOLING_10X10_AXILITES_ADDR_RESULT_BASE  0x300
#define XMAX_POOLING_10X10_AXILITES_ADDR_RESULT_HIGH  0x37f
#define XMAX_POOLING_10X10_AXILITES_WIDTH_RESULT      32
#define XMAX_POOLING_10X10_AXILITES_DEPTH_RESULT      25

