// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
`timescale 1ns/1ps
module conv_AXILiteS_s_axi
#(parameter
    C_S_AXI_ADDR_WIDTH = 12,
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
    output wire [31:0]                   ifmap_0,
    output wire [31:0]                   ifmap_1,
    output wire [31:0]                   ifmap_2,
    output wire [31:0]                   ifmap_3,
    output wire [31:0]                   ifmap_4,
    output wire [31:0]                   ifmap_5,
    output wire [31:0]                   ifmap_6,
    output wire [31:0]                   ifmap_7,
    output wire [31:0]                   ifmap_8,
    output wire [31:0]                   ifmap_9,
    output wire [31:0]                   ifmap_10,
    output wire [31:0]                   ifmap_11,
    output wire [31:0]                   ifmap_12,
    output wire [31:0]                   ifmap_13,
    output wire [31:0]                   ifmap_14,
    output wire [31:0]                   ifmap_15,
    output wire [31:0]                   ifmap_16,
    output wire [31:0]                   ifmap_17,
    output wire [31:0]                   ifmap_18,
    output wire [31:0]                   ifmap_19,
    output wire [31:0]                   ifmap_20,
    output wire [31:0]                   ifmap_21,
    output wire [31:0]                   ifmap_22,
    output wire [31:0]                   ifmap_23,
    output wire [31:0]                   ifmap_24,
    output wire [31:0]                   ifmap_25,
    output wire [31:0]                   ifmap_26,
    output wire [31:0]                   ifmap_27,
    output wire [31:0]                   ifmap_28,
    output wire [31:0]                   ifmap_29,
    output wire [31:0]                   ifmap_30,
    output wire [31:0]                   ifmap_31,
    output wire [31:0]                   ifmap_32,
    output wire [31:0]                   ifmap_33,
    output wire [31:0]                   ifmap_34,
    output wire [31:0]                   ifmap_35,
    output wire [31:0]                   ifmap_36,
    output wire [31:0]                   ifmap_37,
    output wire [31:0]                   ifmap_38,
    output wire [31:0]                   ifmap_39,
    output wire [31:0]                   ifmap_40,
    output wire [31:0]                   ifmap_41,
    output wire [31:0]                   ifmap_42,
    output wire [31:0]                   ifmap_43,
    output wire [31:0]                   ifmap_44,
    output wire [31:0]                   ifmap_45,
    output wire [31:0]                   ifmap_46,
    output wire [31:0]                   ifmap_47,
    output wire [31:0]                   ifmap_48,
    output wire [31:0]                   ifmap_49,
    output wire [31:0]                   ifmap_50,
    output wire [31:0]                   ifmap_51,
    output wire [31:0]                   ifmap_52,
    output wire [31:0]                   ifmap_53,
    output wire [31:0]                   ifmap_54,
    output wire [31:0]                   ifmap_55,
    output wire [31:0]                   ifmap_56,
    output wire [31:0]                   ifmap_57,
    output wire [31:0]                   ifmap_58,
    output wire [31:0]                   ifmap_59,
    output wire [31:0]                   ifmap_60,
    output wire [31:0]                   ifmap_61,
    output wire [31:0]                   ifmap_62,
    output wire [31:0]                   ifmap_63,
    output wire [31:0]                   ifmap_64,
    output wire [31:0]                   ifmap_65,
    output wire [31:0]                   ifmap_66,
    output wire [31:0]                   ifmap_67,
    output wire [31:0]                   ifmap_68,
    output wire [31:0]                   ifmap_69,
    output wire [31:0]                   ifmap_70,
    output wire [31:0]                   ifmap_71,
    output wire [31:0]                   ifmap_72,
    output wire [31:0]                   ifmap_73,
    output wire [31:0]                   ifmap_74,
    output wire [31:0]                   ifmap_75,
    output wire [31:0]                   ifmap_76,
    output wire [31:0]                   ifmap_77,
    output wire [31:0]                   ifmap_78,
    output wire [31:0]                   ifmap_79,
    output wire [31:0]                   ifmap_80,
    output wire [31:0]                   ifmap_81,
    output wire [31:0]                   ifmap_82,
    output wire [31:0]                   ifmap_83,
    output wire [31:0]                   ifmap_84,
    output wire [31:0]                   ifmap_85,
    output wire [31:0]                   ifmap_86,
    output wire [31:0]                   ifmap_87,
    output wire [31:0]                   ifmap_88,
    output wire [31:0]                   ifmap_89,
    output wire [31:0]                   ifmap_90,
    output wire [31:0]                   ifmap_91,
    output wire [31:0]                   ifmap_92,
    output wire [31:0]                   ifmap_93,
    output wire [31:0]                   ifmap_94,
    output wire [31:0]                   ifmap_95,
    output wire [31:0]                   ifmap_96,
    output wire [31:0]                   ifmap_97,
    output wire [31:0]                   ifmap_98,
    output wire [31:0]                   ifmap_99,
    output wire [31:0]                   ifmap_100,
    output wire [31:0]                   ifmap_101,
    output wire [31:0]                   ifmap_102,
    output wire [31:0]                   ifmap_103,
    output wire [31:0]                   ifmap_104,
    output wire [31:0]                   ifmap_105,
    output wire [31:0]                   ifmap_106,
    output wire [31:0]                   ifmap_107,
    output wire [31:0]                   ifmap_108,
    output wire [31:0]                   ifmap_109,
    output wire [31:0]                   ifmap_110,
    output wire [31:0]                   ifmap_111,
    output wire [31:0]                   ifmap_112,
    output wire [31:0]                   ifmap_113,
    output wire [31:0]                   ifmap_114,
    output wire [31:0]                   ifmap_115,
    output wire [31:0]                   ifmap_116,
    output wire [31:0]                   ifmap_117,
    output wire [31:0]                   ifmap_118,
    output wire [31:0]                   ifmap_119,
    output wire [31:0]                   ifmap_120,
    output wire [31:0]                   ifmap_121,
    output wire [31:0]                   ifmap_122,
    output wire [31:0]                   ifmap_123,
    output wire [31:0]                   ifmap_124,
    output wire [31:0]                   ifmap_125,
    output wire [31:0]                   ifmap_126,
    output wire [31:0]                   ifmap_127,
    output wire [31:0]                   ifmap_128,
    output wire [31:0]                   ifmap_129,
    output wire [31:0]                   ifmap_130,
    output wire [31:0]                   ifmap_131,
    output wire [31:0]                   ifmap_132,
    output wire [31:0]                   ifmap_133,
    output wire [31:0]                   ifmap_134,
    output wire [31:0]                   ifmap_135,
    output wire [31:0]                   ifmap_136,
    output wire [31:0]                   ifmap_137,
    output wire [31:0]                   ifmap_138,
    output wire [31:0]                   ifmap_139,
    output wire [31:0]                   ifmap_140,
    output wire [31:0]                   ifmap_141,
    output wire [31:0]                   ifmap_142,
    output wire [31:0]                   ifmap_143,
    output wire [31:0]                   ifmap_144,
    output wire [31:0]                   ifmap_145,
    output wire [31:0]                   ifmap_146,
    output wire [31:0]                   ifmap_147,
    output wire [31:0]                   ifmap_148,
    output wire [31:0]                   ifmap_149,
    output wire [31:0]                   ifmap_150,
    output wire [31:0]                   ifmap_151,
    output wire [31:0]                   ifmap_152,
    output wire [31:0]                   ifmap_153,
    output wire [31:0]                   ifmap_154,
    output wire [31:0]                   ifmap_155,
    output wire [31:0]                   ifmap_156,
    output wire [31:0]                   ifmap_157,
    output wire [31:0]                   ifmap_158,
    output wire [31:0]                   ifmap_159,
    output wire [31:0]                   ifmap_160,
    output wire [31:0]                   ifmap_161,
    output wire [31:0]                   ifmap_162,
    output wire [31:0]                   ifmap_163,
    output wire [31:0]                   ifmap_164,
    output wire [31:0]                   ifmap_165,
    output wire [31:0]                   ifmap_166,
    output wire [31:0]                   ifmap_167,
    output wire [31:0]                   ifmap_168,
    output wire [31:0]                   ifmap_169,
    output wire [31:0]                   ifmap_170,
    output wire [31:0]                   ifmap_171,
    output wire [31:0]                   ifmap_172,
    output wire [31:0]                   ifmap_173,
    output wire [31:0]                   ifmap_174,
    output wire [31:0]                   ifmap_175,
    output wire [31:0]                   ifmap_176,
    output wire [31:0]                   ifmap_177,
    output wire [31:0]                   ifmap_178,
    output wire [31:0]                   ifmap_179,
    output wire [31:0]                   ifmap_180,
    output wire [31:0]                   ifmap_181,
    output wire [31:0]                   ifmap_182,
    output wire [31:0]                   ifmap_183,
    output wire [31:0]                   ifmap_184,
    output wire [31:0]                   ifmap_185,
    output wire [31:0]                   ifmap_186,
    output wire [31:0]                   ifmap_187,
    output wire [31:0]                   ifmap_188,
    output wire [31:0]                   ifmap_189,
    output wire [31:0]                   ifmap_190,
    output wire [31:0]                   ifmap_191,
    output wire [31:0]                   ifmap_192,
    output wire [31:0]                   ifmap_193,
    output wire [31:0]                   ifmap_194,
    output wire [31:0]                   ifmap_195,
    output wire [31:0]                   ifmap_196,
    output wire [31:0]                   ifmap_197,
    output wire [31:0]                   ifmap_198,
    output wire [31:0]                   ifmap_199,
    output wire [31:0]                   ifmap_200,
    output wire [31:0]                   ifmap_201,
    output wire [31:0]                   ifmap_202,
    output wire [31:0]                   ifmap_203,
    output wire [31:0]                   ifmap_204,
    output wire [31:0]                   ifmap_205,
    output wire [31:0]                   ifmap_206,
    output wire [31:0]                   ifmap_207,
    output wire [31:0]                   ifmap_208,
    output wire [31:0]                   ifmap_209,
    output wire [31:0]                   ifmap_210,
    output wire [31:0]                   ifmap_211,
    output wire [31:0]                   ifmap_212,
    output wire [31:0]                   ifmap_213,
    output wire [31:0]                   ifmap_214,
    output wire [31:0]                   ifmap_215,
    output wire [31:0]                   ifmap_216,
    output wire [31:0]                   ifmap_217,
    output wire [31:0]                   ifmap_218,
    output wire [31:0]                   ifmap_219,
    output wire [31:0]                   ifmap_220,
    output wire [31:0]                   ifmap_221,
    output wire [31:0]                   ifmap_222,
    output wire [31:0]                   ifmap_223,
    output wire [31:0]                   ifmap_224,
    output wire [31:0]                   ifmap_225,
    output wire [31:0]                   ifmap_226,
    output wire [31:0]                   ifmap_227,
    output wire [31:0]                   ifmap_228,
    output wire [31:0]                   ifmap_229,
    output wire [31:0]                   ifmap_230,
    output wire [31:0]                   ifmap_231,
    output wire [31:0]                   ifmap_232,
    output wire [31:0]                   ifmap_233,
    output wire [31:0]                   ifmap_234,
    output wire [31:0]                   ifmap_235,
    output wire [31:0]                   ifmap_236,
    output wire [31:0]                   ifmap_237,
    output wire [31:0]                   ifmap_238,
    output wire [31:0]                   ifmap_239,
    output wire [31:0]                   ifmap_240,
    output wire [31:0]                   ifmap_241,
    output wire [31:0]                   ifmap_242,
    output wire [31:0]                   ifmap_243,
    output wire [31:0]                   ifmap_244,
    output wire [31:0]                   ifmap_245,
    output wire [31:0]                   ifmap_246,
    output wire [31:0]                   ifmap_247,
    output wire [31:0]                   ifmap_248,
    output wire [31:0]                   ifmap_249,
    output wire [31:0]                   ifmap_250,
    output wire [31:0]                   ifmap_251,
    output wire [31:0]                   ifmap_252,
    output wire [31:0]                   ifmap_253,
    output wire [31:0]                   ifmap_254,
    output wire [31:0]                   ifmap_255,
    output wire [31:0]                   filter_0,
    output wire [31:0]                   filter_1,
    output wire [31:0]                   filter_2,
    output wire [31:0]                   filter_3,
    output wire [31:0]                   filter_4,
    output wire [31:0]                   filter_5,
    output wire [31:0]                   filter_6,
    output wire [31:0]                   filter_7,
    output wire [31:0]                   filter_8,
    output wire [31:0]                   filter_9,
    output wire [31:0]                   filter_10,
    output wire [31:0]                   filter_11,
    output wire [31:0]                   filter_12,
    output wire [31:0]                   filter_13,
    output wire [31:0]                   filter_14,
    output wire [31:0]                   filter_15,
    output wire [31:0]                   filter_16,
    output wire [31:0]                   filter_17,
    output wire [31:0]                   filter_18,
    output wire [31:0]                   filter_19,
    output wire [31:0]                   filter_20,
    output wire [31:0]                   filter_21,
    output wire [31:0]                   filter_22,
    output wire [31:0]                   filter_23,
    output wire [31:0]                   filter_24,
    input  wire [3:0]                    ofmap_0_address0,
    input  wire                          ofmap_0_ce0,
    input  wire                          ofmap_0_we0,
    input  wire [31:0]                   ofmap_0_d0,
    input  wire [3:0]                    ofmap_1_address0,
    input  wire                          ofmap_1_ce0,
    input  wire                          ofmap_1_we0,
    input  wire [31:0]                   ofmap_1_d0,
    input  wire [3:0]                    ofmap_2_address0,
    input  wire                          ofmap_2_ce0,
    input  wire                          ofmap_2_we0,
    input  wire [31:0]                   ofmap_2_d0,
    input  wire [3:0]                    ofmap_3_address0,
    input  wire                          ofmap_3_ce0,
    input  wire                          ofmap_3_we0,
    input  wire [31:0]                   ofmap_3_d0,
    input  wire [3:0]                    ofmap_4_address0,
    input  wire                          ofmap_4_ce0,
    input  wire                          ofmap_4_we0,
    input  wire [31:0]                   ofmap_4_d0,
    input  wire [3:0]                    ofmap_5_address0,
    input  wire                          ofmap_5_ce0,
    input  wire                          ofmap_5_we0,
    input  wire [31:0]                   ofmap_5_d0,
    input  wire [3:0]                    ofmap_6_address0,
    input  wire                          ofmap_6_ce0,
    input  wire                          ofmap_6_we0,
    input  wire [31:0]                   ofmap_6_d0,
    input  wire [3:0]                    ofmap_7_address0,
    input  wire                          ofmap_7_ce0,
    input  wire                          ofmap_7_we0,
    input  wire [31:0]                   ofmap_7_d0,
    input  wire [3:0]                    ofmap_8_address0,
    input  wire                          ofmap_8_ce0,
    input  wire                          ofmap_8_we0,
    input  wire [31:0]                   ofmap_8_d0,
    input  wire [3:0]                    ofmap_9_address0,
    input  wire                          ofmap_9_ce0,
    input  wire                          ofmap_9_we0,
    input  wire [31:0]                   ofmap_9_d0,
    input  wire [3:0]                    ofmap_10_address0,
    input  wire                          ofmap_10_ce0,
    input  wire                          ofmap_10_we0,
    input  wire [31:0]                   ofmap_10_d0,
    input  wire [3:0]                    ofmap_11_address0,
    input  wire                          ofmap_11_ce0,
    input  wire                          ofmap_11_we0,
    input  wire [31:0]                   ofmap_11_d0
);
//------------------------Address Info-------------------
// 0x000 : reserved
// 0x004 : reserved
// 0x008 : reserved
// 0x00c : reserved
// 0x010 : Data signal of ifmap_0
//         bit 31~0 - ifmap_0[31:0] (Read/Write)
// 0x014 : reserved
// 0x018 : Data signal of ifmap_1
//         bit 31~0 - ifmap_1[31:0] (Read/Write)
// 0x01c : reserved
// 0x020 : Data signal of ifmap_2
//         bit 31~0 - ifmap_2[31:0] (Read/Write)
// 0x024 : reserved
// 0x028 : Data signal of ifmap_3
//         bit 31~0 - ifmap_3[31:0] (Read/Write)
// 0x02c : reserved
// 0x030 : Data signal of ifmap_4
//         bit 31~0 - ifmap_4[31:0] (Read/Write)
// 0x034 : reserved
// 0x038 : Data signal of ifmap_5
//         bit 31~0 - ifmap_5[31:0] (Read/Write)
// 0x03c : reserved
// 0x040 : Data signal of ifmap_6
//         bit 31~0 - ifmap_6[31:0] (Read/Write)
// 0x044 : reserved
// 0x048 : Data signal of ifmap_7
//         bit 31~0 - ifmap_7[31:0] (Read/Write)
// 0x04c : reserved
// 0x050 : Data signal of ifmap_8
//         bit 31~0 - ifmap_8[31:0] (Read/Write)
// 0x054 : reserved
// 0x058 : Data signal of ifmap_9
//         bit 31~0 - ifmap_9[31:0] (Read/Write)
// 0x05c : reserved
// 0x060 : Data signal of ifmap_10
//         bit 31~0 - ifmap_10[31:0] (Read/Write)
// 0x064 : reserved
// 0x068 : Data signal of ifmap_11
//         bit 31~0 - ifmap_11[31:0] (Read/Write)
// 0x06c : reserved
// 0x070 : Data signal of ifmap_12
//         bit 31~0 - ifmap_12[31:0] (Read/Write)
// 0x074 : reserved
// 0x078 : Data signal of ifmap_13
//         bit 31~0 - ifmap_13[31:0] (Read/Write)
// 0x07c : reserved
// 0x080 : Data signal of ifmap_14
//         bit 31~0 - ifmap_14[31:0] (Read/Write)
// 0x084 : reserved
// 0x088 : Data signal of ifmap_15
//         bit 31~0 - ifmap_15[31:0] (Read/Write)
// 0x08c : reserved
// 0x090 : Data signal of ifmap_16
//         bit 31~0 - ifmap_16[31:0] (Read/Write)
// 0x094 : reserved
// 0x098 : Data signal of ifmap_17
//         bit 31~0 - ifmap_17[31:0] (Read/Write)
// 0x09c : reserved
// 0x0a0 : Data signal of ifmap_18
//         bit 31~0 - ifmap_18[31:0] (Read/Write)
// 0x0a4 : reserved
// 0x0a8 : Data signal of ifmap_19
//         bit 31~0 - ifmap_19[31:0] (Read/Write)
// 0x0ac : reserved
// 0x0b0 : Data signal of ifmap_20
//         bit 31~0 - ifmap_20[31:0] (Read/Write)
// 0x0b4 : reserved
// 0x0b8 : Data signal of ifmap_21
//         bit 31~0 - ifmap_21[31:0] (Read/Write)
// 0x0bc : reserved
// 0x0c0 : Data signal of ifmap_22
//         bit 31~0 - ifmap_22[31:0] (Read/Write)
// 0x0c4 : reserved
// 0x0c8 : Data signal of ifmap_23
//         bit 31~0 - ifmap_23[31:0] (Read/Write)
// 0x0cc : reserved
// 0x0d0 : Data signal of ifmap_24
//         bit 31~0 - ifmap_24[31:0] (Read/Write)
// 0x0d4 : reserved
// 0x0d8 : Data signal of ifmap_25
//         bit 31~0 - ifmap_25[31:0] (Read/Write)
// 0x0dc : reserved
// 0x0e0 : Data signal of ifmap_26
//         bit 31~0 - ifmap_26[31:0] (Read/Write)
// 0x0e4 : reserved
// 0x0e8 : Data signal of ifmap_27
//         bit 31~0 - ifmap_27[31:0] (Read/Write)
// 0x0ec : reserved
// 0x0f0 : Data signal of ifmap_28
//         bit 31~0 - ifmap_28[31:0] (Read/Write)
// 0x0f4 : reserved
// 0x0f8 : Data signal of ifmap_29
//         bit 31~0 - ifmap_29[31:0] (Read/Write)
// 0x0fc : reserved
// 0x100 : Data signal of ifmap_30
//         bit 31~0 - ifmap_30[31:0] (Read/Write)
// 0x104 : reserved
// 0x108 : Data signal of ifmap_31
//         bit 31~0 - ifmap_31[31:0] (Read/Write)
// 0x10c : reserved
// 0x110 : Data signal of ifmap_32
//         bit 31~0 - ifmap_32[31:0] (Read/Write)
// 0x114 : reserved
// 0x118 : Data signal of ifmap_33
//         bit 31~0 - ifmap_33[31:0] (Read/Write)
// 0x11c : reserved
// 0x120 : Data signal of ifmap_34
//         bit 31~0 - ifmap_34[31:0] (Read/Write)
// 0x124 : reserved
// 0x128 : Data signal of ifmap_35
//         bit 31~0 - ifmap_35[31:0] (Read/Write)
// 0x12c : reserved
// 0x130 : Data signal of ifmap_36
//         bit 31~0 - ifmap_36[31:0] (Read/Write)
// 0x134 : reserved
// 0x138 : Data signal of ifmap_37
//         bit 31~0 - ifmap_37[31:0] (Read/Write)
// 0x13c : reserved
// 0x140 : Data signal of ifmap_38
//         bit 31~0 - ifmap_38[31:0] (Read/Write)
// 0x144 : reserved
// 0x148 : Data signal of ifmap_39
//         bit 31~0 - ifmap_39[31:0] (Read/Write)
// 0x14c : reserved
// 0x150 : Data signal of ifmap_40
//         bit 31~0 - ifmap_40[31:0] (Read/Write)
// 0x154 : reserved
// 0x158 : Data signal of ifmap_41
//         bit 31~0 - ifmap_41[31:0] (Read/Write)
// 0x15c : reserved
// 0x160 : Data signal of ifmap_42
//         bit 31~0 - ifmap_42[31:0] (Read/Write)
// 0x164 : reserved
// 0x168 : Data signal of ifmap_43
//         bit 31~0 - ifmap_43[31:0] (Read/Write)
// 0x16c : reserved
// 0x170 : Data signal of ifmap_44
//         bit 31~0 - ifmap_44[31:0] (Read/Write)
// 0x174 : reserved
// 0x178 : Data signal of ifmap_45
//         bit 31~0 - ifmap_45[31:0] (Read/Write)
// 0x17c : reserved
// 0x180 : Data signal of ifmap_46
//         bit 31~0 - ifmap_46[31:0] (Read/Write)
// 0x184 : reserved
// 0x188 : Data signal of ifmap_47
//         bit 31~0 - ifmap_47[31:0] (Read/Write)
// 0x18c : reserved
// 0x190 : Data signal of ifmap_48
//         bit 31~0 - ifmap_48[31:0] (Read/Write)
// 0x194 : reserved
// 0x198 : Data signal of ifmap_49
//         bit 31~0 - ifmap_49[31:0] (Read/Write)
// 0x19c : reserved
// 0x1a0 : Data signal of ifmap_50
//         bit 31~0 - ifmap_50[31:0] (Read/Write)
// 0x1a4 : reserved
// 0x1a8 : Data signal of ifmap_51
//         bit 31~0 - ifmap_51[31:0] (Read/Write)
// 0x1ac : reserved
// 0x1b0 : Data signal of ifmap_52
//         bit 31~0 - ifmap_52[31:0] (Read/Write)
// 0x1b4 : reserved
// 0x1b8 : Data signal of ifmap_53
//         bit 31~0 - ifmap_53[31:0] (Read/Write)
// 0x1bc : reserved
// 0x1c0 : Data signal of ifmap_54
//         bit 31~0 - ifmap_54[31:0] (Read/Write)
// 0x1c4 : reserved
// 0x1c8 : Data signal of ifmap_55
//         bit 31~0 - ifmap_55[31:0] (Read/Write)
// 0x1cc : reserved
// 0x1d0 : Data signal of ifmap_56
//         bit 31~0 - ifmap_56[31:0] (Read/Write)
// 0x1d4 : reserved
// 0x1d8 : Data signal of ifmap_57
//         bit 31~0 - ifmap_57[31:0] (Read/Write)
// 0x1dc : reserved
// 0x1e0 : Data signal of ifmap_58
//         bit 31~0 - ifmap_58[31:0] (Read/Write)
// 0x1e4 : reserved
// 0x1e8 : Data signal of ifmap_59
//         bit 31~0 - ifmap_59[31:0] (Read/Write)
// 0x1ec : reserved
// 0x1f0 : Data signal of ifmap_60
//         bit 31~0 - ifmap_60[31:0] (Read/Write)
// 0x1f4 : reserved
// 0x1f8 : Data signal of ifmap_61
//         bit 31~0 - ifmap_61[31:0] (Read/Write)
// 0x1fc : reserved
// 0x200 : Data signal of ifmap_62
//         bit 31~0 - ifmap_62[31:0] (Read/Write)
// 0x204 : reserved
// 0x208 : Data signal of ifmap_63
//         bit 31~0 - ifmap_63[31:0] (Read/Write)
// 0x20c : reserved
// 0x210 : Data signal of ifmap_64
//         bit 31~0 - ifmap_64[31:0] (Read/Write)
// 0x214 : reserved
// 0x218 : Data signal of ifmap_65
//         bit 31~0 - ifmap_65[31:0] (Read/Write)
// 0x21c : reserved
// 0x220 : Data signal of ifmap_66
//         bit 31~0 - ifmap_66[31:0] (Read/Write)
// 0x224 : reserved
// 0x228 : Data signal of ifmap_67
//         bit 31~0 - ifmap_67[31:0] (Read/Write)
// 0x22c : reserved
// 0x230 : Data signal of ifmap_68
//         bit 31~0 - ifmap_68[31:0] (Read/Write)
// 0x234 : reserved
// 0x238 : Data signal of ifmap_69
//         bit 31~0 - ifmap_69[31:0] (Read/Write)
// 0x23c : reserved
// 0x240 : Data signal of ifmap_70
//         bit 31~0 - ifmap_70[31:0] (Read/Write)
// 0x244 : reserved
// 0x248 : Data signal of ifmap_71
//         bit 31~0 - ifmap_71[31:0] (Read/Write)
// 0x24c : reserved
// 0x250 : Data signal of ifmap_72
//         bit 31~0 - ifmap_72[31:0] (Read/Write)
// 0x254 : reserved
// 0x258 : Data signal of ifmap_73
//         bit 31~0 - ifmap_73[31:0] (Read/Write)
// 0x25c : reserved
// 0x260 : Data signal of ifmap_74
//         bit 31~0 - ifmap_74[31:0] (Read/Write)
// 0x264 : reserved
// 0x268 : Data signal of ifmap_75
//         bit 31~0 - ifmap_75[31:0] (Read/Write)
// 0x26c : reserved
// 0x270 : Data signal of ifmap_76
//         bit 31~0 - ifmap_76[31:0] (Read/Write)
// 0x274 : reserved
// 0x278 : Data signal of ifmap_77
//         bit 31~0 - ifmap_77[31:0] (Read/Write)
// 0x27c : reserved
// 0x280 : Data signal of ifmap_78
//         bit 31~0 - ifmap_78[31:0] (Read/Write)
// 0x284 : reserved
// 0x288 : Data signal of ifmap_79
//         bit 31~0 - ifmap_79[31:0] (Read/Write)
// 0x28c : reserved
// 0x290 : Data signal of ifmap_80
//         bit 31~0 - ifmap_80[31:0] (Read/Write)
// 0x294 : reserved
// 0x298 : Data signal of ifmap_81
//         bit 31~0 - ifmap_81[31:0] (Read/Write)
// 0x29c : reserved
// 0x2a0 : Data signal of ifmap_82
//         bit 31~0 - ifmap_82[31:0] (Read/Write)
// 0x2a4 : reserved
// 0x2a8 : Data signal of ifmap_83
//         bit 31~0 - ifmap_83[31:0] (Read/Write)
// 0x2ac : reserved
// 0x2b0 : Data signal of ifmap_84
//         bit 31~0 - ifmap_84[31:0] (Read/Write)
// 0x2b4 : reserved
// 0x2b8 : Data signal of ifmap_85
//         bit 31~0 - ifmap_85[31:0] (Read/Write)
// 0x2bc : reserved
// 0x2c0 : Data signal of ifmap_86
//         bit 31~0 - ifmap_86[31:0] (Read/Write)
// 0x2c4 : reserved
// 0x2c8 : Data signal of ifmap_87
//         bit 31~0 - ifmap_87[31:0] (Read/Write)
// 0x2cc : reserved
// 0x2d0 : Data signal of ifmap_88
//         bit 31~0 - ifmap_88[31:0] (Read/Write)
// 0x2d4 : reserved
// 0x2d8 : Data signal of ifmap_89
//         bit 31~0 - ifmap_89[31:0] (Read/Write)
// 0x2dc : reserved
// 0x2e0 : Data signal of ifmap_90
//         bit 31~0 - ifmap_90[31:0] (Read/Write)
// 0x2e4 : reserved
// 0x2e8 : Data signal of ifmap_91
//         bit 31~0 - ifmap_91[31:0] (Read/Write)
// 0x2ec : reserved
// 0x2f0 : Data signal of ifmap_92
//         bit 31~0 - ifmap_92[31:0] (Read/Write)
// 0x2f4 : reserved
// 0x2f8 : Data signal of ifmap_93
//         bit 31~0 - ifmap_93[31:0] (Read/Write)
// 0x2fc : reserved
// 0x300 : Data signal of ifmap_94
//         bit 31~0 - ifmap_94[31:0] (Read/Write)
// 0x304 : reserved
// 0x308 : Data signal of ifmap_95
//         bit 31~0 - ifmap_95[31:0] (Read/Write)
// 0x30c : reserved
// 0x310 : Data signal of ifmap_96
//         bit 31~0 - ifmap_96[31:0] (Read/Write)
// 0x314 : reserved
// 0x318 : Data signal of ifmap_97
//         bit 31~0 - ifmap_97[31:0] (Read/Write)
// 0x31c : reserved
// 0x320 : Data signal of ifmap_98
//         bit 31~0 - ifmap_98[31:0] (Read/Write)
// 0x324 : reserved
// 0x328 : Data signal of ifmap_99
//         bit 31~0 - ifmap_99[31:0] (Read/Write)
// 0x32c : reserved
// 0x330 : Data signal of ifmap_100
//         bit 31~0 - ifmap_100[31:0] (Read/Write)
// 0x334 : reserved
// 0x338 : Data signal of ifmap_101
//         bit 31~0 - ifmap_101[31:0] (Read/Write)
// 0x33c : reserved
// 0x340 : Data signal of ifmap_102
//         bit 31~0 - ifmap_102[31:0] (Read/Write)
// 0x344 : reserved
// 0x348 : Data signal of ifmap_103
//         bit 31~0 - ifmap_103[31:0] (Read/Write)
// 0x34c : reserved
// 0x350 : Data signal of ifmap_104
//         bit 31~0 - ifmap_104[31:0] (Read/Write)
// 0x354 : reserved
// 0x358 : Data signal of ifmap_105
//         bit 31~0 - ifmap_105[31:0] (Read/Write)
// 0x35c : reserved
// 0x360 : Data signal of ifmap_106
//         bit 31~0 - ifmap_106[31:0] (Read/Write)
// 0x364 : reserved
// 0x368 : Data signal of ifmap_107
//         bit 31~0 - ifmap_107[31:0] (Read/Write)
// 0x36c : reserved
// 0x370 : Data signal of ifmap_108
//         bit 31~0 - ifmap_108[31:0] (Read/Write)
// 0x374 : reserved
// 0x378 : Data signal of ifmap_109
//         bit 31~0 - ifmap_109[31:0] (Read/Write)
// 0x37c : reserved
// 0x380 : Data signal of ifmap_110
//         bit 31~0 - ifmap_110[31:0] (Read/Write)
// 0x384 : reserved
// 0x388 : Data signal of ifmap_111
//         bit 31~0 - ifmap_111[31:0] (Read/Write)
// 0x38c : reserved
// 0x390 : Data signal of ifmap_112
//         bit 31~0 - ifmap_112[31:0] (Read/Write)
// 0x394 : reserved
// 0x398 : Data signal of ifmap_113
//         bit 31~0 - ifmap_113[31:0] (Read/Write)
// 0x39c : reserved
// 0x3a0 : Data signal of ifmap_114
//         bit 31~0 - ifmap_114[31:0] (Read/Write)
// 0x3a4 : reserved
// 0x3a8 : Data signal of ifmap_115
//         bit 31~0 - ifmap_115[31:0] (Read/Write)
// 0x3ac : reserved
// 0x3b0 : Data signal of ifmap_116
//         bit 31~0 - ifmap_116[31:0] (Read/Write)
// 0x3b4 : reserved
// 0x3b8 : Data signal of ifmap_117
//         bit 31~0 - ifmap_117[31:0] (Read/Write)
// 0x3bc : reserved
// 0x3c0 : Data signal of ifmap_118
//         bit 31~0 - ifmap_118[31:0] (Read/Write)
// 0x3c4 : reserved
// 0x3c8 : Data signal of ifmap_119
//         bit 31~0 - ifmap_119[31:0] (Read/Write)
// 0x3cc : reserved
// 0x3d0 : Data signal of ifmap_120
//         bit 31~0 - ifmap_120[31:0] (Read/Write)
// 0x3d4 : reserved
// 0x3d8 : Data signal of ifmap_121
//         bit 31~0 - ifmap_121[31:0] (Read/Write)
// 0x3dc : reserved
// 0x3e0 : Data signal of ifmap_122
//         bit 31~0 - ifmap_122[31:0] (Read/Write)
// 0x3e4 : reserved
// 0x3e8 : Data signal of ifmap_123
//         bit 31~0 - ifmap_123[31:0] (Read/Write)
// 0x3ec : reserved
// 0x3f0 : Data signal of ifmap_124
//         bit 31~0 - ifmap_124[31:0] (Read/Write)
// 0x3f4 : reserved
// 0x3f8 : Data signal of ifmap_125
//         bit 31~0 - ifmap_125[31:0] (Read/Write)
// 0x3fc : reserved
// 0x400 : Data signal of ifmap_126
//         bit 31~0 - ifmap_126[31:0] (Read/Write)
// 0x404 : reserved
// 0x408 : Data signal of ifmap_127
//         bit 31~0 - ifmap_127[31:0] (Read/Write)
// 0x40c : reserved
// 0x410 : Data signal of ifmap_128
//         bit 31~0 - ifmap_128[31:0] (Read/Write)
// 0x414 : reserved
// 0x418 : Data signal of ifmap_129
//         bit 31~0 - ifmap_129[31:0] (Read/Write)
// 0x41c : reserved
// 0x420 : Data signal of ifmap_130
//         bit 31~0 - ifmap_130[31:0] (Read/Write)
// 0x424 : reserved
// 0x428 : Data signal of ifmap_131
//         bit 31~0 - ifmap_131[31:0] (Read/Write)
// 0x42c : reserved
// 0x430 : Data signal of ifmap_132
//         bit 31~0 - ifmap_132[31:0] (Read/Write)
// 0x434 : reserved
// 0x438 : Data signal of ifmap_133
//         bit 31~0 - ifmap_133[31:0] (Read/Write)
// 0x43c : reserved
// 0x440 : Data signal of ifmap_134
//         bit 31~0 - ifmap_134[31:0] (Read/Write)
// 0x444 : reserved
// 0x448 : Data signal of ifmap_135
//         bit 31~0 - ifmap_135[31:0] (Read/Write)
// 0x44c : reserved
// 0x450 : Data signal of ifmap_136
//         bit 31~0 - ifmap_136[31:0] (Read/Write)
// 0x454 : reserved
// 0x458 : Data signal of ifmap_137
//         bit 31~0 - ifmap_137[31:0] (Read/Write)
// 0x45c : reserved
// 0x460 : Data signal of ifmap_138
//         bit 31~0 - ifmap_138[31:0] (Read/Write)
// 0x464 : reserved
// 0x468 : Data signal of ifmap_139
//         bit 31~0 - ifmap_139[31:0] (Read/Write)
// 0x46c : reserved
// 0x470 : Data signal of ifmap_140
//         bit 31~0 - ifmap_140[31:0] (Read/Write)
// 0x474 : reserved
// 0x478 : Data signal of ifmap_141
//         bit 31~0 - ifmap_141[31:0] (Read/Write)
// 0x47c : reserved
// 0x480 : Data signal of ifmap_142
//         bit 31~0 - ifmap_142[31:0] (Read/Write)
// 0x484 : reserved
// 0x488 : Data signal of ifmap_143
//         bit 31~0 - ifmap_143[31:0] (Read/Write)
// 0x48c : reserved
// 0x490 : Data signal of ifmap_144
//         bit 31~0 - ifmap_144[31:0] (Read/Write)
// 0x494 : reserved
// 0x498 : Data signal of ifmap_145
//         bit 31~0 - ifmap_145[31:0] (Read/Write)
// 0x49c : reserved
// 0x4a0 : Data signal of ifmap_146
//         bit 31~0 - ifmap_146[31:0] (Read/Write)
// 0x4a4 : reserved
// 0x4a8 : Data signal of ifmap_147
//         bit 31~0 - ifmap_147[31:0] (Read/Write)
// 0x4ac : reserved
// 0x4b0 : Data signal of ifmap_148
//         bit 31~0 - ifmap_148[31:0] (Read/Write)
// 0x4b4 : reserved
// 0x4b8 : Data signal of ifmap_149
//         bit 31~0 - ifmap_149[31:0] (Read/Write)
// 0x4bc : reserved
// 0x4c0 : Data signal of ifmap_150
//         bit 31~0 - ifmap_150[31:0] (Read/Write)
// 0x4c4 : reserved
// 0x4c8 : Data signal of ifmap_151
//         bit 31~0 - ifmap_151[31:0] (Read/Write)
// 0x4cc : reserved
// 0x4d0 : Data signal of ifmap_152
//         bit 31~0 - ifmap_152[31:0] (Read/Write)
// 0x4d4 : reserved
// 0x4d8 : Data signal of ifmap_153
//         bit 31~0 - ifmap_153[31:0] (Read/Write)
// 0x4dc : reserved
// 0x4e0 : Data signal of ifmap_154
//         bit 31~0 - ifmap_154[31:0] (Read/Write)
// 0x4e4 : reserved
// 0x4e8 : Data signal of ifmap_155
//         bit 31~0 - ifmap_155[31:0] (Read/Write)
// 0x4ec : reserved
// 0x4f0 : Data signal of ifmap_156
//         bit 31~0 - ifmap_156[31:0] (Read/Write)
// 0x4f4 : reserved
// 0x4f8 : Data signal of ifmap_157
//         bit 31~0 - ifmap_157[31:0] (Read/Write)
// 0x4fc : reserved
// 0x500 : Data signal of ifmap_158
//         bit 31~0 - ifmap_158[31:0] (Read/Write)
// 0x504 : reserved
// 0x508 : Data signal of ifmap_159
//         bit 31~0 - ifmap_159[31:0] (Read/Write)
// 0x50c : reserved
// 0x510 : Data signal of ifmap_160
//         bit 31~0 - ifmap_160[31:0] (Read/Write)
// 0x514 : reserved
// 0x518 : Data signal of ifmap_161
//         bit 31~0 - ifmap_161[31:0] (Read/Write)
// 0x51c : reserved
// 0x520 : Data signal of ifmap_162
//         bit 31~0 - ifmap_162[31:0] (Read/Write)
// 0x524 : reserved
// 0x528 : Data signal of ifmap_163
//         bit 31~0 - ifmap_163[31:0] (Read/Write)
// 0x52c : reserved
// 0x530 : Data signal of ifmap_164
//         bit 31~0 - ifmap_164[31:0] (Read/Write)
// 0x534 : reserved
// 0x538 : Data signal of ifmap_165
//         bit 31~0 - ifmap_165[31:0] (Read/Write)
// 0x53c : reserved
// 0x540 : Data signal of ifmap_166
//         bit 31~0 - ifmap_166[31:0] (Read/Write)
// 0x544 : reserved
// 0x548 : Data signal of ifmap_167
//         bit 31~0 - ifmap_167[31:0] (Read/Write)
// 0x54c : reserved
// 0x550 : Data signal of ifmap_168
//         bit 31~0 - ifmap_168[31:0] (Read/Write)
// 0x554 : reserved
// 0x558 : Data signal of ifmap_169
//         bit 31~0 - ifmap_169[31:0] (Read/Write)
// 0x55c : reserved
// 0x560 : Data signal of ifmap_170
//         bit 31~0 - ifmap_170[31:0] (Read/Write)
// 0x564 : reserved
// 0x568 : Data signal of ifmap_171
//         bit 31~0 - ifmap_171[31:0] (Read/Write)
// 0x56c : reserved
// 0x570 : Data signal of ifmap_172
//         bit 31~0 - ifmap_172[31:0] (Read/Write)
// 0x574 : reserved
// 0x578 : Data signal of ifmap_173
//         bit 31~0 - ifmap_173[31:0] (Read/Write)
// 0x57c : reserved
// 0x580 : Data signal of ifmap_174
//         bit 31~0 - ifmap_174[31:0] (Read/Write)
// 0x584 : reserved
// 0x588 : Data signal of ifmap_175
//         bit 31~0 - ifmap_175[31:0] (Read/Write)
// 0x58c : reserved
// 0x590 : Data signal of ifmap_176
//         bit 31~0 - ifmap_176[31:0] (Read/Write)
// 0x594 : reserved
// 0x598 : Data signal of ifmap_177
//         bit 31~0 - ifmap_177[31:0] (Read/Write)
// 0x59c : reserved
// 0x5a0 : Data signal of ifmap_178
//         bit 31~0 - ifmap_178[31:0] (Read/Write)
// 0x5a4 : reserved
// 0x5a8 : Data signal of ifmap_179
//         bit 31~0 - ifmap_179[31:0] (Read/Write)
// 0x5ac : reserved
// 0x5b0 : Data signal of ifmap_180
//         bit 31~0 - ifmap_180[31:0] (Read/Write)
// 0x5b4 : reserved
// 0x5b8 : Data signal of ifmap_181
//         bit 31~0 - ifmap_181[31:0] (Read/Write)
// 0x5bc : reserved
// 0x5c0 : Data signal of ifmap_182
//         bit 31~0 - ifmap_182[31:0] (Read/Write)
// 0x5c4 : reserved
// 0x5c8 : Data signal of ifmap_183
//         bit 31~0 - ifmap_183[31:0] (Read/Write)
// 0x5cc : reserved
// 0x5d0 : Data signal of ifmap_184
//         bit 31~0 - ifmap_184[31:0] (Read/Write)
// 0x5d4 : reserved
// 0x5d8 : Data signal of ifmap_185
//         bit 31~0 - ifmap_185[31:0] (Read/Write)
// 0x5dc : reserved
// 0x5e0 : Data signal of ifmap_186
//         bit 31~0 - ifmap_186[31:0] (Read/Write)
// 0x5e4 : reserved
// 0x5e8 : Data signal of ifmap_187
//         bit 31~0 - ifmap_187[31:0] (Read/Write)
// 0x5ec : reserved
// 0x5f0 : Data signal of ifmap_188
//         bit 31~0 - ifmap_188[31:0] (Read/Write)
// 0x5f4 : reserved
// 0x5f8 : Data signal of ifmap_189
//         bit 31~0 - ifmap_189[31:0] (Read/Write)
// 0x5fc : reserved
// 0x600 : Data signal of ifmap_190
//         bit 31~0 - ifmap_190[31:0] (Read/Write)
// 0x604 : reserved
// 0x608 : Data signal of ifmap_191
//         bit 31~0 - ifmap_191[31:0] (Read/Write)
// 0x60c : reserved
// 0x610 : Data signal of ifmap_192
//         bit 31~0 - ifmap_192[31:0] (Read/Write)
// 0x614 : reserved
// 0x618 : Data signal of ifmap_193
//         bit 31~0 - ifmap_193[31:0] (Read/Write)
// 0x61c : reserved
// 0x620 : Data signal of ifmap_194
//         bit 31~0 - ifmap_194[31:0] (Read/Write)
// 0x624 : reserved
// 0x628 : Data signal of ifmap_195
//         bit 31~0 - ifmap_195[31:0] (Read/Write)
// 0x62c : reserved
// 0x630 : Data signal of ifmap_196
//         bit 31~0 - ifmap_196[31:0] (Read/Write)
// 0x634 : reserved
// 0x638 : Data signal of ifmap_197
//         bit 31~0 - ifmap_197[31:0] (Read/Write)
// 0x63c : reserved
// 0x640 : Data signal of ifmap_198
//         bit 31~0 - ifmap_198[31:0] (Read/Write)
// 0x644 : reserved
// 0x648 : Data signal of ifmap_199
//         bit 31~0 - ifmap_199[31:0] (Read/Write)
// 0x64c : reserved
// 0x650 : Data signal of ifmap_200
//         bit 31~0 - ifmap_200[31:0] (Read/Write)
// 0x654 : reserved
// 0x658 : Data signal of ifmap_201
//         bit 31~0 - ifmap_201[31:0] (Read/Write)
// 0x65c : reserved
// 0x660 : Data signal of ifmap_202
//         bit 31~0 - ifmap_202[31:0] (Read/Write)
// 0x664 : reserved
// 0x668 : Data signal of ifmap_203
//         bit 31~0 - ifmap_203[31:0] (Read/Write)
// 0x66c : reserved
// 0x670 : Data signal of ifmap_204
//         bit 31~0 - ifmap_204[31:0] (Read/Write)
// 0x674 : reserved
// 0x678 : Data signal of ifmap_205
//         bit 31~0 - ifmap_205[31:0] (Read/Write)
// 0x67c : reserved
// 0x680 : Data signal of ifmap_206
//         bit 31~0 - ifmap_206[31:0] (Read/Write)
// 0x684 : reserved
// 0x688 : Data signal of ifmap_207
//         bit 31~0 - ifmap_207[31:0] (Read/Write)
// 0x68c : reserved
// 0x690 : Data signal of ifmap_208
//         bit 31~0 - ifmap_208[31:0] (Read/Write)
// 0x694 : reserved
// 0x698 : Data signal of ifmap_209
//         bit 31~0 - ifmap_209[31:0] (Read/Write)
// 0x69c : reserved
// 0x6a0 : Data signal of ifmap_210
//         bit 31~0 - ifmap_210[31:0] (Read/Write)
// 0x6a4 : reserved
// 0x6a8 : Data signal of ifmap_211
//         bit 31~0 - ifmap_211[31:0] (Read/Write)
// 0x6ac : reserved
// 0x6b0 : Data signal of ifmap_212
//         bit 31~0 - ifmap_212[31:0] (Read/Write)
// 0x6b4 : reserved
// 0x6b8 : Data signal of ifmap_213
//         bit 31~0 - ifmap_213[31:0] (Read/Write)
// 0x6bc : reserved
// 0x6c0 : Data signal of ifmap_214
//         bit 31~0 - ifmap_214[31:0] (Read/Write)
// 0x6c4 : reserved
// 0x6c8 : Data signal of ifmap_215
//         bit 31~0 - ifmap_215[31:0] (Read/Write)
// 0x6cc : reserved
// 0x6d0 : Data signal of ifmap_216
//         bit 31~0 - ifmap_216[31:0] (Read/Write)
// 0x6d4 : reserved
// 0x6d8 : Data signal of ifmap_217
//         bit 31~0 - ifmap_217[31:0] (Read/Write)
// 0x6dc : reserved
// 0x6e0 : Data signal of ifmap_218
//         bit 31~0 - ifmap_218[31:0] (Read/Write)
// 0x6e4 : reserved
// 0x6e8 : Data signal of ifmap_219
//         bit 31~0 - ifmap_219[31:0] (Read/Write)
// 0x6ec : reserved
// 0x6f0 : Data signal of ifmap_220
//         bit 31~0 - ifmap_220[31:0] (Read/Write)
// 0x6f4 : reserved
// 0x6f8 : Data signal of ifmap_221
//         bit 31~0 - ifmap_221[31:0] (Read/Write)
// 0x6fc : reserved
// 0x700 : Data signal of ifmap_222
//         bit 31~0 - ifmap_222[31:0] (Read/Write)
// 0x704 : reserved
// 0x708 : Data signal of ifmap_223
//         bit 31~0 - ifmap_223[31:0] (Read/Write)
// 0x70c : reserved
// 0x710 : Data signal of ifmap_224
//         bit 31~0 - ifmap_224[31:0] (Read/Write)
// 0x714 : reserved
// 0x718 : Data signal of ifmap_225
//         bit 31~0 - ifmap_225[31:0] (Read/Write)
// 0x71c : reserved
// 0x720 : Data signal of ifmap_226
//         bit 31~0 - ifmap_226[31:0] (Read/Write)
// 0x724 : reserved
// 0x728 : Data signal of ifmap_227
//         bit 31~0 - ifmap_227[31:0] (Read/Write)
// 0x72c : reserved
// 0x730 : Data signal of ifmap_228
//         bit 31~0 - ifmap_228[31:0] (Read/Write)
// 0x734 : reserved
// 0x738 : Data signal of ifmap_229
//         bit 31~0 - ifmap_229[31:0] (Read/Write)
// 0x73c : reserved
// 0x740 : Data signal of ifmap_230
//         bit 31~0 - ifmap_230[31:0] (Read/Write)
// 0x744 : reserved
// 0x748 : Data signal of ifmap_231
//         bit 31~0 - ifmap_231[31:0] (Read/Write)
// 0x74c : reserved
// 0x750 : Data signal of ifmap_232
//         bit 31~0 - ifmap_232[31:0] (Read/Write)
// 0x754 : reserved
// 0x758 : Data signal of ifmap_233
//         bit 31~0 - ifmap_233[31:0] (Read/Write)
// 0x75c : reserved
// 0x760 : Data signal of ifmap_234
//         bit 31~0 - ifmap_234[31:0] (Read/Write)
// 0x764 : reserved
// 0x768 : Data signal of ifmap_235
//         bit 31~0 - ifmap_235[31:0] (Read/Write)
// 0x76c : reserved
// 0x770 : Data signal of ifmap_236
//         bit 31~0 - ifmap_236[31:0] (Read/Write)
// 0x774 : reserved
// 0x778 : Data signal of ifmap_237
//         bit 31~0 - ifmap_237[31:0] (Read/Write)
// 0x77c : reserved
// 0x780 : Data signal of ifmap_238
//         bit 31~0 - ifmap_238[31:0] (Read/Write)
// 0x784 : reserved
// 0x788 : Data signal of ifmap_239
//         bit 31~0 - ifmap_239[31:0] (Read/Write)
// 0x78c : reserved
// 0x790 : Data signal of ifmap_240
//         bit 31~0 - ifmap_240[31:0] (Read/Write)
// 0x794 : reserved
// 0x798 : Data signal of ifmap_241
//         bit 31~0 - ifmap_241[31:0] (Read/Write)
// 0x79c : reserved
// 0x7a0 : Data signal of ifmap_242
//         bit 31~0 - ifmap_242[31:0] (Read/Write)
// 0x7a4 : reserved
// 0x7a8 : Data signal of ifmap_243
//         bit 31~0 - ifmap_243[31:0] (Read/Write)
// 0x7ac : reserved
// 0x7b0 : Data signal of ifmap_244
//         bit 31~0 - ifmap_244[31:0] (Read/Write)
// 0x7b4 : reserved
// 0x7b8 : Data signal of ifmap_245
//         bit 31~0 - ifmap_245[31:0] (Read/Write)
// 0x7bc : reserved
// 0x7c0 : Data signal of ifmap_246
//         bit 31~0 - ifmap_246[31:0] (Read/Write)
// 0x7c4 : reserved
// 0x7c8 : Data signal of ifmap_247
//         bit 31~0 - ifmap_247[31:0] (Read/Write)
// 0x7cc : reserved
// 0x7d0 : Data signal of ifmap_248
//         bit 31~0 - ifmap_248[31:0] (Read/Write)
// 0x7d4 : reserved
// 0x7d8 : Data signal of ifmap_249
//         bit 31~0 - ifmap_249[31:0] (Read/Write)
// 0x7dc : reserved
// 0x7e0 : Data signal of ifmap_250
//         bit 31~0 - ifmap_250[31:0] (Read/Write)
// 0x7e4 : reserved
// 0x7e8 : Data signal of ifmap_251
//         bit 31~0 - ifmap_251[31:0] (Read/Write)
// 0x7ec : reserved
// 0x7f0 : Data signal of ifmap_252
//         bit 31~0 - ifmap_252[31:0] (Read/Write)
// 0x7f4 : reserved
// 0x7f8 : Data signal of ifmap_253
//         bit 31~0 - ifmap_253[31:0] (Read/Write)
// 0x7fc : reserved
// 0x800 : Data signal of ifmap_254
//         bit 31~0 - ifmap_254[31:0] (Read/Write)
// 0x804 : reserved
// 0x808 : Data signal of ifmap_255
//         bit 31~0 - ifmap_255[31:0] (Read/Write)
// 0x80c : reserved
// 0x810 : Data signal of filter_0
//         bit 31~0 - filter_0[31:0] (Read/Write)
// 0x814 : reserved
// 0x818 : Data signal of filter_1
//         bit 31~0 - filter_1[31:0] (Read/Write)
// 0x81c : reserved
// 0x820 : Data signal of filter_2
//         bit 31~0 - filter_2[31:0] (Read/Write)
// 0x824 : reserved
// 0x828 : Data signal of filter_3
//         bit 31~0 - filter_3[31:0] (Read/Write)
// 0x82c : reserved
// 0x830 : Data signal of filter_4
//         bit 31~0 - filter_4[31:0] (Read/Write)
// 0x834 : reserved
// 0x838 : Data signal of filter_5
//         bit 31~0 - filter_5[31:0] (Read/Write)
// 0x83c : reserved
// 0x840 : Data signal of filter_6
//         bit 31~0 - filter_6[31:0] (Read/Write)
// 0x844 : reserved
// 0x848 : Data signal of filter_7
//         bit 31~0 - filter_7[31:0] (Read/Write)
// 0x84c : reserved
// 0x850 : Data signal of filter_8
//         bit 31~0 - filter_8[31:0] (Read/Write)
// 0x854 : reserved
// 0x858 : Data signal of filter_9
//         bit 31~0 - filter_9[31:0] (Read/Write)
// 0x85c : reserved
// 0x860 : Data signal of filter_10
//         bit 31~0 - filter_10[31:0] (Read/Write)
// 0x864 : reserved
// 0x868 : Data signal of filter_11
//         bit 31~0 - filter_11[31:0] (Read/Write)
// 0x86c : reserved
// 0x870 : Data signal of filter_12
//         bit 31~0 - filter_12[31:0] (Read/Write)
// 0x874 : reserved
// 0x878 : Data signal of filter_13
//         bit 31~0 - filter_13[31:0] (Read/Write)
// 0x87c : reserved
// 0x880 : Data signal of filter_14
//         bit 31~0 - filter_14[31:0] (Read/Write)
// 0x884 : reserved
// 0x888 : Data signal of filter_15
//         bit 31~0 - filter_15[31:0] (Read/Write)
// 0x88c : reserved
// 0x890 : Data signal of filter_16
//         bit 31~0 - filter_16[31:0] (Read/Write)
// 0x894 : reserved
// 0x898 : Data signal of filter_17
//         bit 31~0 - filter_17[31:0] (Read/Write)
// 0x89c : reserved
// 0x8a0 : Data signal of filter_18
//         bit 31~0 - filter_18[31:0] (Read/Write)
// 0x8a4 : reserved
// 0x8a8 : Data signal of filter_19
//         bit 31~0 - filter_19[31:0] (Read/Write)
// 0x8ac : reserved
// 0x8b0 : Data signal of filter_20
//         bit 31~0 - filter_20[31:0] (Read/Write)
// 0x8b4 : reserved
// 0x8b8 : Data signal of filter_21
//         bit 31~0 - filter_21[31:0] (Read/Write)
// 0x8bc : reserved
// 0x8c0 : Data signal of filter_22
//         bit 31~0 - filter_22[31:0] (Read/Write)
// 0x8c4 : reserved
// 0x8c8 : Data signal of filter_23
//         bit 31~0 - filter_23[31:0] (Read/Write)
// 0x8cc : reserved
// 0x8d0 : Data signal of filter_24
//         bit 31~0 - filter_24[31:0] (Read/Write)
// 0x8d4 : reserved
// 0x900 ~
// 0x93f : Memory 'ofmap_0' (12 * 32b)
//         Word n : bit [31:0] - ofmap_0[n]
// 0x940 ~
// 0x97f : Memory 'ofmap_1' (12 * 32b)
//         Word n : bit [31:0] - ofmap_1[n]
// 0x980 ~
// 0x9bf : Memory 'ofmap_2' (12 * 32b)
//         Word n : bit [31:0] - ofmap_2[n]
// 0x9c0 ~
// 0x9ff : Memory 'ofmap_3' (12 * 32b)
//         Word n : bit [31:0] - ofmap_3[n]
// 0xa00 ~
// 0xa3f : Memory 'ofmap_4' (12 * 32b)
//         Word n : bit [31:0] - ofmap_4[n]
// 0xa40 ~
// 0xa7f : Memory 'ofmap_5' (12 * 32b)
//         Word n : bit [31:0] - ofmap_5[n]
// 0xa80 ~
// 0xabf : Memory 'ofmap_6' (12 * 32b)
//         Word n : bit [31:0] - ofmap_6[n]
// 0xac0 ~
// 0xaff : Memory 'ofmap_7' (12 * 32b)
//         Word n : bit [31:0] - ofmap_7[n]
// 0xb00 ~
// 0xb3f : Memory 'ofmap_8' (12 * 32b)
//         Word n : bit [31:0] - ofmap_8[n]
// 0xb40 ~
// 0xb7f : Memory 'ofmap_9' (12 * 32b)
//         Word n : bit [31:0] - ofmap_9[n]
// 0xb80 ~
// 0xbbf : Memory 'ofmap_10' (12 * 32b)
//         Word n : bit [31:0] - ofmap_10[n]
// 0xbc0 ~
// 0xbff : Memory 'ofmap_11' (12 * 32b)
//         Word n : bit [31:0] - ofmap_11[n]
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

//------------------------Parameter----------------------
localparam
    ADDR_IFMAP_0_DATA_0   = 12'h010,
    ADDR_IFMAP_0_CTRL     = 12'h014,
    ADDR_IFMAP_1_DATA_0   = 12'h018,
    ADDR_IFMAP_1_CTRL     = 12'h01c,
    ADDR_IFMAP_2_DATA_0   = 12'h020,
    ADDR_IFMAP_2_CTRL     = 12'h024,
    ADDR_IFMAP_3_DATA_0   = 12'h028,
    ADDR_IFMAP_3_CTRL     = 12'h02c,
    ADDR_IFMAP_4_DATA_0   = 12'h030,
    ADDR_IFMAP_4_CTRL     = 12'h034,
    ADDR_IFMAP_5_DATA_0   = 12'h038,
    ADDR_IFMAP_5_CTRL     = 12'h03c,
    ADDR_IFMAP_6_DATA_0   = 12'h040,
    ADDR_IFMAP_6_CTRL     = 12'h044,
    ADDR_IFMAP_7_DATA_0   = 12'h048,
    ADDR_IFMAP_7_CTRL     = 12'h04c,
    ADDR_IFMAP_8_DATA_0   = 12'h050,
    ADDR_IFMAP_8_CTRL     = 12'h054,
    ADDR_IFMAP_9_DATA_0   = 12'h058,
    ADDR_IFMAP_9_CTRL     = 12'h05c,
    ADDR_IFMAP_10_DATA_0  = 12'h060,
    ADDR_IFMAP_10_CTRL    = 12'h064,
    ADDR_IFMAP_11_DATA_0  = 12'h068,
    ADDR_IFMAP_11_CTRL    = 12'h06c,
    ADDR_IFMAP_12_DATA_0  = 12'h070,
    ADDR_IFMAP_12_CTRL    = 12'h074,
    ADDR_IFMAP_13_DATA_0  = 12'h078,
    ADDR_IFMAP_13_CTRL    = 12'h07c,
    ADDR_IFMAP_14_DATA_0  = 12'h080,
    ADDR_IFMAP_14_CTRL    = 12'h084,
    ADDR_IFMAP_15_DATA_0  = 12'h088,
    ADDR_IFMAP_15_CTRL    = 12'h08c,
    ADDR_IFMAP_16_DATA_0  = 12'h090,
    ADDR_IFMAP_16_CTRL    = 12'h094,
    ADDR_IFMAP_17_DATA_0  = 12'h098,
    ADDR_IFMAP_17_CTRL    = 12'h09c,
    ADDR_IFMAP_18_DATA_0  = 12'h0a0,
    ADDR_IFMAP_18_CTRL    = 12'h0a4,
    ADDR_IFMAP_19_DATA_0  = 12'h0a8,
    ADDR_IFMAP_19_CTRL    = 12'h0ac,
    ADDR_IFMAP_20_DATA_0  = 12'h0b0,
    ADDR_IFMAP_20_CTRL    = 12'h0b4,
    ADDR_IFMAP_21_DATA_0  = 12'h0b8,
    ADDR_IFMAP_21_CTRL    = 12'h0bc,
    ADDR_IFMAP_22_DATA_0  = 12'h0c0,
    ADDR_IFMAP_22_CTRL    = 12'h0c4,
    ADDR_IFMAP_23_DATA_0  = 12'h0c8,
    ADDR_IFMAP_23_CTRL    = 12'h0cc,
    ADDR_IFMAP_24_DATA_0  = 12'h0d0,
    ADDR_IFMAP_24_CTRL    = 12'h0d4,
    ADDR_IFMAP_25_DATA_0  = 12'h0d8,
    ADDR_IFMAP_25_CTRL    = 12'h0dc,
    ADDR_IFMAP_26_DATA_0  = 12'h0e0,
    ADDR_IFMAP_26_CTRL    = 12'h0e4,
    ADDR_IFMAP_27_DATA_0  = 12'h0e8,
    ADDR_IFMAP_27_CTRL    = 12'h0ec,
    ADDR_IFMAP_28_DATA_0  = 12'h0f0,
    ADDR_IFMAP_28_CTRL    = 12'h0f4,
    ADDR_IFMAP_29_DATA_0  = 12'h0f8,
    ADDR_IFMAP_29_CTRL    = 12'h0fc,
    ADDR_IFMAP_30_DATA_0  = 12'h100,
    ADDR_IFMAP_30_CTRL    = 12'h104,
    ADDR_IFMAP_31_DATA_0  = 12'h108,
    ADDR_IFMAP_31_CTRL    = 12'h10c,
    ADDR_IFMAP_32_DATA_0  = 12'h110,
    ADDR_IFMAP_32_CTRL    = 12'h114,
    ADDR_IFMAP_33_DATA_0  = 12'h118,
    ADDR_IFMAP_33_CTRL    = 12'h11c,
    ADDR_IFMAP_34_DATA_0  = 12'h120,
    ADDR_IFMAP_34_CTRL    = 12'h124,
    ADDR_IFMAP_35_DATA_0  = 12'h128,
    ADDR_IFMAP_35_CTRL    = 12'h12c,
    ADDR_IFMAP_36_DATA_0  = 12'h130,
    ADDR_IFMAP_36_CTRL    = 12'h134,
    ADDR_IFMAP_37_DATA_0  = 12'h138,
    ADDR_IFMAP_37_CTRL    = 12'h13c,
    ADDR_IFMAP_38_DATA_0  = 12'h140,
    ADDR_IFMAP_38_CTRL    = 12'h144,
    ADDR_IFMAP_39_DATA_0  = 12'h148,
    ADDR_IFMAP_39_CTRL    = 12'h14c,
    ADDR_IFMAP_40_DATA_0  = 12'h150,
    ADDR_IFMAP_40_CTRL    = 12'h154,
    ADDR_IFMAP_41_DATA_0  = 12'h158,
    ADDR_IFMAP_41_CTRL    = 12'h15c,
    ADDR_IFMAP_42_DATA_0  = 12'h160,
    ADDR_IFMAP_42_CTRL    = 12'h164,
    ADDR_IFMAP_43_DATA_0  = 12'h168,
    ADDR_IFMAP_43_CTRL    = 12'h16c,
    ADDR_IFMAP_44_DATA_0  = 12'h170,
    ADDR_IFMAP_44_CTRL    = 12'h174,
    ADDR_IFMAP_45_DATA_0  = 12'h178,
    ADDR_IFMAP_45_CTRL    = 12'h17c,
    ADDR_IFMAP_46_DATA_0  = 12'h180,
    ADDR_IFMAP_46_CTRL    = 12'h184,
    ADDR_IFMAP_47_DATA_0  = 12'h188,
    ADDR_IFMAP_47_CTRL    = 12'h18c,
    ADDR_IFMAP_48_DATA_0  = 12'h190,
    ADDR_IFMAP_48_CTRL    = 12'h194,
    ADDR_IFMAP_49_DATA_0  = 12'h198,
    ADDR_IFMAP_49_CTRL    = 12'h19c,
    ADDR_IFMAP_50_DATA_0  = 12'h1a0,
    ADDR_IFMAP_50_CTRL    = 12'h1a4,
    ADDR_IFMAP_51_DATA_0  = 12'h1a8,
    ADDR_IFMAP_51_CTRL    = 12'h1ac,
    ADDR_IFMAP_52_DATA_0  = 12'h1b0,
    ADDR_IFMAP_52_CTRL    = 12'h1b4,
    ADDR_IFMAP_53_DATA_0  = 12'h1b8,
    ADDR_IFMAP_53_CTRL    = 12'h1bc,
    ADDR_IFMAP_54_DATA_0  = 12'h1c0,
    ADDR_IFMAP_54_CTRL    = 12'h1c4,
    ADDR_IFMAP_55_DATA_0  = 12'h1c8,
    ADDR_IFMAP_55_CTRL    = 12'h1cc,
    ADDR_IFMAP_56_DATA_0  = 12'h1d0,
    ADDR_IFMAP_56_CTRL    = 12'h1d4,
    ADDR_IFMAP_57_DATA_0  = 12'h1d8,
    ADDR_IFMAP_57_CTRL    = 12'h1dc,
    ADDR_IFMAP_58_DATA_0  = 12'h1e0,
    ADDR_IFMAP_58_CTRL    = 12'h1e4,
    ADDR_IFMAP_59_DATA_0  = 12'h1e8,
    ADDR_IFMAP_59_CTRL    = 12'h1ec,
    ADDR_IFMAP_60_DATA_0  = 12'h1f0,
    ADDR_IFMAP_60_CTRL    = 12'h1f4,
    ADDR_IFMAP_61_DATA_0  = 12'h1f8,
    ADDR_IFMAP_61_CTRL    = 12'h1fc,
    ADDR_IFMAP_62_DATA_0  = 12'h200,
    ADDR_IFMAP_62_CTRL    = 12'h204,
    ADDR_IFMAP_63_DATA_0  = 12'h208,
    ADDR_IFMAP_63_CTRL    = 12'h20c,
    ADDR_IFMAP_64_DATA_0  = 12'h210,
    ADDR_IFMAP_64_CTRL    = 12'h214,
    ADDR_IFMAP_65_DATA_0  = 12'h218,
    ADDR_IFMAP_65_CTRL    = 12'h21c,
    ADDR_IFMAP_66_DATA_0  = 12'h220,
    ADDR_IFMAP_66_CTRL    = 12'h224,
    ADDR_IFMAP_67_DATA_0  = 12'h228,
    ADDR_IFMAP_67_CTRL    = 12'h22c,
    ADDR_IFMAP_68_DATA_0  = 12'h230,
    ADDR_IFMAP_68_CTRL    = 12'h234,
    ADDR_IFMAP_69_DATA_0  = 12'h238,
    ADDR_IFMAP_69_CTRL    = 12'h23c,
    ADDR_IFMAP_70_DATA_0  = 12'h240,
    ADDR_IFMAP_70_CTRL    = 12'h244,
    ADDR_IFMAP_71_DATA_0  = 12'h248,
    ADDR_IFMAP_71_CTRL    = 12'h24c,
    ADDR_IFMAP_72_DATA_0  = 12'h250,
    ADDR_IFMAP_72_CTRL    = 12'h254,
    ADDR_IFMAP_73_DATA_0  = 12'h258,
    ADDR_IFMAP_73_CTRL    = 12'h25c,
    ADDR_IFMAP_74_DATA_0  = 12'h260,
    ADDR_IFMAP_74_CTRL    = 12'h264,
    ADDR_IFMAP_75_DATA_0  = 12'h268,
    ADDR_IFMAP_75_CTRL    = 12'h26c,
    ADDR_IFMAP_76_DATA_0  = 12'h270,
    ADDR_IFMAP_76_CTRL    = 12'h274,
    ADDR_IFMAP_77_DATA_0  = 12'h278,
    ADDR_IFMAP_77_CTRL    = 12'h27c,
    ADDR_IFMAP_78_DATA_0  = 12'h280,
    ADDR_IFMAP_78_CTRL    = 12'h284,
    ADDR_IFMAP_79_DATA_0  = 12'h288,
    ADDR_IFMAP_79_CTRL    = 12'h28c,
    ADDR_IFMAP_80_DATA_0  = 12'h290,
    ADDR_IFMAP_80_CTRL    = 12'h294,
    ADDR_IFMAP_81_DATA_0  = 12'h298,
    ADDR_IFMAP_81_CTRL    = 12'h29c,
    ADDR_IFMAP_82_DATA_0  = 12'h2a0,
    ADDR_IFMAP_82_CTRL    = 12'h2a4,
    ADDR_IFMAP_83_DATA_0  = 12'h2a8,
    ADDR_IFMAP_83_CTRL    = 12'h2ac,
    ADDR_IFMAP_84_DATA_0  = 12'h2b0,
    ADDR_IFMAP_84_CTRL    = 12'h2b4,
    ADDR_IFMAP_85_DATA_0  = 12'h2b8,
    ADDR_IFMAP_85_CTRL    = 12'h2bc,
    ADDR_IFMAP_86_DATA_0  = 12'h2c0,
    ADDR_IFMAP_86_CTRL    = 12'h2c4,
    ADDR_IFMAP_87_DATA_0  = 12'h2c8,
    ADDR_IFMAP_87_CTRL    = 12'h2cc,
    ADDR_IFMAP_88_DATA_0  = 12'h2d0,
    ADDR_IFMAP_88_CTRL    = 12'h2d4,
    ADDR_IFMAP_89_DATA_0  = 12'h2d8,
    ADDR_IFMAP_89_CTRL    = 12'h2dc,
    ADDR_IFMAP_90_DATA_0  = 12'h2e0,
    ADDR_IFMAP_90_CTRL    = 12'h2e4,
    ADDR_IFMAP_91_DATA_0  = 12'h2e8,
    ADDR_IFMAP_91_CTRL    = 12'h2ec,
    ADDR_IFMAP_92_DATA_0  = 12'h2f0,
    ADDR_IFMAP_92_CTRL    = 12'h2f4,
    ADDR_IFMAP_93_DATA_0  = 12'h2f8,
    ADDR_IFMAP_93_CTRL    = 12'h2fc,
    ADDR_IFMAP_94_DATA_0  = 12'h300,
    ADDR_IFMAP_94_CTRL    = 12'h304,
    ADDR_IFMAP_95_DATA_0  = 12'h308,
    ADDR_IFMAP_95_CTRL    = 12'h30c,
    ADDR_IFMAP_96_DATA_0  = 12'h310,
    ADDR_IFMAP_96_CTRL    = 12'h314,
    ADDR_IFMAP_97_DATA_0  = 12'h318,
    ADDR_IFMAP_97_CTRL    = 12'h31c,
    ADDR_IFMAP_98_DATA_0  = 12'h320,
    ADDR_IFMAP_98_CTRL    = 12'h324,
    ADDR_IFMAP_99_DATA_0  = 12'h328,
    ADDR_IFMAP_99_CTRL    = 12'h32c,
    ADDR_IFMAP_100_DATA_0 = 12'h330,
    ADDR_IFMAP_100_CTRL   = 12'h334,
    ADDR_IFMAP_101_DATA_0 = 12'h338,
    ADDR_IFMAP_101_CTRL   = 12'h33c,
    ADDR_IFMAP_102_DATA_0 = 12'h340,
    ADDR_IFMAP_102_CTRL   = 12'h344,
    ADDR_IFMAP_103_DATA_0 = 12'h348,
    ADDR_IFMAP_103_CTRL   = 12'h34c,
    ADDR_IFMAP_104_DATA_0 = 12'h350,
    ADDR_IFMAP_104_CTRL   = 12'h354,
    ADDR_IFMAP_105_DATA_0 = 12'h358,
    ADDR_IFMAP_105_CTRL   = 12'h35c,
    ADDR_IFMAP_106_DATA_0 = 12'h360,
    ADDR_IFMAP_106_CTRL   = 12'h364,
    ADDR_IFMAP_107_DATA_0 = 12'h368,
    ADDR_IFMAP_107_CTRL   = 12'h36c,
    ADDR_IFMAP_108_DATA_0 = 12'h370,
    ADDR_IFMAP_108_CTRL   = 12'h374,
    ADDR_IFMAP_109_DATA_0 = 12'h378,
    ADDR_IFMAP_109_CTRL   = 12'h37c,
    ADDR_IFMAP_110_DATA_0 = 12'h380,
    ADDR_IFMAP_110_CTRL   = 12'h384,
    ADDR_IFMAP_111_DATA_0 = 12'h388,
    ADDR_IFMAP_111_CTRL   = 12'h38c,
    ADDR_IFMAP_112_DATA_0 = 12'h390,
    ADDR_IFMAP_112_CTRL   = 12'h394,
    ADDR_IFMAP_113_DATA_0 = 12'h398,
    ADDR_IFMAP_113_CTRL   = 12'h39c,
    ADDR_IFMAP_114_DATA_0 = 12'h3a0,
    ADDR_IFMAP_114_CTRL   = 12'h3a4,
    ADDR_IFMAP_115_DATA_0 = 12'h3a8,
    ADDR_IFMAP_115_CTRL   = 12'h3ac,
    ADDR_IFMAP_116_DATA_0 = 12'h3b0,
    ADDR_IFMAP_116_CTRL   = 12'h3b4,
    ADDR_IFMAP_117_DATA_0 = 12'h3b8,
    ADDR_IFMAP_117_CTRL   = 12'h3bc,
    ADDR_IFMAP_118_DATA_0 = 12'h3c0,
    ADDR_IFMAP_118_CTRL   = 12'h3c4,
    ADDR_IFMAP_119_DATA_0 = 12'h3c8,
    ADDR_IFMAP_119_CTRL   = 12'h3cc,
    ADDR_IFMAP_120_DATA_0 = 12'h3d0,
    ADDR_IFMAP_120_CTRL   = 12'h3d4,
    ADDR_IFMAP_121_DATA_0 = 12'h3d8,
    ADDR_IFMAP_121_CTRL   = 12'h3dc,
    ADDR_IFMAP_122_DATA_0 = 12'h3e0,
    ADDR_IFMAP_122_CTRL   = 12'h3e4,
    ADDR_IFMAP_123_DATA_0 = 12'h3e8,
    ADDR_IFMAP_123_CTRL   = 12'h3ec,
    ADDR_IFMAP_124_DATA_0 = 12'h3f0,
    ADDR_IFMAP_124_CTRL   = 12'h3f4,
    ADDR_IFMAP_125_DATA_0 = 12'h3f8,
    ADDR_IFMAP_125_CTRL   = 12'h3fc,
    ADDR_IFMAP_126_DATA_0 = 12'h400,
    ADDR_IFMAP_126_CTRL   = 12'h404,
    ADDR_IFMAP_127_DATA_0 = 12'h408,
    ADDR_IFMAP_127_CTRL   = 12'h40c,
    ADDR_IFMAP_128_DATA_0 = 12'h410,
    ADDR_IFMAP_128_CTRL   = 12'h414,
    ADDR_IFMAP_129_DATA_0 = 12'h418,
    ADDR_IFMAP_129_CTRL   = 12'h41c,
    ADDR_IFMAP_130_DATA_0 = 12'h420,
    ADDR_IFMAP_130_CTRL   = 12'h424,
    ADDR_IFMAP_131_DATA_0 = 12'h428,
    ADDR_IFMAP_131_CTRL   = 12'h42c,
    ADDR_IFMAP_132_DATA_0 = 12'h430,
    ADDR_IFMAP_132_CTRL   = 12'h434,
    ADDR_IFMAP_133_DATA_0 = 12'h438,
    ADDR_IFMAP_133_CTRL   = 12'h43c,
    ADDR_IFMAP_134_DATA_0 = 12'h440,
    ADDR_IFMAP_134_CTRL   = 12'h444,
    ADDR_IFMAP_135_DATA_0 = 12'h448,
    ADDR_IFMAP_135_CTRL   = 12'h44c,
    ADDR_IFMAP_136_DATA_0 = 12'h450,
    ADDR_IFMAP_136_CTRL   = 12'h454,
    ADDR_IFMAP_137_DATA_0 = 12'h458,
    ADDR_IFMAP_137_CTRL   = 12'h45c,
    ADDR_IFMAP_138_DATA_0 = 12'h460,
    ADDR_IFMAP_138_CTRL   = 12'h464,
    ADDR_IFMAP_139_DATA_0 = 12'h468,
    ADDR_IFMAP_139_CTRL   = 12'h46c,
    ADDR_IFMAP_140_DATA_0 = 12'h470,
    ADDR_IFMAP_140_CTRL   = 12'h474,
    ADDR_IFMAP_141_DATA_0 = 12'h478,
    ADDR_IFMAP_141_CTRL   = 12'h47c,
    ADDR_IFMAP_142_DATA_0 = 12'h480,
    ADDR_IFMAP_142_CTRL   = 12'h484,
    ADDR_IFMAP_143_DATA_0 = 12'h488,
    ADDR_IFMAP_143_CTRL   = 12'h48c,
    ADDR_IFMAP_144_DATA_0 = 12'h490,
    ADDR_IFMAP_144_CTRL   = 12'h494,
    ADDR_IFMAP_145_DATA_0 = 12'h498,
    ADDR_IFMAP_145_CTRL   = 12'h49c,
    ADDR_IFMAP_146_DATA_0 = 12'h4a0,
    ADDR_IFMAP_146_CTRL   = 12'h4a4,
    ADDR_IFMAP_147_DATA_0 = 12'h4a8,
    ADDR_IFMAP_147_CTRL   = 12'h4ac,
    ADDR_IFMAP_148_DATA_0 = 12'h4b0,
    ADDR_IFMAP_148_CTRL   = 12'h4b4,
    ADDR_IFMAP_149_DATA_0 = 12'h4b8,
    ADDR_IFMAP_149_CTRL   = 12'h4bc,
    ADDR_IFMAP_150_DATA_0 = 12'h4c0,
    ADDR_IFMAP_150_CTRL   = 12'h4c4,
    ADDR_IFMAP_151_DATA_0 = 12'h4c8,
    ADDR_IFMAP_151_CTRL   = 12'h4cc,
    ADDR_IFMAP_152_DATA_0 = 12'h4d0,
    ADDR_IFMAP_152_CTRL   = 12'h4d4,
    ADDR_IFMAP_153_DATA_0 = 12'h4d8,
    ADDR_IFMAP_153_CTRL   = 12'h4dc,
    ADDR_IFMAP_154_DATA_0 = 12'h4e0,
    ADDR_IFMAP_154_CTRL   = 12'h4e4,
    ADDR_IFMAP_155_DATA_0 = 12'h4e8,
    ADDR_IFMAP_155_CTRL   = 12'h4ec,
    ADDR_IFMAP_156_DATA_0 = 12'h4f0,
    ADDR_IFMAP_156_CTRL   = 12'h4f4,
    ADDR_IFMAP_157_DATA_0 = 12'h4f8,
    ADDR_IFMAP_157_CTRL   = 12'h4fc,
    ADDR_IFMAP_158_DATA_0 = 12'h500,
    ADDR_IFMAP_158_CTRL   = 12'h504,
    ADDR_IFMAP_159_DATA_0 = 12'h508,
    ADDR_IFMAP_159_CTRL   = 12'h50c,
    ADDR_IFMAP_160_DATA_0 = 12'h510,
    ADDR_IFMAP_160_CTRL   = 12'h514,
    ADDR_IFMAP_161_DATA_0 = 12'h518,
    ADDR_IFMAP_161_CTRL   = 12'h51c,
    ADDR_IFMAP_162_DATA_0 = 12'h520,
    ADDR_IFMAP_162_CTRL   = 12'h524,
    ADDR_IFMAP_163_DATA_0 = 12'h528,
    ADDR_IFMAP_163_CTRL   = 12'h52c,
    ADDR_IFMAP_164_DATA_0 = 12'h530,
    ADDR_IFMAP_164_CTRL   = 12'h534,
    ADDR_IFMAP_165_DATA_0 = 12'h538,
    ADDR_IFMAP_165_CTRL   = 12'h53c,
    ADDR_IFMAP_166_DATA_0 = 12'h540,
    ADDR_IFMAP_166_CTRL   = 12'h544,
    ADDR_IFMAP_167_DATA_0 = 12'h548,
    ADDR_IFMAP_167_CTRL   = 12'h54c,
    ADDR_IFMAP_168_DATA_0 = 12'h550,
    ADDR_IFMAP_168_CTRL   = 12'h554,
    ADDR_IFMAP_169_DATA_0 = 12'h558,
    ADDR_IFMAP_169_CTRL   = 12'h55c,
    ADDR_IFMAP_170_DATA_0 = 12'h560,
    ADDR_IFMAP_170_CTRL   = 12'h564,
    ADDR_IFMAP_171_DATA_0 = 12'h568,
    ADDR_IFMAP_171_CTRL   = 12'h56c,
    ADDR_IFMAP_172_DATA_0 = 12'h570,
    ADDR_IFMAP_172_CTRL   = 12'h574,
    ADDR_IFMAP_173_DATA_0 = 12'h578,
    ADDR_IFMAP_173_CTRL   = 12'h57c,
    ADDR_IFMAP_174_DATA_0 = 12'h580,
    ADDR_IFMAP_174_CTRL   = 12'h584,
    ADDR_IFMAP_175_DATA_0 = 12'h588,
    ADDR_IFMAP_175_CTRL   = 12'h58c,
    ADDR_IFMAP_176_DATA_0 = 12'h590,
    ADDR_IFMAP_176_CTRL   = 12'h594,
    ADDR_IFMAP_177_DATA_0 = 12'h598,
    ADDR_IFMAP_177_CTRL   = 12'h59c,
    ADDR_IFMAP_178_DATA_0 = 12'h5a0,
    ADDR_IFMAP_178_CTRL   = 12'h5a4,
    ADDR_IFMAP_179_DATA_0 = 12'h5a8,
    ADDR_IFMAP_179_CTRL   = 12'h5ac,
    ADDR_IFMAP_180_DATA_0 = 12'h5b0,
    ADDR_IFMAP_180_CTRL   = 12'h5b4,
    ADDR_IFMAP_181_DATA_0 = 12'h5b8,
    ADDR_IFMAP_181_CTRL   = 12'h5bc,
    ADDR_IFMAP_182_DATA_0 = 12'h5c0,
    ADDR_IFMAP_182_CTRL   = 12'h5c4,
    ADDR_IFMAP_183_DATA_0 = 12'h5c8,
    ADDR_IFMAP_183_CTRL   = 12'h5cc,
    ADDR_IFMAP_184_DATA_0 = 12'h5d0,
    ADDR_IFMAP_184_CTRL   = 12'h5d4,
    ADDR_IFMAP_185_DATA_0 = 12'h5d8,
    ADDR_IFMAP_185_CTRL   = 12'h5dc,
    ADDR_IFMAP_186_DATA_0 = 12'h5e0,
    ADDR_IFMAP_186_CTRL   = 12'h5e4,
    ADDR_IFMAP_187_DATA_0 = 12'h5e8,
    ADDR_IFMAP_187_CTRL   = 12'h5ec,
    ADDR_IFMAP_188_DATA_0 = 12'h5f0,
    ADDR_IFMAP_188_CTRL   = 12'h5f4,
    ADDR_IFMAP_189_DATA_0 = 12'h5f8,
    ADDR_IFMAP_189_CTRL   = 12'h5fc,
    ADDR_IFMAP_190_DATA_0 = 12'h600,
    ADDR_IFMAP_190_CTRL   = 12'h604,
    ADDR_IFMAP_191_DATA_0 = 12'h608,
    ADDR_IFMAP_191_CTRL   = 12'h60c,
    ADDR_IFMAP_192_DATA_0 = 12'h610,
    ADDR_IFMAP_192_CTRL   = 12'h614,
    ADDR_IFMAP_193_DATA_0 = 12'h618,
    ADDR_IFMAP_193_CTRL   = 12'h61c,
    ADDR_IFMAP_194_DATA_0 = 12'h620,
    ADDR_IFMAP_194_CTRL   = 12'h624,
    ADDR_IFMAP_195_DATA_0 = 12'h628,
    ADDR_IFMAP_195_CTRL   = 12'h62c,
    ADDR_IFMAP_196_DATA_0 = 12'h630,
    ADDR_IFMAP_196_CTRL   = 12'h634,
    ADDR_IFMAP_197_DATA_0 = 12'h638,
    ADDR_IFMAP_197_CTRL   = 12'h63c,
    ADDR_IFMAP_198_DATA_0 = 12'h640,
    ADDR_IFMAP_198_CTRL   = 12'h644,
    ADDR_IFMAP_199_DATA_0 = 12'h648,
    ADDR_IFMAP_199_CTRL   = 12'h64c,
    ADDR_IFMAP_200_DATA_0 = 12'h650,
    ADDR_IFMAP_200_CTRL   = 12'h654,
    ADDR_IFMAP_201_DATA_0 = 12'h658,
    ADDR_IFMAP_201_CTRL   = 12'h65c,
    ADDR_IFMAP_202_DATA_0 = 12'h660,
    ADDR_IFMAP_202_CTRL   = 12'h664,
    ADDR_IFMAP_203_DATA_0 = 12'h668,
    ADDR_IFMAP_203_CTRL   = 12'h66c,
    ADDR_IFMAP_204_DATA_0 = 12'h670,
    ADDR_IFMAP_204_CTRL   = 12'h674,
    ADDR_IFMAP_205_DATA_0 = 12'h678,
    ADDR_IFMAP_205_CTRL   = 12'h67c,
    ADDR_IFMAP_206_DATA_0 = 12'h680,
    ADDR_IFMAP_206_CTRL   = 12'h684,
    ADDR_IFMAP_207_DATA_0 = 12'h688,
    ADDR_IFMAP_207_CTRL   = 12'h68c,
    ADDR_IFMAP_208_DATA_0 = 12'h690,
    ADDR_IFMAP_208_CTRL   = 12'h694,
    ADDR_IFMAP_209_DATA_0 = 12'h698,
    ADDR_IFMAP_209_CTRL   = 12'h69c,
    ADDR_IFMAP_210_DATA_0 = 12'h6a0,
    ADDR_IFMAP_210_CTRL   = 12'h6a4,
    ADDR_IFMAP_211_DATA_0 = 12'h6a8,
    ADDR_IFMAP_211_CTRL   = 12'h6ac,
    ADDR_IFMAP_212_DATA_0 = 12'h6b0,
    ADDR_IFMAP_212_CTRL   = 12'h6b4,
    ADDR_IFMAP_213_DATA_0 = 12'h6b8,
    ADDR_IFMAP_213_CTRL   = 12'h6bc,
    ADDR_IFMAP_214_DATA_0 = 12'h6c0,
    ADDR_IFMAP_214_CTRL   = 12'h6c4,
    ADDR_IFMAP_215_DATA_0 = 12'h6c8,
    ADDR_IFMAP_215_CTRL   = 12'h6cc,
    ADDR_IFMAP_216_DATA_0 = 12'h6d0,
    ADDR_IFMAP_216_CTRL   = 12'h6d4,
    ADDR_IFMAP_217_DATA_0 = 12'h6d8,
    ADDR_IFMAP_217_CTRL   = 12'h6dc,
    ADDR_IFMAP_218_DATA_0 = 12'h6e0,
    ADDR_IFMAP_218_CTRL   = 12'h6e4,
    ADDR_IFMAP_219_DATA_0 = 12'h6e8,
    ADDR_IFMAP_219_CTRL   = 12'h6ec,
    ADDR_IFMAP_220_DATA_0 = 12'h6f0,
    ADDR_IFMAP_220_CTRL   = 12'h6f4,
    ADDR_IFMAP_221_DATA_0 = 12'h6f8,
    ADDR_IFMAP_221_CTRL   = 12'h6fc,
    ADDR_IFMAP_222_DATA_0 = 12'h700,
    ADDR_IFMAP_222_CTRL   = 12'h704,
    ADDR_IFMAP_223_DATA_0 = 12'h708,
    ADDR_IFMAP_223_CTRL   = 12'h70c,
    ADDR_IFMAP_224_DATA_0 = 12'h710,
    ADDR_IFMAP_224_CTRL   = 12'h714,
    ADDR_IFMAP_225_DATA_0 = 12'h718,
    ADDR_IFMAP_225_CTRL   = 12'h71c,
    ADDR_IFMAP_226_DATA_0 = 12'h720,
    ADDR_IFMAP_226_CTRL   = 12'h724,
    ADDR_IFMAP_227_DATA_0 = 12'h728,
    ADDR_IFMAP_227_CTRL   = 12'h72c,
    ADDR_IFMAP_228_DATA_0 = 12'h730,
    ADDR_IFMAP_228_CTRL   = 12'h734,
    ADDR_IFMAP_229_DATA_0 = 12'h738,
    ADDR_IFMAP_229_CTRL   = 12'h73c,
    ADDR_IFMAP_230_DATA_0 = 12'h740,
    ADDR_IFMAP_230_CTRL   = 12'h744,
    ADDR_IFMAP_231_DATA_0 = 12'h748,
    ADDR_IFMAP_231_CTRL   = 12'h74c,
    ADDR_IFMAP_232_DATA_0 = 12'h750,
    ADDR_IFMAP_232_CTRL   = 12'h754,
    ADDR_IFMAP_233_DATA_0 = 12'h758,
    ADDR_IFMAP_233_CTRL   = 12'h75c,
    ADDR_IFMAP_234_DATA_0 = 12'h760,
    ADDR_IFMAP_234_CTRL   = 12'h764,
    ADDR_IFMAP_235_DATA_0 = 12'h768,
    ADDR_IFMAP_235_CTRL   = 12'h76c,
    ADDR_IFMAP_236_DATA_0 = 12'h770,
    ADDR_IFMAP_236_CTRL   = 12'h774,
    ADDR_IFMAP_237_DATA_0 = 12'h778,
    ADDR_IFMAP_237_CTRL   = 12'h77c,
    ADDR_IFMAP_238_DATA_0 = 12'h780,
    ADDR_IFMAP_238_CTRL   = 12'h784,
    ADDR_IFMAP_239_DATA_0 = 12'h788,
    ADDR_IFMAP_239_CTRL   = 12'h78c,
    ADDR_IFMAP_240_DATA_0 = 12'h790,
    ADDR_IFMAP_240_CTRL   = 12'h794,
    ADDR_IFMAP_241_DATA_0 = 12'h798,
    ADDR_IFMAP_241_CTRL   = 12'h79c,
    ADDR_IFMAP_242_DATA_0 = 12'h7a0,
    ADDR_IFMAP_242_CTRL   = 12'h7a4,
    ADDR_IFMAP_243_DATA_0 = 12'h7a8,
    ADDR_IFMAP_243_CTRL   = 12'h7ac,
    ADDR_IFMAP_244_DATA_0 = 12'h7b0,
    ADDR_IFMAP_244_CTRL   = 12'h7b4,
    ADDR_IFMAP_245_DATA_0 = 12'h7b8,
    ADDR_IFMAP_245_CTRL   = 12'h7bc,
    ADDR_IFMAP_246_DATA_0 = 12'h7c0,
    ADDR_IFMAP_246_CTRL   = 12'h7c4,
    ADDR_IFMAP_247_DATA_0 = 12'h7c8,
    ADDR_IFMAP_247_CTRL   = 12'h7cc,
    ADDR_IFMAP_248_DATA_0 = 12'h7d0,
    ADDR_IFMAP_248_CTRL   = 12'h7d4,
    ADDR_IFMAP_249_DATA_0 = 12'h7d8,
    ADDR_IFMAP_249_CTRL   = 12'h7dc,
    ADDR_IFMAP_250_DATA_0 = 12'h7e0,
    ADDR_IFMAP_250_CTRL   = 12'h7e4,
    ADDR_IFMAP_251_DATA_0 = 12'h7e8,
    ADDR_IFMAP_251_CTRL   = 12'h7ec,
    ADDR_IFMAP_252_DATA_0 = 12'h7f0,
    ADDR_IFMAP_252_CTRL   = 12'h7f4,
    ADDR_IFMAP_253_DATA_0 = 12'h7f8,
    ADDR_IFMAP_253_CTRL   = 12'h7fc,
    ADDR_IFMAP_254_DATA_0 = 12'h800,
    ADDR_IFMAP_254_CTRL   = 12'h804,
    ADDR_IFMAP_255_DATA_0 = 12'h808,
    ADDR_IFMAP_255_CTRL   = 12'h80c,
    ADDR_FILTER_0_DATA_0  = 12'h810,
    ADDR_FILTER_0_CTRL    = 12'h814,
    ADDR_FILTER_1_DATA_0  = 12'h818,
    ADDR_FILTER_1_CTRL    = 12'h81c,
    ADDR_FILTER_2_DATA_0  = 12'h820,
    ADDR_FILTER_2_CTRL    = 12'h824,
    ADDR_FILTER_3_DATA_0  = 12'h828,
    ADDR_FILTER_3_CTRL    = 12'h82c,
    ADDR_FILTER_4_DATA_0  = 12'h830,
    ADDR_FILTER_4_CTRL    = 12'h834,
    ADDR_FILTER_5_DATA_0  = 12'h838,
    ADDR_FILTER_5_CTRL    = 12'h83c,
    ADDR_FILTER_6_DATA_0  = 12'h840,
    ADDR_FILTER_6_CTRL    = 12'h844,
    ADDR_FILTER_7_DATA_0  = 12'h848,
    ADDR_FILTER_7_CTRL    = 12'h84c,
    ADDR_FILTER_8_DATA_0  = 12'h850,
    ADDR_FILTER_8_CTRL    = 12'h854,
    ADDR_FILTER_9_DATA_0  = 12'h858,
    ADDR_FILTER_9_CTRL    = 12'h85c,
    ADDR_FILTER_10_DATA_0 = 12'h860,
    ADDR_FILTER_10_CTRL   = 12'h864,
    ADDR_FILTER_11_DATA_0 = 12'h868,
    ADDR_FILTER_11_CTRL   = 12'h86c,
    ADDR_FILTER_12_DATA_0 = 12'h870,
    ADDR_FILTER_12_CTRL   = 12'h874,
    ADDR_FILTER_13_DATA_0 = 12'h878,
    ADDR_FILTER_13_CTRL   = 12'h87c,
    ADDR_FILTER_14_DATA_0 = 12'h880,
    ADDR_FILTER_14_CTRL   = 12'h884,
    ADDR_FILTER_15_DATA_0 = 12'h888,
    ADDR_FILTER_15_CTRL   = 12'h88c,
    ADDR_FILTER_16_DATA_0 = 12'h890,
    ADDR_FILTER_16_CTRL   = 12'h894,
    ADDR_FILTER_17_DATA_0 = 12'h898,
    ADDR_FILTER_17_CTRL   = 12'h89c,
    ADDR_FILTER_18_DATA_0 = 12'h8a0,
    ADDR_FILTER_18_CTRL   = 12'h8a4,
    ADDR_FILTER_19_DATA_0 = 12'h8a8,
    ADDR_FILTER_19_CTRL   = 12'h8ac,
    ADDR_FILTER_20_DATA_0 = 12'h8b0,
    ADDR_FILTER_20_CTRL   = 12'h8b4,
    ADDR_FILTER_21_DATA_0 = 12'h8b8,
    ADDR_FILTER_21_CTRL   = 12'h8bc,
    ADDR_FILTER_22_DATA_0 = 12'h8c0,
    ADDR_FILTER_22_CTRL   = 12'h8c4,
    ADDR_FILTER_23_DATA_0 = 12'h8c8,
    ADDR_FILTER_23_CTRL   = 12'h8cc,
    ADDR_FILTER_24_DATA_0 = 12'h8d0,
    ADDR_FILTER_24_CTRL   = 12'h8d4,
    ADDR_OFMAP_0_BASE     = 12'h900,
    ADDR_OFMAP_0_HIGH     = 12'h93f,
    ADDR_OFMAP_1_BASE     = 12'h940,
    ADDR_OFMAP_1_HIGH     = 12'h97f,
    ADDR_OFMAP_2_BASE     = 12'h980,
    ADDR_OFMAP_2_HIGH     = 12'h9bf,
    ADDR_OFMAP_3_BASE     = 12'h9c0,
    ADDR_OFMAP_3_HIGH     = 12'h9ff,
    ADDR_OFMAP_4_BASE     = 12'ha00,
    ADDR_OFMAP_4_HIGH     = 12'ha3f,
    ADDR_OFMAP_5_BASE     = 12'ha40,
    ADDR_OFMAP_5_HIGH     = 12'ha7f,
    ADDR_OFMAP_6_BASE     = 12'ha80,
    ADDR_OFMAP_6_HIGH     = 12'habf,
    ADDR_OFMAP_7_BASE     = 12'hac0,
    ADDR_OFMAP_7_HIGH     = 12'haff,
    ADDR_OFMAP_8_BASE     = 12'hb00,
    ADDR_OFMAP_8_HIGH     = 12'hb3f,
    ADDR_OFMAP_9_BASE     = 12'hb40,
    ADDR_OFMAP_9_HIGH     = 12'hb7f,
    ADDR_OFMAP_10_BASE    = 12'hb80,
    ADDR_OFMAP_10_HIGH    = 12'hbbf,
    ADDR_OFMAP_11_BASE    = 12'hbc0,
    ADDR_OFMAP_11_HIGH    = 12'hbff,
    WRIDLE                = 2'd0,
    WRDATA                = 2'd1,
    WRRESP                = 2'd2,
    WRRESET               = 2'd3,
    RDIDLE                = 2'd0,
    RDDATA                = 2'd1,
    RDRESET               = 2'd2,
    ADDR_BITS         = 12;

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
    // internal registers
    reg  [31:0]                   int_ifmap_0 = 'b0;
    reg  [31:0]                   int_ifmap_1 = 'b0;
    reg  [31:0]                   int_ifmap_2 = 'b0;
    reg  [31:0]                   int_ifmap_3 = 'b0;
    reg  [31:0]                   int_ifmap_4 = 'b0;
    reg  [31:0]                   int_ifmap_5 = 'b0;
    reg  [31:0]                   int_ifmap_6 = 'b0;
    reg  [31:0]                   int_ifmap_7 = 'b0;
    reg  [31:0]                   int_ifmap_8 = 'b0;
    reg  [31:0]                   int_ifmap_9 = 'b0;
    reg  [31:0]                   int_ifmap_10 = 'b0;
    reg  [31:0]                   int_ifmap_11 = 'b0;
    reg  [31:0]                   int_ifmap_12 = 'b0;
    reg  [31:0]                   int_ifmap_13 = 'b0;
    reg  [31:0]                   int_ifmap_14 = 'b0;
    reg  [31:0]                   int_ifmap_15 = 'b0;
    reg  [31:0]                   int_ifmap_16 = 'b0;
    reg  [31:0]                   int_ifmap_17 = 'b0;
    reg  [31:0]                   int_ifmap_18 = 'b0;
    reg  [31:0]                   int_ifmap_19 = 'b0;
    reg  [31:0]                   int_ifmap_20 = 'b0;
    reg  [31:0]                   int_ifmap_21 = 'b0;
    reg  [31:0]                   int_ifmap_22 = 'b0;
    reg  [31:0]                   int_ifmap_23 = 'b0;
    reg  [31:0]                   int_ifmap_24 = 'b0;
    reg  [31:0]                   int_ifmap_25 = 'b0;
    reg  [31:0]                   int_ifmap_26 = 'b0;
    reg  [31:0]                   int_ifmap_27 = 'b0;
    reg  [31:0]                   int_ifmap_28 = 'b0;
    reg  [31:0]                   int_ifmap_29 = 'b0;
    reg  [31:0]                   int_ifmap_30 = 'b0;
    reg  [31:0]                   int_ifmap_31 = 'b0;
    reg  [31:0]                   int_ifmap_32 = 'b0;
    reg  [31:0]                   int_ifmap_33 = 'b0;
    reg  [31:0]                   int_ifmap_34 = 'b0;
    reg  [31:0]                   int_ifmap_35 = 'b0;
    reg  [31:0]                   int_ifmap_36 = 'b0;
    reg  [31:0]                   int_ifmap_37 = 'b0;
    reg  [31:0]                   int_ifmap_38 = 'b0;
    reg  [31:0]                   int_ifmap_39 = 'b0;
    reg  [31:0]                   int_ifmap_40 = 'b0;
    reg  [31:0]                   int_ifmap_41 = 'b0;
    reg  [31:0]                   int_ifmap_42 = 'b0;
    reg  [31:0]                   int_ifmap_43 = 'b0;
    reg  [31:0]                   int_ifmap_44 = 'b0;
    reg  [31:0]                   int_ifmap_45 = 'b0;
    reg  [31:0]                   int_ifmap_46 = 'b0;
    reg  [31:0]                   int_ifmap_47 = 'b0;
    reg  [31:0]                   int_ifmap_48 = 'b0;
    reg  [31:0]                   int_ifmap_49 = 'b0;
    reg  [31:0]                   int_ifmap_50 = 'b0;
    reg  [31:0]                   int_ifmap_51 = 'b0;
    reg  [31:0]                   int_ifmap_52 = 'b0;
    reg  [31:0]                   int_ifmap_53 = 'b0;
    reg  [31:0]                   int_ifmap_54 = 'b0;
    reg  [31:0]                   int_ifmap_55 = 'b0;
    reg  [31:0]                   int_ifmap_56 = 'b0;
    reg  [31:0]                   int_ifmap_57 = 'b0;
    reg  [31:0]                   int_ifmap_58 = 'b0;
    reg  [31:0]                   int_ifmap_59 = 'b0;
    reg  [31:0]                   int_ifmap_60 = 'b0;
    reg  [31:0]                   int_ifmap_61 = 'b0;
    reg  [31:0]                   int_ifmap_62 = 'b0;
    reg  [31:0]                   int_ifmap_63 = 'b0;
    reg  [31:0]                   int_ifmap_64 = 'b0;
    reg  [31:0]                   int_ifmap_65 = 'b0;
    reg  [31:0]                   int_ifmap_66 = 'b0;
    reg  [31:0]                   int_ifmap_67 = 'b0;
    reg  [31:0]                   int_ifmap_68 = 'b0;
    reg  [31:0]                   int_ifmap_69 = 'b0;
    reg  [31:0]                   int_ifmap_70 = 'b0;
    reg  [31:0]                   int_ifmap_71 = 'b0;
    reg  [31:0]                   int_ifmap_72 = 'b0;
    reg  [31:0]                   int_ifmap_73 = 'b0;
    reg  [31:0]                   int_ifmap_74 = 'b0;
    reg  [31:0]                   int_ifmap_75 = 'b0;
    reg  [31:0]                   int_ifmap_76 = 'b0;
    reg  [31:0]                   int_ifmap_77 = 'b0;
    reg  [31:0]                   int_ifmap_78 = 'b0;
    reg  [31:0]                   int_ifmap_79 = 'b0;
    reg  [31:0]                   int_ifmap_80 = 'b0;
    reg  [31:0]                   int_ifmap_81 = 'b0;
    reg  [31:0]                   int_ifmap_82 = 'b0;
    reg  [31:0]                   int_ifmap_83 = 'b0;
    reg  [31:0]                   int_ifmap_84 = 'b0;
    reg  [31:0]                   int_ifmap_85 = 'b0;
    reg  [31:0]                   int_ifmap_86 = 'b0;
    reg  [31:0]                   int_ifmap_87 = 'b0;
    reg  [31:0]                   int_ifmap_88 = 'b0;
    reg  [31:0]                   int_ifmap_89 = 'b0;
    reg  [31:0]                   int_ifmap_90 = 'b0;
    reg  [31:0]                   int_ifmap_91 = 'b0;
    reg  [31:0]                   int_ifmap_92 = 'b0;
    reg  [31:0]                   int_ifmap_93 = 'b0;
    reg  [31:0]                   int_ifmap_94 = 'b0;
    reg  [31:0]                   int_ifmap_95 = 'b0;
    reg  [31:0]                   int_ifmap_96 = 'b0;
    reg  [31:0]                   int_ifmap_97 = 'b0;
    reg  [31:0]                   int_ifmap_98 = 'b0;
    reg  [31:0]                   int_ifmap_99 = 'b0;
    reg  [31:0]                   int_ifmap_100 = 'b0;
    reg  [31:0]                   int_ifmap_101 = 'b0;
    reg  [31:0]                   int_ifmap_102 = 'b0;
    reg  [31:0]                   int_ifmap_103 = 'b0;
    reg  [31:0]                   int_ifmap_104 = 'b0;
    reg  [31:0]                   int_ifmap_105 = 'b0;
    reg  [31:0]                   int_ifmap_106 = 'b0;
    reg  [31:0]                   int_ifmap_107 = 'b0;
    reg  [31:0]                   int_ifmap_108 = 'b0;
    reg  [31:0]                   int_ifmap_109 = 'b0;
    reg  [31:0]                   int_ifmap_110 = 'b0;
    reg  [31:0]                   int_ifmap_111 = 'b0;
    reg  [31:0]                   int_ifmap_112 = 'b0;
    reg  [31:0]                   int_ifmap_113 = 'b0;
    reg  [31:0]                   int_ifmap_114 = 'b0;
    reg  [31:0]                   int_ifmap_115 = 'b0;
    reg  [31:0]                   int_ifmap_116 = 'b0;
    reg  [31:0]                   int_ifmap_117 = 'b0;
    reg  [31:0]                   int_ifmap_118 = 'b0;
    reg  [31:0]                   int_ifmap_119 = 'b0;
    reg  [31:0]                   int_ifmap_120 = 'b0;
    reg  [31:0]                   int_ifmap_121 = 'b0;
    reg  [31:0]                   int_ifmap_122 = 'b0;
    reg  [31:0]                   int_ifmap_123 = 'b0;
    reg  [31:0]                   int_ifmap_124 = 'b0;
    reg  [31:0]                   int_ifmap_125 = 'b0;
    reg  [31:0]                   int_ifmap_126 = 'b0;
    reg  [31:0]                   int_ifmap_127 = 'b0;
    reg  [31:0]                   int_ifmap_128 = 'b0;
    reg  [31:0]                   int_ifmap_129 = 'b0;
    reg  [31:0]                   int_ifmap_130 = 'b0;
    reg  [31:0]                   int_ifmap_131 = 'b0;
    reg  [31:0]                   int_ifmap_132 = 'b0;
    reg  [31:0]                   int_ifmap_133 = 'b0;
    reg  [31:0]                   int_ifmap_134 = 'b0;
    reg  [31:0]                   int_ifmap_135 = 'b0;
    reg  [31:0]                   int_ifmap_136 = 'b0;
    reg  [31:0]                   int_ifmap_137 = 'b0;
    reg  [31:0]                   int_ifmap_138 = 'b0;
    reg  [31:0]                   int_ifmap_139 = 'b0;
    reg  [31:0]                   int_ifmap_140 = 'b0;
    reg  [31:0]                   int_ifmap_141 = 'b0;
    reg  [31:0]                   int_ifmap_142 = 'b0;
    reg  [31:0]                   int_ifmap_143 = 'b0;
    reg  [31:0]                   int_ifmap_144 = 'b0;
    reg  [31:0]                   int_ifmap_145 = 'b0;
    reg  [31:0]                   int_ifmap_146 = 'b0;
    reg  [31:0]                   int_ifmap_147 = 'b0;
    reg  [31:0]                   int_ifmap_148 = 'b0;
    reg  [31:0]                   int_ifmap_149 = 'b0;
    reg  [31:0]                   int_ifmap_150 = 'b0;
    reg  [31:0]                   int_ifmap_151 = 'b0;
    reg  [31:0]                   int_ifmap_152 = 'b0;
    reg  [31:0]                   int_ifmap_153 = 'b0;
    reg  [31:0]                   int_ifmap_154 = 'b0;
    reg  [31:0]                   int_ifmap_155 = 'b0;
    reg  [31:0]                   int_ifmap_156 = 'b0;
    reg  [31:0]                   int_ifmap_157 = 'b0;
    reg  [31:0]                   int_ifmap_158 = 'b0;
    reg  [31:0]                   int_ifmap_159 = 'b0;
    reg  [31:0]                   int_ifmap_160 = 'b0;
    reg  [31:0]                   int_ifmap_161 = 'b0;
    reg  [31:0]                   int_ifmap_162 = 'b0;
    reg  [31:0]                   int_ifmap_163 = 'b0;
    reg  [31:0]                   int_ifmap_164 = 'b0;
    reg  [31:0]                   int_ifmap_165 = 'b0;
    reg  [31:0]                   int_ifmap_166 = 'b0;
    reg  [31:0]                   int_ifmap_167 = 'b0;
    reg  [31:0]                   int_ifmap_168 = 'b0;
    reg  [31:0]                   int_ifmap_169 = 'b0;
    reg  [31:0]                   int_ifmap_170 = 'b0;
    reg  [31:0]                   int_ifmap_171 = 'b0;
    reg  [31:0]                   int_ifmap_172 = 'b0;
    reg  [31:0]                   int_ifmap_173 = 'b0;
    reg  [31:0]                   int_ifmap_174 = 'b0;
    reg  [31:0]                   int_ifmap_175 = 'b0;
    reg  [31:0]                   int_ifmap_176 = 'b0;
    reg  [31:0]                   int_ifmap_177 = 'b0;
    reg  [31:0]                   int_ifmap_178 = 'b0;
    reg  [31:0]                   int_ifmap_179 = 'b0;
    reg  [31:0]                   int_ifmap_180 = 'b0;
    reg  [31:0]                   int_ifmap_181 = 'b0;
    reg  [31:0]                   int_ifmap_182 = 'b0;
    reg  [31:0]                   int_ifmap_183 = 'b0;
    reg  [31:0]                   int_ifmap_184 = 'b0;
    reg  [31:0]                   int_ifmap_185 = 'b0;
    reg  [31:0]                   int_ifmap_186 = 'b0;
    reg  [31:0]                   int_ifmap_187 = 'b0;
    reg  [31:0]                   int_ifmap_188 = 'b0;
    reg  [31:0]                   int_ifmap_189 = 'b0;
    reg  [31:0]                   int_ifmap_190 = 'b0;
    reg  [31:0]                   int_ifmap_191 = 'b0;
    reg  [31:0]                   int_ifmap_192 = 'b0;
    reg  [31:0]                   int_ifmap_193 = 'b0;
    reg  [31:0]                   int_ifmap_194 = 'b0;
    reg  [31:0]                   int_ifmap_195 = 'b0;
    reg  [31:0]                   int_ifmap_196 = 'b0;
    reg  [31:0]                   int_ifmap_197 = 'b0;
    reg  [31:0]                   int_ifmap_198 = 'b0;
    reg  [31:0]                   int_ifmap_199 = 'b0;
    reg  [31:0]                   int_ifmap_200 = 'b0;
    reg  [31:0]                   int_ifmap_201 = 'b0;
    reg  [31:0]                   int_ifmap_202 = 'b0;
    reg  [31:0]                   int_ifmap_203 = 'b0;
    reg  [31:0]                   int_ifmap_204 = 'b0;
    reg  [31:0]                   int_ifmap_205 = 'b0;
    reg  [31:0]                   int_ifmap_206 = 'b0;
    reg  [31:0]                   int_ifmap_207 = 'b0;
    reg  [31:0]                   int_ifmap_208 = 'b0;
    reg  [31:0]                   int_ifmap_209 = 'b0;
    reg  [31:0]                   int_ifmap_210 = 'b0;
    reg  [31:0]                   int_ifmap_211 = 'b0;
    reg  [31:0]                   int_ifmap_212 = 'b0;
    reg  [31:0]                   int_ifmap_213 = 'b0;
    reg  [31:0]                   int_ifmap_214 = 'b0;
    reg  [31:0]                   int_ifmap_215 = 'b0;
    reg  [31:0]                   int_ifmap_216 = 'b0;
    reg  [31:0]                   int_ifmap_217 = 'b0;
    reg  [31:0]                   int_ifmap_218 = 'b0;
    reg  [31:0]                   int_ifmap_219 = 'b0;
    reg  [31:0]                   int_ifmap_220 = 'b0;
    reg  [31:0]                   int_ifmap_221 = 'b0;
    reg  [31:0]                   int_ifmap_222 = 'b0;
    reg  [31:0]                   int_ifmap_223 = 'b0;
    reg  [31:0]                   int_ifmap_224 = 'b0;
    reg  [31:0]                   int_ifmap_225 = 'b0;
    reg  [31:0]                   int_ifmap_226 = 'b0;
    reg  [31:0]                   int_ifmap_227 = 'b0;
    reg  [31:0]                   int_ifmap_228 = 'b0;
    reg  [31:0]                   int_ifmap_229 = 'b0;
    reg  [31:0]                   int_ifmap_230 = 'b0;
    reg  [31:0]                   int_ifmap_231 = 'b0;
    reg  [31:0]                   int_ifmap_232 = 'b0;
    reg  [31:0]                   int_ifmap_233 = 'b0;
    reg  [31:0]                   int_ifmap_234 = 'b0;
    reg  [31:0]                   int_ifmap_235 = 'b0;
    reg  [31:0]                   int_ifmap_236 = 'b0;
    reg  [31:0]                   int_ifmap_237 = 'b0;
    reg  [31:0]                   int_ifmap_238 = 'b0;
    reg  [31:0]                   int_ifmap_239 = 'b0;
    reg  [31:0]                   int_ifmap_240 = 'b0;
    reg  [31:0]                   int_ifmap_241 = 'b0;
    reg  [31:0]                   int_ifmap_242 = 'b0;
    reg  [31:0]                   int_ifmap_243 = 'b0;
    reg  [31:0]                   int_ifmap_244 = 'b0;
    reg  [31:0]                   int_ifmap_245 = 'b0;
    reg  [31:0]                   int_ifmap_246 = 'b0;
    reg  [31:0]                   int_ifmap_247 = 'b0;
    reg  [31:0]                   int_ifmap_248 = 'b0;
    reg  [31:0]                   int_ifmap_249 = 'b0;
    reg  [31:0]                   int_ifmap_250 = 'b0;
    reg  [31:0]                   int_ifmap_251 = 'b0;
    reg  [31:0]                   int_ifmap_252 = 'b0;
    reg  [31:0]                   int_ifmap_253 = 'b0;
    reg  [31:0]                   int_ifmap_254 = 'b0;
    reg  [31:0]                   int_ifmap_255 = 'b0;
    reg  [31:0]                   int_filter_0 = 'b0;
    reg  [31:0]                   int_filter_1 = 'b0;
    reg  [31:0]                   int_filter_2 = 'b0;
    reg  [31:0]                   int_filter_3 = 'b0;
    reg  [31:0]                   int_filter_4 = 'b0;
    reg  [31:0]                   int_filter_5 = 'b0;
    reg  [31:0]                   int_filter_6 = 'b0;
    reg  [31:0]                   int_filter_7 = 'b0;
    reg  [31:0]                   int_filter_8 = 'b0;
    reg  [31:0]                   int_filter_9 = 'b0;
    reg  [31:0]                   int_filter_10 = 'b0;
    reg  [31:0]                   int_filter_11 = 'b0;
    reg  [31:0]                   int_filter_12 = 'b0;
    reg  [31:0]                   int_filter_13 = 'b0;
    reg  [31:0]                   int_filter_14 = 'b0;
    reg  [31:0]                   int_filter_15 = 'b0;
    reg  [31:0]                   int_filter_16 = 'b0;
    reg  [31:0]                   int_filter_17 = 'b0;
    reg  [31:0]                   int_filter_18 = 'b0;
    reg  [31:0]                   int_filter_19 = 'b0;
    reg  [31:0]                   int_filter_20 = 'b0;
    reg  [31:0]                   int_filter_21 = 'b0;
    reg  [31:0]                   int_filter_22 = 'b0;
    reg  [31:0]                   int_filter_23 = 'b0;
    reg  [31:0]                   int_filter_24 = 'b0;
    // memory signals
    wire [3:0]                    int_ofmap_0_address0;
    wire                          int_ofmap_0_ce0;
    wire                          int_ofmap_0_we0;
    wire [3:0]                    int_ofmap_0_be0;
    wire [31:0]                   int_ofmap_0_d0;
    wire [31:0]                   int_ofmap_0_q0;
    wire [3:0]                    int_ofmap_0_address1;
    wire                          int_ofmap_0_ce1;
    wire                          int_ofmap_0_we1;
    wire [3:0]                    int_ofmap_0_be1;
    wire [31:0]                   int_ofmap_0_d1;
    wire [31:0]                   int_ofmap_0_q1;
    reg                           int_ofmap_0_read;
    reg                           int_ofmap_0_write;
    wire [3:0]                    int_ofmap_1_address0;
    wire                          int_ofmap_1_ce0;
    wire                          int_ofmap_1_we0;
    wire [3:0]                    int_ofmap_1_be0;
    wire [31:0]                   int_ofmap_1_d0;
    wire [31:0]                   int_ofmap_1_q0;
    wire [3:0]                    int_ofmap_1_address1;
    wire                          int_ofmap_1_ce1;
    wire                          int_ofmap_1_we1;
    wire [3:0]                    int_ofmap_1_be1;
    wire [31:0]                   int_ofmap_1_d1;
    wire [31:0]                   int_ofmap_1_q1;
    reg                           int_ofmap_1_read;
    reg                           int_ofmap_1_write;
    wire [3:0]                    int_ofmap_2_address0;
    wire                          int_ofmap_2_ce0;
    wire                          int_ofmap_2_we0;
    wire [3:0]                    int_ofmap_2_be0;
    wire [31:0]                   int_ofmap_2_d0;
    wire [31:0]                   int_ofmap_2_q0;
    wire [3:0]                    int_ofmap_2_address1;
    wire                          int_ofmap_2_ce1;
    wire                          int_ofmap_2_we1;
    wire [3:0]                    int_ofmap_2_be1;
    wire [31:0]                   int_ofmap_2_d1;
    wire [31:0]                   int_ofmap_2_q1;
    reg                           int_ofmap_2_read;
    reg                           int_ofmap_2_write;
    wire [3:0]                    int_ofmap_3_address0;
    wire                          int_ofmap_3_ce0;
    wire                          int_ofmap_3_we0;
    wire [3:0]                    int_ofmap_3_be0;
    wire [31:0]                   int_ofmap_3_d0;
    wire [31:0]                   int_ofmap_3_q0;
    wire [3:0]                    int_ofmap_3_address1;
    wire                          int_ofmap_3_ce1;
    wire                          int_ofmap_3_we1;
    wire [3:0]                    int_ofmap_3_be1;
    wire [31:0]                   int_ofmap_3_d1;
    wire [31:0]                   int_ofmap_3_q1;
    reg                           int_ofmap_3_read;
    reg                           int_ofmap_3_write;
    wire [3:0]                    int_ofmap_4_address0;
    wire                          int_ofmap_4_ce0;
    wire                          int_ofmap_4_we0;
    wire [3:0]                    int_ofmap_4_be0;
    wire [31:0]                   int_ofmap_4_d0;
    wire [31:0]                   int_ofmap_4_q0;
    wire [3:0]                    int_ofmap_4_address1;
    wire                          int_ofmap_4_ce1;
    wire                          int_ofmap_4_we1;
    wire [3:0]                    int_ofmap_4_be1;
    wire [31:0]                   int_ofmap_4_d1;
    wire [31:0]                   int_ofmap_4_q1;
    reg                           int_ofmap_4_read;
    reg                           int_ofmap_4_write;
    wire [3:0]                    int_ofmap_5_address0;
    wire                          int_ofmap_5_ce0;
    wire                          int_ofmap_5_we0;
    wire [3:0]                    int_ofmap_5_be0;
    wire [31:0]                   int_ofmap_5_d0;
    wire [31:0]                   int_ofmap_5_q0;
    wire [3:0]                    int_ofmap_5_address1;
    wire                          int_ofmap_5_ce1;
    wire                          int_ofmap_5_we1;
    wire [3:0]                    int_ofmap_5_be1;
    wire [31:0]                   int_ofmap_5_d1;
    wire [31:0]                   int_ofmap_5_q1;
    reg                           int_ofmap_5_read;
    reg                           int_ofmap_5_write;
    wire [3:0]                    int_ofmap_6_address0;
    wire                          int_ofmap_6_ce0;
    wire                          int_ofmap_6_we0;
    wire [3:0]                    int_ofmap_6_be0;
    wire [31:0]                   int_ofmap_6_d0;
    wire [31:0]                   int_ofmap_6_q0;
    wire [3:0]                    int_ofmap_6_address1;
    wire                          int_ofmap_6_ce1;
    wire                          int_ofmap_6_we1;
    wire [3:0]                    int_ofmap_6_be1;
    wire [31:0]                   int_ofmap_6_d1;
    wire [31:0]                   int_ofmap_6_q1;
    reg                           int_ofmap_6_read;
    reg                           int_ofmap_6_write;
    wire [3:0]                    int_ofmap_7_address0;
    wire                          int_ofmap_7_ce0;
    wire                          int_ofmap_7_we0;
    wire [3:0]                    int_ofmap_7_be0;
    wire [31:0]                   int_ofmap_7_d0;
    wire [31:0]                   int_ofmap_7_q0;
    wire [3:0]                    int_ofmap_7_address1;
    wire                          int_ofmap_7_ce1;
    wire                          int_ofmap_7_we1;
    wire [3:0]                    int_ofmap_7_be1;
    wire [31:0]                   int_ofmap_7_d1;
    wire [31:0]                   int_ofmap_7_q1;
    reg                           int_ofmap_7_read;
    reg                           int_ofmap_7_write;
    wire [3:0]                    int_ofmap_8_address0;
    wire                          int_ofmap_8_ce0;
    wire                          int_ofmap_8_we0;
    wire [3:0]                    int_ofmap_8_be0;
    wire [31:0]                   int_ofmap_8_d0;
    wire [31:0]                   int_ofmap_8_q0;
    wire [3:0]                    int_ofmap_8_address1;
    wire                          int_ofmap_8_ce1;
    wire                          int_ofmap_8_we1;
    wire [3:0]                    int_ofmap_8_be1;
    wire [31:0]                   int_ofmap_8_d1;
    wire [31:0]                   int_ofmap_8_q1;
    reg                           int_ofmap_8_read;
    reg                           int_ofmap_8_write;
    wire [3:0]                    int_ofmap_9_address0;
    wire                          int_ofmap_9_ce0;
    wire                          int_ofmap_9_we0;
    wire [3:0]                    int_ofmap_9_be0;
    wire [31:0]                   int_ofmap_9_d0;
    wire [31:0]                   int_ofmap_9_q0;
    wire [3:0]                    int_ofmap_9_address1;
    wire                          int_ofmap_9_ce1;
    wire                          int_ofmap_9_we1;
    wire [3:0]                    int_ofmap_9_be1;
    wire [31:0]                   int_ofmap_9_d1;
    wire [31:0]                   int_ofmap_9_q1;
    reg                           int_ofmap_9_read;
    reg                           int_ofmap_9_write;
    wire [3:0]                    int_ofmap_10_address0;
    wire                          int_ofmap_10_ce0;
    wire                          int_ofmap_10_we0;
    wire [3:0]                    int_ofmap_10_be0;
    wire [31:0]                   int_ofmap_10_d0;
    wire [31:0]                   int_ofmap_10_q0;
    wire [3:0]                    int_ofmap_10_address1;
    wire                          int_ofmap_10_ce1;
    wire                          int_ofmap_10_we1;
    wire [3:0]                    int_ofmap_10_be1;
    wire [31:0]                   int_ofmap_10_d1;
    wire [31:0]                   int_ofmap_10_q1;
    reg                           int_ofmap_10_read;
    reg                           int_ofmap_10_write;
    wire [3:0]                    int_ofmap_11_address0;
    wire                          int_ofmap_11_ce0;
    wire                          int_ofmap_11_we0;
    wire [3:0]                    int_ofmap_11_be0;
    wire [31:0]                   int_ofmap_11_d0;
    wire [31:0]                   int_ofmap_11_q0;
    wire [3:0]                    int_ofmap_11_address1;
    wire                          int_ofmap_11_ce1;
    wire                          int_ofmap_11_we1;
    wire [3:0]                    int_ofmap_11_be1;
    wire [31:0]                   int_ofmap_11_d1;
    wire [31:0]                   int_ofmap_11_q1;
    reg                           int_ofmap_11_read;
    reg                           int_ofmap_11_write;

//------------------------Instantiation------------------
// int_ofmap_0
conv_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 12 )
) int_ofmap_0 (
    .clk0     ( ACLK ),
    .address0 ( int_ofmap_0_address0 ),
    .ce0      ( int_ofmap_0_ce0 ),
    .we0      ( int_ofmap_0_we0 ),
    .be0      ( int_ofmap_0_be0 ),
    .d0       ( int_ofmap_0_d0 ),
    .q0       ( int_ofmap_0_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_ofmap_0_address1 ),
    .ce1      ( int_ofmap_0_ce1 ),
    .we1      ( int_ofmap_0_we1 ),
    .be1      ( int_ofmap_0_be1 ),
    .d1       ( int_ofmap_0_d1 ),
    .q1       ( int_ofmap_0_q1 )
);
// int_ofmap_1
conv_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 12 )
) int_ofmap_1 (
    .clk0     ( ACLK ),
    .address0 ( int_ofmap_1_address0 ),
    .ce0      ( int_ofmap_1_ce0 ),
    .we0      ( int_ofmap_1_we0 ),
    .be0      ( int_ofmap_1_be0 ),
    .d0       ( int_ofmap_1_d0 ),
    .q0       ( int_ofmap_1_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_ofmap_1_address1 ),
    .ce1      ( int_ofmap_1_ce1 ),
    .we1      ( int_ofmap_1_we1 ),
    .be1      ( int_ofmap_1_be1 ),
    .d1       ( int_ofmap_1_d1 ),
    .q1       ( int_ofmap_1_q1 )
);
// int_ofmap_2
conv_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 12 )
) int_ofmap_2 (
    .clk0     ( ACLK ),
    .address0 ( int_ofmap_2_address0 ),
    .ce0      ( int_ofmap_2_ce0 ),
    .we0      ( int_ofmap_2_we0 ),
    .be0      ( int_ofmap_2_be0 ),
    .d0       ( int_ofmap_2_d0 ),
    .q0       ( int_ofmap_2_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_ofmap_2_address1 ),
    .ce1      ( int_ofmap_2_ce1 ),
    .we1      ( int_ofmap_2_we1 ),
    .be1      ( int_ofmap_2_be1 ),
    .d1       ( int_ofmap_2_d1 ),
    .q1       ( int_ofmap_2_q1 )
);
// int_ofmap_3
conv_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 12 )
) int_ofmap_3 (
    .clk0     ( ACLK ),
    .address0 ( int_ofmap_3_address0 ),
    .ce0      ( int_ofmap_3_ce0 ),
    .we0      ( int_ofmap_3_we0 ),
    .be0      ( int_ofmap_3_be0 ),
    .d0       ( int_ofmap_3_d0 ),
    .q0       ( int_ofmap_3_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_ofmap_3_address1 ),
    .ce1      ( int_ofmap_3_ce1 ),
    .we1      ( int_ofmap_3_we1 ),
    .be1      ( int_ofmap_3_be1 ),
    .d1       ( int_ofmap_3_d1 ),
    .q1       ( int_ofmap_3_q1 )
);
// int_ofmap_4
conv_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 12 )
) int_ofmap_4 (
    .clk0     ( ACLK ),
    .address0 ( int_ofmap_4_address0 ),
    .ce0      ( int_ofmap_4_ce0 ),
    .we0      ( int_ofmap_4_we0 ),
    .be0      ( int_ofmap_4_be0 ),
    .d0       ( int_ofmap_4_d0 ),
    .q0       ( int_ofmap_4_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_ofmap_4_address1 ),
    .ce1      ( int_ofmap_4_ce1 ),
    .we1      ( int_ofmap_4_we1 ),
    .be1      ( int_ofmap_4_be1 ),
    .d1       ( int_ofmap_4_d1 ),
    .q1       ( int_ofmap_4_q1 )
);
// int_ofmap_5
conv_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 12 )
) int_ofmap_5 (
    .clk0     ( ACLK ),
    .address0 ( int_ofmap_5_address0 ),
    .ce0      ( int_ofmap_5_ce0 ),
    .we0      ( int_ofmap_5_we0 ),
    .be0      ( int_ofmap_5_be0 ),
    .d0       ( int_ofmap_5_d0 ),
    .q0       ( int_ofmap_5_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_ofmap_5_address1 ),
    .ce1      ( int_ofmap_5_ce1 ),
    .we1      ( int_ofmap_5_we1 ),
    .be1      ( int_ofmap_5_be1 ),
    .d1       ( int_ofmap_5_d1 ),
    .q1       ( int_ofmap_5_q1 )
);
// int_ofmap_6
conv_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 12 )
) int_ofmap_6 (
    .clk0     ( ACLK ),
    .address0 ( int_ofmap_6_address0 ),
    .ce0      ( int_ofmap_6_ce0 ),
    .we0      ( int_ofmap_6_we0 ),
    .be0      ( int_ofmap_6_be0 ),
    .d0       ( int_ofmap_6_d0 ),
    .q0       ( int_ofmap_6_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_ofmap_6_address1 ),
    .ce1      ( int_ofmap_6_ce1 ),
    .we1      ( int_ofmap_6_we1 ),
    .be1      ( int_ofmap_6_be1 ),
    .d1       ( int_ofmap_6_d1 ),
    .q1       ( int_ofmap_6_q1 )
);
// int_ofmap_7
conv_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 12 )
) int_ofmap_7 (
    .clk0     ( ACLK ),
    .address0 ( int_ofmap_7_address0 ),
    .ce0      ( int_ofmap_7_ce0 ),
    .we0      ( int_ofmap_7_we0 ),
    .be0      ( int_ofmap_7_be0 ),
    .d0       ( int_ofmap_7_d0 ),
    .q0       ( int_ofmap_7_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_ofmap_7_address1 ),
    .ce1      ( int_ofmap_7_ce1 ),
    .we1      ( int_ofmap_7_we1 ),
    .be1      ( int_ofmap_7_be1 ),
    .d1       ( int_ofmap_7_d1 ),
    .q1       ( int_ofmap_7_q1 )
);
// int_ofmap_8
conv_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 12 )
) int_ofmap_8 (
    .clk0     ( ACLK ),
    .address0 ( int_ofmap_8_address0 ),
    .ce0      ( int_ofmap_8_ce0 ),
    .we0      ( int_ofmap_8_we0 ),
    .be0      ( int_ofmap_8_be0 ),
    .d0       ( int_ofmap_8_d0 ),
    .q0       ( int_ofmap_8_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_ofmap_8_address1 ),
    .ce1      ( int_ofmap_8_ce1 ),
    .we1      ( int_ofmap_8_we1 ),
    .be1      ( int_ofmap_8_be1 ),
    .d1       ( int_ofmap_8_d1 ),
    .q1       ( int_ofmap_8_q1 )
);
// int_ofmap_9
conv_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 12 )
) int_ofmap_9 (
    .clk0     ( ACLK ),
    .address0 ( int_ofmap_9_address0 ),
    .ce0      ( int_ofmap_9_ce0 ),
    .we0      ( int_ofmap_9_we0 ),
    .be0      ( int_ofmap_9_be0 ),
    .d0       ( int_ofmap_9_d0 ),
    .q0       ( int_ofmap_9_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_ofmap_9_address1 ),
    .ce1      ( int_ofmap_9_ce1 ),
    .we1      ( int_ofmap_9_we1 ),
    .be1      ( int_ofmap_9_be1 ),
    .d1       ( int_ofmap_9_d1 ),
    .q1       ( int_ofmap_9_q1 )
);
// int_ofmap_10
conv_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 12 )
) int_ofmap_10 (
    .clk0     ( ACLK ),
    .address0 ( int_ofmap_10_address0 ),
    .ce0      ( int_ofmap_10_ce0 ),
    .we0      ( int_ofmap_10_we0 ),
    .be0      ( int_ofmap_10_be0 ),
    .d0       ( int_ofmap_10_d0 ),
    .q0       ( int_ofmap_10_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_ofmap_10_address1 ),
    .ce1      ( int_ofmap_10_ce1 ),
    .we1      ( int_ofmap_10_we1 ),
    .be1      ( int_ofmap_10_be1 ),
    .d1       ( int_ofmap_10_d1 ),
    .q1       ( int_ofmap_10_q1 )
);
// int_ofmap_11
conv_AXILiteS_s_axi_ram #(
    .BYTES    ( 4 ),
    .DEPTH    ( 12 )
) int_ofmap_11 (
    .clk0     ( ACLK ),
    .address0 ( int_ofmap_11_address0 ),
    .ce0      ( int_ofmap_11_ce0 ),
    .we0      ( int_ofmap_11_we0 ),
    .be0      ( int_ofmap_11_be0 ),
    .d0       ( int_ofmap_11_d0 ),
    .q0       ( int_ofmap_11_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_ofmap_11_address1 ),
    .ce1      ( int_ofmap_11_ce1 ),
    .we1      ( int_ofmap_11_we1 ),
    .be1      ( int_ofmap_11_be1 ),
    .d1       ( int_ofmap_11_d1 ),
    .q1       ( int_ofmap_11_q1 )
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
assign RVALID  = (rstate == RDDATA) & !int_ofmap_0_read & !int_ofmap_1_read & !int_ofmap_2_read & !int_ofmap_3_read & !int_ofmap_4_read & !int_ofmap_5_read & !int_ofmap_6_read & !int_ofmap_7_read & !int_ofmap_8_read & !int_ofmap_9_read & !int_ofmap_10_read & !int_ofmap_11_read;
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
            case (raddr)
                ADDR_IFMAP_0_DATA_0: begin
                    rdata <= int_ifmap_0[31:0];
                end
                ADDR_IFMAP_1_DATA_0: begin
                    rdata <= int_ifmap_1[31:0];
                end
                ADDR_IFMAP_2_DATA_0: begin
                    rdata <= int_ifmap_2[31:0];
                end
                ADDR_IFMAP_3_DATA_0: begin
                    rdata <= int_ifmap_3[31:0];
                end
                ADDR_IFMAP_4_DATA_0: begin
                    rdata <= int_ifmap_4[31:0];
                end
                ADDR_IFMAP_5_DATA_0: begin
                    rdata <= int_ifmap_5[31:0];
                end
                ADDR_IFMAP_6_DATA_0: begin
                    rdata <= int_ifmap_6[31:0];
                end
                ADDR_IFMAP_7_DATA_0: begin
                    rdata <= int_ifmap_7[31:0];
                end
                ADDR_IFMAP_8_DATA_0: begin
                    rdata <= int_ifmap_8[31:0];
                end
                ADDR_IFMAP_9_DATA_0: begin
                    rdata <= int_ifmap_9[31:0];
                end
                ADDR_IFMAP_10_DATA_0: begin
                    rdata <= int_ifmap_10[31:0];
                end
                ADDR_IFMAP_11_DATA_0: begin
                    rdata <= int_ifmap_11[31:0];
                end
                ADDR_IFMAP_12_DATA_0: begin
                    rdata <= int_ifmap_12[31:0];
                end
                ADDR_IFMAP_13_DATA_0: begin
                    rdata <= int_ifmap_13[31:0];
                end
                ADDR_IFMAP_14_DATA_0: begin
                    rdata <= int_ifmap_14[31:0];
                end
                ADDR_IFMAP_15_DATA_0: begin
                    rdata <= int_ifmap_15[31:0];
                end
                ADDR_IFMAP_16_DATA_0: begin
                    rdata <= int_ifmap_16[31:0];
                end
                ADDR_IFMAP_17_DATA_0: begin
                    rdata <= int_ifmap_17[31:0];
                end
                ADDR_IFMAP_18_DATA_0: begin
                    rdata <= int_ifmap_18[31:0];
                end
                ADDR_IFMAP_19_DATA_0: begin
                    rdata <= int_ifmap_19[31:0];
                end
                ADDR_IFMAP_20_DATA_0: begin
                    rdata <= int_ifmap_20[31:0];
                end
                ADDR_IFMAP_21_DATA_0: begin
                    rdata <= int_ifmap_21[31:0];
                end
                ADDR_IFMAP_22_DATA_0: begin
                    rdata <= int_ifmap_22[31:0];
                end
                ADDR_IFMAP_23_DATA_0: begin
                    rdata <= int_ifmap_23[31:0];
                end
                ADDR_IFMAP_24_DATA_0: begin
                    rdata <= int_ifmap_24[31:0];
                end
                ADDR_IFMAP_25_DATA_0: begin
                    rdata <= int_ifmap_25[31:0];
                end
                ADDR_IFMAP_26_DATA_0: begin
                    rdata <= int_ifmap_26[31:0];
                end
                ADDR_IFMAP_27_DATA_0: begin
                    rdata <= int_ifmap_27[31:0];
                end
                ADDR_IFMAP_28_DATA_0: begin
                    rdata <= int_ifmap_28[31:0];
                end
                ADDR_IFMAP_29_DATA_0: begin
                    rdata <= int_ifmap_29[31:0];
                end
                ADDR_IFMAP_30_DATA_0: begin
                    rdata <= int_ifmap_30[31:0];
                end
                ADDR_IFMAP_31_DATA_0: begin
                    rdata <= int_ifmap_31[31:0];
                end
                ADDR_IFMAP_32_DATA_0: begin
                    rdata <= int_ifmap_32[31:0];
                end
                ADDR_IFMAP_33_DATA_0: begin
                    rdata <= int_ifmap_33[31:0];
                end
                ADDR_IFMAP_34_DATA_0: begin
                    rdata <= int_ifmap_34[31:0];
                end
                ADDR_IFMAP_35_DATA_0: begin
                    rdata <= int_ifmap_35[31:0];
                end
                ADDR_IFMAP_36_DATA_0: begin
                    rdata <= int_ifmap_36[31:0];
                end
                ADDR_IFMAP_37_DATA_0: begin
                    rdata <= int_ifmap_37[31:0];
                end
                ADDR_IFMAP_38_DATA_0: begin
                    rdata <= int_ifmap_38[31:0];
                end
                ADDR_IFMAP_39_DATA_0: begin
                    rdata <= int_ifmap_39[31:0];
                end
                ADDR_IFMAP_40_DATA_0: begin
                    rdata <= int_ifmap_40[31:0];
                end
                ADDR_IFMAP_41_DATA_0: begin
                    rdata <= int_ifmap_41[31:0];
                end
                ADDR_IFMAP_42_DATA_0: begin
                    rdata <= int_ifmap_42[31:0];
                end
                ADDR_IFMAP_43_DATA_0: begin
                    rdata <= int_ifmap_43[31:0];
                end
                ADDR_IFMAP_44_DATA_0: begin
                    rdata <= int_ifmap_44[31:0];
                end
                ADDR_IFMAP_45_DATA_0: begin
                    rdata <= int_ifmap_45[31:0];
                end
                ADDR_IFMAP_46_DATA_0: begin
                    rdata <= int_ifmap_46[31:0];
                end
                ADDR_IFMAP_47_DATA_0: begin
                    rdata <= int_ifmap_47[31:0];
                end
                ADDR_IFMAP_48_DATA_0: begin
                    rdata <= int_ifmap_48[31:0];
                end
                ADDR_IFMAP_49_DATA_0: begin
                    rdata <= int_ifmap_49[31:0];
                end
                ADDR_IFMAP_50_DATA_0: begin
                    rdata <= int_ifmap_50[31:0];
                end
                ADDR_IFMAP_51_DATA_0: begin
                    rdata <= int_ifmap_51[31:0];
                end
                ADDR_IFMAP_52_DATA_0: begin
                    rdata <= int_ifmap_52[31:0];
                end
                ADDR_IFMAP_53_DATA_0: begin
                    rdata <= int_ifmap_53[31:0];
                end
                ADDR_IFMAP_54_DATA_0: begin
                    rdata <= int_ifmap_54[31:0];
                end
                ADDR_IFMAP_55_DATA_0: begin
                    rdata <= int_ifmap_55[31:0];
                end
                ADDR_IFMAP_56_DATA_0: begin
                    rdata <= int_ifmap_56[31:0];
                end
                ADDR_IFMAP_57_DATA_0: begin
                    rdata <= int_ifmap_57[31:0];
                end
                ADDR_IFMAP_58_DATA_0: begin
                    rdata <= int_ifmap_58[31:0];
                end
                ADDR_IFMAP_59_DATA_0: begin
                    rdata <= int_ifmap_59[31:0];
                end
                ADDR_IFMAP_60_DATA_0: begin
                    rdata <= int_ifmap_60[31:0];
                end
                ADDR_IFMAP_61_DATA_0: begin
                    rdata <= int_ifmap_61[31:0];
                end
                ADDR_IFMAP_62_DATA_0: begin
                    rdata <= int_ifmap_62[31:0];
                end
                ADDR_IFMAP_63_DATA_0: begin
                    rdata <= int_ifmap_63[31:0];
                end
                ADDR_IFMAP_64_DATA_0: begin
                    rdata <= int_ifmap_64[31:0];
                end
                ADDR_IFMAP_65_DATA_0: begin
                    rdata <= int_ifmap_65[31:0];
                end
                ADDR_IFMAP_66_DATA_0: begin
                    rdata <= int_ifmap_66[31:0];
                end
                ADDR_IFMAP_67_DATA_0: begin
                    rdata <= int_ifmap_67[31:0];
                end
                ADDR_IFMAP_68_DATA_0: begin
                    rdata <= int_ifmap_68[31:0];
                end
                ADDR_IFMAP_69_DATA_0: begin
                    rdata <= int_ifmap_69[31:0];
                end
                ADDR_IFMAP_70_DATA_0: begin
                    rdata <= int_ifmap_70[31:0];
                end
                ADDR_IFMAP_71_DATA_0: begin
                    rdata <= int_ifmap_71[31:0];
                end
                ADDR_IFMAP_72_DATA_0: begin
                    rdata <= int_ifmap_72[31:0];
                end
                ADDR_IFMAP_73_DATA_0: begin
                    rdata <= int_ifmap_73[31:0];
                end
                ADDR_IFMAP_74_DATA_0: begin
                    rdata <= int_ifmap_74[31:0];
                end
                ADDR_IFMAP_75_DATA_0: begin
                    rdata <= int_ifmap_75[31:0];
                end
                ADDR_IFMAP_76_DATA_0: begin
                    rdata <= int_ifmap_76[31:0];
                end
                ADDR_IFMAP_77_DATA_0: begin
                    rdata <= int_ifmap_77[31:0];
                end
                ADDR_IFMAP_78_DATA_0: begin
                    rdata <= int_ifmap_78[31:0];
                end
                ADDR_IFMAP_79_DATA_0: begin
                    rdata <= int_ifmap_79[31:0];
                end
                ADDR_IFMAP_80_DATA_0: begin
                    rdata <= int_ifmap_80[31:0];
                end
                ADDR_IFMAP_81_DATA_0: begin
                    rdata <= int_ifmap_81[31:0];
                end
                ADDR_IFMAP_82_DATA_0: begin
                    rdata <= int_ifmap_82[31:0];
                end
                ADDR_IFMAP_83_DATA_0: begin
                    rdata <= int_ifmap_83[31:0];
                end
                ADDR_IFMAP_84_DATA_0: begin
                    rdata <= int_ifmap_84[31:0];
                end
                ADDR_IFMAP_85_DATA_0: begin
                    rdata <= int_ifmap_85[31:0];
                end
                ADDR_IFMAP_86_DATA_0: begin
                    rdata <= int_ifmap_86[31:0];
                end
                ADDR_IFMAP_87_DATA_0: begin
                    rdata <= int_ifmap_87[31:0];
                end
                ADDR_IFMAP_88_DATA_0: begin
                    rdata <= int_ifmap_88[31:0];
                end
                ADDR_IFMAP_89_DATA_0: begin
                    rdata <= int_ifmap_89[31:0];
                end
                ADDR_IFMAP_90_DATA_0: begin
                    rdata <= int_ifmap_90[31:0];
                end
                ADDR_IFMAP_91_DATA_0: begin
                    rdata <= int_ifmap_91[31:0];
                end
                ADDR_IFMAP_92_DATA_0: begin
                    rdata <= int_ifmap_92[31:0];
                end
                ADDR_IFMAP_93_DATA_0: begin
                    rdata <= int_ifmap_93[31:0];
                end
                ADDR_IFMAP_94_DATA_0: begin
                    rdata <= int_ifmap_94[31:0];
                end
                ADDR_IFMAP_95_DATA_0: begin
                    rdata <= int_ifmap_95[31:0];
                end
                ADDR_IFMAP_96_DATA_0: begin
                    rdata <= int_ifmap_96[31:0];
                end
                ADDR_IFMAP_97_DATA_0: begin
                    rdata <= int_ifmap_97[31:0];
                end
                ADDR_IFMAP_98_DATA_0: begin
                    rdata <= int_ifmap_98[31:0];
                end
                ADDR_IFMAP_99_DATA_0: begin
                    rdata <= int_ifmap_99[31:0];
                end
                ADDR_IFMAP_100_DATA_0: begin
                    rdata <= int_ifmap_100[31:0];
                end
                ADDR_IFMAP_101_DATA_0: begin
                    rdata <= int_ifmap_101[31:0];
                end
                ADDR_IFMAP_102_DATA_0: begin
                    rdata <= int_ifmap_102[31:0];
                end
                ADDR_IFMAP_103_DATA_0: begin
                    rdata <= int_ifmap_103[31:0];
                end
                ADDR_IFMAP_104_DATA_0: begin
                    rdata <= int_ifmap_104[31:0];
                end
                ADDR_IFMAP_105_DATA_0: begin
                    rdata <= int_ifmap_105[31:0];
                end
                ADDR_IFMAP_106_DATA_0: begin
                    rdata <= int_ifmap_106[31:0];
                end
                ADDR_IFMAP_107_DATA_0: begin
                    rdata <= int_ifmap_107[31:0];
                end
                ADDR_IFMAP_108_DATA_0: begin
                    rdata <= int_ifmap_108[31:0];
                end
                ADDR_IFMAP_109_DATA_0: begin
                    rdata <= int_ifmap_109[31:0];
                end
                ADDR_IFMAP_110_DATA_0: begin
                    rdata <= int_ifmap_110[31:0];
                end
                ADDR_IFMAP_111_DATA_0: begin
                    rdata <= int_ifmap_111[31:0];
                end
                ADDR_IFMAP_112_DATA_0: begin
                    rdata <= int_ifmap_112[31:0];
                end
                ADDR_IFMAP_113_DATA_0: begin
                    rdata <= int_ifmap_113[31:0];
                end
                ADDR_IFMAP_114_DATA_0: begin
                    rdata <= int_ifmap_114[31:0];
                end
                ADDR_IFMAP_115_DATA_0: begin
                    rdata <= int_ifmap_115[31:0];
                end
                ADDR_IFMAP_116_DATA_0: begin
                    rdata <= int_ifmap_116[31:0];
                end
                ADDR_IFMAP_117_DATA_0: begin
                    rdata <= int_ifmap_117[31:0];
                end
                ADDR_IFMAP_118_DATA_0: begin
                    rdata <= int_ifmap_118[31:0];
                end
                ADDR_IFMAP_119_DATA_0: begin
                    rdata <= int_ifmap_119[31:0];
                end
                ADDR_IFMAP_120_DATA_0: begin
                    rdata <= int_ifmap_120[31:0];
                end
                ADDR_IFMAP_121_DATA_0: begin
                    rdata <= int_ifmap_121[31:0];
                end
                ADDR_IFMAP_122_DATA_0: begin
                    rdata <= int_ifmap_122[31:0];
                end
                ADDR_IFMAP_123_DATA_0: begin
                    rdata <= int_ifmap_123[31:0];
                end
                ADDR_IFMAP_124_DATA_0: begin
                    rdata <= int_ifmap_124[31:0];
                end
                ADDR_IFMAP_125_DATA_0: begin
                    rdata <= int_ifmap_125[31:0];
                end
                ADDR_IFMAP_126_DATA_0: begin
                    rdata <= int_ifmap_126[31:0];
                end
                ADDR_IFMAP_127_DATA_0: begin
                    rdata <= int_ifmap_127[31:0];
                end
                ADDR_IFMAP_128_DATA_0: begin
                    rdata <= int_ifmap_128[31:0];
                end
                ADDR_IFMAP_129_DATA_0: begin
                    rdata <= int_ifmap_129[31:0];
                end
                ADDR_IFMAP_130_DATA_0: begin
                    rdata <= int_ifmap_130[31:0];
                end
                ADDR_IFMAP_131_DATA_0: begin
                    rdata <= int_ifmap_131[31:0];
                end
                ADDR_IFMAP_132_DATA_0: begin
                    rdata <= int_ifmap_132[31:0];
                end
                ADDR_IFMAP_133_DATA_0: begin
                    rdata <= int_ifmap_133[31:0];
                end
                ADDR_IFMAP_134_DATA_0: begin
                    rdata <= int_ifmap_134[31:0];
                end
                ADDR_IFMAP_135_DATA_0: begin
                    rdata <= int_ifmap_135[31:0];
                end
                ADDR_IFMAP_136_DATA_0: begin
                    rdata <= int_ifmap_136[31:0];
                end
                ADDR_IFMAP_137_DATA_0: begin
                    rdata <= int_ifmap_137[31:0];
                end
                ADDR_IFMAP_138_DATA_0: begin
                    rdata <= int_ifmap_138[31:0];
                end
                ADDR_IFMAP_139_DATA_0: begin
                    rdata <= int_ifmap_139[31:0];
                end
                ADDR_IFMAP_140_DATA_0: begin
                    rdata <= int_ifmap_140[31:0];
                end
                ADDR_IFMAP_141_DATA_0: begin
                    rdata <= int_ifmap_141[31:0];
                end
                ADDR_IFMAP_142_DATA_0: begin
                    rdata <= int_ifmap_142[31:0];
                end
                ADDR_IFMAP_143_DATA_0: begin
                    rdata <= int_ifmap_143[31:0];
                end
                ADDR_IFMAP_144_DATA_0: begin
                    rdata <= int_ifmap_144[31:0];
                end
                ADDR_IFMAP_145_DATA_0: begin
                    rdata <= int_ifmap_145[31:0];
                end
                ADDR_IFMAP_146_DATA_0: begin
                    rdata <= int_ifmap_146[31:0];
                end
                ADDR_IFMAP_147_DATA_0: begin
                    rdata <= int_ifmap_147[31:0];
                end
                ADDR_IFMAP_148_DATA_0: begin
                    rdata <= int_ifmap_148[31:0];
                end
                ADDR_IFMAP_149_DATA_0: begin
                    rdata <= int_ifmap_149[31:0];
                end
                ADDR_IFMAP_150_DATA_0: begin
                    rdata <= int_ifmap_150[31:0];
                end
                ADDR_IFMAP_151_DATA_0: begin
                    rdata <= int_ifmap_151[31:0];
                end
                ADDR_IFMAP_152_DATA_0: begin
                    rdata <= int_ifmap_152[31:0];
                end
                ADDR_IFMAP_153_DATA_0: begin
                    rdata <= int_ifmap_153[31:0];
                end
                ADDR_IFMAP_154_DATA_0: begin
                    rdata <= int_ifmap_154[31:0];
                end
                ADDR_IFMAP_155_DATA_0: begin
                    rdata <= int_ifmap_155[31:0];
                end
                ADDR_IFMAP_156_DATA_0: begin
                    rdata <= int_ifmap_156[31:0];
                end
                ADDR_IFMAP_157_DATA_0: begin
                    rdata <= int_ifmap_157[31:0];
                end
                ADDR_IFMAP_158_DATA_0: begin
                    rdata <= int_ifmap_158[31:0];
                end
                ADDR_IFMAP_159_DATA_0: begin
                    rdata <= int_ifmap_159[31:0];
                end
                ADDR_IFMAP_160_DATA_0: begin
                    rdata <= int_ifmap_160[31:0];
                end
                ADDR_IFMAP_161_DATA_0: begin
                    rdata <= int_ifmap_161[31:0];
                end
                ADDR_IFMAP_162_DATA_0: begin
                    rdata <= int_ifmap_162[31:0];
                end
                ADDR_IFMAP_163_DATA_0: begin
                    rdata <= int_ifmap_163[31:0];
                end
                ADDR_IFMAP_164_DATA_0: begin
                    rdata <= int_ifmap_164[31:0];
                end
                ADDR_IFMAP_165_DATA_0: begin
                    rdata <= int_ifmap_165[31:0];
                end
                ADDR_IFMAP_166_DATA_0: begin
                    rdata <= int_ifmap_166[31:0];
                end
                ADDR_IFMAP_167_DATA_0: begin
                    rdata <= int_ifmap_167[31:0];
                end
                ADDR_IFMAP_168_DATA_0: begin
                    rdata <= int_ifmap_168[31:0];
                end
                ADDR_IFMAP_169_DATA_0: begin
                    rdata <= int_ifmap_169[31:0];
                end
                ADDR_IFMAP_170_DATA_0: begin
                    rdata <= int_ifmap_170[31:0];
                end
                ADDR_IFMAP_171_DATA_0: begin
                    rdata <= int_ifmap_171[31:0];
                end
                ADDR_IFMAP_172_DATA_0: begin
                    rdata <= int_ifmap_172[31:0];
                end
                ADDR_IFMAP_173_DATA_0: begin
                    rdata <= int_ifmap_173[31:0];
                end
                ADDR_IFMAP_174_DATA_0: begin
                    rdata <= int_ifmap_174[31:0];
                end
                ADDR_IFMAP_175_DATA_0: begin
                    rdata <= int_ifmap_175[31:0];
                end
                ADDR_IFMAP_176_DATA_0: begin
                    rdata <= int_ifmap_176[31:0];
                end
                ADDR_IFMAP_177_DATA_0: begin
                    rdata <= int_ifmap_177[31:0];
                end
                ADDR_IFMAP_178_DATA_0: begin
                    rdata <= int_ifmap_178[31:0];
                end
                ADDR_IFMAP_179_DATA_0: begin
                    rdata <= int_ifmap_179[31:0];
                end
                ADDR_IFMAP_180_DATA_0: begin
                    rdata <= int_ifmap_180[31:0];
                end
                ADDR_IFMAP_181_DATA_0: begin
                    rdata <= int_ifmap_181[31:0];
                end
                ADDR_IFMAP_182_DATA_0: begin
                    rdata <= int_ifmap_182[31:0];
                end
                ADDR_IFMAP_183_DATA_0: begin
                    rdata <= int_ifmap_183[31:0];
                end
                ADDR_IFMAP_184_DATA_0: begin
                    rdata <= int_ifmap_184[31:0];
                end
                ADDR_IFMAP_185_DATA_0: begin
                    rdata <= int_ifmap_185[31:0];
                end
                ADDR_IFMAP_186_DATA_0: begin
                    rdata <= int_ifmap_186[31:0];
                end
                ADDR_IFMAP_187_DATA_0: begin
                    rdata <= int_ifmap_187[31:0];
                end
                ADDR_IFMAP_188_DATA_0: begin
                    rdata <= int_ifmap_188[31:0];
                end
                ADDR_IFMAP_189_DATA_0: begin
                    rdata <= int_ifmap_189[31:0];
                end
                ADDR_IFMAP_190_DATA_0: begin
                    rdata <= int_ifmap_190[31:0];
                end
                ADDR_IFMAP_191_DATA_0: begin
                    rdata <= int_ifmap_191[31:0];
                end
                ADDR_IFMAP_192_DATA_0: begin
                    rdata <= int_ifmap_192[31:0];
                end
                ADDR_IFMAP_193_DATA_0: begin
                    rdata <= int_ifmap_193[31:0];
                end
                ADDR_IFMAP_194_DATA_0: begin
                    rdata <= int_ifmap_194[31:0];
                end
                ADDR_IFMAP_195_DATA_0: begin
                    rdata <= int_ifmap_195[31:0];
                end
                ADDR_IFMAP_196_DATA_0: begin
                    rdata <= int_ifmap_196[31:0];
                end
                ADDR_IFMAP_197_DATA_0: begin
                    rdata <= int_ifmap_197[31:0];
                end
                ADDR_IFMAP_198_DATA_0: begin
                    rdata <= int_ifmap_198[31:0];
                end
                ADDR_IFMAP_199_DATA_0: begin
                    rdata <= int_ifmap_199[31:0];
                end
                ADDR_IFMAP_200_DATA_0: begin
                    rdata <= int_ifmap_200[31:0];
                end
                ADDR_IFMAP_201_DATA_0: begin
                    rdata <= int_ifmap_201[31:0];
                end
                ADDR_IFMAP_202_DATA_0: begin
                    rdata <= int_ifmap_202[31:0];
                end
                ADDR_IFMAP_203_DATA_0: begin
                    rdata <= int_ifmap_203[31:0];
                end
                ADDR_IFMAP_204_DATA_0: begin
                    rdata <= int_ifmap_204[31:0];
                end
                ADDR_IFMAP_205_DATA_0: begin
                    rdata <= int_ifmap_205[31:0];
                end
                ADDR_IFMAP_206_DATA_0: begin
                    rdata <= int_ifmap_206[31:0];
                end
                ADDR_IFMAP_207_DATA_0: begin
                    rdata <= int_ifmap_207[31:0];
                end
                ADDR_IFMAP_208_DATA_0: begin
                    rdata <= int_ifmap_208[31:0];
                end
                ADDR_IFMAP_209_DATA_0: begin
                    rdata <= int_ifmap_209[31:0];
                end
                ADDR_IFMAP_210_DATA_0: begin
                    rdata <= int_ifmap_210[31:0];
                end
                ADDR_IFMAP_211_DATA_0: begin
                    rdata <= int_ifmap_211[31:0];
                end
                ADDR_IFMAP_212_DATA_0: begin
                    rdata <= int_ifmap_212[31:0];
                end
                ADDR_IFMAP_213_DATA_0: begin
                    rdata <= int_ifmap_213[31:0];
                end
                ADDR_IFMAP_214_DATA_0: begin
                    rdata <= int_ifmap_214[31:0];
                end
                ADDR_IFMAP_215_DATA_0: begin
                    rdata <= int_ifmap_215[31:0];
                end
                ADDR_IFMAP_216_DATA_0: begin
                    rdata <= int_ifmap_216[31:0];
                end
                ADDR_IFMAP_217_DATA_0: begin
                    rdata <= int_ifmap_217[31:0];
                end
                ADDR_IFMAP_218_DATA_0: begin
                    rdata <= int_ifmap_218[31:0];
                end
                ADDR_IFMAP_219_DATA_0: begin
                    rdata <= int_ifmap_219[31:0];
                end
                ADDR_IFMAP_220_DATA_0: begin
                    rdata <= int_ifmap_220[31:0];
                end
                ADDR_IFMAP_221_DATA_0: begin
                    rdata <= int_ifmap_221[31:0];
                end
                ADDR_IFMAP_222_DATA_0: begin
                    rdata <= int_ifmap_222[31:0];
                end
                ADDR_IFMAP_223_DATA_0: begin
                    rdata <= int_ifmap_223[31:0];
                end
                ADDR_IFMAP_224_DATA_0: begin
                    rdata <= int_ifmap_224[31:0];
                end
                ADDR_IFMAP_225_DATA_0: begin
                    rdata <= int_ifmap_225[31:0];
                end
                ADDR_IFMAP_226_DATA_0: begin
                    rdata <= int_ifmap_226[31:0];
                end
                ADDR_IFMAP_227_DATA_0: begin
                    rdata <= int_ifmap_227[31:0];
                end
                ADDR_IFMAP_228_DATA_0: begin
                    rdata <= int_ifmap_228[31:0];
                end
                ADDR_IFMAP_229_DATA_0: begin
                    rdata <= int_ifmap_229[31:0];
                end
                ADDR_IFMAP_230_DATA_0: begin
                    rdata <= int_ifmap_230[31:0];
                end
                ADDR_IFMAP_231_DATA_0: begin
                    rdata <= int_ifmap_231[31:0];
                end
                ADDR_IFMAP_232_DATA_0: begin
                    rdata <= int_ifmap_232[31:0];
                end
                ADDR_IFMAP_233_DATA_0: begin
                    rdata <= int_ifmap_233[31:0];
                end
                ADDR_IFMAP_234_DATA_0: begin
                    rdata <= int_ifmap_234[31:0];
                end
                ADDR_IFMAP_235_DATA_0: begin
                    rdata <= int_ifmap_235[31:0];
                end
                ADDR_IFMAP_236_DATA_0: begin
                    rdata <= int_ifmap_236[31:0];
                end
                ADDR_IFMAP_237_DATA_0: begin
                    rdata <= int_ifmap_237[31:0];
                end
                ADDR_IFMAP_238_DATA_0: begin
                    rdata <= int_ifmap_238[31:0];
                end
                ADDR_IFMAP_239_DATA_0: begin
                    rdata <= int_ifmap_239[31:0];
                end
                ADDR_IFMAP_240_DATA_0: begin
                    rdata <= int_ifmap_240[31:0];
                end
                ADDR_IFMAP_241_DATA_0: begin
                    rdata <= int_ifmap_241[31:0];
                end
                ADDR_IFMAP_242_DATA_0: begin
                    rdata <= int_ifmap_242[31:0];
                end
                ADDR_IFMAP_243_DATA_0: begin
                    rdata <= int_ifmap_243[31:0];
                end
                ADDR_IFMAP_244_DATA_0: begin
                    rdata <= int_ifmap_244[31:0];
                end
                ADDR_IFMAP_245_DATA_0: begin
                    rdata <= int_ifmap_245[31:0];
                end
                ADDR_IFMAP_246_DATA_0: begin
                    rdata <= int_ifmap_246[31:0];
                end
                ADDR_IFMAP_247_DATA_0: begin
                    rdata <= int_ifmap_247[31:0];
                end
                ADDR_IFMAP_248_DATA_0: begin
                    rdata <= int_ifmap_248[31:0];
                end
                ADDR_IFMAP_249_DATA_0: begin
                    rdata <= int_ifmap_249[31:0];
                end
                ADDR_IFMAP_250_DATA_0: begin
                    rdata <= int_ifmap_250[31:0];
                end
                ADDR_IFMAP_251_DATA_0: begin
                    rdata <= int_ifmap_251[31:0];
                end
                ADDR_IFMAP_252_DATA_0: begin
                    rdata <= int_ifmap_252[31:0];
                end
                ADDR_IFMAP_253_DATA_0: begin
                    rdata <= int_ifmap_253[31:0];
                end
                ADDR_IFMAP_254_DATA_0: begin
                    rdata <= int_ifmap_254[31:0];
                end
                ADDR_IFMAP_255_DATA_0: begin
                    rdata <= int_ifmap_255[31:0];
                end
                ADDR_FILTER_0_DATA_0: begin
                    rdata <= int_filter_0[31:0];
                end
                ADDR_FILTER_1_DATA_0: begin
                    rdata <= int_filter_1[31:0];
                end
                ADDR_FILTER_2_DATA_0: begin
                    rdata <= int_filter_2[31:0];
                end
                ADDR_FILTER_3_DATA_0: begin
                    rdata <= int_filter_3[31:0];
                end
                ADDR_FILTER_4_DATA_0: begin
                    rdata <= int_filter_4[31:0];
                end
                ADDR_FILTER_5_DATA_0: begin
                    rdata <= int_filter_5[31:0];
                end
                ADDR_FILTER_6_DATA_0: begin
                    rdata <= int_filter_6[31:0];
                end
                ADDR_FILTER_7_DATA_0: begin
                    rdata <= int_filter_7[31:0];
                end
                ADDR_FILTER_8_DATA_0: begin
                    rdata <= int_filter_8[31:0];
                end
                ADDR_FILTER_9_DATA_0: begin
                    rdata <= int_filter_9[31:0];
                end
                ADDR_FILTER_10_DATA_0: begin
                    rdata <= int_filter_10[31:0];
                end
                ADDR_FILTER_11_DATA_0: begin
                    rdata <= int_filter_11[31:0];
                end
                ADDR_FILTER_12_DATA_0: begin
                    rdata <= int_filter_12[31:0];
                end
                ADDR_FILTER_13_DATA_0: begin
                    rdata <= int_filter_13[31:0];
                end
                ADDR_FILTER_14_DATA_0: begin
                    rdata <= int_filter_14[31:0];
                end
                ADDR_FILTER_15_DATA_0: begin
                    rdata <= int_filter_15[31:0];
                end
                ADDR_FILTER_16_DATA_0: begin
                    rdata <= int_filter_16[31:0];
                end
                ADDR_FILTER_17_DATA_0: begin
                    rdata <= int_filter_17[31:0];
                end
                ADDR_FILTER_18_DATA_0: begin
                    rdata <= int_filter_18[31:0];
                end
                ADDR_FILTER_19_DATA_0: begin
                    rdata <= int_filter_19[31:0];
                end
                ADDR_FILTER_20_DATA_0: begin
                    rdata <= int_filter_20[31:0];
                end
                ADDR_FILTER_21_DATA_0: begin
                    rdata <= int_filter_21[31:0];
                end
                ADDR_FILTER_22_DATA_0: begin
                    rdata <= int_filter_22[31:0];
                end
                ADDR_FILTER_23_DATA_0: begin
                    rdata <= int_filter_23[31:0];
                end
                ADDR_FILTER_24_DATA_0: begin
                    rdata <= int_filter_24[31:0];
                end
            endcase
        end
        else if (int_ofmap_0_read) begin
            rdata <= int_ofmap_0_q1;
        end
        else if (int_ofmap_1_read) begin
            rdata <= int_ofmap_1_q1;
        end
        else if (int_ofmap_2_read) begin
            rdata <= int_ofmap_2_q1;
        end
        else if (int_ofmap_3_read) begin
            rdata <= int_ofmap_3_q1;
        end
        else if (int_ofmap_4_read) begin
            rdata <= int_ofmap_4_q1;
        end
        else if (int_ofmap_5_read) begin
            rdata <= int_ofmap_5_q1;
        end
        else if (int_ofmap_6_read) begin
            rdata <= int_ofmap_6_q1;
        end
        else if (int_ofmap_7_read) begin
            rdata <= int_ofmap_7_q1;
        end
        else if (int_ofmap_8_read) begin
            rdata <= int_ofmap_8_q1;
        end
        else if (int_ofmap_9_read) begin
            rdata <= int_ofmap_9_q1;
        end
        else if (int_ofmap_10_read) begin
            rdata <= int_ofmap_10_q1;
        end
        else if (int_ofmap_11_read) begin
            rdata <= int_ofmap_11_q1;
        end
    end
end


//------------------------Register logic-----------------
assign ifmap_0   = int_ifmap_0;
assign ifmap_1   = int_ifmap_1;
assign ifmap_2   = int_ifmap_2;
assign ifmap_3   = int_ifmap_3;
assign ifmap_4   = int_ifmap_4;
assign ifmap_5   = int_ifmap_5;
assign ifmap_6   = int_ifmap_6;
assign ifmap_7   = int_ifmap_7;
assign ifmap_8   = int_ifmap_8;
assign ifmap_9   = int_ifmap_9;
assign ifmap_10  = int_ifmap_10;
assign ifmap_11  = int_ifmap_11;
assign ifmap_12  = int_ifmap_12;
assign ifmap_13  = int_ifmap_13;
assign ifmap_14  = int_ifmap_14;
assign ifmap_15  = int_ifmap_15;
assign ifmap_16  = int_ifmap_16;
assign ifmap_17  = int_ifmap_17;
assign ifmap_18  = int_ifmap_18;
assign ifmap_19  = int_ifmap_19;
assign ifmap_20  = int_ifmap_20;
assign ifmap_21  = int_ifmap_21;
assign ifmap_22  = int_ifmap_22;
assign ifmap_23  = int_ifmap_23;
assign ifmap_24  = int_ifmap_24;
assign ifmap_25  = int_ifmap_25;
assign ifmap_26  = int_ifmap_26;
assign ifmap_27  = int_ifmap_27;
assign ifmap_28  = int_ifmap_28;
assign ifmap_29  = int_ifmap_29;
assign ifmap_30  = int_ifmap_30;
assign ifmap_31  = int_ifmap_31;
assign ifmap_32  = int_ifmap_32;
assign ifmap_33  = int_ifmap_33;
assign ifmap_34  = int_ifmap_34;
assign ifmap_35  = int_ifmap_35;
assign ifmap_36  = int_ifmap_36;
assign ifmap_37  = int_ifmap_37;
assign ifmap_38  = int_ifmap_38;
assign ifmap_39  = int_ifmap_39;
assign ifmap_40  = int_ifmap_40;
assign ifmap_41  = int_ifmap_41;
assign ifmap_42  = int_ifmap_42;
assign ifmap_43  = int_ifmap_43;
assign ifmap_44  = int_ifmap_44;
assign ifmap_45  = int_ifmap_45;
assign ifmap_46  = int_ifmap_46;
assign ifmap_47  = int_ifmap_47;
assign ifmap_48  = int_ifmap_48;
assign ifmap_49  = int_ifmap_49;
assign ifmap_50  = int_ifmap_50;
assign ifmap_51  = int_ifmap_51;
assign ifmap_52  = int_ifmap_52;
assign ifmap_53  = int_ifmap_53;
assign ifmap_54  = int_ifmap_54;
assign ifmap_55  = int_ifmap_55;
assign ifmap_56  = int_ifmap_56;
assign ifmap_57  = int_ifmap_57;
assign ifmap_58  = int_ifmap_58;
assign ifmap_59  = int_ifmap_59;
assign ifmap_60  = int_ifmap_60;
assign ifmap_61  = int_ifmap_61;
assign ifmap_62  = int_ifmap_62;
assign ifmap_63  = int_ifmap_63;
assign ifmap_64  = int_ifmap_64;
assign ifmap_65  = int_ifmap_65;
assign ifmap_66  = int_ifmap_66;
assign ifmap_67  = int_ifmap_67;
assign ifmap_68  = int_ifmap_68;
assign ifmap_69  = int_ifmap_69;
assign ifmap_70  = int_ifmap_70;
assign ifmap_71  = int_ifmap_71;
assign ifmap_72  = int_ifmap_72;
assign ifmap_73  = int_ifmap_73;
assign ifmap_74  = int_ifmap_74;
assign ifmap_75  = int_ifmap_75;
assign ifmap_76  = int_ifmap_76;
assign ifmap_77  = int_ifmap_77;
assign ifmap_78  = int_ifmap_78;
assign ifmap_79  = int_ifmap_79;
assign ifmap_80  = int_ifmap_80;
assign ifmap_81  = int_ifmap_81;
assign ifmap_82  = int_ifmap_82;
assign ifmap_83  = int_ifmap_83;
assign ifmap_84  = int_ifmap_84;
assign ifmap_85  = int_ifmap_85;
assign ifmap_86  = int_ifmap_86;
assign ifmap_87  = int_ifmap_87;
assign ifmap_88  = int_ifmap_88;
assign ifmap_89  = int_ifmap_89;
assign ifmap_90  = int_ifmap_90;
assign ifmap_91  = int_ifmap_91;
assign ifmap_92  = int_ifmap_92;
assign ifmap_93  = int_ifmap_93;
assign ifmap_94  = int_ifmap_94;
assign ifmap_95  = int_ifmap_95;
assign ifmap_96  = int_ifmap_96;
assign ifmap_97  = int_ifmap_97;
assign ifmap_98  = int_ifmap_98;
assign ifmap_99  = int_ifmap_99;
assign ifmap_100 = int_ifmap_100;
assign ifmap_101 = int_ifmap_101;
assign ifmap_102 = int_ifmap_102;
assign ifmap_103 = int_ifmap_103;
assign ifmap_104 = int_ifmap_104;
assign ifmap_105 = int_ifmap_105;
assign ifmap_106 = int_ifmap_106;
assign ifmap_107 = int_ifmap_107;
assign ifmap_108 = int_ifmap_108;
assign ifmap_109 = int_ifmap_109;
assign ifmap_110 = int_ifmap_110;
assign ifmap_111 = int_ifmap_111;
assign ifmap_112 = int_ifmap_112;
assign ifmap_113 = int_ifmap_113;
assign ifmap_114 = int_ifmap_114;
assign ifmap_115 = int_ifmap_115;
assign ifmap_116 = int_ifmap_116;
assign ifmap_117 = int_ifmap_117;
assign ifmap_118 = int_ifmap_118;
assign ifmap_119 = int_ifmap_119;
assign ifmap_120 = int_ifmap_120;
assign ifmap_121 = int_ifmap_121;
assign ifmap_122 = int_ifmap_122;
assign ifmap_123 = int_ifmap_123;
assign ifmap_124 = int_ifmap_124;
assign ifmap_125 = int_ifmap_125;
assign ifmap_126 = int_ifmap_126;
assign ifmap_127 = int_ifmap_127;
assign ifmap_128 = int_ifmap_128;
assign ifmap_129 = int_ifmap_129;
assign ifmap_130 = int_ifmap_130;
assign ifmap_131 = int_ifmap_131;
assign ifmap_132 = int_ifmap_132;
assign ifmap_133 = int_ifmap_133;
assign ifmap_134 = int_ifmap_134;
assign ifmap_135 = int_ifmap_135;
assign ifmap_136 = int_ifmap_136;
assign ifmap_137 = int_ifmap_137;
assign ifmap_138 = int_ifmap_138;
assign ifmap_139 = int_ifmap_139;
assign ifmap_140 = int_ifmap_140;
assign ifmap_141 = int_ifmap_141;
assign ifmap_142 = int_ifmap_142;
assign ifmap_143 = int_ifmap_143;
assign ifmap_144 = int_ifmap_144;
assign ifmap_145 = int_ifmap_145;
assign ifmap_146 = int_ifmap_146;
assign ifmap_147 = int_ifmap_147;
assign ifmap_148 = int_ifmap_148;
assign ifmap_149 = int_ifmap_149;
assign ifmap_150 = int_ifmap_150;
assign ifmap_151 = int_ifmap_151;
assign ifmap_152 = int_ifmap_152;
assign ifmap_153 = int_ifmap_153;
assign ifmap_154 = int_ifmap_154;
assign ifmap_155 = int_ifmap_155;
assign ifmap_156 = int_ifmap_156;
assign ifmap_157 = int_ifmap_157;
assign ifmap_158 = int_ifmap_158;
assign ifmap_159 = int_ifmap_159;
assign ifmap_160 = int_ifmap_160;
assign ifmap_161 = int_ifmap_161;
assign ifmap_162 = int_ifmap_162;
assign ifmap_163 = int_ifmap_163;
assign ifmap_164 = int_ifmap_164;
assign ifmap_165 = int_ifmap_165;
assign ifmap_166 = int_ifmap_166;
assign ifmap_167 = int_ifmap_167;
assign ifmap_168 = int_ifmap_168;
assign ifmap_169 = int_ifmap_169;
assign ifmap_170 = int_ifmap_170;
assign ifmap_171 = int_ifmap_171;
assign ifmap_172 = int_ifmap_172;
assign ifmap_173 = int_ifmap_173;
assign ifmap_174 = int_ifmap_174;
assign ifmap_175 = int_ifmap_175;
assign ifmap_176 = int_ifmap_176;
assign ifmap_177 = int_ifmap_177;
assign ifmap_178 = int_ifmap_178;
assign ifmap_179 = int_ifmap_179;
assign ifmap_180 = int_ifmap_180;
assign ifmap_181 = int_ifmap_181;
assign ifmap_182 = int_ifmap_182;
assign ifmap_183 = int_ifmap_183;
assign ifmap_184 = int_ifmap_184;
assign ifmap_185 = int_ifmap_185;
assign ifmap_186 = int_ifmap_186;
assign ifmap_187 = int_ifmap_187;
assign ifmap_188 = int_ifmap_188;
assign ifmap_189 = int_ifmap_189;
assign ifmap_190 = int_ifmap_190;
assign ifmap_191 = int_ifmap_191;
assign ifmap_192 = int_ifmap_192;
assign ifmap_193 = int_ifmap_193;
assign ifmap_194 = int_ifmap_194;
assign ifmap_195 = int_ifmap_195;
assign ifmap_196 = int_ifmap_196;
assign ifmap_197 = int_ifmap_197;
assign ifmap_198 = int_ifmap_198;
assign ifmap_199 = int_ifmap_199;
assign ifmap_200 = int_ifmap_200;
assign ifmap_201 = int_ifmap_201;
assign ifmap_202 = int_ifmap_202;
assign ifmap_203 = int_ifmap_203;
assign ifmap_204 = int_ifmap_204;
assign ifmap_205 = int_ifmap_205;
assign ifmap_206 = int_ifmap_206;
assign ifmap_207 = int_ifmap_207;
assign ifmap_208 = int_ifmap_208;
assign ifmap_209 = int_ifmap_209;
assign ifmap_210 = int_ifmap_210;
assign ifmap_211 = int_ifmap_211;
assign ifmap_212 = int_ifmap_212;
assign ifmap_213 = int_ifmap_213;
assign ifmap_214 = int_ifmap_214;
assign ifmap_215 = int_ifmap_215;
assign ifmap_216 = int_ifmap_216;
assign ifmap_217 = int_ifmap_217;
assign ifmap_218 = int_ifmap_218;
assign ifmap_219 = int_ifmap_219;
assign ifmap_220 = int_ifmap_220;
assign ifmap_221 = int_ifmap_221;
assign ifmap_222 = int_ifmap_222;
assign ifmap_223 = int_ifmap_223;
assign ifmap_224 = int_ifmap_224;
assign ifmap_225 = int_ifmap_225;
assign ifmap_226 = int_ifmap_226;
assign ifmap_227 = int_ifmap_227;
assign ifmap_228 = int_ifmap_228;
assign ifmap_229 = int_ifmap_229;
assign ifmap_230 = int_ifmap_230;
assign ifmap_231 = int_ifmap_231;
assign ifmap_232 = int_ifmap_232;
assign ifmap_233 = int_ifmap_233;
assign ifmap_234 = int_ifmap_234;
assign ifmap_235 = int_ifmap_235;
assign ifmap_236 = int_ifmap_236;
assign ifmap_237 = int_ifmap_237;
assign ifmap_238 = int_ifmap_238;
assign ifmap_239 = int_ifmap_239;
assign ifmap_240 = int_ifmap_240;
assign ifmap_241 = int_ifmap_241;
assign ifmap_242 = int_ifmap_242;
assign ifmap_243 = int_ifmap_243;
assign ifmap_244 = int_ifmap_244;
assign ifmap_245 = int_ifmap_245;
assign ifmap_246 = int_ifmap_246;
assign ifmap_247 = int_ifmap_247;
assign ifmap_248 = int_ifmap_248;
assign ifmap_249 = int_ifmap_249;
assign ifmap_250 = int_ifmap_250;
assign ifmap_251 = int_ifmap_251;
assign ifmap_252 = int_ifmap_252;
assign ifmap_253 = int_ifmap_253;
assign ifmap_254 = int_ifmap_254;
assign ifmap_255 = int_ifmap_255;
assign filter_0  = int_filter_0;
assign filter_1  = int_filter_1;
assign filter_2  = int_filter_2;
assign filter_3  = int_filter_3;
assign filter_4  = int_filter_4;
assign filter_5  = int_filter_5;
assign filter_6  = int_filter_6;
assign filter_7  = int_filter_7;
assign filter_8  = int_filter_8;
assign filter_9  = int_filter_9;
assign filter_10 = int_filter_10;
assign filter_11 = int_filter_11;
assign filter_12 = int_filter_12;
assign filter_13 = int_filter_13;
assign filter_14 = int_filter_14;
assign filter_15 = int_filter_15;
assign filter_16 = int_filter_16;
assign filter_17 = int_filter_17;
assign filter_18 = int_filter_18;
assign filter_19 = int_filter_19;
assign filter_20 = int_filter_20;
assign filter_21 = int_filter_21;
assign filter_22 = int_filter_22;
assign filter_23 = int_filter_23;
assign filter_24 = int_filter_24;
// int_ifmap_0[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_0[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_0_DATA_0)
            int_ifmap_0[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_0[31:0] & ~wmask);
    end
end

// int_ifmap_1[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_1[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_1_DATA_0)
            int_ifmap_1[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_1[31:0] & ~wmask);
    end
end

// int_ifmap_2[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_2[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_2_DATA_0)
            int_ifmap_2[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_2[31:0] & ~wmask);
    end
end

// int_ifmap_3[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_3[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_3_DATA_0)
            int_ifmap_3[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_3[31:0] & ~wmask);
    end
end

// int_ifmap_4[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_4[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_4_DATA_0)
            int_ifmap_4[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_4[31:0] & ~wmask);
    end
end

// int_ifmap_5[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_5[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_5_DATA_0)
            int_ifmap_5[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_5[31:0] & ~wmask);
    end
end

// int_ifmap_6[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_6[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_6_DATA_0)
            int_ifmap_6[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_6[31:0] & ~wmask);
    end
end

// int_ifmap_7[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_7[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_7_DATA_0)
            int_ifmap_7[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_7[31:0] & ~wmask);
    end
end

// int_ifmap_8[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_8[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_8_DATA_0)
            int_ifmap_8[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_8[31:0] & ~wmask);
    end
end

// int_ifmap_9[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_9[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_9_DATA_0)
            int_ifmap_9[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_9[31:0] & ~wmask);
    end
end

// int_ifmap_10[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_10[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_10_DATA_0)
            int_ifmap_10[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_10[31:0] & ~wmask);
    end
end

// int_ifmap_11[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_11[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_11_DATA_0)
            int_ifmap_11[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_11[31:0] & ~wmask);
    end
end

// int_ifmap_12[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_12[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_12_DATA_0)
            int_ifmap_12[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_12[31:0] & ~wmask);
    end
end

// int_ifmap_13[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_13[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_13_DATA_0)
            int_ifmap_13[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_13[31:0] & ~wmask);
    end
end

// int_ifmap_14[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_14[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_14_DATA_0)
            int_ifmap_14[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_14[31:0] & ~wmask);
    end
end

// int_ifmap_15[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_15[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_15_DATA_0)
            int_ifmap_15[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_15[31:0] & ~wmask);
    end
end

// int_ifmap_16[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_16[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_16_DATA_0)
            int_ifmap_16[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_16[31:0] & ~wmask);
    end
end

// int_ifmap_17[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_17[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_17_DATA_0)
            int_ifmap_17[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_17[31:0] & ~wmask);
    end
end

// int_ifmap_18[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_18[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_18_DATA_0)
            int_ifmap_18[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_18[31:0] & ~wmask);
    end
end

// int_ifmap_19[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_19[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_19_DATA_0)
            int_ifmap_19[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_19[31:0] & ~wmask);
    end
end

// int_ifmap_20[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_20[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_20_DATA_0)
            int_ifmap_20[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_20[31:0] & ~wmask);
    end
end

// int_ifmap_21[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_21[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_21_DATA_0)
            int_ifmap_21[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_21[31:0] & ~wmask);
    end
end

// int_ifmap_22[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_22[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_22_DATA_0)
            int_ifmap_22[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_22[31:0] & ~wmask);
    end
end

// int_ifmap_23[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_23[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_23_DATA_0)
            int_ifmap_23[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_23[31:0] & ~wmask);
    end
end

// int_ifmap_24[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_24[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_24_DATA_0)
            int_ifmap_24[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_24[31:0] & ~wmask);
    end
end

// int_ifmap_25[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_25[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_25_DATA_0)
            int_ifmap_25[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_25[31:0] & ~wmask);
    end
end

// int_ifmap_26[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_26[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_26_DATA_0)
            int_ifmap_26[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_26[31:0] & ~wmask);
    end
end

// int_ifmap_27[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_27[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_27_DATA_0)
            int_ifmap_27[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_27[31:0] & ~wmask);
    end
end

// int_ifmap_28[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_28[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_28_DATA_0)
            int_ifmap_28[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_28[31:0] & ~wmask);
    end
end

// int_ifmap_29[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_29[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_29_DATA_0)
            int_ifmap_29[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_29[31:0] & ~wmask);
    end
end

// int_ifmap_30[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_30[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_30_DATA_0)
            int_ifmap_30[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_30[31:0] & ~wmask);
    end
end

// int_ifmap_31[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_31[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_31_DATA_0)
            int_ifmap_31[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_31[31:0] & ~wmask);
    end
end

// int_ifmap_32[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_32[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_32_DATA_0)
            int_ifmap_32[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_32[31:0] & ~wmask);
    end
end

// int_ifmap_33[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_33[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_33_DATA_0)
            int_ifmap_33[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_33[31:0] & ~wmask);
    end
end

// int_ifmap_34[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_34[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_34_DATA_0)
            int_ifmap_34[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_34[31:0] & ~wmask);
    end
end

// int_ifmap_35[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_35[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_35_DATA_0)
            int_ifmap_35[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_35[31:0] & ~wmask);
    end
end

// int_ifmap_36[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_36[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_36_DATA_0)
            int_ifmap_36[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_36[31:0] & ~wmask);
    end
end

// int_ifmap_37[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_37[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_37_DATA_0)
            int_ifmap_37[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_37[31:0] & ~wmask);
    end
end

// int_ifmap_38[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_38[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_38_DATA_0)
            int_ifmap_38[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_38[31:0] & ~wmask);
    end
end

// int_ifmap_39[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_39[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_39_DATA_0)
            int_ifmap_39[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_39[31:0] & ~wmask);
    end
end

// int_ifmap_40[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_40[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_40_DATA_0)
            int_ifmap_40[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_40[31:0] & ~wmask);
    end
end

// int_ifmap_41[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_41[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_41_DATA_0)
            int_ifmap_41[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_41[31:0] & ~wmask);
    end
end

// int_ifmap_42[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_42[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_42_DATA_0)
            int_ifmap_42[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_42[31:0] & ~wmask);
    end
end

// int_ifmap_43[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_43[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_43_DATA_0)
            int_ifmap_43[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_43[31:0] & ~wmask);
    end
end

// int_ifmap_44[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_44[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_44_DATA_0)
            int_ifmap_44[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_44[31:0] & ~wmask);
    end
end

// int_ifmap_45[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_45[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_45_DATA_0)
            int_ifmap_45[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_45[31:0] & ~wmask);
    end
end

// int_ifmap_46[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_46[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_46_DATA_0)
            int_ifmap_46[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_46[31:0] & ~wmask);
    end
end

// int_ifmap_47[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_47[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_47_DATA_0)
            int_ifmap_47[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_47[31:0] & ~wmask);
    end
end

// int_ifmap_48[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_48[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_48_DATA_0)
            int_ifmap_48[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_48[31:0] & ~wmask);
    end
end

// int_ifmap_49[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_49[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_49_DATA_0)
            int_ifmap_49[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_49[31:0] & ~wmask);
    end
end

// int_ifmap_50[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_50[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_50_DATA_0)
            int_ifmap_50[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_50[31:0] & ~wmask);
    end
end

// int_ifmap_51[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_51[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_51_DATA_0)
            int_ifmap_51[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_51[31:0] & ~wmask);
    end
end

// int_ifmap_52[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_52[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_52_DATA_0)
            int_ifmap_52[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_52[31:0] & ~wmask);
    end
end

// int_ifmap_53[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_53[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_53_DATA_0)
            int_ifmap_53[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_53[31:0] & ~wmask);
    end
end

// int_ifmap_54[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_54[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_54_DATA_0)
            int_ifmap_54[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_54[31:0] & ~wmask);
    end
end

// int_ifmap_55[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_55[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_55_DATA_0)
            int_ifmap_55[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_55[31:0] & ~wmask);
    end
end

// int_ifmap_56[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_56[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_56_DATA_0)
            int_ifmap_56[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_56[31:0] & ~wmask);
    end
end

// int_ifmap_57[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_57[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_57_DATA_0)
            int_ifmap_57[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_57[31:0] & ~wmask);
    end
end

// int_ifmap_58[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_58[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_58_DATA_0)
            int_ifmap_58[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_58[31:0] & ~wmask);
    end
end

// int_ifmap_59[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_59[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_59_DATA_0)
            int_ifmap_59[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_59[31:0] & ~wmask);
    end
end

// int_ifmap_60[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_60[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_60_DATA_0)
            int_ifmap_60[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_60[31:0] & ~wmask);
    end
end

// int_ifmap_61[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_61[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_61_DATA_0)
            int_ifmap_61[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_61[31:0] & ~wmask);
    end
end

// int_ifmap_62[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_62[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_62_DATA_0)
            int_ifmap_62[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_62[31:0] & ~wmask);
    end
end

// int_ifmap_63[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_63[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_63_DATA_0)
            int_ifmap_63[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_63[31:0] & ~wmask);
    end
end

// int_ifmap_64[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_64[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_64_DATA_0)
            int_ifmap_64[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_64[31:0] & ~wmask);
    end
end

// int_ifmap_65[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_65[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_65_DATA_0)
            int_ifmap_65[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_65[31:0] & ~wmask);
    end
end

// int_ifmap_66[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_66[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_66_DATA_0)
            int_ifmap_66[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_66[31:0] & ~wmask);
    end
end

// int_ifmap_67[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_67[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_67_DATA_0)
            int_ifmap_67[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_67[31:0] & ~wmask);
    end
end

// int_ifmap_68[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_68[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_68_DATA_0)
            int_ifmap_68[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_68[31:0] & ~wmask);
    end
end

// int_ifmap_69[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_69[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_69_DATA_0)
            int_ifmap_69[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_69[31:0] & ~wmask);
    end
end

// int_ifmap_70[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_70[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_70_DATA_0)
            int_ifmap_70[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_70[31:0] & ~wmask);
    end
end

// int_ifmap_71[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_71[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_71_DATA_0)
            int_ifmap_71[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_71[31:0] & ~wmask);
    end
end

// int_ifmap_72[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_72[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_72_DATA_0)
            int_ifmap_72[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_72[31:0] & ~wmask);
    end
end

// int_ifmap_73[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_73[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_73_DATA_0)
            int_ifmap_73[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_73[31:0] & ~wmask);
    end
end

// int_ifmap_74[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_74[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_74_DATA_0)
            int_ifmap_74[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_74[31:0] & ~wmask);
    end
end

// int_ifmap_75[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_75[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_75_DATA_0)
            int_ifmap_75[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_75[31:0] & ~wmask);
    end
end

// int_ifmap_76[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_76[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_76_DATA_0)
            int_ifmap_76[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_76[31:0] & ~wmask);
    end
end

// int_ifmap_77[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_77[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_77_DATA_0)
            int_ifmap_77[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_77[31:0] & ~wmask);
    end
end

// int_ifmap_78[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_78[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_78_DATA_0)
            int_ifmap_78[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_78[31:0] & ~wmask);
    end
end

// int_ifmap_79[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_79[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_79_DATA_0)
            int_ifmap_79[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_79[31:0] & ~wmask);
    end
end

// int_ifmap_80[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_80[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_80_DATA_0)
            int_ifmap_80[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_80[31:0] & ~wmask);
    end
end

// int_ifmap_81[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_81[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_81_DATA_0)
            int_ifmap_81[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_81[31:0] & ~wmask);
    end
end

// int_ifmap_82[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_82[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_82_DATA_0)
            int_ifmap_82[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_82[31:0] & ~wmask);
    end
end

// int_ifmap_83[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_83[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_83_DATA_0)
            int_ifmap_83[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_83[31:0] & ~wmask);
    end
end

// int_ifmap_84[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_84[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_84_DATA_0)
            int_ifmap_84[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_84[31:0] & ~wmask);
    end
end

// int_ifmap_85[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_85[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_85_DATA_0)
            int_ifmap_85[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_85[31:0] & ~wmask);
    end
end

// int_ifmap_86[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_86[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_86_DATA_0)
            int_ifmap_86[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_86[31:0] & ~wmask);
    end
end

// int_ifmap_87[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_87[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_87_DATA_0)
            int_ifmap_87[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_87[31:0] & ~wmask);
    end
end

// int_ifmap_88[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_88[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_88_DATA_0)
            int_ifmap_88[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_88[31:0] & ~wmask);
    end
end

// int_ifmap_89[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_89[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_89_DATA_0)
            int_ifmap_89[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_89[31:0] & ~wmask);
    end
end

// int_ifmap_90[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_90[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_90_DATA_0)
            int_ifmap_90[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_90[31:0] & ~wmask);
    end
end

// int_ifmap_91[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_91[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_91_DATA_0)
            int_ifmap_91[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_91[31:0] & ~wmask);
    end
end

// int_ifmap_92[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_92[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_92_DATA_0)
            int_ifmap_92[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_92[31:0] & ~wmask);
    end
end

// int_ifmap_93[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_93[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_93_DATA_0)
            int_ifmap_93[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_93[31:0] & ~wmask);
    end
end

// int_ifmap_94[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_94[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_94_DATA_0)
            int_ifmap_94[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_94[31:0] & ~wmask);
    end
end

// int_ifmap_95[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_95[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_95_DATA_0)
            int_ifmap_95[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_95[31:0] & ~wmask);
    end
end

// int_ifmap_96[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_96[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_96_DATA_0)
            int_ifmap_96[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_96[31:0] & ~wmask);
    end
end

// int_ifmap_97[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_97[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_97_DATA_0)
            int_ifmap_97[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_97[31:0] & ~wmask);
    end
end

// int_ifmap_98[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_98[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_98_DATA_0)
            int_ifmap_98[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_98[31:0] & ~wmask);
    end
end

// int_ifmap_99[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_99[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_99_DATA_0)
            int_ifmap_99[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_99[31:0] & ~wmask);
    end
end

// int_ifmap_100[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_100[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_100_DATA_0)
            int_ifmap_100[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_100[31:0] & ~wmask);
    end
end

// int_ifmap_101[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_101[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_101_DATA_0)
            int_ifmap_101[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_101[31:0] & ~wmask);
    end
end

// int_ifmap_102[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_102[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_102_DATA_0)
            int_ifmap_102[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_102[31:0] & ~wmask);
    end
end

// int_ifmap_103[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_103[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_103_DATA_0)
            int_ifmap_103[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_103[31:0] & ~wmask);
    end
end

// int_ifmap_104[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_104[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_104_DATA_0)
            int_ifmap_104[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_104[31:0] & ~wmask);
    end
end

// int_ifmap_105[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_105[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_105_DATA_0)
            int_ifmap_105[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_105[31:0] & ~wmask);
    end
end

// int_ifmap_106[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_106[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_106_DATA_0)
            int_ifmap_106[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_106[31:0] & ~wmask);
    end
end

// int_ifmap_107[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_107[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_107_DATA_0)
            int_ifmap_107[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_107[31:0] & ~wmask);
    end
end

// int_ifmap_108[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_108[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_108_DATA_0)
            int_ifmap_108[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_108[31:0] & ~wmask);
    end
end

// int_ifmap_109[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_109[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_109_DATA_0)
            int_ifmap_109[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_109[31:0] & ~wmask);
    end
end

// int_ifmap_110[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_110[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_110_DATA_0)
            int_ifmap_110[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_110[31:0] & ~wmask);
    end
end

// int_ifmap_111[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_111[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_111_DATA_0)
            int_ifmap_111[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_111[31:0] & ~wmask);
    end
end

// int_ifmap_112[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_112[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_112_DATA_0)
            int_ifmap_112[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_112[31:0] & ~wmask);
    end
end

// int_ifmap_113[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_113[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_113_DATA_0)
            int_ifmap_113[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_113[31:0] & ~wmask);
    end
end

// int_ifmap_114[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_114[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_114_DATA_0)
            int_ifmap_114[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_114[31:0] & ~wmask);
    end
end

// int_ifmap_115[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_115[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_115_DATA_0)
            int_ifmap_115[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_115[31:0] & ~wmask);
    end
end

// int_ifmap_116[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_116[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_116_DATA_0)
            int_ifmap_116[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_116[31:0] & ~wmask);
    end
end

// int_ifmap_117[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_117[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_117_DATA_0)
            int_ifmap_117[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_117[31:0] & ~wmask);
    end
end

// int_ifmap_118[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_118[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_118_DATA_0)
            int_ifmap_118[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_118[31:0] & ~wmask);
    end
end

// int_ifmap_119[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_119[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_119_DATA_0)
            int_ifmap_119[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_119[31:0] & ~wmask);
    end
end

// int_ifmap_120[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_120[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_120_DATA_0)
            int_ifmap_120[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_120[31:0] & ~wmask);
    end
end

// int_ifmap_121[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_121[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_121_DATA_0)
            int_ifmap_121[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_121[31:0] & ~wmask);
    end
end

// int_ifmap_122[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_122[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_122_DATA_0)
            int_ifmap_122[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_122[31:0] & ~wmask);
    end
end

// int_ifmap_123[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_123[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_123_DATA_0)
            int_ifmap_123[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_123[31:0] & ~wmask);
    end
end

// int_ifmap_124[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_124[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_124_DATA_0)
            int_ifmap_124[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_124[31:0] & ~wmask);
    end
end

// int_ifmap_125[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_125[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_125_DATA_0)
            int_ifmap_125[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_125[31:0] & ~wmask);
    end
end

// int_ifmap_126[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_126[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_126_DATA_0)
            int_ifmap_126[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_126[31:0] & ~wmask);
    end
end

// int_ifmap_127[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_127[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_127_DATA_0)
            int_ifmap_127[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_127[31:0] & ~wmask);
    end
end

// int_ifmap_128[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_128[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_128_DATA_0)
            int_ifmap_128[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_128[31:0] & ~wmask);
    end
end

// int_ifmap_129[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_129[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_129_DATA_0)
            int_ifmap_129[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_129[31:0] & ~wmask);
    end
end

// int_ifmap_130[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_130[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_130_DATA_0)
            int_ifmap_130[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_130[31:0] & ~wmask);
    end
end

// int_ifmap_131[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_131[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_131_DATA_0)
            int_ifmap_131[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_131[31:0] & ~wmask);
    end
end

// int_ifmap_132[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_132[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_132_DATA_0)
            int_ifmap_132[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_132[31:0] & ~wmask);
    end
end

// int_ifmap_133[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_133[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_133_DATA_0)
            int_ifmap_133[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_133[31:0] & ~wmask);
    end
end

// int_ifmap_134[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_134[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_134_DATA_0)
            int_ifmap_134[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_134[31:0] & ~wmask);
    end
end

// int_ifmap_135[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_135[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_135_DATA_0)
            int_ifmap_135[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_135[31:0] & ~wmask);
    end
end

// int_ifmap_136[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_136[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_136_DATA_0)
            int_ifmap_136[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_136[31:0] & ~wmask);
    end
end

// int_ifmap_137[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_137[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_137_DATA_0)
            int_ifmap_137[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_137[31:0] & ~wmask);
    end
end

// int_ifmap_138[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_138[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_138_DATA_0)
            int_ifmap_138[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_138[31:0] & ~wmask);
    end
end

// int_ifmap_139[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_139[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_139_DATA_0)
            int_ifmap_139[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_139[31:0] & ~wmask);
    end
end

// int_ifmap_140[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_140[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_140_DATA_0)
            int_ifmap_140[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_140[31:0] & ~wmask);
    end
end

// int_ifmap_141[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_141[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_141_DATA_0)
            int_ifmap_141[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_141[31:0] & ~wmask);
    end
end

// int_ifmap_142[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_142[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_142_DATA_0)
            int_ifmap_142[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_142[31:0] & ~wmask);
    end
end

// int_ifmap_143[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_143[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_143_DATA_0)
            int_ifmap_143[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_143[31:0] & ~wmask);
    end
end

// int_ifmap_144[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_144[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_144_DATA_0)
            int_ifmap_144[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_144[31:0] & ~wmask);
    end
end

// int_ifmap_145[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_145[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_145_DATA_0)
            int_ifmap_145[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_145[31:0] & ~wmask);
    end
end

// int_ifmap_146[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_146[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_146_DATA_0)
            int_ifmap_146[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_146[31:0] & ~wmask);
    end
end

// int_ifmap_147[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_147[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_147_DATA_0)
            int_ifmap_147[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_147[31:0] & ~wmask);
    end
end

// int_ifmap_148[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_148[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_148_DATA_0)
            int_ifmap_148[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_148[31:0] & ~wmask);
    end
end

// int_ifmap_149[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_149[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_149_DATA_0)
            int_ifmap_149[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_149[31:0] & ~wmask);
    end
end

// int_ifmap_150[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_150[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_150_DATA_0)
            int_ifmap_150[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_150[31:0] & ~wmask);
    end
end

// int_ifmap_151[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_151[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_151_DATA_0)
            int_ifmap_151[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_151[31:0] & ~wmask);
    end
end

// int_ifmap_152[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_152[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_152_DATA_0)
            int_ifmap_152[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_152[31:0] & ~wmask);
    end
end

// int_ifmap_153[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_153[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_153_DATA_0)
            int_ifmap_153[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_153[31:0] & ~wmask);
    end
end

// int_ifmap_154[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_154[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_154_DATA_0)
            int_ifmap_154[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_154[31:0] & ~wmask);
    end
end

// int_ifmap_155[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_155[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_155_DATA_0)
            int_ifmap_155[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_155[31:0] & ~wmask);
    end
end

// int_ifmap_156[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_156[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_156_DATA_0)
            int_ifmap_156[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_156[31:0] & ~wmask);
    end
end

// int_ifmap_157[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_157[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_157_DATA_0)
            int_ifmap_157[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_157[31:0] & ~wmask);
    end
end

// int_ifmap_158[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_158[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_158_DATA_0)
            int_ifmap_158[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_158[31:0] & ~wmask);
    end
end

// int_ifmap_159[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_159[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_159_DATA_0)
            int_ifmap_159[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_159[31:0] & ~wmask);
    end
end

// int_ifmap_160[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_160[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_160_DATA_0)
            int_ifmap_160[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_160[31:0] & ~wmask);
    end
end

// int_ifmap_161[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_161[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_161_DATA_0)
            int_ifmap_161[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_161[31:0] & ~wmask);
    end
end

// int_ifmap_162[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_162[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_162_DATA_0)
            int_ifmap_162[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_162[31:0] & ~wmask);
    end
end

// int_ifmap_163[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_163[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_163_DATA_0)
            int_ifmap_163[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_163[31:0] & ~wmask);
    end
end

// int_ifmap_164[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_164[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_164_DATA_0)
            int_ifmap_164[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_164[31:0] & ~wmask);
    end
end

// int_ifmap_165[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_165[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_165_DATA_0)
            int_ifmap_165[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_165[31:0] & ~wmask);
    end
end

// int_ifmap_166[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_166[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_166_DATA_0)
            int_ifmap_166[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_166[31:0] & ~wmask);
    end
end

// int_ifmap_167[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_167[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_167_DATA_0)
            int_ifmap_167[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_167[31:0] & ~wmask);
    end
end

// int_ifmap_168[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_168[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_168_DATA_0)
            int_ifmap_168[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_168[31:0] & ~wmask);
    end
end

// int_ifmap_169[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_169[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_169_DATA_0)
            int_ifmap_169[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_169[31:0] & ~wmask);
    end
end

// int_ifmap_170[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_170[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_170_DATA_0)
            int_ifmap_170[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_170[31:0] & ~wmask);
    end
end

// int_ifmap_171[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_171[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_171_DATA_0)
            int_ifmap_171[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_171[31:0] & ~wmask);
    end
end

// int_ifmap_172[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_172[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_172_DATA_0)
            int_ifmap_172[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_172[31:0] & ~wmask);
    end
end

// int_ifmap_173[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_173[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_173_DATA_0)
            int_ifmap_173[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_173[31:0] & ~wmask);
    end
end

// int_ifmap_174[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_174[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_174_DATA_0)
            int_ifmap_174[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_174[31:0] & ~wmask);
    end
end

// int_ifmap_175[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_175[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_175_DATA_0)
            int_ifmap_175[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_175[31:0] & ~wmask);
    end
end

// int_ifmap_176[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_176[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_176_DATA_0)
            int_ifmap_176[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_176[31:0] & ~wmask);
    end
end

// int_ifmap_177[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_177[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_177_DATA_0)
            int_ifmap_177[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_177[31:0] & ~wmask);
    end
end

// int_ifmap_178[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_178[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_178_DATA_0)
            int_ifmap_178[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_178[31:0] & ~wmask);
    end
end

// int_ifmap_179[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_179[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_179_DATA_0)
            int_ifmap_179[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_179[31:0] & ~wmask);
    end
end

// int_ifmap_180[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_180[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_180_DATA_0)
            int_ifmap_180[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_180[31:0] & ~wmask);
    end
end

// int_ifmap_181[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_181[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_181_DATA_0)
            int_ifmap_181[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_181[31:0] & ~wmask);
    end
end

// int_ifmap_182[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_182[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_182_DATA_0)
            int_ifmap_182[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_182[31:0] & ~wmask);
    end
end

// int_ifmap_183[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_183[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_183_DATA_0)
            int_ifmap_183[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_183[31:0] & ~wmask);
    end
end

// int_ifmap_184[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_184[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_184_DATA_0)
            int_ifmap_184[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_184[31:0] & ~wmask);
    end
end

// int_ifmap_185[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_185[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_185_DATA_0)
            int_ifmap_185[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_185[31:0] & ~wmask);
    end
end

// int_ifmap_186[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_186[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_186_DATA_0)
            int_ifmap_186[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_186[31:0] & ~wmask);
    end
end

// int_ifmap_187[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_187[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_187_DATA_0)
            int_ifmap_187[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_187[31:0] & ~wmask);
    end
end

// int_ifmap_188[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_188[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_188_DATA_0)
            int_ifmap_188[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_188[31:0] & ~wmask);
    end
end

// int_ifmap_189[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_189[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_189_DATA_0)
            int_ifmap_189[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_189[31:0] & ~wmask);
    end
end

// int_ifmap_190[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_190[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_190_DATA_0)
            int_ifmap_190[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_190[31:0] & ~wmask);
    end
end

// int_ifmap_191[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_191[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_191_DATA_0)
            int_ifmap_191[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_191[31:0] & ~wmask);
    end
end

// int_ifmap_192[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_192[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_192_DATA_0)
            int_ifmap_192[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_192[31:0] & ~wmask);
    end
end

// int_ifmap_193[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_193[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_193_DATA_0)
            int_ifmap_193[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_193[31:0] & ~wmask);
    end
end

// int_ifmap_194[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_194[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_194_DATA_0)
            int_ifmap_194[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_194[31:0] & ~wmask);
    end
end

// int_ifmap_195[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_195[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_195_DATA_0)
            int_ifmap_195[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_195[31:0] & ~wmask);
    end
end

// int_ifmap_196[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_196[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_196_DATA_0)
            int_ifmap_196[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_196[31:0] & ~wmask);
    end
end

// int_ifmap_197[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_197[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_197_DATA_0)
            int_ifmap_197[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_197[31:0] & ~wmask);
    end
end

// int_ifmap_198[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_198[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_198_DATA_0)
            int_ifmap_198[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_198[31:0] & ~wmask);
    end
end

// int_ifmap_199[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_199[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_199_DATA_0)
            int_ifmap_199[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_199[31:0] & ~wmask);
    end
end

// int_ifmap_200[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_200[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_200_DATA_0)
            int_ifmap_200[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_200[31:0] & ~wmask);
    end
end

// int_ifmap_201[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_201[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_201_DATA_0)
            int_ifmap_201[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_201[31:0] & ~wmask);
    end
end

// int_ifmap_202[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_202[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_202_DATA_0)
            int_ifmap_202[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_202[31:0] & ~wmask);
    end
end

// int_ifmap_203[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_203[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_203_DATA_0)
            int_ifmap_203[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_203[31:0] & ~wmask);
    end
end

// int_ifmap_204[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_204[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_204_DATA_0)
            int_ifmap_204[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_204[31:0] & ~wmask);
    end
end

// int_ifmap_205[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_205[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_205_DATA_0)
            int_ifmap_205[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_205[31:0] & ~wmask);
    end
end

// int_ifmap_206[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_206[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_206_DATA_0)
            int_ifmap_206[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_206[31:0] & ~wmask);
    end
end

// int_ifmap_207[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_207[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_207_DATA_0)
            int_ifmap_207[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_207[31:0] & ~wmask);
    end
end

// int_ifmap_208[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_208[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_208_DATA_0)
            int_ifmap_208[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_208[31:0] & ~wmask);
    end
end

// int_ifmap_209[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_209[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_209_DATA_0)
            int_ifmap_209[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_209[31:0] & ~wmask);
    end
end

// int_ifmap_210[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_210[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_210_DATA_0)
            int_ifmap_210[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_210[31:0] & ~wmask);
    end
end

// int_ifmap_211[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_211[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_211_DATA_0)
            int_ifmap_211[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_211[31:0] & ~wmask);
    end
end

// int_ifmap_212[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_212[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_212_DATA_0)
            int_ifmap_212[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_212[31:0] & ~wmask);
    end
end

// int_ifmap_213[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_213[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_213_DATA_0)
            int_ifmap_213[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_213[31:0] & ~wmask);
    end
end

// int_ifmap_214[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_214[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_214_DATA_0)
            int_ifmap_214[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_214[31:0] & ~wmask);
    end
end

// int_ifmap_215[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_215[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_215_DATA_0)
            int_ifmap_215[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_215[31:0] & ~wmask);
    end
end

// int_ifmap_216[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_216[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_216_DATA_0)
            int_ifmap_216[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_216[31:0] & ~wmask);
    end
end

// int_ifmap_217[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_217[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_217_DATA_0)
            int_ifmap_217[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_217[31:0] & ~wmask);
    end
end

// int_ifmap_218[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_218[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_218_DATA_0)
            int_ifmap_218[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_218[31:0] & ~wmask);
    end
end

// int_ifmap_219[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_219[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_219_DATA_0)
            int_ifmap_219[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_219[31:0] & ~wmask);
    end
end

// int_ifmap_220[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_220[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_220_DATA_0)
            int_ifmap_220[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_220[31:0] & ~wmask);
    end
end

// int_ifmap_221[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_221[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_221_DATA_0)
            int_ifmap_221[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_221[31:0] & ~wmask);
    end
end

// int_ifmap_222[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_222[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_222_DATA_0)
            int_ifmap_222[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_222[31:0] & ~wmask);
    end
end

// int_ifmap_223[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_223[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_223_DATA_0)
            int_ifmap_223[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_223[31:0] & ~wmask);
    end
end

// int_ifmap_224[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_224[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_224_DATA_0)
            int_ifmap_224[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_224[31:0] & ~wmask);
    end
end

// int_ifmap_225[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_225[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_225_DATA_0)
            int_ifmap_225[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_225[31:0] & ~wmask);
    end
end

// int_ifmap_226[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_226[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_226_DATA_0)
            int_ifmap_226[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_226[31:0] & ~wmask);
    end
end

// int_ifmap_227[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_227[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_227_DATA_0)
            int_ifmap_227[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_227[31:0] & ~wmask);
    end
end

// int_ifmap_228[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_228[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_228_DATA_0)
            int_ifmap_228[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_228[31:0] & ~wmask);
    end
end

// int_ifmap_229[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_229[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_229_DATA_0)
            int_ifmap_229[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_229[31:0] & ~wmask);
    end
end

// int_ifmap_230[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_230[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_230_DATA_0)
            int_ifmap_230[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_230[31:0] & ~wmask);
    end
end

// int_ifmap_231[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_231[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_231_DATA_0)
            int_ifmap_231[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_231[31:0] & ~wmask);
    end
end

// int_ifmap_232[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_232[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_232_DATA_0)
            int_ifmap_232[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_232[31:0] & ~wmask);
    end
end

// int_ifmap_233[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_233[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_233_DATA_0)
            int_ifmap_233[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_233[31:0] & ~wmask);
    end
end

// int_ifmap_234[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_234[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_234_DATA_0)
            int_ifmap_234[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_234[31:0] & ~wmask);
    end
end

// int_ifmap_235[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_235[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_235_DATA_0)
            int_ifmap_235[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_235[31:0] & ~wmask);
    end
end

// int_ifmap_236[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_236[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_236_DATA_0)
            int_ifmap_236[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_236[31:0] & ~wmask);
    end
end

// int_ifmap_237[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_237[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_237_DATA_0)
            int_ifmap_237[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_237[31:0] & ~wmask);
    end
end

// int_ifmap_238[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_238[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_238_DATA_0)
            int_ifmap_238[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_238[31:0] & ~wmask);
    end
end

// int_ifmap_239[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_239[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_239_DATA_0)
            int_ifmap_239[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_239[31:0] & ~wmask);
    end
end

// int_ifmap_240[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_240[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_240_DATA_0)
            int_ifmap_240[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_240[31:0] & ~wmask);
    end
end

// int_ifmap_241[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_241[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_241_DATA_0)
            int_ifmap_241[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_241[31:0] & ~wmask);
    end
end

// int_ifmap_242[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_242[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_242_DATA_0)
            int_ifmap_242[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_242[31:0] & ~wmask);
    end
end

// int_ifmap_243[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_243[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_243_DATA_0)
            int_ifmap_243[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_243[31:0] & ~wmask);
    end
end

// int_ifmap_244[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_244[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_244_DATA_0)
            int_ifmap_244[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_244[31:0] & ~wmask);
    end
end

// int_ifmap_245[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_245[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_245_DATA_0)
            int_ifmap_245[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_245[31:0] & ~wmask);
    end
end

// int_ifmap_246[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_246[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_246_DATA_0)
            int_ifmap_246[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_246[31:0] & ~wmask);
    end
end

// int_ifmap_247[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_247[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_247_DATA_0)
            int_ifmap_247[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_247[31:0] & ~wmask);
    end
end

// int_ifmap_248[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_248[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_248_DATA_0)
            int_ifmap_248[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_248[31:0] & ~wmask);
    end
end

// int_ifmap_249[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_249[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_249_DATA_0)
            int_ifmap_249[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_249[31:0] & ~wmask);
    end
end

// int_ifmap_250[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_250[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_250_DATA_0)
            int_ifmap_250[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_250[31:0] & ~wmask);
    end
end

// int_ifmap_251[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_251[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_251_DATA_0)
            int_ifmap_251[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_251[31:0] & ~wmask);
    end
end

// int_ifmap_252[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_252[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_252_DATA_0)
            int_ifmap_252[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_252[31:0] & ~wmask);
    end
end

// int_ifmap_253[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_253[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_253_DATA_0)
            int_ifmap_253[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_253[31:0] & ~wmask);
    end
end

// int_ifmap_254[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_254[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_254_DATA_0)
            int_ifmap_254[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_254[31:0] & ~wmask);
    end
end

// int_ifmap_255[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_ifmap_255[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IFMAP_255_DATA_0)
            int_ifmap_255[31:0] <= (WDATA[31:0] & wmask) | (int_ifmap_255[31:0] & ~wmask);
    end
end

// int_filter_0[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_0[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_0_DATA_0)
            int_filter_0[31:0] <= (WDATA[31:0] & wmask) | (int_filter_0[31:0] & ~wmask);
    end
end

// int_filter_1[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_1[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_1_DATA_0)
            int_filter_1[31:0] <= (WDATA[31:0] & wmask) | (int_filter_1[31:0] & ~wmask);
    end
end

// int_filter_2[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_2[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_2_DATA_0)
            int_filter_2[31:0] <= (WDATA[31:0] & wmask) | (int_filter_2[31:0] & ~wmask);
    end
end

// int_filter_3[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_3[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_3_DATA_0)
            int_filter_3[31:0] <= (WDATA[31:0] & wmask) | (int_filter_3[31:0] & ~wmask);
    end
end

// int_filter_4[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_4[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_4_DATA_0)
            int_filter_4[31:0] <= (WDATA[31:0] & wmask) | (int_filter_4[31:0] & ~wmask);
    end
end

// int_filter_5[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_5[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_5_DATA_0)
            int_filter_5[31:0] <= (WDATA[31:0] & wmask) | (int_filter_5[31:0] & ~wmask);
    end
end

// int_filter_6[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_6[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_6_DATA_0)
            int_filter_6[31:0] <= (WDATA[31:0] & wmask) | (int_filter_6[31:0] & ~wmask);
    end
end

// int_filter_7[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_7[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_7_DATA_0)
            int_filter_7[31:0] <= (WDATA[31:0] & wmask) | (int_filter_7[31:0] & ~wmask);
    end
end

// int_filter_8[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_8[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_8_DATA_0)
            int_filter_8[31:0] <= (WDATA[31:0] & wmask) | (int_filter_8[31:0] & ~wmask);
    end
end

// int_filter_9[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_9[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_9_DATA_0)
            int_filter_9[31:0] <= (WDATA[31:0] & wmask) | (int_filter_9[31:0] & ~wmask);
    end
end

// int_filter_10[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_10[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_10_DATA_0)
            int_filter_10[31:0] <= (WDATA[31:0] & wmask) | (int_filter_10[31:0] & ~wmask);
    end
end

// int_filter_11[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_11[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_11_DATA_0)
            int_filter_11[31:0] <= (WDATA[31:0] & wmask) | (int_filter_11[31:0] & ~wmask);
    end
end

// int_filter_12[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_12[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_12_DATA_0)
            int_filter_12[31:0] <= (WDATA[31:0] & wmask) | (int_filter_12[31:0] & ~wmask);
    end
end

// int_filter_13[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_13[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_13_DATA_0)
            int_filter_13[31:0] <= (WDATA[31:0] & wmask) | (int_filter_13[31:0] & ~wmask);
    end
end

// int_filter_14[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_14[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_14_DATA_0)
            int_filter_14[31:0] <= (WDATA[31:0] & wmask) | (int_filter_14[31:0] & ~wmask);
    end
end

// int_filter_15[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_15[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_15_DATA_0)
            int_filter_15[31:0] <= (WDATA[31:0] & wmask) | (int_filter_15[31:0] & ~wmask);
    end
end

// int_filter_16[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_16[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_16_DATA_0)
            int_filter_16[31:0] <= (WDATA[31:0] & wmask) | (int_filter_16[31:0] & ~wmask);
    end
end

// int_filter_17[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_17[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_17_DATA_0)
            int_filter_17[31:0] <= (WDATA[31:0] & wmask) | (int_filter_17[31:0] & ~wmask);
    end
end

// int_filter_18[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_18[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_18_DATA_0)
            int_filter_18[31:0] <= (WDATA[31:0] & wmask) | (int_filter_18[31:0] & ~wmask);
    end
end

// int_filter_19[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_19[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_19_DATA_0)
            int_filter_19[31:0] <= (WDATA[31:0] & wmask) | (int_filter_19[31:0] & ~wmask);
    end
end

// int_filter_20[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_20[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_20_DATA_0)
            int_filter_20[31:0] <= (WDATA[31:0] & wmask) | (int_filter_20[31:0] & ~wmask);
    end
end

// int_filter_21[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_21[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_21_DATA_0)
            int_filter_21[31:0] <= (WDATA[31:0] & wmask) | (int_filter_21[31:0] & ~wmask);
    end
end

// int_filter_22[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_22[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_22_DATA_0)
            int_filter_22[31:0] <= (WDATA[31:0] & wmask) | (int_filter_22[31:0] & ~wmask);
    end
end

// int_filter_23[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_23[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_23_DATA_0)
            int_filter_23[31:0] <= (WDATA[31:0] & wmask) | (int_filter_23[31:0] & ~wmask);
    end
end

// int_filter_24[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_filter_24[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_FILTER_24_DATA_0)
            int_filter_24[31:0] <= (WDATA[31:0] & wmask) | (int_filter_24[31:0] & ~wmask);
    end
end


//------------------------Memory logic-------------------
// ofmap_0
assign int_ofmap_0_address0  = ofmap_0_address0;
assign int_ofmap_0_ce0       = ofmap_0_ce0;
assign int_ofmap_0_we0       = ofmap_0_we0;
assign int_ofmap_0_be0       = {4{ofmap_0_we0}};
assign int_ofmap_0_d0        = ofmap_0_d0;
assign int_ofmap_0_address1  = ar_hs? raddr[5:2] : waddr[5:2];
assign int_ofmap_0_ce1       = ar_hs | (int_ofmap_0_write & WVALID);
assign int_ofmap_0_we1       = int_ofmap_0_write & WVALID;
assign int_ofmap_0_be1       = WSTRB;
assign int_ofmap_0_d1        = WDATA;
// ofmap_1
assign int_ofmap_1_address0  = ofmap_1_address0;
assign int_ofmap_1_ce0       = ofmap_1_ce0;
assign int_ofmap_1_we0       = ofmap_1_we0;
assign int_ofmap_1_be0       = {4{ofmap_1_we0}};
assign int_ofmap_1_d0        = ofmap_1_d0;
assign int_ofmap_1_address1  = ar_hs? raddr[5:2] : waddr[5:2];
assign int_ofmap_1_ce1       = ar_hs | (int_ofmap_1_write & WVALID);
assign int_ofmap_1_we1       = int_ofmap_1_write & WVALID;
assign int_ofmap_1_be1       = WSTRB;
assign int_ofmap_1_d1        = WDATA;
// ofmap_2
assign int_ofmap_2_address0  = ofmap_2_address0;
assign int_ofmap_2_ce0       = ofmap_2_ce0;
assign int_ofmap_2_we0       = ofmap_2_we0;
assign int_ofmap_2_be0       = {4{ofmap_2_we0}};
assign int_ofmap_2_d0        = ofmap_2_d0;
assign int_ofmap_2_address1  = ar_hs? raddr[5:2] : waddr[5:2];
assign int_ofmap_2_ce1       = ar_hs | (int_ofmap_2_write & WVALID);
assign int_ofmap_2_we1       = int_ofmap_2_write & WVALID;
assign int_ofmap_2_be1       = WSTRB;
assign int_ofmap_2_d1        = WDATA;
// ofmap_3
assign int_ofmap_3_address0  = ofmap_3_address0;
assign int_ofmap_3_ce0       = ofmap_3_ce0;
assign int_ofmap_3_we0       = ofmap_3_we0;
assign int_ofmap_3_be0       = {4{ofmap_3_we0}};
assign int_ofmap_3_d0        = ofmap_3_d0;
assign int_ofmap_3_address1  = ar_hs? raddr[5:2] : waddr[5:2];
assign int_ofmap_3_ce1       = ar_hs | (int_ofmap_3_write & WVALID);
assign int_ofmap_3_we1       = int_ofmap_3_write & WVALID;
assign int_ofmap_3_be1       = WSTRB;
assign int_ofmap_3_d1        = WDATA;
// ofmap_4
assign int_ofmap_4_address0  = ofmap_4_address0;
assign int_ofmap_4_ce0       = ofmap_4_ce0;
assign int_ofmap_4_we0       = ofmap_4_we0;
assign int_ofmap_4_be0       = {4{ofmap_4_we0}};
assign int_ofmap_4_d0        = ofmap_4_d0;
assign int_ofmap_4_address1  = ar_hs? raddr[5:2] : waddr[5:2];
assign int_ofmap_4_ce1       = ar_hs | (int_ofmap_4_write & WVALID);
assign int_ofmap_4_we1       = int_ofmap_4_write & WVALID;
assign int_ofmap_4_be1       = WSTRB;
assign int_ofmap_4_d1        = WDATA;
// ofmap_5
assign int_ofmap_5_address0  = ofmap_5_address0;
assign int_ofmap_5_ce0       = ofmap_5_ce0;
assign int_ofmap_5_we0       = ofmap_5_we0;
assign int_ofmap_5_be0       = {4{ofmap_5_we0}};
assign int_ofmap_5_d0        = ofmap_5_d0;
assign int_ofmap_5_address1  = ar_hs? raddr[5:2] : waddr[5:2];
assign int_ofmap_5_ce1       = ar_hs | (int_ofmap_5_write & WVALID);
assign int_ofmap_5_we1       = int_ofmap_5_write & WVALID;
assign int_ofmap_5_be1       = WSTRB;
assign int_ofmap_5_d1        = WDATA;
// ofmap_6
assign int_ofmap_6_address0  = ofmap_6_address0;
assign int_ofmap_6_ce0       = ofmap_6_ce0;
assign int_ofmap_6_we0       = ofmap_6_we0;
assign int_ofmap_6_be0       = {4{ofmap_6_we0}};
assign int_ofmap_6_d0        = ofmap_6_d0;
assign int_ofmap_6_address1  = ar_hs? raddr[5:2] : waddr[5:2];
assign int_ofmap_6_ce1       = ar_hs | (int_ofmap_6_write & WVALID);
assign int_ofmap_6_we1       = int_ofmap_6_write & WVALID;
assign int_ofmap_6_be1       = WSTRB;
assign int_ofmap_6_d1        = WDATA;
// ofmap_7
assign int_ofmap_7_address0  = ofmap_7_address0;
assign int_ofmap_7_ce0       = ofmap_7_ce0;
assign int_ofmap_7_we0       = ofmap_7_we0;
assign int_ofmap_7_be0       = {4{ofmap_7_we0}};
assign int_ofmap_7_d0        = ofmap_7_d0;
assign int_ofmap_7_address1  = ar_hs? raddr[5:2] : waddr[5:2];
assign int_ofmap_7_ce1       = ar_hs | (int_ofmap_7_write & WVALID);
assign int_ofmap_7_we1       = int_ofmap_7_write & WVALID;
assign int_ofmap_7_be1       = WSTRB;
assign int_ofmap_7_d1        = WDATA;
// ofmap_8
assign int_ofmap_8_address0  = ofmap_8_address0;
assign int_ofmap_8_ce0       = ofmap_8_ce0;
assign int_ofmap_8_we0       = ofmap_8_we0;
assign int_ofmap_8_be0       = {4{ofmap_8_we0}};
assign int_ofmap_8_d0        = ofmap_8_d0;
assign int_ofmap_8_address1  = ar_hs? raddr[5:2] : waddr[5:2];
assign int_ofmap_8_ce1       = ar_hs | (int_ofmap_8_write & WVALID);
assign int_ofmap_8_we1       = int_ofmap_8_write & WVALID;
assign int_ofmap_8_be1       = WSTRB;
assign int_ofmap_8_d1        = WDATA;
// ofmap_9
assign int_ofmap_9_address0  = ofmap_9_address0;
assign int_ofmap_9_ce0       = ofmap_9_ce0;
assign int_ofmap_9_we0       = ofmap_9_we0;
assign int_ofmap_9_be0       = {4{ofmap_9_we0}};
assign int_ofmap_9_d0        = ofmap_9_d0;
assign int_ofmap_9_address1  = ar_hs? raddr[5:2] : waddr[5:2];
assign int_ofmap_9_ce1       = ar_hs | (int_ofmap_9_write & WVALID);
assign int_ofmap_9_we1       = int_ofmap_9_write & WVALID;
assign int_ofmap_9_be1       = WSTRB;
assign int_ofmap_9_d1        = WDATA;
// ofmap_10
assign int_ofmap_10_address0 = ofmap_10_address0;
assign int_ofmap_10_ce0      = ofmap_10_ce0;
assign int_ofmap_10_we0      = ofmap_10_we0;
assign int_ofmap_10_be0      = {4{ofmap_10_we0}};
assign int_ofmap_10_d0       = ofmap_10_d0;
assign int_ofmap_10_address1 = ar_hs? raddr[5:2] : waddr[5:2];
assign int_ofmap_10_ce1      = ar_hs | (int_ofmap_10_write & WVALID);
assign int_ofmap_10_we1      = int_ofmap_10_write & WVALID;
assign int_ofmap_10_be1      = WSTRB;
assign int_ofmap_10_d1       = WDATA;
// ofmap_11
assign int_ofmap_11_address0 = ofmap_11_address0;
assign int_ofmap_11_ce0      = ofmap_11_ce0;
assign int_ofmap_11_we0      = ofmap_11_we0;
assign int_ofmap_11_be0      = {4{ofmap_11_we0}};
assign int_ofmap_11_d0       = ofmap_11_d0;
assign int_ofmap_11_address1 = ar_hs? raddr[5:2] : waddr[5:2];
assign int_ofmap_11_ce1      = ar_hs | (int_ofmap_11_write & WVALID);
assign int_ofmap_11_we1      = int_ofmap_11_write & WVALID;
assign int_ofmap_11_be1      = WSTRB;
assign int_ofmap_11_d1       = WDATA;
// int_ofmap_0_read
always @(posedge ACLK) begin
    if (ARESET)
        int_ofmap_0_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_OFMAP_0_BASE && raddr <= ADDR_OFMAP_0_HIGH)
            int_ofmap_0_read <= 1'b1;
        else
            int_ofmap_0_read <= 1'b0;
    end
end

// int_ofmap_0_write
always @(posedge ACLK) begin
    if (ARESET)
        int_ofmap_0_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_OFMAP_0_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_OFMAP_0_HIGH)
            int_ofmap_0_write <= 1'b1;
        else if (WVALID)
            int_ofmap_0_write <= 1'b0;
    end
end

// int_ofmap_1_read
always @(posedge ACLK) begin
    if (ARESET)
        int_ofmap_1_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_OFMAP_1_BASE && raddr <= ADDR_OFMAP_1_HIGH)
            int_ofmap_1_read <= 1'b1;
        else
            int_ofmap_1_read <= 1'b0;
    end
end

// int_ofmap_1_write
always @(posedge ACLK) begin
    if (ARESET)
        int_ofmap_1_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_OFMAP_1_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_OFMAP_1_HIGH)
            int_ofmap_1_write <= 1'b1;
        else if (WVALID)
            int_ofmap_1_write <= 1'b0;
    end
end

// int_ofmap_2_read
always @(posedge ACLK) begin
    if (ARESET)
        int_ofmap_2_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_OFMAP_2_BASE && raddr <= ADDR_OFMAP_2_HIGH)
            int_ofmap_2_read <= 1'b1;
        else
            int_ofmap_2_read <= 1'b0;
    end
end

// int_ofmap_2_write
always @(posedge ACLK) begin
    if (ARESET)
        int_ofmap_2_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_OFMAP_2_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_OFMAP_2_HIGH)
            int_ofmap_2_write <= 1'b1;
        else if (WVALID)
            int_ofmap_2_write <= 1'b0;
    end
end

// int_ofmap_3_read
always @(posedge ACLK) begin
    if (ARESET)
        int_ofmap_3_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_OFMAP_3_BASE && raddr <= ADDR_OFMAP_3_HIGH)
            int_ofmap_3_read <= 1'b1;
        else
            int_ofmap_3_read <= 1'b0;
    end
end

// int_ofmap_3_write
always @(posedge ACLK) begin
    if (ARESET)
        int_ofmap_3_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_OFMAP_3_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_OFMAP_3_HIGH)
            int_ofmap_3_write <= 1'b1;
        else if (WVALID)
            int_ofmap_3_write <= 1'b0;
    end
end

// int_ofmap_4_read
always @(posedge ACLK) begin
    if (ARESET)
        int_ofmap_4_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_OFMAP_4_BASE && raddr <= ADDR_OFMAP_4_HIGH)
            int_ofmap_4_read <= 1'b1;
        else
            int_ofmap_4_read <= 1'b0;
    end
end

// int_ofmap_4_write
always @(posedge ACLK) begin
    if (ARESET)
        int_ofmap_4_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_OFMAP_4_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_OFMAP_4_HIGH)
            int_ofmap_4_write <= 1'b1;
        else if (WVALID)
            int_ofmap_4_write <= 1'b0;
    end
end

// int_ofmap_5_read
always @(posedge ACLK) begin
    if (ARESET)
        int_ofmap_5_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_OFMAP_5_BASE && raddr <= ADDR_OFMAP_5_HIGH)
            int_ofmap_5_read <= 1'b1;
        else
            int_ofmap_5_read <= 1'b0;
    end
end

// int_ofmap_5_write
always @(posedge ACLK) begin
    if (ARESET)
        int_ofmap_5_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_OFMAP_5_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_OFMAP_5_HIGH)
            int_ofmap_5_write <= 1'b1;
        else if (WVALID)
            int_ofmap_5_write <= 1'b0;
    end
end

// int_ofmap_6_read
always @(posedge ACLK) begin
    if (ARESET)
        int_ofmap_6_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_OFMAP_6_BASE && raddr <= ADDR_OFMAP_6_HIGH)
            int_ofmap_6_read <= 1'b1;
        else
            int_ofmap_6_read <= 1'b0;
    end
end

// int_ofmap_6_write
always @(posedge ACLK) begin
    if (ARESET)
        int_ofmap_6_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_OFMAP_6_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_OFMAP_6_HIGH)
            int_ofmap_6_write <= 1'b1;
        else if (WVALID)
            int_ofmap_6_write <= 1'b0;
    end
end

// int_ofmap_7_read
always @(posedge ACLK) begin
    if (ARESET)
        int_ofmap_7_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_OFMAP_7_BASE && raddr <= ADDR_OFMAP_7_HIGH)
            int_ofmap_7_read <= 1'b1;
        else
            int_ofmap_7_read <= 1'b0;
    end
end

// int_ofmap_7_write
always @(posedge ACLK) begin
    if (ARESET)
        int_ofmap_7_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_OFMAP_7_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_OFMAP_7_HIGH)
            int_ofmap_7_write <= 1'b1;
        else if (WVALID)
            int_ofmap_7_write <= 1'b0;
    end
end

// int_ofmap_8_read
always @(posedge ACLK) begin
    if (ARESET)
        int_ofmap_8_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_OFMAP_8_BASE && raddr <= ADDR_OFMAP_8_HIGH)
            int_ofmap_8_read <= 1'b1;
        else
            int_ofmap_8_read <= 1'b0;
    end
end

// int_ofmap_8_write
always @(posedge ACLK) begin
    if (ARESET)
        int_ofmap_8_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_OFMAP_8_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_OFMAP_8_HIGH)
            int_ofmap_8_write <= 1'b1;
        else if (WVALID)
            int_ofmap_8_write <= 1'b0;
    end
end

// int_ofmap_9_read
always @(posedge ACLK) begin
    if (ARESET)
        int_ofmap_9_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_OFMAP_9_BASE && raddr <= ADDR_OFMAP_9_HIGH)
            int_ofmap_9_read <= 1'b1;
        else
            int_ofmap_9_read <= 1'b0;
    end
end

// int_ofmap_9_write
always @(posedge ACLK) begin
    if (ARESET)
        int_ofmap_9_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_OFMAP_9_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_OFMAP_9_HIGH)
            int_ofmap_9_write <= 1'b1;
        else if (WVALID)
            int_ofmap_9_write <= 1'b0;
    end
end

// int_ofmap_10_read
always @(posedge ACLK) begin
    if (ARESET)
        int_ofmap_10_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_OFMAP_10_BASE && raddr <= ADDR_OFMAP_10_HIGH)
            int_ofmap_10_read <= 1'b1;
        else
            int_ofmap_10_read <= 1'b0;
    end
end

// int_ofmap_10_write
always @(posedge ACLK) begin
    if (ARESET)
        int_ofmap_10_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_OFMAP_10_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_OFMAP_10_HIGH)
            int_ofmap_10_write <= 1'b1;
        else if (WVALID)
            int_ofmap_10_write <= 1'b0;
    end
end

// int_ofmap_11_read
always @(posedge ACLK) begin
    if (ARESET)
        int_ofmap_11_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_OFMAP_11_BASE && raddr <= ADDR_OFMAP_11_HIGH)
            int_ofmap_11_read <= 1'b1;
        else
            int_ofmap_11_read <= 1'b0;
    end
end

// int_ofmap_11_write
always @(posedge ACLK) begin
    if (ARESET)
        int_ofmap_11_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_OFMAP_11_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_OFMAP_11_HIGH)
            int_ofmap_11_write <= 1'b1;
        else if (WVALID)
            int_ofmap_11_write <= 1'b0;
    end
end


endmodule


`timescale 1ns/1ps

module conv_AXILiteS_s_axi_ram
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

