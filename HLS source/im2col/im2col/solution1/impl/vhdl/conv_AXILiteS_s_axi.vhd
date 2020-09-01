-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library IEEE;
use IEEE.STD_LOGIC_1164.all;
use IEEE.NUMERIC_STD.all;

entity conv_AXILiteS_s_axi is
generic (
    C_S_AXI_ADDR_WIDTH    : INTEGER := 12;
    C_S_AXI_DATA_WIDTH    : INTEGER := 32);
port (
    ACLK                  :in   STD_LOGIC;
    ARESET                :in   STD_LOGIC;
    ACLK_EN               :in   STD_LOGIC;
    AWADDR                :in   STD_LOGIC_VECTOR(C_S_AXI_ADDR_WIDTH-1 downto 0);
    AWVALID               :in   STD_LOGIC;
    AWREADY               :out  STD_LOGIC;
    WDATA                 :in   STD_LOGIC_VECTOR(C_S_AXI_DATA_WIDTH-1 downto 0);
    WSTRB                 :in   STD_LOGIC_VECTOR(C_S_AXI_DATA_WIDTH/8-1 downto 0);
    WVALID                :in   STD_LOGIC;
    WREADY                :out  STD_LOGIC;
    BRESP                 :out  STD_LOGIC_VECTOR(1 downto 0);
    BVALID                :out  STD_LOGIC;
    BREADY                :in   STD_LOGIC;
    ARADDR                :in   STD_LOGIC_VECTOR(C_S_AXI_ADDR_WIDTH-1 downto 0);
    ARVALID               :in   STD_LOGIC;
    ARREADY               :out  STD_LOGIC;
    RDATA                 :out  STD_LOGIC_VECTOR(C_S_AXI_DATA_WIDTH-1 downto 0);
    RRESP                 :out  STD_LOGIC_VECTOR(1 downto 0);
    RVALID                :out  STD_LOGIC;
    RREADY                :in   STD_LOGIC;
    ifmap_0               :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_1               :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_2               :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_3               :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_4               :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_5               :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_6               :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_7               :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_8               :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_9               :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_10              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_11              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_12              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_13              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_14              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_15              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_16              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_17              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_18              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_19              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_20              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_21              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_22              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_23              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_24              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_25              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_26              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_27              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_28              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_29              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_30              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_31              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_32              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_33              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_34              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_35              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_36              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_37              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_38              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_39              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_40              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_41              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_42              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_43              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_44              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_45              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_46              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_47              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_48              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_49              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_50              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_51              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_52              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_53              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_54              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_55              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_56              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_57              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_58              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_59              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_60              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_61              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_62              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_63              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_64              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_65              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_66              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_67              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_68              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_69              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_70              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_71              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_72              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_73              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_74              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_75              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_76              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_77              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_78              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_79              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_80              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_81              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_82              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_83              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_84              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_85              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_86              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_87              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_88              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_89              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_90              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_91              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_92              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_93              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_94              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_95              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_96              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_97              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_98              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_99              :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_100             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_101             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_102             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_103             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_104             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_105             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_106             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_107             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_108             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_109             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_110             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_111             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_112             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_113             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_114             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_115             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_116             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_117             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_118             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_119             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_120             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_121             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_122             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_123             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_124             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_125             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_126             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_127             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_128             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_129             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_130             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_131             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_132             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_133             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_134             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_135             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_136             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_137             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_138             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_139             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_140             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_141             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_142             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_143             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_144             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_145             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_146             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_147             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_148             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_149             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_150             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_151             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_152             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_153             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_154             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_155             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_156             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_157             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_158             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_159             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_160             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_161             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_162             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_163             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_164             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_165             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_166             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_167             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_168             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_169             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_170             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_171             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_172             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_173             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_174             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_175             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_176             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_177             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_178             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_179             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_180             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_181             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_182             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_183             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_184             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_185             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_186             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_187             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_188             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_189             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_190             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_191             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_192             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_193             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_194             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_195             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_196             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_197             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_198             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_199             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_200             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_201             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_202             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_203             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_204             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_205             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_206             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_207             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_208             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_209             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_210             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_211             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_212             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_213             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_214             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_215             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_216             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_217             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_218             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_219             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_220             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_221             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_222             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_223             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_224             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_225             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_226             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_227             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_228             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_229             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_230             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_231             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_232             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_233             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_234             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_235             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_236             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_237             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_238             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_239             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_240             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_241             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_242             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_243             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_244             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_245             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_246             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_247             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_248             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_249             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_250             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_251             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_252             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_253             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_254             :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_255             :out  STD_LOGIC_VECTOR(31 downto 0);
    filter_0              :out  STD_LOGIC_VECTOR(31 downto 0);
    filter_1              :out  STD_LOGIC_VECTOR(31 downto 0);
    filter_2              :out  STD_LOGIC_VECTOR(31 downto 0);
    filter_3              :out  STD_LOGIC_VECTOR(31 downto 0);
    filter_4              :out  STD_LOGIC_VECTOR(31 downto 0);
    filter_5              :out  STD_LOGIC_VECTOR(31 downto 0);
    filter_6              :out  STD_LOGIC_VECTOR(31 downto 0);
    filter_7              :out  STD_LOGIC_VECTOR(31 downto 0);
    filter_8              :out  STD_LOGIC_VECTOR(31 downto 0);
    filter_9              :out  STD_LOGIC_VECTOR(31 downto 0);
    filter_10             :out  STD_LOGIC_VECTOR(31 downto 0);
    filter_11             :out  STD_LOGIC_VECTOR(31 downto 0);
    filter_12             :out  STD_LOGIC_VECTOR(31 downto 0);
    filter_13             :out  STD_LOGIC_VECTOR(31 downto 0);
    filter_14             :out  STD_LOGIC_VECTOR(31 downto 0);
    filter_15             :out  STD_LOGIC_VECTOR(31 downto 0);
    filter_16             :out  STD_LOGIC_VECTOR(31 downto 0);
    filter_17             :out  STD_LOGIC_VECTOR(31 downto 0);
    filter_18             :out  STD_LOGIC_VECTOR(31 downto 0);
    filter_19             :out  STD_LOGIC_VECTOR(31 downto 0);
    filter_20             :out  STD_LOGIC_VECTOR(31 downto 0);
    filter_21             :out  STD_LOGIC_VECTOR(31 downto 0);
    filter_22             :out  STD_LOGIC_VECTOR(31 downto 0);
    filter_23             :out  STD_LOGIC_VECTOR(31 downto 0);
    filter_24             :out  STD_LOGIC_VECTOR(31 downto 0);
    ofmap_0_address0      :in   STD_LOGIC_VECTOR(3 downto 0);
    ofmap_0_ce0           :in   STD_LOGIC;
    ofmap_0_we0           :in   STD_LOGIC;
    ofmap_0_d0            :in   STD_LOGIC_VECTOR(31 downto 0);
    ofmap_1_address0      :in   STD_LOGIC_VECTOR(3 downto 0);
    ofmap_1_ce0           :in   STD_LOGIC;
    ofmap_1_we0           :in   STD_LOGIC;
    ofmap_1_d0            :in   STD_LOGIC_VECTOR(31 downto 0);
    ofmap_2_address0      :in   STD_LOGIC_VECTOR(3 downto 0);
    ofmap_2_ce0           :in   STD_LOGIC;
    ofmap_2_we0           :in   STD_LOGIC;
    ofmap_2_d0            :in   STD_LOGIC_VECTOR(31 downto 0);
    ofmap_3_address0      :in   STD_LOGIC_VECTOR(3 downto 0);
    ofmap_3_ce0           :in   STD_LOGIC;
    ofmap_3_we0           :in   STD_LOGIC;
    ofmap_3_d0            :in   STD_LOGIC_VECTOR(31 downto 0);
    ofmap_4_address0      :in   STD_LOGIC_VECTOR(3 downto 0);
    ofmap_4_ce0           :in   STD_LOGIC;
    ofmap_4_we0           :in   STD_LOGIC;
    ofmap_4_d0            :in   STD_LOGIC_VECTOR(31 downto 0);
    ofmap_5_address0      :in   STD_LOGIC_VECTOR(3 downto 0);
    ofmap_5_ce0           :in   STD_LOGIC;
    ofmap_5_we0           :in   STD_LOGIC;
    ofmap_5_d0            :in   STD_LOGIC_VECTOR(31 downto 0);
    ofmap_6_address0      :in   STD_LOGIC_VECTOR(3 downto 0);
    ofmap_6_ce0           :in   STD_LOGIC;
    ofmap_6_we0           :in   STD_LOGIC;
    ofmap_6_d0            :in   STD_LOGIC_VECTOR(31 downto 0);
    ofmap_7_address0      :in   STD_LOGIC_VECTOR(3 downto 0);
    ofmap_7_ce0           :in   STD_LOGIC;
    ofmap_7_we0           :in   STD_LOGIC;
    ofmap_7_d0            :in   STD_LOGIC_VECTOR(31 downto 0);
    ofmap_8_address0      :in   STD_LOGIC_VECTOR(3 downto 0);
    ofmap_8_ce0           :in   STD_LOGIC;
    ofmap_8_we0           :in   STD_LOGIC;
    ofmap_8_d0            :in   STD_LOGIC_VECTOR(31 downto 0);
    ofmap_9_address0      :in   STD_LOGIC_VECTOR(3 downto 0);
    ofmap_9_ce0           :in   STD_LOGIC;
    ofmap_9_we0           :in   STD_LOGIC;
    ofmap_9_d0            :in   STD_LOGIC_VECTOR(31 downto 0);
    ofmap_10_address0     :in   STD_LOGIC_VECTOR(3 downto 0);
    ofmap_10_ce0          :in   STD_LOGIC;
    ofmap_10_we0          :in   STD_LOGIC;
    ofmap_10_d0           :in   STD_LOGIC_VECTOR(31 downto 0);
    ofmap_11_address0     :in   STD_LOGIC_VECTOR(3 downto 0);
    ofmap_11_ce0          :in   STD_LOGIC;
    ofmap_11_we0          :in   STD_LOGIC;
    ofmap_11_d0           :in   STD_LOGIC_VECTOR(31 downto 0)
);
end entity conv_AXILiteS_s_axi;

-- ------------------------Address Info-------------------
-- 0x000 : reserved
-- 0x004 : reserved
-- 0x008 : reserved
-- 0x00c : reserved
-- 0x010 : Data signal of ifmap_0
--         bit 31~0 - ifmap_0[31:0] (Read/Write)
-- 0x014 : reserved
-- 0x018 : Data signal of ifmap_1
--         bit 31~0 - ifmap_1[31:0] (Read/Write)
-- 0x01c : reserved
-- 0x020 : Data signal of ifmap_2
--         bit 31~0 - ifmap_2[31:0] (Read/Write)
-- 0x024 : reserved
-- 0x028 : Data signal of ifmap_3
--         bit 31~0 - ifmap_3[31:0] (Read/Write)
-- 0x02c : reserved
-- 0x030 : Data signal of ifmap_4
--         bit 31~0 - ifmap_4[31:0] (Read/Write)
-- 0x034 : reserved
-- 0x038 : Data signal of ifmap_5
--         bit 31~0 - ifmap_5[31:0] (Read/Write)
-- 0x03c : reserved
-- 0x040 : Data signal of ifmap_6
--         bit 31~0 - ifmap_6[31:0] (Read/Write)
-- 0x044 : reserved
-- 0x048 : Data signal of ifmap_7
--         bit 31~0 - ifmap_7[31:0] (Read/Write)
-- 0x04c : reserved
-- 0x050 : Data signal of ifmap_8
--         bit 31~0 - ifmap_8[31:0] (Read/Write)
-- 0x054 : reserved
-- 0x058 : Data signal of ifmap_9
--         bit 31~0 - ifmap_9[31:0] (Read/Write)
-- 0x05c : reserved
-- 0x060 : Data signal of ifmap_10
--         bit 31~0 - ifmap_10[31:0] (Read/Write)
-- 0x064 : reserved
-- 0x068 : Data signal of ifmap_11
--         bit 31~0 - ifmap_11[31:0] (Read/Write)
-- 0x06c : reserved
-- 0x070 : Data signal of ifmap_12
--         bit 31~0 - ifmap_12[31:0] (Read/Write)
-- 0x074 : reserved
-- 0x078 : Data signal of ifmap_13
--         bit 31~0 - ifmap_13[31:0] (Read/Write)
-- 0x07c : reserved
-- 0x080 : Data signal of ifmap_14
--         bit 31~0 - ifmap_14[31:0] (Read/Write)
-- 0x084 : reserved
-- 0x088 : Data signal of ifmap_15
--         bit 31~0 - ifmap_15[31:0] (Read/Write)
-- 0x08c : reserved
-- 0x090 : Data signal of ifmap_16
--         bit 31~0 - ifmap_16[31:0] (Read/Write)
-- 0x094 : reserved
-- 0x098 : Data signal of ifmap_17
--         bit 31~0 - ifmap_17[31:0] (Read/Write)
-- 0x09c : reserved
-- 0x0a0 : Data signal of ifmap_18
--         bit 31~0 - ifmap_18[31:0] (Read/Write)
-- 0x0a4 : reserved
-- 0x0a8 : Data signal of ifmap_19
--         bit 31~0 - ifmap_19[31:0] (Read/Write)
-- 0x0ac : reserved
-- 0x0b0 : Data signal of ifmap_20
--         bit 31~0 - ifmap_20[31:0] (Read/Write)
-- 0x0b4 : reserved
-- 0x0b8 : Data signal of ifmap_21
--         bit 31~0 - ifmap_21[31:0] (Read/Write)
-- 0x0bc : reserved
-- 0x0c0 : Data signal of ifmap_22
--         bit 31~0 - ifmap_22[31:0] (Read/Write)
-- 0x0c4 : reserved
-- 0x0c8 : Data signal of ifmap_23
--         bit 31~0 - ifmap_23[31:0] (Read/Write)
-- 0x0cc : reserved
-- 0x0d0 : Data signal of ifmap_24
--         bit 31~0 - ifmap_24[31:0] (Read/Write)
-- 0x0d4 : reserved
-- 0x0d8 : Data signal of ifmap_25
--         bit 31~0 - ifmap_25[31:0] (Read/Write)
-- 0x0dc : reserved
-- 0x0e0 : Data signal of ifmap_26
--         bit 31~0 - ifmap_26[31:0] (Read/Write)
-- 0x0e4 : reserved
-- 0x0e8 : Data signal of ifmap_27
--         bit 31~0 - ifmap_27[31:0] (Read/Write)
-- 0x0ec : reserved
-- 0x0f0 : Data signal of ifmap_28
--         bit 31~0 - ifmap_28[31:0] (Read/Write)
-- 0x0f4 : reserved
-- 0x0f8 : Data signal of ifmap_29
--         bit 31~0 - ifmap_29[31:0] (Read/Write)
-- 0x0fc : reserved
-- 0x100 : Data signal of ifmap_30
--         bit 31~0 - ifmap_30[31:0] (Read/Write)
-- 0x104 : reserved
-- 0x108 : Data signal of ifmap_31
--         bit 31~0 - ifmap_31[31:0] (Read/Write)
-- 0x10c : reserved
-- 0x110 : Data signal of ifmap_32
--         bit 31~0 - ifmap_32[31:0] (Read/Write)
-- 0x114 : reserved
-- 0x118 : Data signal of ifmap_33
--         bit 31~0 - ifmap_33[31:0] (Read/Write)
-- 0x11c : reserved
-- 0x120 : Data signal of ifmap_34
--         bit 31~0 - ifmap_34[31:0] (Read/Write)
-- 0x124 : reserved
-- 0x128 : Data signal of ifmap_35
--         bit 31~0 - ifmap_35[31:0] (Read/Write)
-- 0x12c : reserved
-- 0x130 : Data signal of ifmap_36
--         bit 31~0 - ifmap_36[31:0] (Read/Write)
-- 0x134 : reserved
-- 0x138 : Data signal of ifmap_37
--         bit 31~0 - ifmap_37[31:0] (Read/Write)
-- 0x13c : reserved
-- 0x140 : Data signal of ifmap_38
--         bit 31~0 - ifmap_38[31:0] (Read/Write)
-- 0x144 : reserved
-- 0x148 : Data signal of ifmap_39
--         bit 31~0 - ifmap_39[31:0] (Read/Write)
-- 0x14c : reserved
-- 0x150 : Data signal of ifmap_40
--         bit 31~0 - ifmap_40[31:0] (Read/Write)
-- 0x154 : reserved
-- 0x158 : Data signal of ifmap_41
--         bit 31~0 - ifmap_41[31:0] (Read/Write)
-- 0x15c : reserved
-- 0x160 : Data signal of ifmap_42
--         bit 31~0 - ifmap_42[31:0] (Read/Write)
-- 0x164 : reserved
-- 0x168 : Data signal of ifmap_43
--         bit 31~0 - ifmap_43[31:0] (Read/Write)
-- 0x16c : reserved
-- 0x170 : Data signal of ifmap_44
--         bit 31~0 - ifmap_44[31:0] (Read/Write)
-- 0x174 : reserved
-- 0x178 : Data signal of ifmap_45
--         bit 31~0 - ifmap_45[31:0] (Read/Write)
-- 0x17c : reserved
-- 0x180 : Data signal of ifmap_46
--         bit 31~0 - ifmap_46[31:0] (Read/Write)
-- 0x184 : reserved
-- 0x188 : Data signal of ifmap_47
--         bit 31~0 - ifmap_47[31:0] (Read/Write)
-- 0x18c : reserved
-- 0x190 : Data signal of ifmap_48
--         bit 31~0 - ifmap_48[31:0] (Read/Write)
-- 0x194 : reserved
-- 0x198 : Data signal of ifmap_49
--         bit 31~0 - ifmap_49[31:0] (Read/Write)
-- 0x19c : reserved
-- 0x1a0 : Data signal of ifmap_50
--         bit 31~0 - ifmap_50[31:0] (Read/Write)
-- 0x1a4 : reserved
-- 0x1a8 : Data signal of ifmap_51
--         bit 31~0 - ifmap_51[31:0] (Read/Write)
-- 0x1ac : reserved
-- 0x1b0 : Data signal of ifmap_52
--         bit 31~0 - ifmap_52[31:0] (Read/Write)
-- 0x1b4 : reserved
-- 0x1b8 : Data signal of ifmap_53
--         bit 31~0 - ifmap_53[31:0] (Read/Write)
-- 0x1bc : reserved
-- 0x1c0 : Data signal of ifmap_54
--         bit 31~0 - ifmap_54[31:0] (Read/Write)
-- 0x1c4 : reserved
-- 0x1c8 : Data signal of ifmap_55
--         bit 31~0 - ifmap_55[31:0] (Read/Write)
-- 0x1cc : reserved
-- 0x1d0 : Data signal of ifmap_56
--         bit 31~0 - ifmap_56[31:0] (Read/Write)
-- 0x1d4 : reserved
-- 0x1d8 : Data signal of ifmap_57
--         bit 31~0 - ifmap_57[31:0] (Read/Write)
-- 0x1dc : reserved
-- 0x1e0 : Data signal of ifmap_58
--         bit 31~0 - ifmap_58[31:0] (Read/Write)
-- 0x1e4 : reserved
-- 0x1e8 : Data signal of ifmap_59
--         bit 31~0 - ifmap_59[31:0] (Read/Write)
-- 0x1ec : reserved
-- 0x1f0 : Data signal of ifmap_60
--         bit 31~0 - ifmap_60[31:0] (Read/Write)
-- 0x1f4 : reserved
-- 0x1f8 : Data signal of ifmap_61
--         bit 31~0 - ifmap_61[31:0] (Read/Write)
-- 0x1fc : reserved
-- 0x200 : Data signal of ifmap_62
--         bit 31~0 - ifmap_62[31:0] (Read/Write)
-- 0x204 : reserved
-- 0x208 : Data signal of ifmap_63
--         bit 31~0 - ifmap_63[31:0] (Read/Write)
-- 0x20c : reserved
-- 0x210 : Data signal of ifmap_64
--         bit 31~0 - ifmap_64[31:0] (Read/Write)
-- 0x214 : reserved
-- 0x218 : Data signal of ifmap_65
--         bit 31~0 - ifmap_65[31:0] (Read/Write)
-- 0x21c : reserved
-- 0x220 : Data signal of ifmap_66
--         bit 31~0 - ifmap_66[31:0] (Read/Write)
-- 0x224 : reserved
-- 0x228 : Data signal of ifmap_67
--         bit 31~0 - ifmap_67[31:0] (Read/Write)
-- 0x22c : reserved
-- 0x230 : Data signal of ifmap_68
--         bit 31~0 - ifmap_68[31:0] (Read/Write)
-- 0x234 : reserved
-- 0x238 : Data signal of ifmap_69
--         bit 31~0 - ifmap_69[31:0] (Read/Write)
-- 0x23c : reserved
-- 0x240 : Data signal of ifmap_70
--         bit 31~0 - ifmap_70[31:0] (Read/Write)
-- 0x244 : reserved
-- 0x248 : Data signal of ifmap_71
--         bit 31~0 - ifmap_71[31:0] (Read/Write)
-- 0x24c : reserved
-- 0x250 : Data signal of ifmap_72
--         bit 31~0 - ifmap_72[31:0] (Read/Write)
-- 0x254 : reserved
-- 0x258 : Data signal of ifmap_73
--         bit 31~0 - ifmap_73[31:0] (Read/Write)
-- 0x25c : reserved
-- 0x260 : Data signal of ifmap_74
--         bit 31~0 - ifmap_74[31:0] (Read/Write)
-- 0x264 : reserved
-- 0x268 : Data signal of ifmap_75
--         bit 31~0 - ifmap_75[31:0] (Read/Write)
-- 0x26c : reserved
-- 0x270 : Data signal of ifmap_76
--         bit 31~0 - ifmap_76[31:0] (Read/Write)
-- 0x274 : reserved
-- 0x278 : Data signal of ifmap_77
--         bit 31~0 - ifmap_77[31:0] (Read/Write)
-- 0x27c : reserved
-- 0x280 : Data signal of ifmap_78
--         bit 31~0 - ifmap_78[31:0] (Read/Write)
-- 0x284 : reserved
-- 0x288 : Data signal of ifmap_79
--         bit 31~0 - ifmap_79[31:0] (Read/Write)
-- 0x28c : reserved
-- 0x290 : Data signal of ifmap_80
--         bit 31~0 - ifmap_80[31:0] (Read/Write)
-- 0x294 : reserved
-- 0x298 : Data signal of ifmap_81
--         bit 31~0 - ifmap_81[31:0] (Read/Write)
-- 0x29c : reserved
-- 0x2a0 : Data signal of ifmap_82
--         bit 31~0 - ifmap_82[31:0] (Read/Write)
-- 0x2a4 : reserved
-- 0x2a8 : Data signal of ifmap_83
--         bit 31~0 - ifmap_83[31:0] (Read/Write)
-- 0x2ac : reserved
-- 0x2b0 : Data signal of ifmap_84
--         bit 31~0 - ifmap_84[31:0] (Read/Write)
-- 0x2b4 : reserved
-- 0x2b8 : Data signal of ifmap_85
--         bit 31~0 - ifmap_85[31:0] (Read/Write)
-- 0x2bc : reserved
-- 0x2c0 : Data signal of ifmap_86
--         bit 31~0 - ifmap_86[31:0] (Read/Write)
-- 0x2c4 : reserved
-- 0x2c8 : Data signal of ifmap_87
--         bit 31~0 - ifmap_87[31:0] (Read/Write)
-- 0x2cc : reserved
-- 0x2d0 : Data signal of ifmap_88
--         bit 31~0 - ifmap_88[31:0] (Read/Write)
-- 0x2d4 : reserved
-- 0x2d8 : Data signal of ifmap_89
--         bit 31~0 - ifmap_89[31:0] (Read/Write)
-- 0x2dc : reserved
-- 0x2e0 : Data signal of ifmap_90
--         bit 31~0 - ifmap_90[31:0] (Read/Write)
-- 0x2e4 : reserved
-- 0x2e8 : Data signal of ifmap_91
--         bit 31~0 - ifmap_91[31:0] (Read/Write)
-- 0x2ec : reserved
-- 0x2f0 : Data signal of ifmap_92
--         bit 31~0 - ifmap_92[31:0] (Read/Write)
-- 0x2f4 : reserved
-- 0x2f8 : Data signal of ifmap_93
--         bit 31~0 - ifmap_93[31:0] (Read/Write)
-- 0x2fc : reserved
-- 0x300 : Data signal of ifmap_94
--         bit 31~0 - ifmap_94[31:0] (Read/Write)
-- 0x304 : reserved
-- 0x308 : Data signal of ifmap_95
--         bit 31~0 - ifmap_95[31:0] (Read/Write)
-- 0x30c : reserved
-- 0x310 : Data signal of ifmap_96
--         bit 31~0 - ifmap_96[31:0] (Read/Write)
-- 0x314 : reserved
-- 0x318 : Data signal of ifmap_97
--         bit 31~0 - ifmap_97[31:0] (Read/Write)
-- 0x31c : reserved
-- 0x320 : Data signal of ifmap_98
--         bit 31~0 - ifmap_98[31:0] (Read/Write)
-- 0x324 : reserved
-- 0x328 : Data signal of ifmap_99
--         bit 31~0 - ifmap_99[31:0] (Read/Write)
-- 0x32c : reserved
-- 0x330 : Data signal of ifmap_100
--         bit 31~0 - ifmap_100[31:0] (Read/Write)
-- 0x334 : reserved
-- 0x338 : Data signal of ifmap_101
--         bit 31~0 - ifmap_101[31:0] (Read/Write)
-- 0x33c : reserved
-- 0x340 : Data signal of ifmap_102
--         bit 31~0 - ifmap_102[31:0] (Read/Write)
-- 0x344 : reserved
-- 0x348 : Data signal of ifmap_103
--         bit 31~0 - ifmap_103[31:0] (Read/Write)
-- 0x34c : reserved
-- 0x350 : Data signal of ifmap_104
--         bit 31~0 - ifmap_104[31:0] (Read/Write)
-- 0x354 : reserved
-- 0x358 : Data signal of ifmap_105
--         bit 31~0 - ifmap_105[31:0] (Read/Write)
-- 0x35c : reserved
-- 0x360 : Data signal of ifmap_106
--         bit 31~0 - ifmap_106[31:0] (Read/Write)
-- 0x364 : reserved
-- 0x368 : Data signal of ifmap_107
--         bit 31~0 - ifmap_107[31:0] (Read/Write)
-- 0x36c : reserved
-- 0x370 : Data signal of ifmap_108
--         bit 31~0 - ifmap_108[31:0] (Read/Write)
-- 0x374 : reserved
-- 0x378 : Data signal of ifmap_109
--         bit 31~0 - ifmap_109[31:0] (Read/Write)
-- 0x37c : reserved
-- 0x380 : Data signal of ifmap_110
--         bit 31~0 - ifmap_110[31:0] (Read/Write)
-- 0x384 : reserved
-- 0x388 : Data signal of ifmap_111
--         bit 31~0 - ifmap_111[31:0] (Read/Write)
-- 0x38c : reserved
-- 0x390 : Data signal of ifmap_112
--         bit 31~0 - ifmap_112[31:0] (Read/Write)
-- 0x394 : reserved
-- 0x398 : Data signal of ifmap_113
--         bit 31~0 - ifmap_113[31:0] (Read/Write)
-- 0x39c : reserved
-- 0x3a0 : Data signal of ifmap_114
--         bit 31~0 - ifmap_114[31:0] (Read/Write)
-- 0x3a4 : reserved
-- 0x3a8 : Data signal of ifmap_115
--         bit 31~0 - ifmap_115[31:0] (Read/Write)
-- 0x3ac : reserved
-- 0x3b0 : Data signal of ifmap_116
--         bit 31~0 - ifmap_116[31:0] (Read/Write)
-- 0x3b4 : reserved
-- 0x3b8 : Data signal of ifmap_117
--         bit 31~0 - ifmap_117[31:0] (Read/Write)
-- 0x3bc : reserved
-- 0x3c0 : Data signal of ifmap_118
--         bit 31~0 - ifmap_118[31:0] (Read/Write)
-- 0x3c4 : reserved
-- 0x3c8 : Data signal of ifmap_119
--         bit 31~0 - ifmap_119[31:0] (Read/Write)
-- 0x3cc : reserved
-- 0x3d0 : Data signal of ifmap_120
--         bit 31~0 - ifmap_120[31:0] (Read/Write)
-- 0x3d4 : reserved
-- 0x3d8 : Data signal of ifmap_121
--         bit 31~0 - ifmap_121[31:0] (Read/Write)
-- 0x3dc : reserved
-- 0x3e0 : Data signal of ifmap_122
--         bit 31~0 - ifmap_122[31:0] (Read/Write)
-- 0x3e4 : reserved
-- 0x3e8 : Data signal of ifmap_123
--         bit 31~0 - ifmap_123[31:0] (Read/Write)
-- 0x3ec : reserved
-- 0x3f0 : Data signal of ifmap_124
--         bit 31~0 - ifmap_124[31:0] (Read/Write)
-- 0x3f4 : reserved
-- 0x3f8 : Data signal of ifmap_125
--         bit 31~0 - ifmap_125[31:0] (Read/Write)
-- 0x3fc : reserved
-- 0x400 : Data signal of ifmap_126
--         bit 31~0 - ifmap_126[31:0] (Read/Write)
-- 0x404 : reserved
-- 0x408 : Data signal of ifmap_127
--         bit 31~0 - ifmap_127[31:0] (Read/Write)
-- 0x40c : reserved
-- 0x410 : Data signal of ifmap_128
--         bit 31~0 - ifmap_128[31:0] (Read/Write)
-- 0x414 : reserved
-- 0x418 : Data signal of ifmap_129
--         bit 31~0 - ifmap_129[31:0] (Read/Write)
-- 0x41c : reserved
-- 0x420 : Data signal of ifmap_130
--         bit 31~0 - ifmap_130[31:0] (Read/Write)
-- 0x424 : reserved
-- 0x428 : Data signal of ifmap_131
--         bit 31~0 - ifmap_131[31:0] (Read/Write)
-- 0x42c : reserved
-- 0x430 : Data signal of ifmap_132
--         bit 31~0 - ifmap_132[31:0] (Read/Write)
-- 0x434 : reserved
-- 0x438 : Data signal of ifmap_133
--         bit 31~0 - ifmap_133[31:0] (Read/Write)
-- 0x43c : reserved
-- 0x440 : Data signal of ifmap_134
--         bit 31~0 - ifmap_134[31:0] (Read/Write)
-- 0x444 : reserved
-- 0x448 : Data signal of ifmap_135
--         bit 31~0 - ifmap_135[31:0] (Read/Write)
-- 0x44c : reserved
-- 0x450 : Data signal of ifmap_136
--         bit 31~0 - ifmap_136[31:0] (Read/Write)
-- 0x454 : reserved
-- 0x458 : Data signal of ifmap_137
--         bit 31~0 - ifmap_137[31:0] (Read/Write)
-- 0x45c : reserved
-- 0x460 : Data signal of ifmap_138
--         bit 31~0 - ifmap_138[31:0] (Read/Write)
-- 0x464 : reserved
-- 0x468 : Data signal of ifmap_139
--         bit 31~0 - ifmap_139[31:0] (Read/Write)
-- 0x46c : reserved
-- 0x470 : Data signal of ifmap_140
--         bit 31~0 - ifmap_140[31:0] (Read/Write)
-- 0x474 : reserved
-- 0x478 : Data signal of ifmap_141
--         bit 31~0 - ifmap_141[31:0] (Read/Write)
-- 0x47c : reserved
-- 0x480 : Data signal of ifmap_142
--         bit 31~0 - ifmap_142[31:0] (Read/Write)
-- 0x484 : reserved
-- 0x488 : Data signal of ifmap_143
--         bit 31~0 - ifmap_143[31:0] (Read/Write)
-- 0x48c : reserved
-- 0x490 : Data signal of ifmap_144
--         bit 31~0 - ifmap_144[31:0] (Read/Write)
-- 0x494 : reserved
-- 0x498 : Data signal of ifmap_145
--         bit 31~0 - ifmap_145[31:0] (Read/Write)
-- 0x49c : reserved
-- 0x4a0 : Data signal of ifmap_146
--         bit 31~0 - ifmap_146[31:0] (Read/Write)
-- 0x4a4 : reserved
-- 0x4a8 : Data signal of ifmap_147
--         bit 31~0 - ifmap_147[31:0] (Read/Write)
-- 0x4ac : reserved
-- 0x4b0 : Data signal of ifmap_148
--         bit 31~0 - ifmap_148[31:0] (Read/Write)
-- 0x4b4 : reserved
-- 0x4b8 : Data signal of ifmap_149
--         bit 31~0 - ifmap_149[31:0] (Read/Write)
-- 0x4bc : reserved
-- 0x4c0 : Data signal of ifmap_150
--         bit 31~0 - ifmap_150[31:0] (Read/Write)
-- 0x4c4 : reserved
-- 0x4c8 : Data signal of ifmap_151
--         bit 31~0 - ifmap_151[31:0] (Read/Write)
-- 0x4cc : reserved
-- 0x4d0 : Data signal of ifmap_152
--         bit 31~0 - ifmap_152[31:0] (Read/Write)
-- 0x4d4 : reserved
-- 0x4d8 : Data signal of ifmap_153
--         bit 31~0 - ifmap_153[31:0] (Read/Write)
-- 0x4dc : reserved
-- 0x4e0 : Data signal of ifmap_154
--         bit 31~0 - ifmap_154[31:0] (Read/Write)
-- 0x4e4 : reserved
-- 0x4e8 : Data signal of ifmap_155
--         bit 31~0 - ifmap_155[31:0] (Read/Write)
-- 0x4ec : reserved
-- 0x4f0 : Data signal of ifmap_156
--         bit 31~0 - ifmap_156[31:0] (Read/Write)
-- 0x4f4 : reserved
-- 0x4f8 : Data signal of ifmap_157
--         bit 31~0 - ifmap_157[31:0] (Read/Write)
-- 0x4fc : reserved
-- 0x500 : Data signal of ifmap_158
--         bit 31~0 - ifmap_158[31:0] (Read/Write)
-- 0x504 : reserved
-- 0x508 : Data signal of ifmap_159
--         bit 31~0 - ifmap_159[31:0] (Read/Write)
-- 0x50c : reserved
-- 0x510 : Data signal of ifmap_160
--         bit 31~0 - ifmap_160[31:0] (Read/Write)
-- 0x514 : reserved
-- 0x518 : Data signal of ifmap_161
--         bit 31~0 - ifmap_161[31:0] (Read/Write)
-- 0x51c : reserved
-- 0x520 : Data signal of ifmap_162
--         bit 31~0 - ifmap_162[31:0] (Read/Write)
-- 0x524 : reserved
-- 0x528 : Data signal of ifmap_163
--         bit 31~0 - ifmap_163[31:0] (Read/Write)
-- 0x52c : reserved
-- 0x530 : Data signal of ifmap_164
--         bit 31~0 - ifmap_164[31:0] (Read/Write)
-- 0x534 : reserved
-- 0x538 : Data signal of ifmap_165
--         bit 31~0 - ifmap_165[31:0] (Read/Write)
-- 0x53c : reserved
-- 0x540 : Data signal of ifmap_166
--         bit 31~0 - ifmap_166[31:0] (Read/Write)
-- 0x544 : reserved
-- 0x548 : Data signal of ifmap_167
--         bit 31~0 - ifmap_167[31:0] (Read/Write)
-- 0x54c : reserved
-- 0x550 : Data signal of ifmap_168
--         bit 31~0 - ifmap_168[31:0] (Read/Write)
-- 0x554 : reserved
-- 0x558 : Data signal of ifmap_169
--         bit 31~0 - ifmap_169[31:0] (Read/Write)
-- 0x55c : reserved
-- 0x560 : Data signal of ifmap_170
--         bit 31~0 - ifmap_170[31:0] (Read/Write)
-- 0x564 : reserved
-- 0x568 : Data signal of ifmap_171
--         bit 31~0 - ifmap_171[31:0] (Read/Write)
-- 0x56c : reserved
-- 0x570 : Data signal of ifmap_172
--         bit 31~0 - ifmap_172[31:0] (Read/Write)
-- 0x574 : reserved
-- 0x578 : Data signal of ifmap_173
--         bit 31~0 - ifmap_173[31:0] (Read/Write)
-- 0x57c : reserved
-- 0x580 : Data signal of ifmap_174
--         bit 31~0 - ifmap_174[31:0] (Read/Write)
-- 0x584 : reserved
-- 0x588 : Data signal of ifmap_175
--         bit 31~0 - ifmap_175[31:0] (Read/Write)
-- 0x58c : reserved
-- 0x590 : Data signal of ifmap_176
--         bit 31~0 - ifmap_176[31:0] (Read/Write)
-- 0x594 : reserved
-- 0x598 : Data signal of ifmap_177
--         bit 31~0 - ifmap_177[31:0] (Read/Write)
-- 0x59c : reserved
-- 0x5a0 : Data signal of ifmap_178
--         bit 31~0 - ifmap_178[31:0] (Read/Write)
-- 0x5a4 : reserved
-- 0x5a8 : Data signal of ifmap_179
--         bit 31~0 - ifmap_179[31:0] (Read/Write)
-- 0x5ac : reserved
-- 0x5b0 : Data signal of ifmap_180
--         bit 31~0 - ifmap_180[31:0] (Read/Write)
-- 0x5b4 : reserved
-- 0x5b8 : Data signal of ifmap_181
--         bit 31~0 - ifmap_181[31:0] (Read/Write)
-- 0x5bc : reserved
-- 0x5c0 : Data signal of ifmap_182
--         bit 31~0 - ifmap_182[31:0] (Read/Write)
-- 0x5c4 : reserved
-- 0x5c8 : Data signal of ifmap_183
--         bit 31~0 - ifmap_183[31:0] (Read/Write)
-- 0x5cc : reserved
-- 0x5d0 : Data signal of ifmap_184
--         bit 31~0 - ifmap_184[31:0] (Read/Write)
-- 0x5d4 : reserved
-- 0x5d8 : Data signal of ifmap_185
--         bit 31~0 - ifmap_185[31:0] (Read/Write)
-- 0x5dc : reserved
-- 0x5e0 : Data signal of ifmap_186
--         bit 31~0 - ifmap_186[31:0] (Read/Write)
-- 0x5e4 : reserved
-- 0x5e8 : Data signal of ifmap_187
--         bit 31~0 - ifmap_187[31:0] (Read/Write)
-- 0x5ec : reserved
-- 0x5f0 : Data signal of ifmap_188
--         bit 31~0 - ifmap_188[31:0] (Read/Write)
-- 0x5f4 : reserved
-- 0x5f8 : Data signal of ifmap_189
--         bit 31~0 - ifmap_189[31:0] (Read/Write)
-- 0x5fc : reserved
-- 0x600 : Data signal of ifmap_190
--         bit 31~0 - ifmap_190[31:0] (Read/Write)
-- 0x604 : reserved
-- 0x608 : Data signal of ifmap_191
--         bit 31~0 - ifmap_191[31:0] (Read/Write)
-- 0x60c : reserved
-- 0x610 : Data signal of ifmap_192
--         bit 31~0 - ifmap_192[31:0] (Read/Write)
-- 0x614 : reserved
-- 0x618 : Data signal of ifmap_193
--         bit 31~0 - ifmap_193[31:0] (Read/Write)
-- 0x61c : reserved
-- 0x620 : Data signal of ifmap_194
--         bit 31~0 - ifmap_194[31:0] (Read/Write)
-- 0x624 : reserved
-- 0x628 : Data signal of ifmap_195
--         bit 31~0 - ifmap_195[31:0] (Read/Write)
-- 0x62c : reserved
-- 0x630 : Data signal of ifmap_196
--         bit 31~0 - ifmap_196[31:0] (Read/Write)
-- 0x634 : reserved
-- 0x638 : Data signal of ifmap_197
--         bit 31~0 - ifmap_197[31:0] (Read/Write)
-- 0x63c : reserved
-- 0x640 : Data signal of ifmap_198
--         bit 31~0 - ifmap_198[31:0] (Read/Write)
-- 0x644 : reserved
-- 0x648 : Data signal of ifmap_199
--         bit 31~0 - ifmap_199[31:0] (Read/Write)
-- 0x64c : reserved
-- 0x650 : Data signal of ifmap_200
--         bit 31~0 - ifmap_200[31:0] (Read/Write)
-- 0x654 : reserved
-- 0x658 : Data signal of ifmap_201
--         bit 31~0 - ifmap_201[31:0] (Read/Write)
-- 0x65c : reserved
-- 0x660 : Data signal of ifmap_202
--         bit 31~0 - ifmap_202[31:0] (Read/Write)
-- 0x664 : reserved
-- 0x668 : Data signal of ifmap_203
--         bit 31~0 - ifmap_203[31:0] (Read/Write)
-- 0x66c : reserved
-- 0x670 : Data signal of ifmap_204
--         bit 31~0 - ifmap_204[31:0] (Read/Write)
-- 0x674 : reserved
-- 0x678 : Data signal of ifmap_205
--         bit 31~0 - ifmap_205[31:0] (Read/Write)
-- 0x67c : reserved
-- 0x680 : Data signal of ifmap_206
--         bit 31~0 - ifmap_206[31:0] (Read/Write)
-- 0x684 : reserved
-- 0x688 : Data signal of ifmap_207
--         bit 31~0 - ifmap_207[31:0] (Read/Write)
-- 0x68c : reserved
-- 0x690 : Data signal of ifmap_208
--         bit 31~0 - ifmap_208[31:0] (Read/Write)
-- 0x694 : reserved
-- 0x698 : Data signal of ifmap_209
--         bit 31~0 - ifmap_209[31:0] (Read/Write)
-- 0x69c : reserved
-- 0x6a0 : Data signal of ifmap_210
--         bit 31~0 - ifmap_210[31:0] (Read/Write)
-- 0x6a4 : reserved
-- 0x6a8 : Data signal of ifmap_211
--         bit 31~0 - ifmap_211[31:0] (Read/Write)
-- 0x6ac : reserved
-- 0x6b0 : Data signal of ifmap_212
--         bit 31~0 - ifmap_212[31:0] (Read/Write)
-- 0x6b4 : reserved
-- 0x6b8 : Data signal of ifmap_213
--         bit 31~0 - ifmap_213[31:0] (Read/Write)
-- 0x6bc : reserved
-- 0x6c0 : Data signal of ifmap_214
--         bit 31~0 - ifmap_214[31:0] (Read/Write)
-- 0x6c4 : reserved
-- 0x6c8 : Data signal of ifmap_215
--         bit 31~0 - ifmap_215[31:0] (Read/Write)
-- 0x6cc : reserved
-- 0x6d0 : Data signal of ifmap_216
--         bit 31~0 - ifmap_216[31:0] (Read/Write)
-- 0x6d4 : reserved
-- 0x6d8 : Data signal of ifmap_217
--         bit 31~0 - ifmap_217[31:0] (Read/Write)
-- 0x6dc : reserved
-- 0x6e0 : Data signal of ifmap_218
--         bit 31~0 - ifmap_218[31:0] (Read/Write)
-- 0x6e4 : reserved
-- 0x6e8 : Data signal of ifmap_219
--         bit 31~0 - ifmap_219[31:0] (Read/Write)
-- 0x6ec : reserved
-- 0x6f0 : Data signal of ifmap_220
--         bit 31~0 - ifmap_220[31:0] (Read/Write)
-- 0x6f4 : reserved
-- 0x6f8 : Data signal of ifmap_221
--         bit 31~0 - ifmap_221[31:0] (Read/Write)
-- 0x6fc : reserved
-- 0x700 : Data signal of ifmap_222
--         bit 31~0 - ifmap_222[31:0] (Read/Write)
-- 0x704 : reserved
-- 0x708 : Data signal of ifmap_223
--         bit 31~0 - ifmap_223[31:0] (Read/Write)
-- 0x70c : reserved
-- 0x710 : Data signal of ifmap_224
--         bit 31~0 - ifmap_224[31:0] (Read/Write)
-- 0x714 : reserved
-- 0x718 : Data signal of ifmap_225
--         bit 31~0 - ifmap_225[31:0] (Read/Write)
-- 0x71c : reserved
-- 0x720 : Data signal of ifmap_226
--         bit 31~0 - ifmap_226[31:0] (Read/Write)
-- 0x724 : reserved
-- 0x728 : Data signal of ifmap_227
--         bit 31~0 - ifmap_227[31:0] (Read/Write)
-- 0x72c : reserved
-- 0x730 : Data signal of ifmap_228
--         bit 31~0 - ifmap_228[31:0] (Read/Write)
-- 0x734 : reserved
-- 0x738 : Data signal of ifmap_229
--         bit 31~0 - ifmap_229[31:0] (Read/Write)
-- 0x73c : reserved
-- 0x740 : Data signal of ifmap_230
--         bit 31~0 - ifmap_230[31:0] (Read/Write)
-- 0x744 : reserved
-- 0x748 : Data signal of ifmap_231
--         bit 31~0 - ifmap_231[31:0] (Read/Write)
-- 0x74c : reserved
-- 0x750 : Data signal of ifmap_232
--         bit 31~0 - ifmap_232[31:0] (Read/Write)
-- 0x754 : reserved
-- 0x758 : Data signal of ifmap_233
--         bit 31~0 - ifmap_233[31:0] (Read/Write)
-- 0x75c : reserved
-- 0x760 : Data signal of ifmap_234
--         bit 31~0 - ifmap_234[31:0] (Read/Write)
-- 0x764 : reserved
-- 0x768 : Data signal of ifmap_235
--         bit 31~0 - ifmap_235[31:0] (Read/Write)
-- 0x76c : reserved
-- 0x770 : Data signal of ifmap_236
--         bit 31~0 - ifmap_236[31:0] (Read/Write)
-- 0x774 : reserved
-- 0x778 : Data signal of ifmap_237
--         bit 31~0 - ifmap_237[31:0] (Read/Write)
-- 0x77c : reserved
-- 0x780 : Data signal of ifmap_238
--         bit 31~0 - ifmap_238[31:0] (Read/Write)
-- 0x784 : reserved
-- 0x788 : Data signal of ifmap_239
--         bit 31~0 - ifmap_239[31:0] (Read/Write)
-- 0x78c : reserved
-- 0x790 : Data signal of ifmap_240
--         bit 31~0 - ifmap_240[31:0] (Read/Write)
-- 0x794 : reserved
-- 0x798 : Data signal of ifmap_241
--         bit 31~0 - ifmap_241[31:0] (Read/Write)
-- 0x79c : reserved
-- 0x7a0 : Data signal of ifmap_242
--         bit 31~0 - ifmap_242[31:0] (Read/Write)
-- 0x7a4 : reserved
-- 0x7a8 : Data signal of ifmap_243
--         bit 31~0 - ifmap_243[31:0] (Read/Write)
-- 0x7ac : reserved
-- 0x7b0 : Data signal of ifmap_244
--         bit 31~0 - ifmap_244[31:0] (Read/Write)
-- 0x7b4 : reserved
-- 0x7b8 : Data signal of ifmap_245
--         bit 31~0 - ifmap_245[31:0] (Read/Write)
-- 0x7bc : reserved
-- 0x7c0 : Data signal of ifmap_246
--         bit 31~0 - ifmap_246[31:0] (Read/Write)
-- 0x7c4 : reserved
-- 0x7c8 : Data signal of ifmap_247
--         bit 31~0 - ifmap_247[31:0] (Read/Write)
-- 0x7cc : reserved
-- 0x7d0 : Data signal of ifmap_248
--         bit 31~0 - ifmap_248[31:0] (Read/Write)
-- 0x7d4 : reserved
-- 0x7d8 : Data signal of ifmap_249
--         bit 31~0 - ifmap_249[31:0] (Read/Write)
-- 0x7dc : reserved
-- 0x7e0 : Data signal of ifmap_250
--         bit 31~0 - ifmap_250[31:0] (Read/Write)
-- 0x7e4 : reserved
-- 0x7e8 : Data signal of ifmap_251
--         bit 31~0 - ifmap_251[31:0] (Read/Write)
-- 0x7ec : reserved
-- 0x7f0 : Data signal of ifmap_252
--         bit 31~0 - ifmap_252[31:0] (Read/Write)
-- 0x7f4 : reserved
-- 0x7f8 : Data signal of ifmap_253
--         bit 31~0 - ifmap_253[31:0] (Read/Write)
-- 0x7fc : reserved
-- 0x800 : Data signal of ifmap_254
--         bit 31~0 - ifmap_254[31:0] (Read/Write)
-- 0x804 : reserved
-- 0x808 : Data signal of ifmap_255
--         bit 31~0 - ifmap_255[31:0] (Read/Write)
-- 0x80c : reserved
-- 0x810 : Data signal of filter_0
--         bit 31~0 - filter_0[31:0] (Read/Write)
-- 0x814 : reserved
-- 0x818 : Data signal of filter_1
--         bit 31~0 - filter_1[31:0] (Read/Write)
-- 0x81c : reserved
-- 0x820 : Data signal of filter_2
--         bit 31~0 - filter_2[31:0] (Read/Write)
-- 0x824 : reserved
-- 0x828 : Data signal of filter_3
--         bit 31~0 - filter_3[31:0] (Read/Write)
-- 0x82c : reserved
-- 0x830 : Data signal of filter_4
--         bit 31~0 - filter_4[31:0] (Read/Write)
-- 0x834 : reserved
-- 0x838 : Data signal of filter_5
--         bit 31~0 - filter_5[31:0] (Read/Write)
-- 0x83c : reserved
-- 0x840 : Data signal of filter_6
--         bit 31~0 - filter_6[31:0] (Read/Write)
-- 0x844 : reserved
-- 0x848 : Data signal of filter_7
--         bit 31~0 - filter_7[31:0] (Read/Write)
-- 0x84c : reserved
-- 0x850 : Data signal of filter_8
--         bit 31~0 - filter_8[31:0] (Read/Write)
-- 0x854 : reserved
-- 0x858 : Data signal of filter_9
--         bit 31~0 - filter_9[31:0] (Read/Write)
-- 0x85c : reserved
-- 0x860 : Data signal of filter_10
--         bit 31~0 - filter_10[31:0] (Read/Write)
-- 0x864 : reserved
-- 0x868 : Data signal of filter_11
--         bit 31~0 - filter_11[31:0] (Read/Write)
-- 0x86c : reserved
-- 0x870 : Data signal of filter_12
--         bit 31~0 - filter_12[31:0] (Read/Write)
-- 0x874 : reserved
-- 0x878 : Data signal of filter_13
--         bit 31~0 - filter_13[31:0] (Read/Write)
-- 0x87c : reserved
-- 0x880 : Data signal of filter_14
--         bit 31~0 - filter_14[31:0] (Read/Write)
-- 0x884 : reserved
-- 0x888 : Data signal of filter_15
--         bit 31~0 - filter_15[31:0] (Read/Write)
-- 0x88c : reserved
-- 0x890 : Data signal of filter_16
--         bit 31~0 - filter_16[31:0] (Read/Write)
-- 0x894 : reserved
-- 0x898 : Data signal of filter_17
--         bit 31~0 - filter_17[31:0] (Read/Write)
-- 0x89c : reserved
-- 0x8a0 : Data signal of filter_18
--         bit 31~0 - filter_18[31:0] (Read/Write)
-- 0x8a4 : reserved
-- 0x8a8 : Data signal of filter_19
--         bit 31~0 - filter_19[31:0] (Read/Write)
-- 0x8ac : reserved
-- 0x8b0 : Data signal of filter_20
--         bit 31~0 - filter_20[31:0] (Read/Write)
-- 0x8b4 : reserved
-- 0x8b8 : Data signal of filter_21
--         bit 31~0 - filter_21[31:0] (Read/Write)
-- 0x8bc : reserved
-- 0x8c0 : Data signal of filter_22
--         bit 31~0 - filter_22[31:0] (Read/Write)
-- 0x8c4 : reserved
-- 0x8c8 : Data signal of filter_23
--         bit 31~0 - filter_23[31:0] (Read/Write)
-- 0x8cc : reserved
-- 0x8d0 : Data signal of filter_24
--         bit 31~0 - filter_24[31:0] (Read/Write)
-- 0x8d4 : reserved
-- 0x900 ~
-- 0x93f : Memory 'ofmap_0' (12 * 32b)
--         Word n : bit [31:0] - ofmap_0[n]
-- 0x940 ~
-- 0x97f : Memory 'ofmap_1' (12 * 32b)
--         Word n : bit [31:0] - ofmap_1[n]
-- 0x980 ~
-- 0x9bf : Memory 'ofmap_2' (12 * 32b)
--         Word n : bit [31:0] - ofmap_2[n]
-- 0x9c0 ~
-- 0x9ff : Memory 'ofmap_3' (12 * 32b)
--         Word n : bit [31:0] - ofmap_3[n]
-- 0xa00 ~
-- 0xa3f : Memory 'ofmap_4' (12 * 32b)
--         Word n : bit [31:0] - ofmap_4[n]
-- 0xa40 ~
-- 0xa7f : Memory 'ofmap_5' (12 * 32b)
--         Word n : bit [31:0] - ofmap_5[n]
-- 0xa80 ~
-- 0xabf : Memory 'ofmap_6' (12 * 32b)
--         Word n : bit [31:0] - ofmap_6[n]
-- 0xac0 ~
-- 0xaff : Memory 'ofmap_7' (12 * 32b)
--         Word n : bit [31:0] - ofmap_7[n]
-- 0xb00 ~
-- 0xb3f : Memory 'ofmap_8' (12 * 32b)
--         Word n : bit [31:0] - ofmap_8[n]
-- 0xb40 ~
-- 0xb7f : Memory 'ofmap_9' (12 * 32b)
--         Word n : bit [31:0] - ofmap_9[n]
-- 0xb80 ~
-- 0xbbf : Memory 'ofmap_10' (12 * 32b)
--         Word n : bit [31:0] - ofmap_10[n]
-- 0xbc0 ~
-- 0xbff : Memory 'ofmap_11' (12 * 32b)
--         Word n : bit [31:0] - ofmap_11[n]
-- (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

architecture behave of conv_AXILiteS_s_axi is
    type states is (wridle, wrdata, wrresp, wrreset, rdidle, rddata, rdreset);  -- read and write fsm states
    signal wstate  : states := wrreset;
    signal rstate  : states := rdreset;
    signal wnext, rnext: states;
    constant ADDR_IFMAP_0_DATA_0   : INTEGER := 16#010#;
    constant ADDR_IFMAP_0_CTRL     : INTEGER := 16#014#;
    constant ADDR_IFMAP_1_DATA_0   : INTEGER := 16#018#;
    constant ADDR_IFMAP_1_CTRL     : INTEGER := 16#01c#;
    constant ADDR_IFMAP_2_DATA_0   : INTEGER := 16#020#;
    constant ADDR_IFMAP_2_CTRL     : INTEGER := 16#024#;
    constant ADDR_IFMAP_3_DATA_0   : INTEGER := 16#028#;
    constant ADDR_IFMAP_3_CTRL     : INTEGER := 16#02c#;
    constant ADDR_IFMAP_4_DATA_0   : INTEGER := 16#030#;
    constant ADDR_IFMAP_4_CTRL     : INTEGER := 16#034#;
    constant ADDR_IFMAP_5_DATA_0   : INTEGER := 16#038#;
    constant ADDR_IFMAP_5_CTRL     : INTEGER := 16#03c#;
    constant ADDR_IFMAP_6_DATA_0   : INTEGER := 16#040#;
    constant ADDR_IFMAP_6_CTRL     : INTEGER := 16#044#;
    constant ADDR_IFMAP_7_DATA_0   : INTEGER := 16#048#;
    constant ADDR_IFMAP_7_CTRL     : INTEGER := 16#04c#;
    constant ADDR_IFMAP_8_DATA_0   : INTEGER := 16#050#;
    constant ADDR_IFMAP_8_CTRL     : INTEGER := 16#054#;
    constant ADDR_IFMAP_9_DATA_0   : INTEGER := 16#058#;
    constant ADDR_IFMAP_9_CTRL     : INTEGER := 16#05c#;
    constant ADDR_IFMAP_10_DATA_0  : INTEGER := 16#060#;
    constant ADDR_IFMAP_10_CTRL    : INTEGER := 16#064#;
    constant ADDR_IFMAP_11_DATA_0  : INTEGER := 16#068#;
    constant ADDR_IFMAP_11_CTRL    : INTEGER := 16#06c#;
    constant ADDR_IFMAP_12_DATA_0  : INTEGER := 16#070#;
    constant ADDR_IFMAP_12_CTRL    : INTEGER := 16#074#;
    constant ADDR_IFMAP_13_DATA_0  : INTEGER := 16#078#;
    constant ADDR_IFMAP_13_CTRL    : INTEGER := 16#07c#;
    constant ADDR_IFMAP_14_DATA_0  : INTEGER := 16#080#;
    constant ADDR_IFMAP_14_CTRL    : INTEGER := 16#084#;
    constant ADDR_IFMAP_15_DATA_0  : INTEGER := 16#088#;
    constant ADDR_IFMAP_15_CTRL    : INTEGER := 16#08c#;
    constant ADDR_IFMAP_16_DATA_0  : INTEGER := 16#090#;
    constant ADDR_IFMAP_16_CTRL    : INTEGER := 16#094#;
    constant ADDR_IFMAP_17_DATA_0  : INTEGER := 16#098#;
    constant ADDR_IFMAP_17_CTRL    : INTEGER := 16#09c#;
    constant ADDR_IFMAP_18_DATA_0  : INTEGER := 16#0a0#;
    constant ADDR_IFMAP_18_CTRL    : INTEGER := 16#0a4#;
    constant ADDR_IFMAP_19_DATA_0  : INTEGER := 16#0a8#;
    constant ADDR_IFMAP_19_CTRL    : INTEGER := 16#0ac#;
    constant ADDR_IFMAP_20_DATA_0  : INTEGER := 16#0b0#;
    constant ADDR_IFMAP_20_CTRL    : INTEGER := 16#0b4#;
    constant ADDR_IFMAP_21_DATA_0  : INTEGER := 16#0b8#;
    constant ADDR_IFMAP_21_CTRL    : INTEGER := 16#0bc#;
    constant ADDR_IFMAP_22_DATA_0  : INTEGER := 16#0c0#;
    constant ADDR_IFMAP_22_CTRL    : INTEGER := 16#0c4#;
    constant ADDR_IFMAP_23_DATA_0  : INTEGER := 16#0c8#;
    constant ADDR_IFMAP_23_CTRL    : INTEGER := 16#0cc#;
    constant ADDR_IFMAP_24_DATA_0  : INTEGER := 16#0d0#;
    constant ADDR_IFMAP_24_CTRL    : INTEGER := 16#0d4#;
    constant ADDR_IFMAP_25_DATA_0  : INTEGER := 16#0d8#;
    constant ADDR_IFMAP_25_CTRL    : INTEGER := 16#0dc#;
    constant ADDR_IFMAP_26_DATA_0  : INTEGER := 16#0e0#;
    constant ADDR_IFMAP_26_CTRL    : INTEGER := 16#0e4#;
    constant ADDR_IFMAP_27_DATA_0  : INTEGER := 16#0e8#;
    constant ADDR_IFMAP_27_CTRL    : INTEGER := 16#0ec#;
    constant ADDR_IFMAP_28_DATA_0  : INTEGER := 16#0f0#;
    constant ADDR_IFMAP_28_CTRL    : INTEGER := 16#0f4#;
    constant ADDR_IFMAP_29_DATA_0  : INTEGER := 16#0f8#;
    constant ADDR_IFMAP_29_CTRL    : INTEGER := 16#0fc#;
    constant ADDR_IFMAP_30_DATA_0  : INTEGER := 16#100#;
    constant ADDR_IFMAP_30_CTRL    : INTEGER := 16#104#;
    constant ADDR_IFMAP_31_DATA_0  : INTEGER := 16#108#;
    constant ADDR_IFMAP_31_CTRL    : INTEGER := 16#10c#;
    constant ADDR_IFMAP_32_DATA_0  : INTEGER := 16#110#;
    constant ADDR_IFMAP_32_CTRL    : INTEGER := 16#114#;
    constant ADDR_IFMAP_33_DATA_0  : INTEGER := 16#118#;
    constant ADDR_IFMAP_33_CTRL    : INTEGER := 16#11c#;
    constant ADDR_IFMAP_34_DATA_0  : INTEGER := 16#120#;
    constant ADDR_IFMAP_34_CTRL    : INTEGER := 16#124#;
    constant ADDR_IFMAP_35_DATA_0  : INTEGER := 16#128#;
    constant ADDR_IFMAP_35_CTRL    : INTEGER := 16#12c#;
    constant ADDR_IFMAP_36_DATA_0  : INTEGER := 16#130#;
    constant ADDR_IFMAP_36_CTRL    : INTEGER := 16#134#;
    constant ADDR_IFMAP_37_DATA_0  : INTEGER := 16#138#;
    constant ADDR_IFMAP_37_CTRL    : INTEGER := 16#13c#;
    constant ADDR_IFMAP_38_DATA_0  : INTEGER := 16#140#;
    constant ADDR_IFMAP_38_CTRL    : INTEGER := 16#144#;
    constant ADDR_IFMAP_39_DATA_0  : INTEGER := 16#148#;
    constant ADDR_IFMAP_39_CTRL    : INTEGER := 16#14c#;
    constant ADDR_IFMAP_40_DATA_0  : INTEGER := 16#150#;
    constant ADDR_IFMAP_40_CTRL    : INTEGER := 16#154#;
    constant ADDR_IFMAP_41_DATA_0  : INTEGER := 16#158#;
    constant ADDR_IFMAP_41_CTRL    : INTEGER := 16#15c#;
    constant ADDR_IFMAP_42_DATA_0  : INTEGER := 16#160#;
    constant ADDR_IFMAP_42_CTRL    : INTEGER := 16#164#;
    constant ADDR_IFMAP_43_DATA_0  : INTEGER := 16#168#;
    constant ADDR_IFMAP_43_CTRL    : INTEGER := 16#16c#;
    constant ADDR_IFMAP_44_DATA_0  : INTEGER := 16#170#;
    constant ADDR_IFMAP_44_CTRL    : INTEGER := 16#174#;
    constant ADDR_IFMAP_45_DATA_0  : INTEGER := 16#178#;
    constant ADDR_IFMAP_45_CTRL    : INTEGER := 16#17c#;
    constant ADDR_IFMAP_46_DATA_0  : INTEGER := 16#180#;
    constant ADDR_IFMAP_46_CTRL    : INTEGER := 16#184#;
    constant ADDR_IFMAP_47_DATA_0  : INTEGER := 16#188#;
    constant ADDR_IFMAP_47_CTRL    : INTEGER := 16#18c#;
    constant ADDR_IFMAP_48_DATA_0  : INTEGER := 16#190#;
    constant ADDR_IFMAP_48_CTRL    : INTEGER := 16#194#;
    constant ADDR_IFMAP_49_DATA_0  : INTEGER := 16#198#;
    constant ADDR_IFMAP_49_CTRL    : INTEGER := 16#19c#;
    constant ADDR_IFMAP_50_DATA_0  : INTEGER := 16#1a0#;
    constant ADDR_IFMAP_50_CTRL    : INTEGER := 16#1a4#;
    constant ADDR_IFMAP_51_DATA_0  : INTEGER := 16#1a8#;
    constant ADDR_IFMAP_51_CTRL    : INTEGER := 16#1ac#;
    constant ADDR_IFMAP_52_DATA_0  : INTEGER := 16#1b0#;
    constant ADDR_IFMAP_52_CTRL    : INTEGER := 16#1b4#;
    constant ADDR_IFMAP_53_DATA_0  : INTEGER := 16#1b8#;
    constant ADDR_IFMAP_53_CTRL    : INTEGER := 16#1bc#;
    constant ADDR_IFMAP_54_DATA_0  : INTEGER := 16#1c0#;
    constant ADDR_IFMAP_54_CTRL    : INTEGER := 16#1c4#;
    constant ADDR_IFMAP_55_DATA_0  : INTEGER := 16#1c8#;
    constant ADDR_IFMAP_55_CTRL    : INTEGER := 16#1cc#;
    constant ADDR_IFMAP_56_DATA_0  : INTEGER := 16#1d0#;
    constant ADDR_IFMAP_56_CTRL    : INTEGER := 16#1d4#;
    constant ADDR_IFMAP_57_DATA_0  : INTEGER := 16#1d8#;
    constant ADDR_IFMAP_57_CTRL    : INTEGER := 16#1dc#;
    constant ADDR_IFMAP_58_DATA_0  : INTEGER := 16#1e0#;
    constant ADDR_IFMAP_58_CTRL    : INTEGER := 16#1e4#;
    constant ADDR_IFMAP_59_DATA_0  : INTEGER := 16#1e8#;
    constant ADDR_IFMAP_59_CTRL    : INTEGER := 16#1ec#;
    constant ADDR_IFMAP_60_DATA_0  : INTEGER := 16#1f0#;
    constant ADDR_IFMAP_60_CTRL    : INTEGER := 16#1f4#;
    constant ADDR_IFMAP_61_DATA_0  : INTEGER := 16#1f8#;
    constant ADDR_IFMAP_61_CTRL    : INTEGER := 16#1fc#;
    constant ADDR_IFMAP_62_DATA_0  : INTEGER := 16#200#;
    constant ADDR_IFMAP_62_CTRL    : INTEGER := 16#204#;
    constant ADDR_IFMAP_63_DATA_0  : INTEGER := 16#208#;
    constant ADDR_IFMAP_63_CTRL    : INTEGER := 16#20c#;
    constant ADDR_IFMAP_64_DATA_0  : INTEGER := 16#210#;
    constant ADDR_IFMAP_64_CTRL    : INTEGER := 16#214#;
    constant ADDR_IFMAP_65_DATA_0  : INTEGER := 16#218#;
    constant ADDR_IFMAP_65_CTRL    : INTEGER := 16#21c#;
    constant ADDR_IFMAP_66_DATA_0  : INTEGER := 16#220#;
    constant ADDR_IFMAP_66_CTRL    : INTEGER := 16#224#;
    constant ADDR_IFMAP_67_DATA_0  : INTEGER := 16#228#;
    constant ADDR_IFMAP_67_CTRL    : INTEGER := 16#22c#;
    constant ADDR_IFMAP_68_DATA_0  : INTEGER := 16#230#;
    constant ADDR_IFMAP_68_CTRL    : INTEGER := 16#234#;
    constant ADDR_IFMAP_69_DATA_0  : INTEGER := 16#238#;
    constant ADDR_IFMAP_69_CTRL    : INTEGER := 16#23c#;
    constant ADDR_IFMAP_70_DATA_0  : INTEGER := 16#240#;
    constant ADDR_IFMAP_70_CTRL    : INTEGER := 16#244#;
    constant ADDR_IFMAP_71_DATA_0  : INTEGER := 16#248#;
    constant ADDR_IFMAP_71_CTRL    : INTEGER := 16#24c#;
    constant ADDR_IFMAP_72_DATA_0  : INTEGER := 16#250#;
    constant ADDR_IFMAP_72_CTRL    : INTEGER := 16#254#;
    constant ADDR_IFMAP_73_DATA_0  : INTEGER := 16#258#;
    constant ADDR_IFMAP_73_CTRL    : INTEGER := 16#25c#;
    constant ADDR_IFMAP_74_DATA_0  : INTEGER := 16#260#;
    constant ADDR_IFMAP_74_CTRL    : INTEGER := 16#264#;
    constant ADDR_IFMAP_75_DATA_0  : INTEGER := 16#268#;
    constant ADDR_IFMAP_75_CTRL    : INTEGER := 16#26c#;
    constant ADDR_IFMAP_76_DATA_0  : INTEGER := 16#270#;
    constant ADDR_IFMAP_76_CTRL    : INTEGER := 16#274#;
    constant ADDR_IFMAP_77_DATA_0  : INTEGER := 16#278#;
    constant ADDR_IFMAP_77_CTRL    : INTEGER := 16#27c#;
    constant ADDR_IFMAP_78_DATA_0  : INTEGER := 16#280#;
    constant ADDR_IFMAP_78_CTRL    : INTEGER := 16#284#;
    constant ADDR_IFMAP_79_DATA_0  : INTEGER := 16#288#;
    constant ADDR_IFMAP_79_CTRL    : INTEGER := 16#28c#;
    constant ADDR_IFMAP_80_DATA_0  : INTEGER := 16#290#;
    constant ADDR_IFMAP_80_CTRL    : INTEGER := 16#294#;
    constant ADDR_IFMAP_81_DATA_0  : INTEGER := 16#298#;
    constant ADDR_IFMAP_81_CTRL    : INTEGER := 16#29c#;
    constant ADDR_IFMAP_82_DATA_0  : INTEGER := 16#2a0#;
    constant ADDR_IFMAP_82_CTRL    : INTEGER := 16#2a4#;
    constant ADDR_IFMAP_83_DATA_0  : INTEGER := 16#2a8#;
    constant ADDR_IFMAP_83_CTRL    : INTEGER := 16#2ac#;
    constant ADDR_IFMAP_84_DATA_0  : INTEGER := 16#2b0#;
    constant ADDR_IFMAP_84_CTRL    : INTEGER := 16#2b4#;
    constant ADDR_IFMAP_85_DATA_0  : INTEGER := 16#2b8#;
    constant ADDR_IFMAP_85_CTRL    : INTEGER := 16#2bc#;
    constant ADDR_IFMAP_86_DATA_0  : INTEGER := 16#2c0#;
    constant ADDR_IFMAP_86_CTRL    : INTEGER := 16#2c4#;
    constant ADDR_IFMAP_87_DATA_0  : INTEGER := 16#2c8#;
    constant ADDR_IFMAP_87_CTRL    : INTEGER := 16#2cc#;
    constant ADDR_IFMAP_88_DATA_0  : INTEGER := 16#2d0#;
    constant ADDR_IFMAP_88_CTRL    : INTEGER := 16#2d4#;
    constant ADDR_IFMAP_89_DATA_0  : INTEGER := 16#2d8#;
    constant ADDR_IFMAP_89_CTRL    : INTEGER := 16#2dc#;
    constant ADDR_IFMAP_90_DATA_0  : INTEGER := 16#2e0#;
    constant ADDR_IFMAP_90_CTRL    : INTEGER := 16#2e4#;
    constant ADDR_IFMAP_91_DATA_0  : INTEGER := 16#2e8#;
    constant ADDR_IFMAP_91_CTRL    : INTEGER := 16#2ec#;
    constant ADDR_IFMAP_92_DATA_0  : INTEGER := 16#2f0#;
    constant ADDR_IFMAP_92_CTRL    : INTEGER := 16#2f4#;
    constant ADDR_IFMAP_93_DATA_0  : INTEGER := 16#2f8#;
    constant ADDR_IFMAP_93_CTRL    : INTEGER := 16#2fc#;
    constant ADDR_IFMAP_94_DATA_0  : INTEGER := 16#300#;
    constant ADDR_IFMAP_94_CTRL    : INTEGER := 16#304#;
    constant ADDR_IFMAP_95_DATA_0  : INTEGER := 16#308#;
    constant ADDR_IFMAP_95_CTRL    : INTEGER := 16#30c#;
    constant ADDR_IFMAP_96_DATA_0  : INTEGER := 16#310#;
    constant ADDR_IFMAP_96_CTRL    : INTEGER := 16#314#;
    constant ADDR_IFMAP_97_DATA_0  : INTEGER := 16#318#;
    constant ADDR_IFMAP_97_CTRL    : INTEGER := 16#31c#;
    constant ADDR_IFMAP_98_DATA_0  : INTEGER := 16#320#;
    constant ADDR_IFMAP_98_CTRL    : INTEGER := 16#324#;
    constant ADDR_IFMAP_99_DATA_0  : INTEGER := 16#328#;
    constant ADDR_IFMAP_99_CTRL    : INTEGER := 16#32c#;
    constant ADDR_IFMAP_100_DATA_0 : INTEGER := 16#330#;
    constant ADDR_IFMAP_100_CTRL   : INTEGER := 16#334#;
    constant ADDR_IFMAP_101_DATA_0 : INTEGER := 16#338#;
    constant ADDR_IFMAP_101_CTRL   : INTEGER := 16#33c#;
    constant ADDR_IFMAP_102_DATA_0 : INTEGER := 16#340#;
    constant ADDR_IFMAP_102_CTRL   : INTEGER := 16#344#;
    constant ADDR_IFMAP_103_DATA_0 : INTEGER := 16#348#;
    constant ADDR_IFMAP_103_CTRL   : INTEGER := 16#34c#;
    constant ADDR_IFMAP_104_DATA_0 : INTEGER := 16#350#;
    constant ADDR_IFMAP_104_CTRL   : INTEGER := 16#354#;
    constant ADDR_IFMAP_105_DATA_0 : INTEGER := 16#358#;
    constant ADDR_IFMAP_105_CTRL   : INTEGER := 16#35c#;
    constant ADDR_IFMAP_106_DATA_0 : INTEGER := 16#360#;
    constant ADDR_IFMAP_106_CTRL   : INTEGER := 16#364#;
    constant ADDR_IFMAP_107_DATA_0 : INTEGER := 16#368#;
    constant ADDR_IFMAP_107_CTRL   : INTEGER := 16#36c#;
    constant ADDR_IFMAP_108_DATA_0 : INTEGER := 16#370#;
    constant ADDR_IFMAP_108_CTRL   : INTEGER := 16#374#;
    constant ADDR_IFMAP_109_DATA_0 : INTEGER := 16#378#;
    constant ADDR_IFMAP_109_CTRL   : INTEGER := 16#37c#;
    constant ADDR_IFMAP_110_DATA_0 : INTEGER := 16#380#;
    constant ADDR_IFMAP_110_CTRL   : INTEGER := 16#384#;
    constant ADDR_IFMAP_111_DATA_0 : INTEGER := 16#388#;
    constant ADDR_IFMAP_111_CTRL   : INTEGER := 16#38c#;
    constant ADDR_IFMAP_112_DATA_0 : INTEGER := 16#390#;
    constant ADDR_IFMAP_112_CTRL   : INTEGER := 16#394#;
    constant ADDR_IFMAP_113_DATA_0 : INTEGER := 16#398#;
    constant ADDR_IFMAP_113_CTRL   : INTEGER := 16#39c#;
    constant ADDR_IFMAP_114_DATA_0 : INTEGER := 16#3a0#;
    constant ADDR_IFMAP_114_CTRL   : INTEGER := 16#3a4#;
    constant ADDR_IFMAP_115_DATA_0 : INTEGER := 16#3a8#;
    constant ADDR_IFMAP_115_CTRL   : INTEGER := 16#3ac#;
    constant ADDR_IFMAP_116_DATA_0 : INTEGER := 16#3b0#;
    constant ADDR_IFMAP_116_CTRL   : INTEGER := 16#3b4#;
    constant ADDR_IFMAP_117_DATA_0 : INTEGER := 16#3b8#;
    constant ADDR_IFMAP_117_CTRL   : INTEGER := 16#3bc#;
    constant ADDR_IFMAP_118_DATA_0 : INTEGER := 16#3c0#;
    constant ADDR_IFMAP_118_CTRL   : INTEGER := 16#3c4#;
    constant ADDR_IFMAP_119_DATA_0 : INTEGER := 16#3c8#;
    constant ADDR_IFMAP_119_CTRL   : INTEGER := 16#3cc#;
    constant ADDR_IFMAP_120_DATA_0 : INTEGER := 16#3d0#;
    constant ADDR_IFMAP_120_CTRL   : INTEGER := 16#3d4#;
    constant ADDR_IFMAP_121_DATA_0 : INTEGER := 16#3d8#;
    constant ADDR_IFMAP_121_CTRL   : INTEGER := 16#3dc#;
    constant ADDR_IFMAP_122_DATA_0 : INTEGER := 16#3e0#;
    constant ADDR_IFMAP_122_CTRL   : INTEGER := 16#3e4#;
    constant ADDR_IFMAP_123_DATA_0 : INTEGER := 16#3e8#;
    constant ADDR_IFMAP_123_CTRL   : INTEGER := 16#3ec#;
    constant ADDR_IFMAP_124_DATA_0 : INTEGER := 16#3f0#;
    constant ADDR_IFMAP_124_CTRL   : INTEGER := 16#3f4#;
    constant ADDR_IFMAP_125_DATA_0 : INTEGER := 16#3f8#;
    constant ADDR_IFMAP_125_CTRL   : INTEGER := 16#3fc#;
    constant ADDR_IFMAP_126_DATA_0 : INTEGER := 16#400#;
    constant ADDR_IFMAP_126_CTRL   : INTEGER := 16#404#;
    constant ADDR_IFMAP_127_DATA_0 : INTEGER := 16#408#;
    constant ADDR_IFMAP_127_CTRL   : INTEGER := 16#40c#;
    constant ADDR_IFMAP_128_DATA_0 : INTEGER := 16#410#;
    constant ADDR_IFMAP_128_CTRL   : INTEGER := 16#414#;
    constant ADDR_IFMAP_129_DATA_0 : INTEGER := 16#418#;
    constant ADDR_IFMAP_129_CTRL   : INTEGER := 16#41c#;
    constant ADDR_IFMAP_130_DATA_0 : INTEGER := 16#420#;
    constant ADDR_IFMAP_130_CTRL   : INTEGER := 16#424#;
    constant ADDR_IFMAP_131_DATA_0 : INTEGER := 16#428#;
    constant ADDR_IFMAP_131_CTRL   : INTEGER := 16#42c#;
    constant ADDR_IFMAP_132_DATA_0 : INTEGER := 16#430#;
    constant ADDR_IFMAP_132_CTRL   : INTEGER := 16#434#;
    constant ADDR_IFMAP_133_DATA_0 : INTEGER := 16#438#;
    constant ADDR_IFMAP_133_CTRL   : INTEGER := 16#43c#;
    constant ADDR_IFMAP_134_DATA_0 : INTEGER := 16#440#;
    constant ADDR_IFMAP_134_CTRL   : INTEGER := 16#444#;
    constant ADDR_IFMAP_135_DATA_0 : INTEGER := 16#448#;
    constant ADDR_IFMAP_135_CTRL   : INTEGER := 16#44c#;
    constant ADDR_IFMAP_136_DATA_0 : INTEGER := 16#450#;
    constant ADDR_IFMAP_136_CTRL   : INTEGER := 16#454#;
    constant ADDR_IFMAP_137_DATA_0 : INTEGER := 16#458#;
    constant ADDR_IFMAP_137_CTRL   : INTEGER := 16#45c#;
    constant ADDR_IFMAP_138_DATA_0 : INTEGER := 16#460#;
    constant ADDR_IFMAP_138_CTRL   : INTEGER := 16#464#;
    constant ADDR_IFMAP_139_DATA_0 : INTEGER := 16#468#;
    constant ADDR_IFMAP_139_CTRL   : INTEGER := 16#46c#;
    constant ADDR_IFMAP_140_DATA_0 : INTEGER := 16#470#;
    constant ADDR_IFMAP_140_CTRL   : INTEGER := 16#474#;
    constant ADDR_IFMAP_141_DATA_0 : INTEGER := 16#478#;
    constant ADDR_IFMAP_141_CTRL   : INTEGER := 16#47c#;
    constant ADDR_IFMAP_142_DATA_0 : INTEGER := 16#480#;
    constant ADDR_IFMAP_142_CTRL   : INTEGER := 16#484#;
    constant ADDR_IFMAP_143_DATA_0 : INTEGER := 16#488#;
    constant ADDR_IFMAP_143_CTRL   : INTEGER := 16#48c#;
    constant ADDR_IFMAP_144_DATA_0 : INTEGER := 16#490#;
    constant ADDR_IFMAP_144_CTRL   : INTEGER := 16#494#;
    constant ADDR_IFMAP_145_DATA_0 : INTEGER := 16#498#;
    constant ADDR_IFMAP_145_CTRL   : INTEGER := 16#49c#;
    constant ADDR_IFMAP_146_DATA_0 : INTEGER := 16#4a0#;
    constant ADDR_IFMAP_146_CTRL   : INTEGER := 16#4a4#;
    constant ADDR_IFMAP_147_DATA_0 : INTEGER := 16#4a8#;
    constant ADDR_IFMAP_147_CTRL   : INTEGER := 16#4ac#;
    constant ADDR_IFMAP_148_DATA_0 : INTEGER := 16#4b0#;
    constant ADDR_IFMAP_148_CTRL   : INTEGER := 16#4b4#;
    constant ADDR_IFMAP_149_DATA_0 : INTEGER := 16#4b8#;
    constant ADDR_IFMAP_149_CTRL   : INTEGER := 16#4bc#;
    constant ADDR_IFMAP_150_DATA_0 : INTEGER := 16#4c0#;
    constant ADDR_IFMAP_150_CTRL   : INTEGER := 16#4c4#;
    constant ADDR_IFMAP_151_DATA_0 : INTEGER := 16#4c8#;
    constant ADDR_IFMAP_151_CTRL   : INTEGER := 16#4cc#;
    constant ADDR_IFMAP_152_DATA_0 : INTEGER := 16#4d0#;
    constant ADDR_IFMAP_152_CTRL   : INTEGER := 16#4d4#;
    constant ADDR_IFMAP_153_DATA_0 : INTEGER := 16#4d8#;
    constant ADDR_IFMAP_153_CTRL   : INTEGER := 16#4dc#;
    constant ADDR_IFMAP_154_DATA_0 : INTEGER := 16#4e0#;
    constant ADDR_IFMAP_154_CTRL   : INTEGER := 16#4e4#;
    constant ADDR_IFMAP_155_DATA_0 : INTEGER := 16#4e8#;
    constant ADDR_IFMAP_155_CTRL   : INTEGER := 16#4ec#;
    constant ADDR_IFMAP_156_DATA_0 : INTEGER := 16#4f0#;
    constant ADDR_IFMAP_156_CTRL   : INTEGER := 16#4f4#;
    constant ADDR_IFMAP_157_DATA_0 : INTEGER := 16#4f8#;
    constant ADDR_IFMAP_157_CTRL   : INTEGER := 16#4fc#;
    constant ADDR_IFMAP_158_DATA_0 : INTEGER := 16#500#;
    constant ADDR_IFMAP_158_CTRL   : INTEGER := 16#504#;
    constant ADDR_IFMAP_159_DATA_0 : INTEGER := 16#508#;
    constant ADDR_IFMAP_159_CTRL   : INTEGER := 16#50c#;
    constant ADDR_IFMAP_160_DATA_0 : INTEGER := 16#510#;
    constant ADDR_IFMAP_160_CTRL   : INTEGER := 16#514#;
    constant ADDR_IFMAP_161_DATA_0 : INTEGER := 16#518#;
    constant ADDR_IFMAP_161_CTRL   : INTEGER := 16#51c#;
    constant ADDR_IFMAP_162_DATA_0 : INTEGER := 16#520#;
    constant ADDR_IFMAP_162_CTRL   : INTEGER := 16#524#;
    constant ADDR_IFMAP_163_DATA_0 : INTEGER := 16#528#;
    constant ADDR_IFMAP_163_CTRL   : INTEGER := 16#52c#;
    constant ADDR_IFMAP_164_DATA_0 : INTEGER := 16#530#;
    constant ADDR_IFMAP_164_CTRL   : INTEGER := 16#534#;
    constant ADDR_IFMAP_165_DATA_0 : INTEGER := 16#538#;
    constant ADDR_IFMAP_165_CTRL   : INTEGER := 16#53c#;
    constant ADDR_IFMAP_166_DATA_0 : INTEGER := 16#540#;
    constant ADDR_IFMAP_166_CTRL   : INTEGER := 16#544#;
    constant ADDR_IFMAP_167_DATA_0 : INTEGER := 16#548#;
    constant ADDR_IFMAP_167_CTRL   : INTEGER := 16#54c#;
    constant ADDR_IFMAP_168_DATA_0 : INTEGER := 16#550#;
    constant ADDR_IFMAP_168_CTRL   : INTEGER := 16#554#;
    constant ADDR_IFMAP_169_DATA_0 : INTEGER := 16#558#;
    constant ADDR_IFMAP_169_CTRL   : INTEGER := 16#55c#;
    constant ADDR_IFMAP_170_DATA_0 : INTEGER := 16#560#;
    constant ADDR_IFMAP_170_CTRL   : INTEGER := 16#564#;
    constant ADDR_IFMAP_171_DATA_0 : INTEGER := 16#568#;
    constant ADDR_IFMAP_171_CTRL   : INTEGER := 16#56c#;
    constant ADDR_IFMAP_172_DATA_0 : INTEGER := 16#570#;
    constant ADDR_IFMAP_172_CTRL   : INTEGER := 16#574#;
    constant ADDR_IFMAP_173_DATA_0 : INTEGER := 16#578#;
    constant ADDR_IFMAP_173_CTRL   : INTEGER := 16#57c#;
    constant ADDR_IFMAP_174_DATA_0 : INTEGER := 16#580#;
    constant ADDR_IFMAP_174_CTRL   : INTEGER := 16#584#;
    constant ADDR_IFMAP_175_DATA_0 : INTEGER := 16#588#;
    constant ADDR_IFMAP_175_CTRL   : INTEGER := 16#58c#;
    constant ADDR_IFMAP_176_DATA_0 : INTEGER := 16#590#;
    constant ADDR_IFMAP_176_CTRL   : INTEGER := 16#594#;
    constant ADDR_IFMAP_177_DATA_0 : INTEGER := 16#598#;
    constant ADDR_IFMAP_177_CTRL   : INTEGER := 16#59c#;
    constant ADDR_IFMAP_178_DATA_0 : INTEGER := 16#5a0#;
    constant ADDR_IFMAP_178_CTRL   : INTEGER := 16#5a4#;
    constant ADDR_IFMAP_179_DATA_0 : INTEGER := 16#5a8#;
    constant ADDR_IFMAP_179_CTRL   : INTEGER := 16#5ac#;
    constant ADDR_IFMAP_180_DATA_0 : INTEGER := 16#5b0#;
    constant ADDR_IFMAP_180_CTRL   : INTEGER := 16#5b4#;
    constant ADDR_IFMAP_181_DATA_0 : INTEGER := 16#5b8#;
    constant ADDR_IFMAP_181_CTRL   : INTEGER := 16#5bc#;
    constant ADDR_IFMAP_182_DATA_0 : INTEGER := 16#5c0#;
    constant ADDR_IFMAP_182_CTRL   : INTEGER := 16#5c4#;
    constant ADDR_IFMAP_183_DATA_0 : INTEGER := 16#5c8#;
    constant ADDR_IFMAP_183_CTRL   : INTEGER := 16#5cc#;
    constant ADDR_IFMAP_184_DATA_0 : INTEGER := 16#5d0#;
    constant ADDR_IFMAP_184_CTRL   : INTEGER := 16#5d4#;
    constant ADDR_IFMAP_185_DATA_0 : INTEGER := 16#5d8#;
    constant ADDR_IFMAP_185_CTRL   : INTEGER := 16#5dc#;
    constant ADDR_IFMAP_186_DATA_0 : INTEGER := 16#5e0#;
    constant ADDR_IFMAP_186_CTRL   : INTEGER := 16#5e4#;
    constant ADDR_IFMAP_187_DATA_0 : INTEGER := 16#5e8#;
    constant ADDR_IFMAP_187_CTRL   : INTEGER := 16#5ec#;
    constant ADDR_IFMAP_188_DATA_0 : INTEGER := 16#5f0#;
    constant ADDR_IFMAP_188_CTRL   : INTEGER := 16#5f4#;
    constant ADDR_IFMAP_189_DATA_0 : INTEGER := 16#5f8#;
    constant ADDR_IFMAP_189_CTRL   : INTEGER := 16#5fc#;
    constant ADDR_IFMAP_190_DATA_0 : INTEGER := 16#600#;
    constant ADDR_IFMAP_190_CTRL   : INTEGER := 16#604#;
    constant ADDR_IFMAP_191_DATA_0 : INTEGER := 16#608#;
    constant ADDR_IFMAP_191_CTRL   : INTEGER := 16#60c#;
    constant ADDR_IFMAP_192_DATA_0 : INTEGER := 16#610#;
    constant ADDR_IFMAP_192_CTRL   : INTEGER := 16#614#;
    constant ADDR_IFMAP_193_DATA_0 : INTEGER := 16#618#;
    constant ADDR_IFMAP_193_CTRL   : INTEGER := 16#61c#;
    constant ADDR_IFMAP_194_DATA_0 : INTEGER := 16#620#;
    constant ADDR_IFMAP_194_CTRL   : INTEGER := 16#624#;
    constant ADDR_IFMAP_195_DATA_0 : INTEGER := 16#628#;
    constant ADDR_IFMAP_195_CTRL   : INTEGER := 16#62c#;
    constant ADDR_IFMAP_196_DATA_0 : INTEGER := 16#630#;
    constant ADDR_IFMAP_196_CTRL   : INTEGER := 16#634#;
    constant ADDR_IFMAP_197_DATA_0 : INTEGER := 16#638#;
    constant ADDR_IFMAP_197_CTRL   : INTEGER := 16#63c#;
    constant ADDR_IFMAP_198_DATA_0 : INTEGER := 16#640#;
    constant ADDR_IFMAP_198_CTRL   : INTEGER := 16#644#;
    constant ADDR_IFMAP_199_DATA_0 : INTEGER := 16#648#;
    constant ADDR_IFMAP_199_CTRL   : INTEGER := 16#64c#;
    constant ADDR_IFMAP_200_DATA_0 : INTEGER := 16#650#;
    constant ADDR_IFMAP_200_CTRL   : INTEGER := 16#654#;
    constant ADDR_IFMAP_201_DATA_0 : INTEGER := 16#658#;
    constant ADDR_IFMAP_201_CTRL   : INTEGER := 16#65c#;
    constant ADDR_IFMAP_202_DATA_0 : INTEGER := 16#660#;
    constant ADDR_IFMAP_202_CTRL   : INTEGER := 16#664#;
    constant ADDR_IFMAP_203_DATA_0 : INTEGER := 16#668#;
    constant ADDR_IFMAP_203_CTRL   : INTEGER := 16#66c#;
    constant ADDR_IFMAP_204_DATA_0 : INTEGER := 16#670#;
    constant ADDR_IFMAP_204_CTRL   : INTEGER := 16#674#;
    constant ADDR_IFMAP_205_DATA_0 : INTEGER := 16#678#;
    constant ADDR_IFMAP_205_CTRL   : INTEGER := 16#67c#;
    constant ADDR_IFMAP_206_DATA_0 : INTEGER := 16#680#;
    constant ADDR_IFMAP_206_CTRL   : INTEGER := 16#684#;
    constant ADDR_IFMAP_207_DATA_0 : INTEGER := 16#688#;
    constant ADDR_IFMAP_207_CTRL   : INTEGER := 16#68c#;
    constant ADDR_IFMAP_208_DATA_0 : INTEGER := 16#690#;
    constant ADDR_IFMAP_208_CTRL   : INTEGER := 16#694#;
    constant ADDR_IFMAP_209_DATA_0 : INTEGER := 16#698#;
    constant ADDR_IFMAP_209_CTRL   : INTEGER := 16#69c#;
    constant ADDR_IFMAP_210_DATA_0 : INTEGER := 16#6a0#;
    constant ADDR_IFMAP_210_CTRL   : INTEGER := 16#6a4#;
    constant ADDR_IFMAP_211_DATA_0 : INTEGER := 16#6a8#;
    constant ADDR_IFMAP_211_CTRL   : INTEGER := 16#6ac#;
    constant ADDR_IFMAP_212_DATA_0 : INTEGER := 16#6b0#;
    constant ADDR_IFMAP_212_CTRL   : INTEGER := 16#6b4#;
    constant ADDR_IFMAP_213_DATA_0 : INTEGER := 16#6b8#;
    constant ADDR_IFMAP_213_CTRL   : INTEGER := 16#6bc#;
    constant ADDR_IFMAP_214_DATA_0 : INTEGER := 16#6c0#;
    constant ADDR_IFMAP_214_CTRL   : INTEGER := 16#6c4#;
    constant ADDR_IFMAP_215_DATA_0 : INTEGER := 16#6c8#;
    constant ADDR_IFMAP_215_CTRL   : INTEGER := 16#6cc#;
    constant ADDR_IFMAP_216_DATA_0 : INTEGER := 16#6d0#;
    constant ADDR_IFMAP_216_CTRL   : INTEGER := 16#6d4#;
    constant ADDR_IFMAP_217_DATA_0 : INTEGER := 16#6d8#;
    constant ADDR_IFMAP_217_CTRL   : INTEGER := 16#6dc#;
    constant ADDR_IFMAP_218_DATA_0 : INTEGER := 16#6e0#;
    constant ADDR_IFMAP_218_CTRL   : INTEGER := 16#6e4#;
    constant ADDR_IFMAP_219_DATA_0 : INTEGER := 16#6e8#;
    constant ADDR_IFMAP_219_CTRL   : INTEGER := 16#6ec#;
    constant ADDR_IFMAP_220_DATA_0 : INTEGER := 16#6f0#;
    constant ADDR_IFMAP_220_CTRL   : INTEGER := 16#6f4#;
    constant ADDR_IFMAP_221_DATA_0 : INTEGER := 16#6f8#;
    constant ADDR_IFMAP_221_CTRL   : INTEGER := 16#6fc#;
    constant ADDR_IFMAP_222_DATA_0 : INTEGER := 16#700#;
    constant ADDR_IFMAP_222_CTRL   : INTEGER := 16#704#;
    constant ADDR_IFMAP_223_DATA_0 : INTEGER := 16#708#;
    constant ADDR_IFMAP_223_CTRL   : INTEGER := 16#70c#;
    constant ADDR_IFMAP_224_DATA_0 : INTEGER := 16#710#;
    constant ADDR_IFMAP_224_CTRL   : INTEGER := 16#714#;
    constant ADDR_IFMAP_225_DATA_0 : INTEGER := 16#718#;
    constant ADDR_IFMAP_225_CTRL   : INTEGER := 16#71c#;
    constant ADDR_IFMAP_226_DATA_0 : INTEGER := 16#720#;
    constant ADDR_IFMAP_226_CTRL   : INTEGER := 16#724#;
    constant ADDR_IFMAP_227_DATA_0 : INTEGER := 16#728#;
    constant ADDR_IFMAP_227_CTRL   : INTEGER := 16#72c#;
    constant ADDR_IFMAP_228_DATA_0 : INTEGER := 16#730#;
    constant ADDR_IFMAP_228_CTRL   : INTEGER := 16#734#;
    constant ADDR_IFMAP_229_DATA_0 : INTEGER := 16#738#;
    constant ADDR_IFMAP_229_CTRL   : INTEGER := 16#73c#;
    constant ADDR_IFMAP_230_DATA_0 : INTEGER := 16#740#;
    constant ADDR_IFMAP_230_CTRL   : INTEGER := 16#744#;
    constant ADDR_IFMAP_231_DATA_0 : INTEGER := 16#748#;
    constant ADDR_IFMAP_231_CTRL   : INTEGER := 16#74c#;
    constant ADDR_IFMAP_232_DATA_0 : INTEGER := 16#750#;
    constant ADDR_IFMAP_232_CTRL   : INTEGER := 16#754#;
    constant ADDR_IFMAP_233_DATA_0 : INTEGER := 16#758#;
    constant ADDR_IFMAP_233_CTRL   : INTEGER := 16#75c#;
    constant ADDR_IFMAP_234_DATA_0 : INTEGER := 16#760#;
    constant ADDR_IFMAP_234_CTRL   : INTEGER := 16#764#;
    constant ADDR_IFMAP_235_DATA_0 : INTEGER := 16#768#;
    constant ADDR_IFMAP_235_CTRL   : INTEGER := 16#76c#;
    constant ADDR_IFMAP_236_DATA_0 : INTEGER := 16#770#;
    constant ADDR_IFMAP_236_CTRL   : INTEGER := 16#774#;
    constant ADDR_IFMAP_237_DATA_0 : INTEGER := 16#778#;
    constant ADDR_IFMAP_237_CTRL   : INTEGER := 16#77c#;
    constant ADDR_IFMAP_238_DATA_0 : INTEGER := 16#780#;
    constant ADDR_IFMAP_238_CTRL   : INTEGER := 16#784#;
    constant ADDR_IFMAP_239_DATA_0 : INTEGER := 16#788#;
    constant ADDR_IFMAP_239_CTRL   : INTEGER := 16#78c#;
    constant ADDR_IFMAP_240_DATA_0 : INTEGER := 16#790#;
    constant ADDR_IFMAP_240_CTRL   : INTEGER := 16#794#;
    constant ADDR_IFMAP_241_DATA_0 : INTEGER := 16#798#;
    constant ADDR_IFMAP_241_CTRL   : INTEGER := 16#79c#;
    constant ADDR_IFMAP_242_DATA_0 : INTEGER := 16#7a0#;
    constant ADDR_IFMAP_242_CTRL   : INTEGER := 16#7a4#;
    constant ADDR_IFMAP_243_DATA_0 : INTEGER := 16#7a8#;
    constant ADDR_IFMAP_243_CTRL   : INTEGER := 16#7ac#;
    constant ADDR_IFMAP_244_DATA_0 : INTEGER := 16#7b0#;
    constant ADDR_IFMAP_244_CTRL   : INTEGER := 16#7b4#;
    constant ADDR_IFMAP_245_DATA_0 : INTEGER := 16#7b8#;
    constant ADDR_IFMAP_245_CTRL   : INTEGER := 16#7bc#;
    constant ADDR_IFMAP_246_DATA_0 : INTEGER := 16#7c0#;
    constant ADDR_IFMAP_246_CTRL   : INTEGER := 16#7c4#;
    constant ADDR_IFMAP_247_DATA_0 : INTEGER := 16#7c8#;
    constant ADDR_IFMAP_247_CTRL   : INTEGER := 16#7cc#;
    constant ADDR_IFMAP_248_DATA_0 : INTEGER := 16#7d0#;
    constant ADDR_IFMAP_248_CTRL   : INTEGER := 16#7d4#;
    constant ADDR_IFMAP_249_DATA_0 : INTEGER := 16#7d8#;
    constant ADDR_IFMAP_249_CTRL   : INTEGER := 16#7dc#;
    constant ADDR_IFMAP_250_DATA_0 : INTEGER := 16#7e0#;
    constant ADDR_IFMAP_250_CTRL   : INTEGER := 16#7e4#;
    constant ADDR_IFMAP_251_DATA_0 : INTEGER := 16#7e8#;
    constant ADDR_IFMAP_251_CTRL   : INTEGER := 16#7ec#;
    constant ADDR_IFMAP_252_DATA_0 : INTEGER := 16#7f0#;
    constant ADDR_IFMAP_252_CTRL   : INTEGER := 16#7f4#;
    constant ADDR_IFMAP_253_DATA_0 : INTEGER := 16#7f8#;
    constant ADDR_IFMAP_253_CTRL   : INTEGER := 16#7fc#;
    constant ADDR_IFMAP_254_DATA_0 : INTEGER := 16#800#;
    constant ADDR_IFMAP_254_CTRL   : INTEGER := 16#804#;
    constant ADDR_IFMAP_255_DATA_0 : INTEGER := 16#808#;
    constant ADDR_IFMAP_255_CTRL   : INTEGER := 16#80c#;
    constant ADDR_FILTER_0_DATA_0  : INTEGER := 16#810#;
    constant ADDR_FILTER_0_CTRL    : INTEGER := 16#814#;
    constant ADDR_FILTER_1_DATA_0  : INTEGER := 16#818#;
    constant ADDR_FILTER_1_CTRL    : INTEGER := 16#81c#;
    constant ADDR_FILTER_2_DATA_0  : INTEGER := 16#820#;
    constant ADDR_FILTER_2_CTRL    : INTEGER := 16#824#;
    constant ADDR_FILTER_3_DATA_0  : INTEGER := 16#828#;
    constant ADDR_FILTER_3_CTRL    : INTEGER := 16#82c#;
    constant ADDR_FILTER_4_DATA_0  : INTEGER := 16#830#;
    constant ADDR_FILTER_4_CTRL    : INTEGER := 16#834#;
    constant ADDR_FILTER_5_DATA_0  : INTEGER := 16#838#;
    constant ADDR_FILTER_5_CTRL    : INTEGER := 16#83c#;
    constant ADDR_FILTER_6_DATA_0  : INTEGER := 16#840#;
    constant ADDR_FILTER_6_CTRL    : INTEGER := 16#844#;
    constant ADDR_FILTER_7_DATA_0  : INTEGER := 16#848#;
    constant ADDR_FILTER_7_CTRL    : INTEGER := 16#84c#;
    constant ADDR_FILTER_8_DATA_0  : INTEGER := 16#850#;
    constant ADDR_FILTER_8_CTRL    : INTEGER := 16#854#;
    constant ADDR_FILTER_9_DATA_0  : INTEGER := 16#858#;
    constant ADDR_FILTER_9_CTRL    : INTEGER := 16#85c#;
    constant ADDR_FILTER_10_DATA_0 : INTEGER := 16#860#;
    constant ADDR_FILTER_10_CTRL   : INTEGER := 16#864#;
    constant ADDR_FILTER_11_DATA_0 : INTEGER := 16#868#;
    constant ADDR_FILTER_11_CTRL   : INTEGER := 16#86c#;
    constant ADDR_FILTER_12_DATA_0 : INTEGER := 16#870#;
    constant ADDR_FILTER_12_CTRL   : INTEGER := 16#874#;
    constant ADDR_FILTER_13_DATA_0 : INTEGER := 16#878#;
    constant ADDR_FILTER_13_CTRL   : INTEGER := 16#87c#;
    constant ADDR_FILTER_14_DATA_0 : INTEGER := 16#880#;
    constant ADDR_FILTER_14_CTRL   : INTEGER := 16#884#;
    constant ADDR_FILTER_15_DATA_0 : INTEGER := 16#888#;
    constant ADDR_FILTER_15_CTRL   : INTEGER := 16#88c#;
    constant ADDR_FILTER_16_DATA_0 : INTEGER := 16#890#;
    constant ADDR_FILTER_16_CTRL   : INTEGER := 16#894#;
    constant ADDR_FILTER_17_DATA_0 : INTEGER := 16#898#;
    constant ADDR_FILTER_17_CTRL   : INTEGER := 16#89c#;
    constant ADDR_FILTER_18_DATA_0 : INTEGER := 16#8a0#;
    constant ADDR_FILTER_18_CTRL   : INTEGER := 16#8a4#;
    constant ADDR_FILTER_19_DATA_0 : INTEGER := 16#8a8#;
    constant ADDR_FILTER_19_CTRL   : INTEGER := 16#8ac#;
    constant ADDR_FILTER_20_DATA_0 : INTEGER := 16#8b0#;
    constant ADDR_FILTER_20_CTRL   : INTEGER := 16#8b4#;
    constant ADDR_FILTER_21_DATA_0 : INTEGER := 16#8b8#;
    constant ADDR_FILTER_21_CTRL   : INTEGER := 16#8bc#;
    constant ADDR_FILTER_22_DATA_0 : INTEGER := 16#8c0#;
    constant ADDR_FILTER_22_CTRL   : INTEGER := 16#8c4#;
    constant ADDR_FILTER_23_DATA_0 : INTEGER := 16#8c8#;
    constant ADDR_FILTER_23_CTRL   : INTEGER := 16#8cc#;
    constant ADDR_FILTER_24_DATA_0 : INTEGER := 16#8d0#;
    constant ADDR_FILTER_24_CTRL   : INTEGER := 16#8d4#;
    constant ADDR_OFMAP_0_BASE     : INTEGER := 16#900#;
    constant ADDR_OFMAP_0_HIGH     : INTEGER := 16#93f#;
    constant ADDR_OFMAP_1_BASE     : INTEGER := 16#940#;
    constant ADDR_OFMAP_1_HIGH     : INTEGER := 16#97f#;
    constant ADDR_OFMAP_2_BASE     : INTEGER := 16#980#;
    constant ADDR_OFMAP_2_HIGH     : INTEGER := 16#9bf#;
    constant ADDR_OFMAP_3_BASE     : INTEGER := 16#9c0#;
    constant ADDR_OFMAP_3_HIGH     : INTEGER := 16#9ff#;
    constant ADDR_OFMAP_4_BASE     : INTEGER := 16#a00#;
    constant ADDR_OFMAP_4_HIGH     : INTEGER := 16#a3f#;
    constant ADDR_OFMAP_5_BASE     : INTEGER := 16#a40#;
    constant ADDR_OFMAP_5_HIGH     : INTEGER := 16#a7f#;
    constant ADDR_OFMAP_6_BASE     : INTEGER := 16#a80#;
    constant ADDR_OFMAP_6_HIGH     : INTEGER := 16#abf#;
    constant ADDR_OFMAP_7_BASE     : INTEGER := 16#ac0#;
    constant ADDR_OFMAP_7_HIGH     : INTEGER := 16#aff#;
    constant ADDR_OFMAP_8_BASE     : INTEGER := 16#b00#;
    constant ADDR_OFMAP_8_HIGH     : INTEGER := 16#b3f#;
    constant ADDR_OFMAP_9_BASE     : INTEGER := 16#b40#;
    constant ADDR_OFMAP_9_HIGH     : INTEGER := 16#b7f#;
    constant ADDR_OFMAP_10_BASE    : INTEGER := 16#b80#;
    constant ADDR_OFMAP_10_HIGH    : INTEGER := 16#bbf#;
    constant ADDR_OFMAP_11_BASE    : INTEGER := 16#bc0#;
    constant ADDR_OFMAP_11_HIGH    : INTEGER := 16#bff#;
    constant ADDR_BITS         : INTEGER := 12;

    signal waddr               : UNSIGNED(ADDR_BITS-1 downto 0);
    signal wmask               : UNSIGNED(31 downto 0);
    signal aw_hs               : STD_LOGIC;
    signal w_hs                : STD_LOGIC;
    signal rdata_data          : UNSIGNED(31 downto 0);
    signal ar_hs               : STD_LOGIC;
    signal raddr               : UNSIGNED(ADDR_BITS-1 downto 0);
    signal AWREADY_t           : STD_LOGIC;
    signal WREADY_t            : STD_LOGIC;
    signal ARREADY_t           : STD_LOGIC;
    signal RVALID_t            : STD_LOGIC;
    -- internal registers
    signal int_ifmap_0         : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_1         : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_2         : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_3         : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_4         : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_5         : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_6         : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_7         : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_8         : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_9         : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_10        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_11        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_12        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_13        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_14        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_15        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_16        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_17        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_18        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_19        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_20        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_21        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_22        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_23        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_24        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_25        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_26        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_27        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_28        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_29        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_30        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_31        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_32        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_33        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_34        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_35        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_36        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_37        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_38        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_39        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_40        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_41        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_42        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_43        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_44        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_45        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_46        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_47        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_48        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_49        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_50        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_51        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_52        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_53        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_54        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_55        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_56        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_57        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_58        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_59        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_60        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_61        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_62        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_63        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_64        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_65        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_66        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_67        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_68        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_69        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_70        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_71        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_72        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_73        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_74        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_75        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_76        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_77        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_78        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_79        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_80        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_81        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_82        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_83        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_84        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_85        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_86        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_87        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_88        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_89        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_90        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_91        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_92        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_93        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_94        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_95        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_96        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_97        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_98        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_99        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_100       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_101       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_102       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_103       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_104       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_105       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_106       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_107       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_108       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_109       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_110       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_111       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_112       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_113       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_114       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_115       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_116       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_117       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_118       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_119       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_120       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_121       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_122       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_123       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_124       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_125       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_126       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_127       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_128       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_129       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_130       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_131       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_132       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_133       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_134       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_135       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_136       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_137       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_138       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_139       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_140       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_141       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_142       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_143       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_144       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_145       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_146       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_147       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_148       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_149       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_150       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_151       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_152       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_153       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_154       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_155       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_156       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_157       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_158       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_159       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_160       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_161       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_162       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_163       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_164       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_165       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_166       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_167       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_168       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_169       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_170       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_171       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_172       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_173       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_174       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_175       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_176       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_177       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_178       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_179       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_180       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_181       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_182       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_183       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_184       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_185       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_186       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_187       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_188       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_189       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_190       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_191       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_192       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_193       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_194       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_195       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_196       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_197       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_198       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_199       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_200       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_201       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_202       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_203       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_204       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_205       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_206       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_207       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_208       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_209       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_210       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_211       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_212       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_213       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_214       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_215       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_216       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_217       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_218       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_219       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_220       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_221       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_222       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_223       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_224       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_225       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_226       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_227       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_228       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_229       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_230       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_231       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_232       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_233       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_234       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_235       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_236       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_237       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_238       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_239       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_240       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_241       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_242       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_243       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_244       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_245       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_246       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_247       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_248       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_249       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_250       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_251       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_252       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_253       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_254       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_ifmap_255       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_filter_0        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_filter_1        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_filter_2        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_filter_3        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_filter_4        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_filter_5        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_filter_6        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_filter_7        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_filter_8        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_filter_9        : UNSIGNED(31 downto 0) := (others => '0');
    signal int_filter_10       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_filter_11       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_filter_12       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_filter_13       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_filter_14       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_filter_15       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_filter_16       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_filter_17       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_filter_18       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_filter_19       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_filter_20       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_filter_21       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_filter_22       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_filter_23       : UNSIGNED(31 downto 0) := (others => '0');
    signal int_filter_24       : UNSIGNED(31 downto 0) := (others => '0');
    -- memory signals
    signal int_ofmap_0_address0 : UNSIGNED(3 downto 0);
    signal int_ofmap_0_ce0     : STD_LOGIC;
    signal int_ofmap_0_we0     : STD_LOGIC;
    signal int_ofmap_0_be0     : UNSIGNED(3 downto 0);
    signal int_ofmap_0_d0      : UNSIGNED(31 downto 0);
    signal int_ofmap_0_q0      : UNSIGNED(31 downto 0);
    signal int_ofmap_0_address1 : UNSIGNED(3 downto 0);
    signal int_ofmap_0_ce1     : STD_LOGIC;
    signal int_ofmap_0_we1     : STD_LOGIC;
    signal int_ofmap_0_be1     : UNSIGNED(3 downto 0);
    signal int_ofmap_0_d1      : UNSIGNED(31 downto 0);
    signal int_ofmap_0_q1      : UNSIGNED(31 downto 0);
    signal int_ofmap_0_read    : STD_LOGIC;
    signal int_ofmap_0_write   : STD_LOGIC;
    signal int_ofmap_1_address0 : UNSIGNED(3 downto 0);
    signal int_ofmap_1_ce0     : STD_LOGIC;
    signal int_ofmap_1_we0     : STD_LOGIC;
    signal int_ofmap_1_be0     : UNSIGNED(3 downto 0);
    signal int_ofmap_1_d0      : UNSIGNED(31 downto 0);
    signal int_ofmap_1_q0      : UNSIGNED(31 downto 0);
    signal int_ofmap_1_address1 : UNSIGNED(3 downto 0);
    signal int_ofmap_1_ce1     : STD_LOGIC;
    signal int_ofmap_1_we1     : STD_LOGIC;
    signal int_ofmap_1_be1     : UNSIGNED(3 downto 0);
    signal int_ofmap_1_d1      : UNSIGNED(31 downto 0);
    signal int_ofmap_1_q1      : UNSIGNED(31 downto 0);
    signal int_ofmap_1_read    : STD_LOGIC;
    signal int_ofmap_1_write   : STD_LOGIC;
    signal int_ofmap_2_address0 : UNSIGNED(3 downto 0);
    signal int_ofmap_2_ce0     : STD_LOGIC;
    signal int_ofmap_2_we0     : STD_LOGIC;
    signal int_ofmap_2_be0     : UNSIGNED(3 downto 0);
    signal int_ofmap_2_d0      : UNSIGNED(31 downto 0);
    signal int_ofmap_2_q0      : UNSIGNED(31 downto 0);
    signal int_ofmap_2_address1 : UNSIGNED(3 downto 0);
    signal int_ofmap_2_ce1     : STD_LOGIC;
    signal int_ofmap_2_we1     : STD_LOGIC;
    signal int_ofmap_2_be1     : UNSIGNED(3 downto 0);
    signal int_ofmap_2_d1      : UNSIGNED(31 downto 0);
    signal int_ofmap_2_q1      : UNSIGNED(31 downto 0);
    signal int_ofmap_2_read    : STD_LOGIC;
    signal int_ofmap_2_write   : STD_LOGIC;
    signal int_ofmap_3_address0 : UNSIGNED(3 downto 0);
    signal int_ofmap_3_ce0     : STD_LOGIC;
    signal int_ofmap_3_we0     : STD_LOGIC;
    signal int_ofmap_3_be0     : UNSIGNED(3 downto 0);
    signal int_ofmap_3_d0      : UNSIGNED(31 downto 0);
    signal int_ofmap_3_q0      : UNSIGNED(31 downto 0);
    signal int_ofmap_3_address1 : UNSIGNED(3 downto 0);
    signal int_ofmap_3_ce1     : STD_LOGIC;
    signal int_ofmap_3_we1     : STD_LOGIC;
    signal int_ofmap_3_be1     : UNSIGNED(3 downto 0);
    signal int_ofmap_3_d1      : UNSIGNED(31 downto 0);
    signal int_ofmap_3_q1      : UNSIGNED(31 downto 0);
    signal int_ofmap_3_read    : STD_LOGIC;
    signal int_ofmap_3_write   : STD_LOGIC;
    signal int_ofmap_4_address0 : UNSIGNED(3 downto 0);
    signal int_ofmap_4_ce0     : STD_LOGIC;
    signal int_ofmap_4_we0     : STD_LOGIC;
    signal int_ofmap_4_be0     : UNSIGNED(3 downto 0);
    signal int_ofmap_4_d0      : UNSIGNED(31 downto 0);
    signal int_ofmap_4_q0      : UNSIGNED(31 downto 0);
    signal int_ofmap_4_address1 : UNSIGNED(3 downto 0);
    signal int_ofmap_4_ce1     : STD_LOGIC;
    signal int_ofmap_4_we1     : STD_LOGIC;
    signal int_ofmap_4_be1     : UNSIGNED(3 downto 0);
    signal int_ofmap_4_d1      : UNSIGNED(31 downto 0);
    signal int_ofmap_4_q1      : UNSIGNED(31 downto 0);
    signal int_ofmap_4_read    : STD_LOGIC;
    signal int_ofmap_4_write   : STD_LOGIC;
    signal int_ofmap_5_address0 : UNSIGNED(3 downto 0);
    signal int_ofmap_5_ce0     : STD_LOGIC;
    signal int_ofmap_5_we0     : STD_LOGIC;
    signal int_ofmap_5_be0     : UNSIGNED(3 downto 0);
    signal int_ofmap_5_d0      : UNSIGNED(31 downto 0);
    signal int_ofmap_5_q0      : UNSIGNED(31 downto 0);
    signal int_ofmap_5_address1 : UNSIGNED(3 downto 0);
    signal int_ofmap_5_ce1     : STD_LOGIC;
    signal int_ofmap_5_we1     : STD_LOGIC;
    signal int_ofmap_5_be1     : UNSIGNED(3 downto 0);
    signal int_ofmap_5_d1      : UNSIGNED(31 downto 0);
    signal int_ofmap_5_q1      : UNSIGNED(31 downto 0);
    signal int_ofmap_5_read    : STD_LOGIC;
    signal int_ofmap_5_write   : STD_LOGIC;
    signal int_ofmap_6_address0 : UNSIGNED(3 downto 0);
    signal int_ofmap_6_ce0     : STD_LOGIC;
    signal int_ofmap_6_we0     : STD_LOGIC;
    signal int_ofmap_6_be0     : UNSIGNED(3 downto 0);
    signal int_ofmap_6_d0      : UNSIGNED(31 downto 0);
    signal int_ofmap_6_q0      : UNSIGNED(31 downto 0);
    signal int_ofmap_6_address1 : UNSIGNED(3 downto 0);
    signal int_ofmap_6_ce1     : STD_LOGIC;
    signal int_ofmap_6_we1     : STD_LOGIC;
    signal int_ofmap_6_be1     : UNSIGNED(3 downto 0);
    signal int_ofmap_6_d1      : UNSIGNED(31 downto 0);
    signal int_ofmap_6_q1      : UNSIGNED(31 downto 0);
    signal int_ofmap_6_read    : STD_LOGIC;
    signal int_ofmap_6_write   : STD_LOGIC;
    signal int_ofmap_7_address0 : UNSIGNED(3 downto 0);
    signal int_ofmap_7_ce0     : STD_LOGIC;
    signal int_ofmap_7_we0     : STD_LOGIC;
    signal int_ofmap_7_be0     : UNSIGNED(3 downto 0);
    signal int_ofmap_7_d0      : UNSIGNED(31 downto 0);
    signal int_ofmap_7_q0      : UNSIGNED(31 downto 0);
    signal int_ofmap_7_address1 : UNSIGNED(3 downto 0);
    signal int_ofmap_7_ce1     : STD_LOGIC;
    signal int_ofmap_7_we1     : STD_LOGIC;
    signal int_ofmap_7_be1     : UNSIGNED(3 downto 0);
    signal int_ofmap_7_d1      : UNSIGNED(31 downto 0);
    signal int_ofmap_7_q1      : UNSIGNED(31 downto 0);
    signal int_ofmap_7_read    : STD_LOGIC;
    signal int_ofmap_7_write   : STD_LOGIC;
    signal int_ofmap_8_address0 : UNSIGNED(3 downto 0);
    signal int_ofmap_8_ce0     : STD_LOGIC;
    signal int_ofmap_8_we0     : STD_LOGIC;
    signal int_ofmap_8_be0     : UNSIGNED(3 downto 0);
    signal int_ofmap_8_d0      : UNSIGNED(31 downto 0);
    signal int_ofmap_8_q0      : UNSIGNED(31 downto 0);
    signal int_ofmap_8_address1 : UNSIGNED(3 downto 0);
    signal int_ofmap_8_ce1     : STD_LOGIC;
    signal int_ofmap_8_we1     : STD_LOGIC;
    signal int_ofmap_8_be1     : UNSIGNED(3 downto 0);
    signal int_ofmap_8_d1      : UNSIGNED(31 downto 0);
    signal int_ofmap_8_q1      : UNSIGNED(31 downto 0);
    signal int_ofmap_8_read    : STD_LOGIC;
    signal int_ofmap_8_write   : STD_LOGIC;
    signal int_ofmap_9_address0 : UNSIGNED(3 downto 0);
    signal int_ofmap_9_ce0     : STD_LOGIC;
    signal int_ofmap_9_we0     : STD_LOGIC;
    signal int_ofmap_9_be0     : UNSIGNED(3 downto 0);
    signal int_ofmap_9_d0      : UNSIGNED(31 downto 0);
    signal int_ofmap_9_q0      : UNSIGNED(31 downto 0);
    signal int_ofmap_9_address1 : UNSIGNED(3 downto 0);
    signal int_ofmap_9_ce1     : STD_LOGIC;
    signal int_ofmap_9_we1     : STD_LOGIC;
    signal int_ofmap_9_be1     : UNSIGNED(3 downto 0);
    signal int_ofmap_9_d1      : UNSIGNED(31 downto 0);
    signal int_ofmap_9_q1      : UNSIGNED(31 downto 0);
    signal int_ofmap_9_read    : STD_LOGIC;
    signal int_ofmap_9_write   : STD_LOGIC;
    signal int_ofmap_10_address0 : UNSIGNED(3 downto 0);
    signal int_ofmap_10_ce0    : STD_LOGIC;
    signal int_ofmap_10_we0    : STD_LOGIC;
    signal int_ofmap_10_be0    : UNSIGNED(3 downto 0);
    signal int_ofmap_10_d0     : UNSIGNED(31 downto 0);
    signal int_ofmap_10_q0     : UNSIGNED(31 downto 0);
    signal int_ofmap_10_address1 : UNSIGNED(3 downto 0);
    signal int_ofmap_10_ce1    : STD_LOGIC;
    signal int_ofmap_10_we1    : STD_LOGIC;
    signal int_ofmap_10_be1    : UNSIGNED(3 downto 0);
    signal int_ofmap_10_d1     : UNSIGNED(31 downto 0);
    signal int_ofmap_10_q1     : UNSIGNED(31 downto 0);
    signal int_ofmap_10_read   : STD_LOGIC;
    signal int_ofmap_10_write  : STD_LOGIC;
    signal int_ofmap_11_address0 : UNSIGNED(3 downto 0);
    signal int_ofmap_11_ce0    : STD_LOGIC;
    signal int_ofmap_11_we0    : STD_LOGIC;
    signal int_ofmap_11_be0    : UNSIGNED(3 downto 0);
    signal int_ofmap_11_d0     : UNSIGNED(31 downto 0);
    signal int_ofmap_11_q0     : UNSIGNED(31 downto 0);
    signal int_ofmap_11_address1 : UNSIGNED(3 downto 0);
    signal int_ofmap_11_ce1    : STD_LOGIC;
    signal int_ofmap_11_we1    : STD_LOGIC;
    signal int_ofmap_11_be1    : UNSIGNED(3 downto 0);
    signal int_ofmap_11_d1     : UNSIGNED(31 downto 0);
    signal int_ofmap_11_q1     : UNSIGNED(31 downto 0);
    signal int_ofmap_11_read   : STD_LOGIC;
    signal int_ofmap_11_write  : STD_LOGIC;

    component conv_AXILiteS_s_axi_ram is
        generic (
            BYTES   : INTEGER :=4;
            DEPTH   : INTEGER :=256;
            AWIDTH  : INTEGER :=8);
        port (
            clk0    : in  STD_LOGIC;
            address0: in  UNSIGNED(AWIDTH-1 downto 0);
            ce0     : in  STD_LOGIC;
            we0     : in  STD_LOGIC;
            be0     : in  UNSIGNED(BYTES-1 downto 0);
            d0      : in  UNSIGNED(BYTES*8-1 downto 0);
            q0      : out UNSIGNED(BYTES*8-1 downto 0);
            clk1    : in  STD_LOGIC;
            address1: in  UNSIGNED(AWIDTH-1 downto 0);
            ce1     : in  STD_LOGIC;
            we1     : in  STD_LOGIC;
            be1     : in  UNSIGNED(BYTES-1 downto 0);
            d1      : in  UNSIGNED(BYTES*8-1 downto 0);
            q1      : out UNSIGNED(BYTES*8-1 downto 0));
    end component conv_AXILiteS_s_axi_ram;

    function log2 (x : INTEGER) return INTEGER is
        variable n, m : INTEGER;
    begin
        n := 1;
        m := 2;
        while m < x loop
            n := n + 1;
            m := m * 2;
        end loop;
        return n;
    end function log2;

begin
-- ----------------------- Instantiation------------------
-- int_ofmap_0
int_ofmap_0 : conv_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 12,
     AWIDTH   => log2(12))
port map (
     clk0     => ACLK,
     address0 => int_ofmap_0_address0,
     ce0      => int_ofmap_0_ce0,
     we0      => int_ofmap_0_we0,
     be0      => int_ofmap_0_be0,
     d0       => int_ofmap_0_d0,
     q0       => int_ofmap_0_q0,
     clk1     => ACLK,
     address1 => int_ofmap_0_address1,
     ce1      => int_ofmap_0_ce1,
     we1      => int_ofmap_0_we1,
     be1      => int_ofmap_0_be1,
     d1       => int_ofmap_0_d1,
     q1       => int_ofmap_0_q1);
-- int_ofmap_1
int_ofmap_1 : conv_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 12,
     AWIDTH   => log2(12))
port map (
     clk0     => ACLK,
     address0 => int_ofmap_1_address0,
     ce0      => int_ofmap_1_ce0,
     we0      => int_ofmap_1_we0,
     be0      => int_ofmap_1_be0,
     d0       => int_ofmap_1_d0,
     q0       => int_ofmap_1_q0,
     clk1     => ACLK,
     address1 => int_ofmap_1_address1,
     ce1      => int_ofmap_1_ce1,
     we1      => int_ofmap_1_we1,
     be1      => int_ofmap_1_be1,
     d1       => int_ofmap_1_d1,
     q1       => int_ofmap_1_q1);
-- int_ofmap_2
int_ofmap_2 : conv_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 12,
     AWIDTH   => log2(12))
port map (
     clk0     => ACLK,
     address0 => int_ofmap_2_address0,
     ce0      => int_ofmap_2_ce0,
     we0      => int_ofmap_2_we0,
     be0      => int_ofmap_2_be0,
     d0       => int_ofmap_2_d0,
     q0       => int_ofmap_2_q0,
     clk1     => ACLK,
     address1 => int_ofmap_2_address1,
     ce1      => int_ofmap_2_ce1,
     we1      => int_ofmap_2_we1,
     be1      => int_ofmap_2_be1,
     d1       => int_ofmap_2_d1,
     q1       => int_ofmap_2_q1);
-- int_ofmap_3
int_ofmap_3 : conv_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 12,
     AWIDTH   => log2(12))
port map (
     clk0     => ACLK,
     address0 => int_ofmap_3_address0,
     ce0      => int_ofmap_3_ce0,
     we0      => int_ofmap_3_we0,
     be0      => int_ofmap_3_be0,
     d0       => int_ofmap_3_d0,
     q0       => int_ofmap_3_q0,
     clk1     => ACLK,
     address1 => int_ofmap_3_address1,
     ce1      => int_ofmap_3_ce1,
     we1      => int_ofmap_3_we1,
     be1      => int_ofmap_3_be1,
     d1       => int_ofmap_3_d1,
     q1       => int_ofmap_3_q1);
-- int_ofmap_4
int_ofmap_4 : conv_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 12,
     AWIDTH   => log2(12))
port map (
     clk0     => ACLK,
     address0 => int_ofmap_4_address0,
     ce0      => int_ofmap_4_ce0,
     we0      => int_ofmap_4_we0,
     be0      => int_ofmap_4_be0,
     d0       => int_ofmap_4_d0,
     q0       => int_ofmap_4_q0,
     clk1     => ACLK,
     address1 => int_ofmap_4_address1,
     ce1      => int_ofmap_4_ce1,
     we1      => int_ofmap_4_we1,
     be1      => int_ofmap_4_be1,
     d1       => int_ofmap_4_d1,
     q1       => int_ofmap_4_q1);
-- int_ofmap_5
int_ofmap_5 : conv_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 12,
     AWIDTH   => log2(12))
port map (
     clk0     => ACLK,
     address0 => int_ofmap_5_address0,
     ce0      => int_ofmap_5_ce0,
     we0      => int_ofmap_5_we0,
     be0      => int_ofmap_5_be0,
     d0       => int_ofmap_5_d0,
     q0       => int_ofmap_5_q0,
     clk1     => ACLK,
     address1 => int_ofmap_5_address1,
     ce1      => int_ofmap_5_ce1,
     we1      => int_ofmap_5_we1,
     be1      => int_ofmap_5_be1,
     d1       => int_ofmap_5_d1,
     q1       => int_ofmap_5_q1);
-- int_ofmap_6
int_ofmap_6 : conv_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 12,
     AWIDTH   => log2(12))
port map (
     clk0     => ACLK,
     address0 => int_ofmap_6_address0,
     ce0      => int_ofmap_6_ce0,
     we0      => int_ofmap_6_we0,
     be0      => int_ofmap_6_be0,
     d0       => int_ofmap_6_d0,
     q0       => int_ofmap_6_q0,
     clk1     => ACLK,
     address1 => int_ofmap_6_address1,
     ce1      => int_ofmap_6_ce1,
     we1      => int_ofmap_6_we1,
     be1      => int_ofmap_6_be1,
     d1       => int_ofmap_6_d1,
     q1       => int_ofmap_6_q1);
-- int_ofmap_7
int_ofmap_7 : conv_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 12,
     AWIDTH   => log2(12))
port map (
     clk0     => ACLK,
     address0 => int_ofmap_7_address0,
     ce0      => int_ofmap_7_ce0,
     we0      => int_ofmap_7_we0,
     be0      => int_ofmap_7_be0,
     d0       => int_ofmap_7_d0,
     q0       => int_ofmap_7_q0,
     clk1     => ACLK,
     address1 => int_ofmap_7_address1,
     ce1      => int_ofmap_7_ce1,
     we1      => int_ofmap_7_we1,
     be1      => int_ofmap_7_be1,
     d1       => int_ofmap_7_d1,
     q1       => int_ofmap_7_q1);
-- int_ofmap_8
int_ofmap_8 : conv_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 12,
     AWIDTH   => log2(12))
port map (
     clk0     => ACLK,
     address0 => int_ofmap_8_address0,
     ce0      => int_ofmap_8_ce0,
     we0      => int_ofmap_8_we0,
     be0      => int_ofmap_8_be0,
     d0       => int_ofmap_8_d0,
     q0       => int_ofmap_8_q0,
     clk1     => ACLK,
     address1 => int_ofmap_8_address1,
     ce1      => int_ofmap_8_ce1,
     we1      => int_ofmap_8_we1,
     be1      => int_ofmap_8_be1,
     d1       => int_ofmap_8_d1,
     q1       => int_ofmap_8_q1);
-- int_ofmap_9
int_ofmap_9 : conv_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 12,
     AWIDTH   => log2(12))
port map (
     clk0     => ACLK,
     address0 => int_ofmap_9_address0,
     ce0      => int_ofmap_9_ce0,
     we0      => int_ofmap_9_we0,
     be0      => int_ofmap_9_be0,
     d0       => int_ofmap_9_d0,
     q0       => int_ofmap_9_q0,
     clk1     => ACLK,
     address1 => int_ofmap_9_address1,
     ce1      => int_ofmap_9_ce1,
     we1      => int_ofmap_9_we1,
     be1      => int_ofmap_9_be1,
     d1       => int_ofmap_9_d1,
     q1       => int_ofmap_9_q1);
-- int_ofmap_10
int_ofmap_10 : conv_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 12,
     AWIDTH   => log2(12))
port map (
     clk0     => ACLK,
     address0 => int_ofmap_10_address0,
     ce0      => int_ofmap_10_ce0,
     we0      => int_ofmap_10_we0,
     be0      => int_ofmap_10_be0,
     d0       => int_ofmap_10_d0,
     q0       => int_ofmap_10_q0,
     clk1     => ACLK,
     address1 => int_ofmap_10_address1,
     ce1      => int_ofmap_10_ce1,
     we1      => int_ofmap_10_we1,
     be1      => int_ofmap_10_be1,
     d1       => int_ofmap_10_d1,
     q1       => int_ofmap_10_q1);
-- int_ofmap_11
int_ofmap_11 : conv_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 12,
     AWIDTH   => log2(12))
port map (
     clk0     => ACLK,
     address0 => int_ofmap_11_address0,
     ce0      => int_ofmap_11_ce0,
     we0      => int_ofmap_11_we0,
     be0      => int_ofmap_11_be0,
     d0       => int_ofmap_11_d0,
     q0       => int_ofmap_11_q0,
     clk1     => ACLK,
     address1 => int_ofmap_11_address1,
     ce1      => int_ofmap_11_ce1,
     we1      => int_ofmap_11_we1,
     be1      => int_ofmap_11_be1,
     d1       => int_ofmap_11_d1,
     q1       => int_ofmap_11_q1);

-- ----------------------- AXI WRITE ---------------------
    AWREADY_t <=  '1' when wstate = wridle else '0';
    AWREADY   <=  AWREADY_t;
    WREADY_t  <=  '1' when wstate = wrdata else '0';
    WREADY    <=  WREADY_t;
    BRESP     <=  "00";  -- OKAY
    BVALID    <=  '1' when wstate = wrresp else '0';
    wmask     <=  (31 downto 24 => WSTRB(3), 23 downto 16 => WSTRB(2), 15 downto 8 => WSTRB(1), 7 downto 0 => WSTRB(0));
    aw_hs     <=  AWVALID and AWREADY_t;
    w_hs      <=  WVALID and WREADY_t;

    -- write FSM
    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                wstate <= wrreset;
            elsif (ACLK_EN = '1') then
                wstate <= wnext;
            end if;
        end if;
    end process;

    process (wstate, AWVALID, WVALID, BREADY)
    begin
        case (wstate) is
        when wridle =>
            if (AWVALID = '1') then
                wnext <= wrdata;
            else
                wnext <= wridle;
            end if;
        when wrdata =>
            if (WVALID = '1') then
                wnext <= wrresp;
            else
                wnext <= wrdata;
            end if;
        when wrresp =>
            if (BREADY = '1') then
                wnext <= wridle;
            else
                wnext <= wrresp;
            end if;
        when others =>
            wnext <= wridle;
        end case;
    end process;

    waddr_proc : process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (aw_hs = '1') then
                    waddr <= UNSIGNED(AWADDR(ADDR_BITS-1 downto 0));
                end if;
            end if;
        end if;
    end process;

-- ----------------------- AXI READ ----------------------
    ARREADY_t <= '1' when (rstate = rdidle) else '0';
    ARREADY <= ARREADY_t;
    RDATA   <= STD_LOGIC_VECTOR(rdata_data);
    RRESP   <= "00";  -- OKAY
    RVALID_t  <= '1' when (rstate = rddata) and (int_ofmap_0_read = '0') and (int_ofmap_1_read = '0') and (int_ofmap_2_read = '0') and (int_ofmap_3_read = '0') and (int_ofmap_4_read = '0') and (int_ofmap_5_read = '0') and (int_ofmap_6_read = '0') and (int_ofmap_7_read = '0') and (int_ofmap_8_read = '0') and (int_ofmap_9_read = '0') and (int_ofmap_10_read = '0') and (int_ofmap_11_read = '0') else '0';
    RVALID    <= RVALID_t;
    ar_hs   <= ARVALID and ARREADY_t;
    raddr   <= UNSIGNED(ARADDR(ADDR_BITS-1 downto 0));

    -- read FSM
    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                rstate <= rdreset;
            elsif (ACLK_EN = '1') then
                rstate <= rnext;
            end if;
        end if;
    end process;

    process (rstate, ARVALID, RREADY, RVALID_t)
    begin
        case (rstate) is
        when rdidle =>
            if (ARVALID = '1') then
                rnext <= rddata;
            else
                rnext <= rdidle;
            end if;
        when rddata =>
            if (RREADY = '1' and RVALID_t = '1') then
                rnext <= rdidle;
            else
                rnext <= rddata;
            end if;
        when others =>
            rnext <= rdidle;
        end case;
    end process;

    rdata_proc : process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (ar_hs = '1') then
                    case (TO_INTEGER(raddr)) is
                    when ADDR_IFMAP_0_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_0(31 downto 0), 32);
                    when ADDR_IFMAP_1_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_1(31 downto 0), 32);
                    when ADDR_IFMAP_2_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_2(31 downto 0), 32);
                    when ADDR_IFMAP_3_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_3(31 downto 0), 32);
                    when ADDR_IFMAP_4_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_4(31 downto 0), 32);
                    when ADDR_IFMAP_5_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_5(31 downto 0), 32);
                    when ADDR_IFMAP_6_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_6(31 downto 0), 32);
                    when ADDR_IFMAP_7_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_7(31 downto 0), 32);
                    when ADDR_IFMAP_8_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_8(31 downto 0), 32);
                    when ADDR_IFMAP_9_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_9(31 downto 0), 32);
                    when ADDR_IFMAP_10_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_10(31 downto 0), 32);
                    when ADDR_IFMAP_11_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_11(31 downto 0), 32);
                    when ADDR_IFMAP_12_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_12(31 downto 0), 32);
                    when ADDR_IFMAP_13_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_13(31 downto 0), 32);
                    when ADDR_IFMAP_14_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_14(31 downto 0), 32);
                    when ADDR_IFMAP_15_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_15(31 downto 0), 32);
                    when ADDR_IFMAP_16_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_16(31 downto 0), 32);
                    when ADDR_IFMAP_17_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_17(31 downto 0), 32);
                    when ADDR_IFMAP_18_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_18(31 downto 0), 32);
                    when ADDR_IFMAP_19_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_19(31 downto 0), 32);
                    when ADDR_IFMAP_20_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_20(31 downto 0), 32);
                    when ADDR_IFMAP_21_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_21(31 downto 0), 32);
                    when ADDR_IFMAP_22_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_22(31 downto 0), 32);
                    when ADDR_IFMAP_23_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_23(31 downto 0), 32);
                    when ADDR_IFMAP_24_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_24(31 downto 0), 32);
                    when ADDR_IFMAP_25_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_25(31 downto 0), 32);
                    when ADDR_IFMAP_26_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_26(31 downto 0), 32);
                    when ADDR_IFMAP_27_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_27(31 downto 0), 32);
                    when ADDR_IFMAP_28_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_28(31 downto 0), 32);
                    when ADDR_IFMAP_29_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_29(31 downto 0), 32);
                    when ADDR_IFMAP_30_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_30(31 downto 0), 32);
                    when ADDR_IFMAP_31_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_31(31 downto 0), 32);
                    when ADDR_IFMAP_32_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_32(31 downto 0), 32);
                    when ADDR_IFMAP_33_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_33(31 downto 0), 32);
                    when ADDR_IFMAP_34_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_34(31 downto 0), 32);
                    when ADDR_IFMAP_35_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_35(31 downto 0), 32);
                    when ADDR_IFMAP_36_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_36(31 downto 0), 32);
                    when ADDR_IFMAP_37_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_37(31 downto 0), 32);
                    when ADDR_IFMAP_38_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_38(31 downto 0), 32);
                    when ADDR_IFMAP_39_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_39(31 downto 0), 32);
                    when ADDR_IFMAP_40_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_40(31 downto 0), 32);
                    when ADDR_IFMAP_41_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_41(31 downto 0), 32);
                    when ADDR_IFMAP_42_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_42(31 downto 0), 32);
                    when ADDR_IFMAP_43_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_43(31 downto 0), 32);
                    when ADDR_IFMAP_44_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_44(31 downto 0), 32);
                    when ADDR_IFMAP_45_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_45(31 downto 0), 32);
                    when ADDR_IFMAP_46_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_46(31 downto 0), 32);
                    when ADDR_IFMAP_47_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_47(31 downto 0), 32);
                    when ADDR_IFMAP_48_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_48(31 downto 0), 32);
                    when ADDR_IFMAP_49_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_49(31 downto 0), 32);
                    when ADDR_IFMAP_50_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_50(31 downto 0), 32);
                    when ADDR_IFMAP_51_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_51(31 downto 0), 32);
                    when ADDR_IFMAP_52_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_52(31 downto 0), 32);
                    when ADDR_IFMAP_53_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_53(31 downto 0), 32);
                    when ADDR_IFMAP_54_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_54(31 downto 0), 32);
                    when ADDR_IFMAP_55_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_55(31 downto 0), 32);
                    when ADDR_IFMAP_56_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_56(31 downto 0), 32);
                    when ADDR_IFMAP_57_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_57(31 downto 0), 32);
                    when ADDR_IFMAP_58_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_58(31 downto 0), 32);
                    when ADDR_IFMAP_59_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_59(31 downto 0), 32);
                    when ADDR_IFMAP_60_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_60(31 downto 0), 32);
                    when ADDR_IFMAP_61_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_61(31 downto 0), 32);
                    when ADDR_IFMAP_62_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_62(31 downto 0), 32);
                    when ADDR_IFMAP_63_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_63(31 downto 0), 32);
                    when ADDR_IFMAP_64_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_64(31 downto 0), 32);
                    when ADDR_IFMAP_65_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_65(31 downto 0), 32);
                    when ADDR_IFMAP_66_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_66(31 downto 0), 32);
                    when ADDR_IFMAP_67_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_67(31 downto 0), 32);
                    when ADDR_IFMAP_68_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_68(31 downto 0), 32);
                    when ADDR_IFMAP_69_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_69(31 downto 0), 32);
                    when ADDR_IFMAP_70_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_70(31 downto 0), 32);
                    when ADDR_IFMAP_71_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_71(31 downto 0), 32);
                    when ADDR_IFMAP_72_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_72(31 downto 0), 32);
                    when ADDR_IFMAP_73_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_73(31 downto 0), 32);
                    when ADDR_IFMAP_74_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_74(31 downto 0), 32);
                    when ADDR_IFMAP_75_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_75(31 downto 0), 32);
                    when ADDR_IFMAP_76_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_76(31 downto 0), 32);
                    when ADDR_IFMAP_77_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_77(31 downto 0), 32);
                    when ADDR_IFMAP_78_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_78(31 downto 0), 32);
                    when ADDR_IFMAP_79_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_79(31 downto 0), 32);
                    when ADDR_IFMAP_80_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_80(31 downto 0), 32);
                    when ADDR_IFMAP_81_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_81(31 downto 0), 32);
                    when ADDR_IFMAP_82_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_82(31 downto 0), 32);
                    when ADDR_IFMAP_83_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_83(31 downto 0), 32);
                    when ADDR_IFMAP_84_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_84(31 downto 0), 32);
                    when ADDR_IFMAP_85_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_85(31 downto 0), 32);
                    when ADDR_IFMAP_86_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_86(31 downto 0), 32);
                    when ADDR_IFMAP_87_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_87(31 downto 0), 32);
                    when ADDR_IFMAP_88_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_88(31 downto 0), 32);
                    when ADDR_IFMAP_89_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_89(31 downto 0), 32);
                    when ADDR_IFMAP_90_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_90(31 downto 0), 32);
                    when ADDR_IFMAP_91_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_91(31 downto 0), 32);
                    when ADDR_IFMAP_92_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_92(31 downto 0), 32);
                    when ADDR_IFMAP_93_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_93(31 downto 0), 32);
                    when ADDR_IFMAP_94_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_94(31 downto 0), 32);
                    when ADDR_IFMAP_95_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_95(31 downto 0), 32);
                    when ADDR_IFMAP_96_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_96(31 downto 0), 32);
                    when ADDR_IFMAP_97_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_97(31 downto 0), 32);
                    when ADDR_IFMAP_98_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_98(31 downto 0), 32);
                    when ADDR_IFMAP_99_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_99(31 downto 0), 32);
                    when ADDR_IFMAP_100_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_100(31 downto 0), 32);
                    when ADDR_IFMAP_101_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_101(31 downto 0), 32);
                    when ADDR_IFMAP_102_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_102(31 downto 0), 32);
                    when ADDR_IFMAP_103_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_103(31 downto 0), 32);
                    when ADDR_IFMAP_104_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_104(31 downto 0), 32);
                    when ADDR_IFMAP_105_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_105(31 downto 0), 32);
                    when ADDR_IFMAP_106_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_106(31 downto 0), 32);
                    when ADDR_IFMAP_107_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_107(31 downto 0), 32);
                    when ADDR_IFMAP_108_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_108(31 downto 0), 32);
                    when ADDR_IFMAP_109_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_109(31 downto 0), 32);
                    when ADDR_IFMAP_110_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_110(31 downto 0), 32);
                    when ADDR_IFMAP_111_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_111(31 downto 0), 32);
                    when ADDR_IFMAP_112_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_112(31 downto 0), 32);
                    when ADDR_IFMAP_113_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_113(31 downto 0), 32);
                    when ADDR_IFMAP_114_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_114(31 downto 0), 32);
                    when ADDR_IFMAP_115_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_115(31 downto 0), 32);
                    when ADDR_IFMAP_116_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_116(31 downto 0), 32);
                    when ADDR_IFMAP_117_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_117(31 downto 0), 32);
                    when ADDR_IFMAP_118_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_118(31 downto 0), 32);
                    when ADDR_IFMAP_119_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_119(31 downto 0), 32);
                    when ADDR_IFMAP_120_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_120(31 downto 0), 32);
                    when ADDR_IFMAP_121_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_121(31 downto 0), 32);
                    when ADDR_IFMAP_122_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_122(31 downto 0), 32);
                    when ADDR_IFMAP_123_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_123(31 downto 0), 32);
                    when ADDR_IFMAP_124_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_124(31 downto 0), 32);
                    when ADDR_IFMAP_125_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_125(31 downto 0), 32);
                    when ADDR_IFMAP_126_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_126(31 downto 0), 32);
                    when ADDR_IFMAP_127_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_127(31 downto 0), 32);
                    when ADDR_IFMAP_128_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_128(31 downto 0), 32);
                    when ADDR_IFMAP_129_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_129(31 downto 0), 32);
                    when ADDR_IFMAP_130_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_130(31 downto 0), 32);
                    when ADDR_IFMAP_131_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_131(31 downto 0), 32);
                    when ADDR_IFMAP_132_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_132(31 downto 0), 32);
                    when ADDR_IFMAP_133_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_133(31 downto 0), 32);
                    when ADDR_IFMAP_134_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_134(31 downto 0), 32);
                    when ADDR_IFMAP_135_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_135(31 downto 0), 32);
                    when ADDR_IFMAP_136_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_136(31 downto 0), 32);
                    when ADDR_IFMAP_137_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_137(31 downto 0), 32);
                    when ADDR_IFMAP_138_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_138(31 downto 0), 32);
                    when ADDR_IFMAP_139_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_139(31 downto 0), 32);
                    when ADDR_IFMAP_140_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_140(31 downto 0), 32);
                    when ADDR_IFMAP_141_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_141(31 downto 0), 32);
                    when ADDR_IFMAP_142_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_142(31 downto 0), 32);
                    when ADDR_IFMAP_143_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_143(31 downto 0), 32);
                    when ADDR_IFMAP_144_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_144(31 downto 0), 32);
                    when ADDR_IFMAP_145_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_145(31 downto 0), 32);
                    when ADDR_IFMAP_146_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_146(31 downto 0), 32);
                    when ADDR_IFMAP_147_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_147(31 downto 0), 32);
                    when ADDR_IFMAP_148_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_148(31 downto 0), 32);
                    when ADDR_IFMAP_149_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_149(31 downto 0), 32);
                    when ADDR_IFMAP_150_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_150(31 downto 0), 32);
                    when ADDR_IFMAP_151_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_151(31 downto 0), 32);
                    when ADDR_IFMAP_152_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_152(31 downto 0), 32);
                    when ADDR_IFMAP_153_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_153(31 downto 0), 32);
                    when ADDR_IFMAP_154_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_154(31 downto 0), 32);
                    when ADDR_IFMAP_155_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_155(31 downto 0), 32);
                    when ADDR_IFMAP_156_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_156(31 downto 0), 32);
                    when ADDR_IFMAP_157_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_157(31 downto 0), 32);
                    when ADDR_IFMAP_158_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_158(31 downto 0), 32);
                    when ADDR_IFMAP_159_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_159(31 downto 0), 32);
                    when ADDR_IFMAP_160_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_160(31 downto 0), 32);
                    when ADDR_IFMAP_161_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_161(31 downto 0), 32);
                    when ADDR_IFMAP_162_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_162(31 downto 0), 32);
                    when ADDR_IFMAP_163_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_163(31 downto 0), 32);
                    when ADDR_IFMAP_164_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_164(31 downto 0), 32);
                    when ADDR_IFMAP_165_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_165(31 downto 0), 32);
                    when ADDR_IFMAP_166_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_166(31 downto 0), 32);
                    when ADDR_IFMAP_167_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_167(31 downto 0), 32);
                    when ADDR_IFMAP_168_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_168(31 downto 0), 32);
                    when ADDR_IFMAP_169_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_169(31 downto 0), 32);
                    when ADDR_IFMAP_170_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_170(31 downto 0), 32);
                    when ADDR_IFMAP_171_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_171(31 downto 0), 32);
                    when ADDR_IFMAP_172_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_172(31 downto 0), 32);
                    when ADDR_IFMAP_173_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_173(31 downto 0), 32);
                    when ADDR_IFMAP_174_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_174(31 downto 0), 32);
                    when ADDR_IFMAP_175_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_175(31 downto 0), 32);
                    when ADDR_IFMAP_176_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_176(31 downto 0), 32);
                    when ADDR_IFMAP_177_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_177(31 downto 0), 32);
                    when ADDR_IFMAP_178_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_178(31 downto 0), 32);
                    when ADDR_IFMAP_179_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_179(31 downto 0), 32);
                    when ADDR_IFMAP_180_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_180(31 downto 0), 32);
                    when ADDR_IFMAP_181_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_181(31 downto 0), 32);
                    when ADDR_IFMAP_182_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_182(31 downto 0), 32);
                    when ADDR_IFMAP_183_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_183(31 downto 0), 32);
                    when ADDR_IFMAP_184_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_184(31 downto 0), 32);
                    when ADDR_IFMAP_185_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_185(31 downto 0), 32);
                    when ADDR_IFMAP_186_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_186(31 downto 0), 32);
                    when ADDR_IFMAP_187_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_187(31 downto 0), 32);
                    when ADDR_IFMAP_188_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_188(31 downto 0), 32);
                    when ADDR_IFMAP_189_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_189(31 downto 0), 32);
                    when ADDR_IFMAP_190_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_190(31 downto 0), 32);
                    when ADDR_IFMAP_191_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_191(31 downto 0), 32);
                    when ADDR_IFMAP_192_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_192(31 downto 0), 32);
                    when ADDR_IFMAP_193_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_193(31 downto 0), 32);
                    when ADDR_IFMAP_194_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_194(31 downto 0), 32);
                    when ADDR_IFMAP_195_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_195(31 downto 0), 32);
                    when ADDR_IFMAP_196_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_196(31 downto 0), 32);
                    when ADDR_IFMAP_197_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_197(31 downto 0), 32);
                    when ADDR_IFMAP_198_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_198(31 downto 0), 32);
                    when ADDR_IFMAP_199_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_199(31 downto 0), 32);
                    when ADDR_IFMAP_200_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_200(31 downto 0), 32);
                    when ADDR_IFMAP_201_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_201(31 downto 0), 32);
                    when ADDR_IFMAP_202_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_202(31 downto 0), 32);
                    when ADDR_IFMAP_203_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_203(31 downto 0), 32);
                    when ADDR_IFMAP_204_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_204(31 downto 0), 32);
                    when ADDR_IFMAP_205_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_205(31 downto 0), 32);
                    when ADDR_IFMAP_206_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_206(31 downto 0), 32);
                    when ADDR_IFMAP_207_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_207(31 downto 0), 32);
                    when ADDR_IFMAP_208_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_208(31 downto 0), 32);
                    when ADDR_IFMAP_209_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_209(31 downto 0), 32);
                    when ADDR_IFMAP_210_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_210(31 downto 0), 32);
                    when ADDR_IFMAP_211_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_211(31 downto 0), 32);
                    when ADDR_IFMAP_212_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_212(31 downto 0), 32);
                    when ADDR_IFMAP_213_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_213(31 downto 0), 32);
                    when ADDR_IFMAP_214_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_214(31 downto 0), 32);
                    when ADDR_IFMAP_215_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_215(31 downto 0), 32);
                    when ADDR_IFMAP_216_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_216(31 downto 0), 32);
                    when ADDR_IFMAP_217_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_217(31 downto 0), 32);
                    when ADDR_IFMAP_218_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_218(31 downto 0), 32);
                    when ADDR_IFMAP_219_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_219(31 downto 0), 32);
                    when ADDR_IFMAP_220_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_220(31 downto 0), 32);
                    when ADDR_IFMAP_221_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_221(31 downto 0), 32);
                    when ADDR_IFMAP_222_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_222(31 downto 0), 32);
                    when ADDR_IFMAP_223_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_223(31 downto 0), 32);
                    when ADDR_IFMAP_224_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_224(31 downto 0), 32);
                    when ADDR_IFMAP_225_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_225(31 downto 0), 32);
                    when ADDR_IFMAP_226_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_226(31 downto 0), 32);
                    when ADDR_IFMAP_227_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_227(31 downto 0), 32);
                    when ADDR_IFMAP_228_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_228(31 downto 0), 32);
                    when ADDR_IFMAP_229_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_229(31 downto 0), 32);
                    when ADDR_IFMAP_230_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_230(31 downto 0), 32);
                    when ADDR_IFMAP_231_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_231(31 downto 0), 32);
                    when ADDR_IFMAP_232_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_232(31 downto 0), 32);
                    when ADDR_IFMAP_233_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_233(31 downto 0), 32);
                    when ADDR_IFMAP_234_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_234(31 downto 0), 32);
                    when ADDR_IFMAP_235_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_235(31 downto 0), 32);
                    when ADDR_IFMAP_236_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_236(31 downto 0), 32);
                    when ADDR_IFMAP_237_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_237(31 downto 0), 32);
                    when ADDR_IFMAP_238_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_238(31 downto 0), 32);
                    when ADDR_IFMAP_239_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_239(31 downto 0), 32);
                    when ADDR_IFMAP_240_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_240(31 downto 0), 32);
                    when ADDR_IFMAP_241_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_241(31 downto 0), 32);
                    when ADDR_IFMAP_242_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_242(31 downto 0), 32);
                    when ADDR_IFMAP_243_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_243(31 downto 0), 32);
                    when ADDR_IFMAP_244_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_244(31 downto 0), 32);
                    when ADDR_IFMAP_245_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_245(31 downto 0), 32);
                    when ADDR_IFMAP_246_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_246(31 downto 0), 32);
                    when ADDR_IFMAP_247_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_247(31 downto 0), 32);
                    when ADDR_IFMAP_248_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_248(31 downto 0), 32);
                    when ADDR_IFMAP_249_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_249(31 downto 0), 32);
                    when ADDR_IFMAP_250_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_250(31 downto 0), 32);
                    when ADDR_IFMAP_251_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_251(31 downto 0), 32);
                    when ADDR_IFMAP_252_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_252(31 downto 0), 32);
                    when ADDR_IFMAP_253_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_253(31 downto 0), 32);
                    when ADDR_IFMAP_254_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_254(31 downto 0), 32);
                    when ADDR_IFMAP_255_DATA_0 =>
                        rdata_data <= RESIZE(int_ifmap_255(31 downto 0), 32);
                    when ADDR_FILTER_0_DATA_0 =>
                        rdata_data <= RESIZE(int_filter_0(31 downto 0), 32);
                    when ADDR_FILTER_1_DATA_0 =>
                        rdata_data <= RESIZE(int_filter_1(31 downto 0), 32);
                    when ADDR_FILTER_2_DATA_0 =>
                        rdata_data <= RESIZE(int_filter_2(31 downto 0), 32);
                    when ADDR_FILTER_3_DATA_0 =>
                        rdata_data <= RESIZE(int_filter_3(31 downto 0), 32);
                    when ADDR_FILTER_4_DATA_0 =>
                        rdata_data <= RESIZE(int_filter_4(31 downto 0), 32);
                    when ADDR_FILTER_5_DATA_0 =>
                        rdata_data <= RESIZE(int_filter_5(31 downto 0), 32);
                    when ADDR_FILTER_6_DATA_0 =>
                        rdata_data <= RESIZE(int_filter_6(31 downto 0), 32);
                    when ADDR_FILTER_7_DATA_0 =>
                        rdata_data <= RESIZE(int_filter_7(31 downto 0), 32);
                    when ADDR_FILTER_8_DATA_0 =>
                        rdata_data <= RESIZE(int_filter_8(31 downto 0), 32);
                    when ADDR_FILTER_9_DATA_0 =>
                        rdata_data <= RESIZE(int_filter_9(31 downto 0), 32);
                    when ADDR_FILTER_10_DATA_0 =>
                        rdata_data <= RESIZE(int_filter_10(31 downto 0), 32);
                    when ADDR_FILTER_11_DATA_0 =>
                        rdata_data <= RESIZE(int_filter_11(31 downto 0), 32);
                    when ADDR_FILTER_12_DATA_0 =>
                        rdata_data <= RESIZE(int_filter_12(31 downto 0), 32);
                    when ADDR_FILTER_13_DATA_0 =>
                        rdata_data <= RESIZE(int_filter_13(31 downto 0), 32);
                    when ADDR_FILTER_14_DATA_0 =>
                        rdata_data <= RESIZE(int_filter_14(31 downto 0), 32);
                    when ADDR_FILTER_15_DATA_0 =>
                        rdata_data <= RESIZE(int_filter_15(31 downto 0), 32);
                    when ADDR_FILTER_16_DATA_0 =>
                        rdata_data <= RESIZE(int_filter_16(31 downto 0), 32);
                    when ADDR_FILTER_17_DATA_0 =>
                        rdata_data <= RESIZE(int_filter_17(31 downto 0), 32);
                    when ADDR_FILTER_18_DATA_0 =>
                        rdata_data <= RESIZE(int_filter_18(31 downto 0), 32);
                    when ADDR_FILTER_19_DATA_0 =>
                        rdata_data <= RESIZE(int_filter_19(31 downto 0), 32);
                    when ADDR_FILTER_20_DATA_0 =>
                        rdata_data <= RESIZE(int_filter_20(31 downto 0), 32);
                    when ADDR_FILTER_21_DATA_0 =>
                        rdata_data <= RESIZE(int_filter_21(31 downto 0), 32);
                    when ADDR_FILTER_22_DATA_0 =>
                        rdata_data <= RESIZE(int_filter_22(31 downto 0), 32);
                    when ADDR_FILTER_23_DATA_0 =>
                        rdata_data <= RESIZE(int_filter_23(31 downto 0), 32);
                    when ADDR_FILTER_24_DATA_0 =>
                        rdata_data <= RESIZE(int_filter_24(31 downto 0), 32);
                    when others =>
                        rdata_data <= (others => '0');
                    end case;
                elsif (int_ofmap_0_read = '1') then
                    rdata_data <= int_ofmap_0_q1;
                elsif (int_ofmap_1_read = '1') then
                    rdata_data <= int_ofmap_1_q1;
                elsif (int_ofmap_2_read = '1') then
                    rdata_data <= int_ofmap_2_q1;
                elsif (int_ofmap_3_read = '1') then
                    rdata_data <= int_ofmap_3_q1;
                elsif (int_ofmap_4_read = '1') then
                    rdata_data <= int_ofmap_4_q1;
                elsif (int_ofmap_5_read = '1') then
                    rdata_data <= int_ofmap_5_q1;
                elsif (int_ofmap_6_read = '1') then
                    rdata_data <= int_ofmap_6_q1;
                elsif (int_ofmap_7_read = '1') then
                    rdata_data <= int_ofmap_7_q1;
                elsif (int_ofmap_8_read = '1') then
                    rdata_data <= int_ofmap_8_q1;
                elsif (int_ofmap_9_read = '1') then
                    rdata_data <= int_ofmap_9_q1;
                elsif (int_ofmap_10_read = '1') then
                    rdata_data <= int_ofmap_10_q1;
                elsif (int_ofmap_11_read = '1') then
                    rdata_data <= int_ofmap_11_q1;
                end if;
            end if;
        end if;
    end process;

-- ----------------------- Register logic ----------------
    ifmap_0              <= STD_LOGIC_VECTOR(int_ifmap_0);
    ifmap_1              <= STD_LOGIC_VECTOR(int_ifmap_1);
    ifmap_2              <= STD_LOGIC_VECTOR(int_ifmap_2);
    ifmap_3              <= STD_LOGIC_VECTOR(int_ifmap_3);
    ifmap_4              <= STD_LOGIC_VECTOR(int_ifmap_4);
    ifmap_5              <= STD_LOGIC_VECTOR(int_ifmap_5);
    ifmap_6              <= STD_LOGIC_VECTOR(int_ifmap_6);
    ifmap_7              <= STD_LOGIC_VECTOR(int_ifmap_7);
    ifmap_8              <= STD_LOGIC_VECTOR(int_ifmap_8);
    ifmap_9              <= STD_LOGIC_VECTOR(int_ifmap_9);
    ifmap_10             <= STD_LOGIC_VECTOR(int_ifmap_10);
    ifmap_11             <= STD_LOGIC_VECTOR(int_ifmap_11);
    ifmap_12             <= STD_LOGIC_VECTOR(int_ifmap_12);
    ifmap_13             <= STD_LOGIC_VECTOR(int_ifmap_13);
    ifmap_14             <= STD_LOGIC_VECTOR(int_ifmap_14);
    ifmap_15             <= STD_LOGIC_VECTOR(int_ifmap_15);
    ifmap_16             <= STD_LOGIC_VECTOR(int_ifmap_16);
    ifmap_17             <= STD_LOGIC_VECTOR(int_ifmap_17);
    ifmap_18             <= STD_LOGIC_VECTOR(int_ifmap_18);
    ifmap_19             <= STD_LOGIC_VECTOR(int_ifmap_19);
    ifmap_20             <= STD_LOGIC_VECTOR(int_ifmap_20);
    ifmap_21             <= STD_LOGIC_VECTOR(int_ifmap_21);
    ifmap_22             <= STD_LOGIC_VECTOR(int_ifmap_22);
    ifmap_23             <= STD_LOGIC_VECTOR(int_ifmap_23);
    ifmap_24             <= STD_LOGIC_VECTOR(int_ifmap_24);
    ifmap_25             <= STD_LOGIC_VECTOR(int_ifmap_25);
    ifmap_26             <= STD_LOGIC_VECTOR(int_ifmap_26);
    ifmap_27             <= STD_LOGIC_VECTOR(int_ifmap_27);
    ifmap_28             <= STD_LOGIC_VECTOR(int_ifmap_28);
    ifmap_29             <= STD_LOGIC_VECTOR(int_ifmap_29);
    ifmap_30             <= STD_LOGIC_VECTOR(int_ifmap_30);
    ifmap_31             <= STD_LOGIC_VECTOR(int_ifmap_31);
    ifmap_32             <= STD_LOGIC_VECTOR(int_ifmap_32);
    ifmap_33             <= STD_LOGIC_VECTOR(int_ifmap_33);
    ifmap_34             <= STD_LOGIC_VECTOR(int_ifmap_34);
    ifmap_35             <= STD_LOGIC_VECTOR(int_ifmap_35);
    ifmap_36             <= STD_LOGIC_VECTOR(int_ifmap_36);
    ifmap_37             <= STD_LOGIC_VECTOR(int_ifmap_37);
    ifmap_38             <= STD_LOGIC_VECTOR(int_ifmap_38);
    ifmap_39             <= STD_LOGIC_VECTOR(int_ifmap_39);
    ifmap_40             <= STD_LOGIC_VECTOR(int_ifmap_40);
    ifmap_41             <= STD_LOGIC_VECTOR(int_ifmap_41);
    ifmap_42             <= STD_LOGIC_VECTOR(int_ifmap_42);
    ifmap_43             <= STD_LOGIC_VECTOR(int_ifmap_43);
    ifmap_44             <= STD_LOGIC_VECTOR(int_ifmap_44);
    ifmap_45             <= STD_LOGIC_VECTOR(int_ifmap_45);
    ifmap_46             <= STD_LOGIC_VECTOR(int_ifmap_46);
    ifmap_47             <= STD_LOGIC_VECTOR(int_ifmap_47);
    ifmap_48             <= STD_LOGIC_VECTOR(int_ifmap_48);
    ifmap_49             <= STD_LOGIC_VECTOR(int_ifmap_49);
    ifmap_50             <= STD_LOGIC_VECTOR(int_ifmap_50);
    ifmap_51             <= STD_LOGIC_VECTOR(int_ifmap_51);
    ifmap_52             <= STD_LOGIC_VECTOR(int_ifmap_52);
    ifmap_53             <= STD_LOGIC_VECTOR(int_ifmap_53);
    ifmap_54             <= STD_LOGIC_VECTOR(int_ifmap_54);
    ifmap_55             <= STD_LOGIC_VECTOR(int_ifmap_55);
    ifmap_56             <= STD_LOGIC_VECTOR(int_ifmap_56);
    ifmap_57             <= STD_LOGIC_VECTOR(int_ifmap_57);
    ifmap_58             <= STD_LOGIC_VECTOR(int_ifmap_58);
    ifmap_59             <= STD_LOGIC_VECTOR(int_ifmap_59);
    ifmap_60             <= STD_LOGIC_VECTOR(int_ifmap_60);
    ifmap_61             <= STD_LOGIC_VECTOR(int_ifmap_61);
    ifmap_62             <= STD_LOGIC_VECTOR(int_ifmap_62);
    ifmap_63             <= STD_LOGIC_VECTOR(int_ifmap_63);
    ifmap_64             <= STD_LOGIC_VECTOR(int_ifmap_64);
    ifmap_65             <= STD_LOGIC_VECTOR(int_ifmap_65);
    ifmap_66             <= STD_LOGIC_VECTOR(int_ifmap_66);
    ifmap_67             <= STD_LOGIC_VECTOR(int_ifmap_67);
    ifmap_68             <= STD_LOGIC_VECTOR(int_ifmap_68);
    ifmap_69             <= STD_LOGIC_VECTOR(int_ifmap_69);
    ifmap_70             <= STD_LOGIC_VECTOR(int_ifmap_70);
    ifmap_71             <= STD_LOGIC_VECTOR(int_ifmap_71);
    ifmap_72             <= STD_LOGIC_VECTOR(int_ifmap_72);
    ifmap_73             <= STD_LOGIC_VECTOR(int_ifmap_73);
    ifmap_74             <= STD_LOGIC_VECTOR(int_ifmap_74);
    ifmap_75             <= STD_LOGIC_VECTOR(int_ifmap_75);
    ifmap_76             <= STD_LOGIC_VECTOR(int_ifmap_76);
    ifmap_77             <= STD_LOGIC_VECTOR(int_ifmap_77);
    ifmap_78             <= STD_LOGIC_VECTOR(int_ifmap_78);
    ifmap_79             <= STD_LOGIC_VECTOR(int_ifmap_79);
    ifmap_80             <= STD_LOGIC_VECTOR(int_ifmap_80);
    ifmap_81             <= STD_LOGIC_VECTOR(int_ifmap_81);
    ifmap_82             <= STD_LOGIC_VECTOR(int_ifmap_82);
    ifmap_83             <= STD_LOGIC_VECTOR(int_ifmap_83);
    ifmap_84             <= STD_LOGIC_VECTOR(int_ifmap_84);
    ifmap_85             <= STD_LOGIC_VECTOR(int_ifmap_85);
    ifmap_86             <= STD_LOGIC_VECTOR(int_ifmap_86);
    ifmap_87             <= STD_LOGIC_VECTOR(int_ifmap_87);
    ifmap_88             <= STD_LOGIC_VECTOR(int_ifmap_88);
    ifmap_89             <= STD_LOGIC_VECTOR(int_ifmap_89);
    ifmap_90             <= STD_LOGIC_VECTOR(int_ifmap_90);
    ifmap_91             <= STD_LOGIC_VECTOR(int_ifmap_91);
    ifmap_92             <= STD_LOGIC_VECTOR(int_ifmap_92);
    ifmap_93             <= STD_LOGIC_VECTOR(int_ifmap_93);
    ifmap_94             <= STD_LOGIC_VECTOR(int_ifmap_94);
    ifmap_95             <= STD_LOGIC_VECTOR(int_ifmap_95);
    ifmap_96             <= STD_LOGIC_VECTOR(int_ifmap_96);
    ifmap_97             <= STD_LOGIC_VECTOR(int_ifmap_97);
    ifmap_98             <= STD_LOGIC_VECTOR(int_ifmap_98);
    ifmap_99             <= STD_LOGIC_VECTOR(int_ifmap_99);
    ifmap_100            <= STD_LOGIC_VECTOR(int_ifmap_100);
    ifmap_101            <= STD_LOGIC_VECTOR(int_ifmap_101);
    ifmap_102            <= STD_LOGIC_VECTOR(int_ifmap_102);
    ifmap_103            <= STD_LOGIC_VECTOR(int_ifmap_103);
    ifmap_104            <= STD_LOGIC_VECTOR(int_ifmap_104);
    ifmap_105            <= STD_LOGIC_VECTOR(int_ifmap_105);
    ifmap_106            <= STD_LOGIC_VECTOR(int_ifmap_106);
    ifmap_107            <= STD_LOGIC_VECTOR(int_ifmap_107);
    ifmap_108            <= STD_LOGIC_VECTOR(int_ifmap_108);
    ifmap_109            <= STD_LOGIC_VECTOR(int_ifmap_109);
    ifmap_110            <= STD_LOGIC_VECTOR(int_ifmap_110);
    ifmap_111            <= STD_LOGIC_VECTOR(int_ifmap_111);
    ifmap_112            <= STD_LOGIC_VECTOR(int_ifmap_112);
    ifmap_113            <= STD_LOGIC_VECTOR(int_ifmap_113);
    ifmap_114            <= STD_LOGIC_VECTOR(int_ifmap_114);
    ifmap_115            <= STD_LOGIC_VECTOR(int_ifmap_115);
    ifmap_116            <= STD_LOGIC_VECTOR(int_ifmap_116);
    ifmap_117            <= STD_LOGIC_VECTOR(int_ifmap_117);
    ifmap_118            <= STD_LOGIC_VECTOR(int_ifmap_118);
    ifmap_119            <= STD_LOGIC_VECTOR(int_ifmap_119);
    ifmap_120            <= STD_LOGIC_VECTOR(int_ifmap_120);
    ifmap_121            <= STD_LOGIC_VECTOR(int_ifmap_121);
    ifmap_122            <= STD_LOGIC_VECTOR(int_ifmap_122);
    ifmap_123            <= STD_LOGIC_VECTOR(int_ifmap_123);
    ifmap_124            <= STD_LOGIC_VECTOR(int_ifmap_124);
    ifmap_125            <= STD_LOGIC_VECTOR(int_ifmap_125);
    ifmap_126            <= STD_LOGIC_VECTOR(int_ifmap_126);
    ifmap_127            <= STD_LOGIC_VECTOR(int_ifmap_127);
    ifmap_128            <= STD_LOGIC_VECTOR(int_ifmap_128);
    ifmap_129            <= STD_LOGIC_VECTOR(int_ifmap_129);
    ifmap_130            <= STD_LOGIC_VECTOR(int_ifmap_130);
    ifmap_131            <= STD_LOGIC_VECTOR(int_ifmap_131);
    ifmap_132            <= STD_LOGIC_VECTOR(int_ifmap_132);
    ifmap_133            <= STD_LOGIC_VECTOR(int_ifmap_133);
    ifmap_134            <= STD_LOGIC_VECTOR(int_ifmap_134);
    ifmap_135            <= STD_LOGIC_VECTOR(int_ifmap_135);
    ifmap_136            <= STD_LOGIC_VECTOR(int_ifmap_136);
    ifmap_137            <= STD_LOGIC_VECTOR(int_ifmap_137);
    ifmap_138            <= STD_LOGIC_VECTOR(int_ifmap_138);
    ifmap_139            <= STD_LOGIC_VECTOR(int_ifmap_139);
    ifmap_140            <= STD_LOGIC_VECTOR(int_ifmap_140);
    ifmap_141            <= STD_LOGIC_VECTOR(int_ifmap_141);
    ifmap_142            <= STD_LOGIC_VECTOR(int_ifmap_142);
    ifmap_143            <= STD_LOGIC_VECTOR(int_ifmap_143);
    ifmap_144            <= STD_LOGIC_VECTOR(int_ifmap_144);
    ifmap_145            <= STD_LOGIC_VECTOR(int_ifmap_145);
    ifmap_146            <= STD_LOGIC_VECTOR(int_ifmap_146);
    ifmap_147            <= STD_LOGIC_VECTOR(int_ifmap_147);
    ifmap_148            <= STD_LOGIC_VECTOR(int_ifmap_148);
    ifmap_149            <= STD_LOGIC_VECTOR(int_ifmap_149);
    ifmap_150            <= STD_LOGIC_VECTOR(int_ifmap_150);
    ifmap_151            <= STD_LOGIC_VECTOR(int_ifmap_151);
    ifmap_152            <= STD_LOGIC_VECTOR(int_ifmap_152);
    ifmap_153            <= STD_LOGIC_VECTOR(int_ifmap_153);
    ifmap_154            <= STD_LOGIC_VECTOR(int_ifmap_154);
    ifmap_155            <= STD_LOGIC_VECTOR(int_ifmap_155);
    ifmap_156            <= STD_LOGIC_VECTOR(int_ifmap_156);
    ifmap_157            <= STD_LOGIC_VECTOR(int_ifmap_157);
    ifmap_158            <= STD_LOGIC_VECTOR(int_ifmap_158);
    ifmap_159            <= STD_LOGIC_VECTOR(int_ifmap_159);
    ifmap_160            <= STD_LOGIC_VECTOR(int_ifmap_160);
    ifmap_161            <= STD_LOGIC_VECTOR(int_ifmap_161);
    ifmap_162            <= STD_LOGIC_VECTOR(int_ifmap_162);
    ifmap_163            <= STD_LOGIC_VECTOR(int_ifmap_163);
    ifmap_164            <= STD_LOGIC_VECTOR(int_ifmap_164);
    ifmap_165            <= STD_LOGIC_VECTOR(int_ifmap_165);
    ifmap_166            <= STD_LOGIC_VECTOR(int_ifmap_166);
    ifmap_167            <= STD_LOGIC_VECTOR(int_ifmap_167);
    ifmap_168            <= STD_LOGIC_VECTOR(int_ifmap_168);
    ifmap_169            <= STD_LOGIC_VECTOR(int_ifmap_169);
    ifmap_170            <= STD_LOGIC_VECTOR(int_ifmap_170);
    ifmap_171            <= STD_LOGIC_VECTOR(int_ifmap_171);
    ifmap_172            <= STD_LOGIC_VECTOR(int_ifmap_172);
    ifmap_173            <= STD_LOGIC_VECTOR(int_ifmap_173);
    ifmap_174            <= STD_LOGIC_VECTOR(int_ifmap_174);
    ifmap_175            <= STD_LOGIC_VECTOR(int_ifmap_175);
    ifmap_176            <= STD_LOGIC_VECTOR(int_ifmap_176);
    ifmap_177            <= STD_LOGIC_VECTOR(int_ifmap_177);
    ifmap_178            <= STD_LOGIC_VECTOR(int_ifmap_178);
    ifmap_179            <= STD_LOGIC_VECTOR(int_ifmap_179);
    ifmap_180            <= STD_LOGIC_VECTOR(int_ifmap_180);
    ifmap_181            <= STD_LOGIC_VECTOR(int_ifmap_181);
    ifmap_182            <= STD_LOGIC_VECTOR(int_ifmap_182);
    ifmap_183            <= STD_LOGIC_VECTOR(int_ifmap_183);
    ifmap_184            <= STD_LOGIC_VECTOR(int_ifmap_184);
    ifmap_185            <= STD_LOGIC_VECTOR(int_ifmap_185);
    ifmap_186            <= STD_LOGIC_VECTOR(int_ifmap_186);
    ifmap_187            <= STD_LOGIC_VECTOR(int_ifmap_187);
    ifmap_188            <= STD_LOGIC_VECTOR(int_ifmap_188);
    ifmap_189            <= STD_LOGIC_VECTOR(int_ifmap_189);
    ifmap_190            <= STD_LOGIC_VECTOR(int_ifmap_190);
    ifmap_191            <= STD_LOGIC_VECTOR(int_ifmap_191);
    ifmap_192            <= STD_LOGIC_VECTOR(int_ifmap_192);
    ifmap_193            <= STD_LOGIC_VECTOR(int_ifmap_193);
    ifmap_194            <= STD_LOGIC_VECTOR(int_ifmap_194);
    ifmap_195            <= STD_LOGIC_VECTOR(int_ifmap_195);
    ifmap_196            <= STD_LOGIC_VECTOR(int_ifmap_196);
    ifmap_197            <= STD_LOGIC_VECTOR(int_ifmap_197);
    ifmap_198            <= STD_LOGIC_VECTOR(int_ifmap_198);
    ifmap_199            <= STD_LOGIC_VECTOR(int_ifmap_199);
    ifmap_200            <= STD_LOGIC_VECTOR(int_ifmap_200);
    ifmap_201            <= STD_LOGIC_VECTOR(int_ifmap_201);
    ifmap_202            <= STD_LOGIC_VECTOR(int_ifmap_202);
    ifmap_203            <= STD_LOGIC_VECTOR(int_ifmap_203);
    ifmap_204            <= STD_LOGIC_VECTOR(int_ifmap_204);
    ifmap_205            <= STD_LOGIC_VECTOR(int_ifmap_205);
    ifmap_206            <= STD_LOGIC_VECTOR(int_ifmap_206);
    ifmap_207            <= STD_LOGIC_VECTOR(int_ifmap_207);
    ifmap_208            <= STD_LOGIC_VECTOR(int_ifmap_208);
    ifmap_209            <= STD_LOGIC_VECTOR(int_ifmap_209);
    ifmap_210            <= STD_LOGIC_VECTOR(int_ifmap_210);
    ifmap_211            <= STD_LOGIC_VECTOR(int_ifmap_211);
    ifmap_212            <= STD_LOGIC_VECTOR(int_ifmap_212);
    ifmap_213            <= STD_LOGIC_VECTOR(int_ifmap_213);
    ifmap_214            <= STD_LOGIC_VECTOR(int_ifmap_214);
    ifmap_215            <= STD_LOGIC_VECTOR(int_ifmap_215);
    ifmap_216            <= STD_LOGIC_VECTOR(int_ifmap_216);
    ifmap_217            <= STD_LOGIC_VECTOR(int_ifmap_217);
    ifmap_218            <= STD_LOGIC_VECTOR(int_ifmap_218);
    ifmap_219            <= STD_LOGIC_VECTOR(int_ifmap_219);
    ifmap_220            <= STD_LOGIC_VECTOR(int_ifmap_220);
    ifmap_221            <= STD_LOGIC_VECTOR(int_ifmap_221);
    ifmap_222            <= STD_LOGIC_VECTOR(int_ifmap_222);
    ifmap_223            <= STD_LOGIC_VECTOR(int_ifmap_223);
    ifmap_224            <= STD_LOGIC_VECTOR(int_ifmap_224);
    ifmap_225            <= STD_LOGIC_VECTOR(int_ifmap_225);
    ifmap_226            <= STD_LOGIC_VECTOR(int_ifmap_226);
    ifmap_227            <= STD_LOGIC_VECTOR(int_ifmap_227);
    ifmap_228            <= STD_LOGIC_VECTOR(int_ifmap_228);
    ifmap_229            <= STD_LOGIC_VECTOR(int_ifmap_229);
    ifmap_230            <= STD_LOGIC_VECTOR(int_ifmap_230);
    ifmap_231            <= STD_LOGIC_VECTOR(int_ifmap_231);
    ifmap_232            <= STD_LOGIC_VECTOR(int_ifmap_232);
    ifmap_233            <= STD_LOGIC_VECTOR(int_ifmap_233);
    ifmap_234            <= STD_LOGIC_VECTOR(int_ifmap_234);
    ifmap_235            <= STD_LOGIC_VECTOR(int_ifmap_235);
    ifmap_236            <= STD_LOGIC_VECTOR(int_ifmap_236);
    ifmap_237            <= STD_LOGIC_VECTOR(int_ifmap_237);
    ifmap_238            <= STD_LOGIC_VECTOR(int_ifmap_238);
    ifmap_239            <= STD_LOGIC_VECTOR(int_ifmap_239);
    ifmap_240            <= STD_LOGIC_VECTOR(int_ifmap_240);
    ifmap_241            <= STD_LOGIC_VECTOR(int_ifmap_241);
    ifmap_242            <= STD_LOGIC_VECTOR(int_ifmap_242);
    ifmap_243            <= STD_LOGIC_VECTOR(int_ifmap_243);
    ifmap_244            <= STD_LOGIC_VECTOR(int_ifmap_244);
    ifmap_245            <= STD_LOGIC_VECTOR(int_ifmap_245);
    ifmap_246            <= STD_LOGIC_VECTOR(int_ifmap_246);
    ifmap_247            <= STD_LOGIC_VECTOR(int_ifmap_247);
    ifmap_248            <= STD_LOGIC_VECTOR(int_ifmap_248);
    ifmap_249            <= STD_LOGIC_VECTOR(int_ifmap_249);
    ifmap_250            <= STD_LOGIC_VECTOR(int_ifmap_250);
    ifmap_251            <= STD_LOGIC_VECTOR(int_ifmap_251);
    ifmap_252            <= STD_LOGIC_VECTOR(int_ifmap_252);
    ifmap_253            <= STD_LOGIC_VECTOR(int_ifmap_253);
    ifmap_254            <= STD_LOGIC_VECTOR(int_ifmap_254);
    ifmap_255            <= STD_LOGIC_VECTOR(int_ifmap_255);
    filter_0             <= STD_LOGIC_VECTOR(int_filter_0);
    filter_1             <= STD_LOGIC_VECTOR(int_filter_1);
    filter_2             <= STD_LOGIC_VECTOR(int_filter_2);
    filter_3             <= STD_LOGIC_VECTOR(int_filter_3);
    filter_4             <= STD_LOGIC_VECTOR(int_filter_4);
    filter_5             <= STD_LOGIC_VECTOR(int_filter_5);
    filter_6             <= STD_LOGIC_VECTOR(int_filter_6);
    filter_7             <= STD_LOGIC_VECTOR(int_filter_7);
    filter_8             <= STD_LOGIC_VECTOR(int_filter_8);
    filter_9             <= STD_LOGIC_VECTOR(int_filter_9);
    filter_10            <= STD_LOGIC_VECTOR(int_filter_10);
    filter_11            <= STD_LOGIC_VECTOR(int_filter_11);
    filter_12            <= STD_LOGIC_VECTOR(int_filter_12);
    filter_13            <= STD_LOGIC_VECTOR(int_filter_13);
    filter_14            <= STD_LOGIC_VECTOR(int_filter_14);
    filter_15            <= STD_LOGIC_VECTOR(int_filter_15);
    filter_16            <= STD_LOGIC_VECTOR(int_filter_16);
    filter_17            <= STD_LOGIC_VECTOR(int_filter_17);
    filter_18            <= STD_LOGIC_VECTOR(int_filter_18);
    filter_19            <= STD_LOGIC_VECTOR(int_filter_19);
    filter_20            <= STD_LOGIC_VECTOR(int_filter_20);
    filter_21            <= STD_LOGIC_VECTOR(int_filter_21);
    filter_22            <= STD_LOGIC_VECTOR(int_filter_22);
    filter_23            <= STD_LOGIC_VECTOR(int_filter_23);
    filter_24            <= STD_LOGIC_VECTOR(int_filter_24);

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_0_DATA_0) then
                    int_ifmap_0(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_0(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_1_DATA_0) then
                    int_ifmap_1(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_1(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_2_DATA_0) then
                    int_ifmap_2(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_2(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_3_DATA_0) then
                    int_ifmap_3(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_3(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_4_DATA_0) then
                    int_ifmap_4(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_4(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_5_DATA_0) then
                    int_ifmap_5(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_5(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_6_DATA_0) then
                    int_ifmap_6(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_6(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_7_DATA_0) then
                    int_ifmap_7(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_7(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_8_DATA_0) then
                    int_ifmap_8(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_8(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_9_DATA_0) then
                    int_ifmap_9(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_9(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_10_DATA_0) then
                    int_ifmap_10(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_10(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_11_DATA_0) then
                    int_ifmap_11(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_11(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_12_DATA_0) then
                    int_ifmap_12(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_12(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_13_DATA_0) then
                    int_ifmap_13(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_13(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_14_DATA_0) then
                    int_ifmap_14(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_14(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_15_DATA_0) then
                    int_ifmap_15(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_15(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_16_DATA_0) then
                    int_ifmap_16(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_16(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_17_DATA_0) then
                    int_ifmap_17(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_17(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_18_DATA_0) then
                    int_ifmap_18(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_18(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_19_DATA_0) then
                    int_ifmap_19(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_19(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_20_DATA_0) then
                    int_ifmap_20(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_20(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_21_DATA_0) then
                    int_ifmap_21(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_21(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_22_DATA_0) then
                    int_ifmap_22(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_22(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_23_DATA_0) then
                    int_ifmap_23(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_23(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_24_DATA_0) then
                    int_ifmap_24(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_24(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_25_DATA_0) then
                    int_ifmap_25(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_25(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_26_DATA_0) then
                    int_ifmap_26(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_26(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_27_DATA_0) then
                    int_ifmap_27(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_27(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_28_DATA_0) then
                    int_ifmap_28(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_28(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_29_DATA_0) then
                    int_ifmap_29(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_29(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_30_DATA_0) then
                    int_ifmap_30(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_30(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_31_DATA_0) then
                    int_ifmap_31(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_31(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_32_DATA_0) then
                    int_ifmap_32(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_32(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_33_DATA_0) then
                    int_ifmap_33(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_33(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_34_DATA_0) then
                    int_ifmap_34(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_34(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_35_DATA_0) then
                    int_ifmap_35(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_35(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_36_DATA_0) then
                    int_ifmap_36(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_36(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_37_DATA_0) then
                    int_ifmap_37(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_37(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_38_DATA_0) then
                    int_ifmap_38(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_38(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_39_DATA_0) then
                    int_ifmap_39(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_39(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_40_DATA_0) then
                    int_ifmap_40(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_40(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_41_DATA_0) then
                    int_ifmap_41(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_41(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_42_DATA_0) then
                    int_ifmap_42(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_42(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_43_DATA_0) then
                    int_ifmap_43(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_43(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_44_DATA_0) then
                    int_ifmap_44(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_44(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_45_DATA_0) then
                    int_ifmap_45(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_45(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_46_DATA_0) then
                    int_ifmap_46(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_46(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_47_DATA_0) then
                    int_ifmap_47(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_47(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_48_DATA_0) then
                    int_ifmap_48(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_48(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_49_DATA_0) then
                    int_ifmap_49(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_49(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_50_DATA_0) then
                    int_ifmap_50(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_50(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_51_DATA_0) then
                    int_ifmap_51(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_51(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_52_DATA_0) then
                    int_ifmap_52(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_52(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_53_DATA_0) then
                    int_ifmap_53(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_53(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_54_DATA_0) then
                    int_ifmap_54(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_54(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_55_DATA_0) then
                    int_ifmap_55(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_55(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_56_DATA_0) then
                    int_ifmap_56(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_56(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_57_DATA_0) then
                    int_ifmap_57(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_57(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_58_DATA_0) then
                    int_ifmap_58(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_58(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_59_DATA_0) then
                    int_ifmap_59(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_59(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_60_DATA_0) then
                    int_ifmap_60(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_60(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_61_DATA_0) then
                    int_ifmap_61(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_61(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_62_DATA_0) then
                    int_ifmap_62(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_62(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_63_DATA_0) then
                    int_ifmap_63(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_63(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_64_DATA_0) then
                    int_ifmap_64(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_64(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_65_DATA_0) then
                    int_ifmap_65(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_65(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_66_DATA_0) then
                    int_ifmap_66(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_66(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_67_DATA_0) then
                    int_ifmap_67(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_67(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_68_DATA_0) then
                    int_ifmap_68(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_68(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_69_DATA_0) then
                    int_ifmap_69(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_69(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_70_DATA_0) then
                    int_ifmap_70(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_70(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_71_DATA_0) then
                    int_ifmap_71(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_71(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_72_DATA_0) then
                    int_ifmap_72(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_72(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_73_DATA_0) then
                    int_ifmap_73(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_73(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_74_DATA_0) then
                    int_ifmap_74(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_74(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_75_DATA_0) then
                    int_ifmap_75(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_75(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_76_DATA_0) then
                    int_ifmap_76(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_76(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_77_DATA_0) then
                    int_ifmap_77(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_77(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_78_DATA_0) then
                    int_ifmap_78(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_78(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_79_DATA_0) then
                    int_ifmap_79(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_79(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_80_DATA_0) then
                    int_ifmap_80(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_80(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_81_DATA_0) then
                    int_ifmap_81(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_81(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_82_DATA_0) then
                    int_ifmap_82(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_82(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_83_DATA_0) then
                    int_ifmap_83(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_83(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_84_DATA_0) then
                    int_ifmap_84(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_84(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_85_DATA_0) then
                    int_ifmap_85(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_85(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_86_DATA_0) then
                    int_ifmap_86(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_86(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_87_DATA_0) then
                    int_ifmap_87(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_87(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_88_DATA_0) then
                    int_ifmap_88(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_88(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_89_DATA_0) then
                    int_ifmap_89(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_89(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_90_DATA_0) then
                    int_ifmap_90(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_90(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_91_DATA_0) then
                    int_ifmap_91(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_91(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_92_DATA_0) then
                    int_ifmap_92(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_92(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_93_DATA_0) then
                    int_ifmap_93(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_93(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_94_DATA_0) then
                    int_ifmap_94(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_94(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_95_DATA_0) then
                    int_ifmap_95(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_95(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_96_DATA_0) then
                    int_ifmap_96(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_96(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_97_DATA_0) then
                    int_ifmap_97(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_97(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_98_DATA_0) then
                    int_ifmap_98(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_98(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_99_DATA_0) then
                    int_ifmap_99(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_99(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_100_DATA_0) then
                    int_ifmap_100(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_100(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_101_DATA_0) then
                    int_ifmap_101(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_101(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_102_DATA_0) then
                    int_ifmap_102(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_102(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_103_DATA_0) then
                    int_ifmap_103(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_103(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_104_DATA_0) then
                    int_ifmap_104(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_104(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_105_DATA_0) then
                    int_ifmap_105(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_105(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_106_DATA_0) then
                    int_ifmap_106(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_106(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_107_DATA_0) then
                    int_ifmap_107(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_107(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_108_DATA_0) then
                    int_ifmap_108(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_108(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_109_DATA_0) then
                    int_ifmap_109(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_109(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_110_DATA_0) then
                    int_ifmap_110(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_110(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_111_DATA_0) then
                    int_ifmap_111(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_111(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_112_DATA_0) then
                    int_ifmap_112(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_112(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_113_DATA_0) then
                    int_ifmap_113(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_113(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_114_DATA_0) then
                    int_ifmap_114(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_114(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_115_DATA_0) then
                    int_ifmap_115(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_115(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_116_DATA_0) then
                    int_ifmap_116(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_116(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_117_DATA_0) then
                    int_ifmap_117(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_117(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_118_DATA_0) then
                    int_ifmap_118(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_118(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_119_DATA_0) then
                    int_ifmap_119(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_119(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_120_DATA_0) then
                    int_ifmap_120(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_120(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_121_DATA_0) then
                    int_ifmap_121(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_121(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_122_DATA_0) then
                    int_ifmap_122(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_122(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_123_DATA_0) then
                    int_ifmap_123(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_123(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_124_DATA_0) then
                    int_ifmap_124(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_124(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_125_DATA_0) then
                    int_ifmap_125(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_125(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_126_DATA_0) then
                    int_ifmap_126(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_126(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_127_DATA_0) then
                    int_ifmap_127(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_127(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_128_DATA_0) then
                    int_ifmap_128(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_128(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_129_DATA_0) then
                    int_ifmap_129(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_129(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_130_DATA_0) then
                    int_ifmap_130(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_130(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_131_DATA_0) then
                    int_ifmap_131(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_131(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_132_DATA_0) then
                    int_ifmap_132(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_132(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_133_DATA_0) then
                    int_ifmap_133(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_133(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_134_DATA_0) then
                    int_ifmap_134(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_134(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_135_DATA_0) then
                    int_ifmap_135(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_135(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_136_DATA_0) then
                    int_ifmap_136(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_136(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_137_DATA_0) then
                    int_ifmap_137(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_137(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_138_DATA_0) then
                    int_ifmap_138(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_138(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_139_DATA_0) then
                    int_ifmap_139(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_139(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_140_DATA_0) then
                    int_ifmap_140(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_140(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_141_DATA_0) then
                    int_ifmap_141(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_141(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_142_DATA_0) then
                    int_ifmap_142(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_142(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_143_DATA_0) then
                    int_ifmap_143(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_143(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_144_DATA_0) then
                    int_ifmap_144(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_144(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_145_DATA_0) then
                    int_ifmap_145(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_145(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_146_DATA_0) then
                    int_ifmap_146(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_146(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_147_DATA_0) then
                    int_ifmap_147(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_147(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_148_DATA_0) then
                    int_ifmap_148(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_148(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_149_DATA_0) then
                    int_ifmap_149(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_149(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_150_DATA_0) then
                    int_ifmap_150(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_150(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_151_DATA_0) then
                    int_ifmap_151(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_151(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_152_DATA_0) then
                    int_ifmap_152(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_152(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_153_DATA_0) then
                    int_ifmap_153(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_153(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_154_DATA_0) then
                    int_ifmap_154(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_154(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_155_DATA_0) then
                    int_ifmap_155(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_155(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_156_DATA_0) then
                    int_ifmap_156(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_156(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_157_DATA_0) then
                    int_ifmap_157(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_157(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_158_DATA_0) then
                    int_ifmap_158(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_158(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_159_DATA_0) then
                    int_ifmap_159(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_159(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_160_DATA_0) then
                    int_ifmap_160(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_160(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_161_DATA_0) then
                    int_ifmap_161(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_161(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_162_DATA_0) then
                    int_ifmap_162(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_162(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_163_DATA_0) then
                    int_ifmap_163(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_163(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_164_DATA_0) then
                    int_ifmap_164(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_164(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_165_DATA_0) then
                    int_ifmap_165(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_165(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_166_DATA_0) then
                    int_ifmap_166(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_166(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_167_DATA_0) then
                    int_ifmap_167(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_167(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_168_DATA_0) then
                    int_ifmap_168(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_168(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_169_DATA_0) then
                    int_ifmap_169(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_169(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_170_DATA_0) then
                    int_ifmap_170(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_170(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_171_DATA_0) then
                    int_ifmap_171(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_171(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_172_DATA_0) then
                    int_ifmap_172(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_172(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_173_DATA_0) then
                    int_ifmap_173(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_173(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_174_DATA_0) then
                    int_ifmap_174(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_174(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_175_DATA_0) then
                    int_ifmap_175(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_175(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_176_DATA_0) then
                    int_ifmap_176(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_176(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_177_DATA_0) then
                    int_ifmap_177(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_177(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_178_DATA_0) then
                    int_ifmap_178(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_178(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_179_DATA_0) then
                    int_ifmap_179(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_179(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_180_DATA_0) then
                    int_ifmap_180(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_180(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_181_DATA_0) then
                    int_ifmap_181(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_181(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_182_DATA_0) then
                    int_ifmap_182(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_182(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_183_DATA_0) then
                    int_ifmap_183(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_183(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_184_DATA_0) then
                    int_ifmap_184(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_184(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_185_DATA_0) then
                    int_ifmap_185(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_185(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_186_DATA_0) then
                    int_ifmap_186(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_186(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_187_DATA_0) then
                    int_ifmap_187(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_187(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_188_DATA_0) then
                    int_ifmap_188(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_188(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_189_DATA_0) then
                    int_ifmap_189(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_189(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_190_DATA_0) then
                    int_ifmap_190(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_190(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_191_DATA_0) then
                    int_ifmap_191(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_191(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_192_DATA_0) then
                    int_ifmap_192(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_192(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_193_DATA_0) then
                    int_ifmap_193(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_193(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_194_DATA_0) then
                    int_ifmap_194(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_194(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_195_DATA_0) then
                    int_ifmap_195(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_195(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_196_DATA_0) then
                    int_ifmap_196(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_196(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_197_DATA_0) then
                    int_ifmap_197(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_197(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_198_DATA_0) then
                    int_ifmap_198(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_198(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_199_DATA_0) then
                    int_ifmap_199(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_199(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_200_DATA_0) then
                    int_ifmap_200(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_200(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_201_DATA_0) then
                    int_ifmap_201(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_201(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_202_DATA_0) then
                    int_ifmap_202(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_202(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_203_DATA_0) then
                    int_ifmap_203(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_203(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_204_DATA_0) then
                    int_ifmap_204(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_204(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_205_DATA_0) then
                    int_ifmap_205(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_205(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_206_DATA_0) then
                    int_ifmap_206(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_206(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_207_DATA_0) then
                    int_ifmap_207(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_207(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_208_DATA_0) then
                    int_ifmap_208(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_208(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_209_DATA_0) then
                    int_ifmap_209(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_209(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_210_DATA_0) then
                    int_ifmap_210(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_210(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_211_DATA_0) then
                    int_ifmap_211(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_211(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_212_DATA_0) then
                    int_ifmap_212(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_212(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_213_DATA_0) then
                    int_ifmap_213(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_213(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_214_DATA_0) then
                    int_ifmap_214(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_214(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_215_DATA_0) then
                    int_ifmap_215(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_215(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_216_DATA_0) then
                    int_ifmap_216(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_216(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_217_DATA_0) then
                    int_ifmap_217(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_217(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_218_DATA_0) then
                    int_ifmap_218(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_218(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_219_DATA_0) then
                    int_ifmap_219(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_219(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_220_DATA_0) then
                    int_ifmap_220(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_220(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_221_DATA_0) then
                    int_ifmap_221(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_221(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_222_DATA_0) then
                    int_ifmap_222(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_222(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_223_DATA_0) then
                    int_ifmap_223(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_223(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_224_DATA_0) then
                    int_ifmap_224(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_224(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_225_DATA_0) then
                    int_ifmap_225(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_225(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_226_DATA_0) then
                    int_ifmap_226(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_226(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_227_DATA_0) then
                    int_ifmap_227(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_227(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_228_DATA_0) then
                    int_ifmap_228(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_228(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_229_DATA_0) then
                    int_ifmap_229(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_229(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_230_DATA_0) then
                    int_ifmap_230(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_230(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_231_DATA_0) then
                    int_ifmap_231(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_231(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_232_DATA_0) then
                    int_ifmap_232(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_232(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_233_DATA_0) then
                    int_ifmap_233(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_233(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_234_DATA_0) then
                    int_ifmap_234(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_234(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_235_DATA_0) then
                    int_ifmap_235(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_235(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_236_DATA_0) then
                    int_ifmap_236(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_236(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_237_DATA_0) then
                    int_ifmap_237(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_237(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_238_DATA_0) then
                    int_ifmap_238(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_238(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_239_DATA_0) then
                    int_ifmap_239(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_239(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_240_DATA_0) then
                    int_ifmap_240(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_240(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_241_DATA_0) then
                    int_ifmap_241(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_241(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_242_DATA_0) then
                    int_ifmap_242(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_242(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_243_DATA_0) then
                    int_ifmap_243(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_243(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_244_DATA_0) then
                    int_ifmap_244(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_244(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_245_DATA_0) then
                    int_ifmap_245(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_245(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_246_DATA_0) then
                    int_ifmap_246(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_246(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_247_DATA_0) then
                    int_ifmap_247(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_247(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_248_DATA_0) then
                    int_ifmap_248(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_248(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_249_DATA_0) then
                    int_ifmap_249(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_249(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_250_DATA_0) then
                    int_ifmap_250(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_250(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_251_DATA_0) then
                    int_ifmap_251(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_251(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_252_DATA_0) then
                    int_ifmap_252(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_252(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_253_DATA_0) then
                    int_ifmap_253(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_253(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_254_DATA_0) then
                    int_ifmap_254(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_254(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IFMAP_255_DATA_0) then
                    int_ifmap_255(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_ifmap_255(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_FILTER_0_DATA_0) then
                    int_filter_0(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_filter_0(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_FILTER_1_DATA_0) then
                    int_filter_1(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_filter_1(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_FILTER_2_DATA_0) then
                    int_filter_2(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_filter_2(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_FILTER_3_DATA_0) then
                    int_filter_3(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_filter_3(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_FILTER_4_DATA_0) then
                    int_filter_4(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_filter_4(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_FILTER_5_DATA_0) then
                    int_filter_5(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_filter_5(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_FILTER_6_DATA_0) then
                    int_filter_6(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_filter_6(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_FILTER_7_DATA_0) then
                    int_filter_7(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_filter_7(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_FILTER_8_DATA_0) then
                    int_filter_8(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_filter_8(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_FILTER_9_DATA_0) then
                    int_filter_9(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_filter_9(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_FILTER_10_DATA_0) then
                    int_filter_10(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_filter_10(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_FILTER_11_DATA_0) then
                    int_filter_11(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_filter_11(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_FILTER_12_DATA_0) then
                    int_filter_12(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_filter_12(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_FILTER_13_DATA_0) then
                    int_filter_13(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_filter_13(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_FILTER_14_DATA_0) then
                    int_filter_14(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_filter_14(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_FILTER_15_DATA_0) then
                    int_filter_15(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_filter_15(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_FILTER_16_DATA_0) then
                    int_filter_16(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_filter_16(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_FILTER_17_DATA_0) then
                    int_filter_17(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_filter_17(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_FILTER_18_DATA_0) then
                    int_filter_18(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_filter_18(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_FILTER_19_DATA_0) then
                    int_filter_19(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_filter_19(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_FILTER_20_DATA_0) then
                    int_filter_20(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_filter_20(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_FILTER_21_DATA_0) then
                    int_filter_21(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_filter_21(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_FILTER_22_DATA_0) then
                    int_filter_22(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_filter_22(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_FILTER_23_DATA_0) then
                    int_filter_23(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_filter_23(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_FILTER_24_DATA_0) then
                    int_filter_24(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_filter_24(31 downto 0));
                end if;
            end if;
        end if;
    end process;


-- ----------------------- Memory logic ------------------
    -- ofmap_0
    int_ofmap_0_address0 <= UNSIGNED(ofmap_0_address0);
    int_ofmap_0_ce0      <= ofmap_0_ce0;
    int_ofmap_0_we0      <= ofmap_0_we0;
    int_ofmap_0_be0      <= (others => ofmap_0_we0);
    int_ofmap_0_d0       <= RESIZE(UNSIGNED(ofmap_0_d0), 32);
    int_ofmap_0_address1 <= raddr(5 downto 2) when ar_hs = '1' else waddr(5 downto 2);
    int_ofmap_0_ce1      <= '1' when ar_hs = '1' or (int_ofmap_0_write = '1' and WVALID  = '1') else '0';
    int_ofmap_0_we1      <= '1' when int_ofmap_0_write = '1' and WVALID = '1' else '0';
    int_ofmap_0_be1      <= UNSIGNED(WSTRB);
    int_ofmap_0_d1       <= UNSIGNED(WDATA);
    -- ofmap_1
    int_ofmap_1_address0 <= UNSIGNED(ofmap_1_address0);
    int_ofmap_1_ce0      <= ofmap_1_ce0;
    int_ofmap_1_we0      <= ofmap_1_we0;
    int_ofmap_1_be0      <= (others => ofmap_1_we0);
    int_ofmap_1_d0       <= RESIZE(UNSIGNED(ofmap_1_d0), 32);
    int_ofmap_1_address1 <= raddr(5 downto 2) when ar_hs = '1' else waddr(5 downto 2);
    int_ofmap_1_ce1      <= '1' when ar_hs = '1' or (int_ofmap_1_write = '1' and WVALID  = '1') else '0';
    int_ofmap_1_we1      <= '1' when int_ofmap_1_write = '1' and WVALID = '1' else '0';
    int_ofmap_1_be1      <= UNSIGNED(WSTRB);
    int_ofmap_1_d1       <= UNSIGNED(WDATA);
    -- ofmap_2
    int_ofmap_2_address0 <= UNSIGNED(ofmap_2_address0);
    int_ofmap_2_ce0      <= ofmap_2_ce0;
    int_ofmap_2_we0      <= ofmap_2_we0;
    int_ofmap_2_be0      <= (others => ofmap_2_we0);
    int_ofmap_2_d0       <= RESIZE(UNSIGNED(ofmap_2_d0), 32);
    int_ofmap_2_address1 <= raddr(5 downto 2) when ar_hs = '1' else waddr(5 downto 2);
    int_ofmap_2_ce1      <= '1' when ar_hs = '1' or (int_ofmap_2_write = '1' and WVALID  = '1') else '0';
    int_ofmap_2_we1      <= '1' when int_ofmap_2_write = '1' and WVALID = '1' else '0';
    int_ofmap_2_be1      <= UNSIGNED(WSTRB);
    int_ofmap_2_d1       <= UNSIGNED(WDATA);
    -- ofmap_3
    int_ofmap_3_address0 <= UNSIGNED(ofmap_3_address0);
    int_ofmap_3_ce0      <= ofmap_3_ce0;
    int_ofmap_3_we0      <= ofmap_3_we0;
    int_ofmap_3_be0      <= (others => ofmap_3_we0);
    int_ofmap_3_d0       <= RESIZE(UNSIGNED(ofmap_3_d0), 32);
    int_ofmap_3_address1 <= raddr(5 downto 2) when ar_hs = '1' else waddr(5 downto 2);
    int_ofmap_3_ce1      <= '1' when ar_hs = '1' or (int_ofmap_3_write = '1' and WVALID  = '1') else '0';
    int_ofmap_3_we1      <= '1' when int_ofmap_3_write = '1' and WVALID = '1' else '0';
    int_ofmap_3_be1      <= UNSIGNED(WSTRB);
    int_ofmap_3_d1       <= UNSIGNED(WDATA);
    -- ofmap_4
    int_ofmap_4_address0 <= UNSIGNED(ofmap_4_address0);
    int_ofmap_4_ce0      <= ofmap_4_ce0;
    int_ofmap_4_we0      <= ofmap_4_we0;
    int_ofmap_4_be0      <= (others => ofmap_4_we0);
    int_ofmap_4_d0       <= RESIZE(UNSIGNED(ofmap_4_d0), 32);
    int_ofmap_4_address1 <= raddr(5 downto 2) when ar_hs = '1' else waddr(5 downto 2);
    int_ofmap_4_ce1      <= '1' when ar_hs = '1' or (int_ofmap_4_write = '1' and WVALID  = '1') else '0';
    int_ofmap_4_we1      <= '1' when int_ofmap_4_write = '1' and WVALID = '1' else '0';
    int_ofmap_4_be1      <= UNSIGNED(WSTRB);
    int_ofmap_4_d1       <= UNSIGNED(WDATA);
    -- ofmap_5
    int_ofmap_5_address0 <= UNSIGNED(ofmap_5_address0);
    int_ofmap_5_ce0      <= ofmap_5_ce0;
    int_ofmap_5_we0      <= ofmap_5_we0;
    int_ofmap_5_be0      <= (others => ofmap_5_we0);
    int_ofmap_5_d0       <= RESIZE(UNSIGNED(ofmap_5_d0), 32);
    int_ofmap_5_address1 <= raddr(5 downto 2) when ar_hs = '1' else waddr(5 downto 2);
    int_ofmap_5_ce1      <= '1' when ar_hs = '1' or (int_ofmap_5_write = '1' and WVALID  = '1') else '0';
    int_ofmap_5_we1      <= '1' when int_ofmap_5_write = '1' and WVALID = '1' else '0';
    int_ofmap_5_be1      <= UNSIGNED(WSTRB);
    int_ofmap_5_d1       <= UNSIGNED(WDATA);
    -- ofmap_6
    int_ofmap_6_address0 <= UNSIGNED(ofmap_6_address0);
    int_ofmap_6_ce0      <= ofmap_6_ce0;
    int_ofmap_6_we0      <= ofmap_6_we0;
    int_ofmap_6_be0      <= (others => ofmap_6_we0);
    int_ofmap_6_d0       <= RESIZE(UNSIGNED(ofmap_6_d0), 32);
    int_ofmap_6_address1 <= raddr(5 downto 2) when ar_hs = '1' else waddr(5 downto 2);
    int_ofmap_6_ce1      <= '1' when ar_hs = '1' or (int_ofmap_6_write = '1' and WVALID  = '1') else '0';
    int_ofmap_6_we1      <= '1' when int_ofmap_6_write = '1' and WVALID = '1' else '0';
    int_ofmap_6_be1      <= UNSIGNED(WSTRB);
    int_ofmap_6_d1       <= UNSIGNED(WDATA);
    -- ofmap_7
    int_ofmap_7_address0 <= UNSIGNED(ofmap_7_address0);
    int_ofmap_7_ce0      <= ofmap_7_ce0;
    int_ofmap_7_we0      <= ofmap_7_we0;
    int_ofmap_7_be0      <= (others => ofmap_7_we0);
    int_ofmap_7_d0       <= RESIZE(UNSIGNED(ofmap_7_d0), 32);
    int_ofmap_7_address1 <= raddr(5 downto 2) when ar_hs = '1' else waddr(5 downto 2);
    int_ofmap_7_ce1      <= '1' when ar_hs = '1' or (int_ofmap_7_write = '1' and WVALID  = '1') else '0';
    int_ofmap_7_we1      <= '1' when int_ofmap_7_write = '1' and WVALID = '1' else '0';
    int_ofmap_7_be1      <= UNSIGNED(WSTRB);
    int_ofmap_7_d1       <= UNSIGNED(WDATA);
    -- ofmap_8
    int_ofmap_8_address0 <= UNSIGNED(ofmap_8_address0);
    int_ofmap_8_ce0      <= ofmap_8_ce0;
    int_ofmap_8_we0      <= ofmap_8_we0;
    int_ofmap_8_be0      <= (others => ofmap_8_we0);
    int_ofmap_8_d0       <= RESIZE(UNSIGNED(ofmap_8_d0), 32);
    int_ofmap_8_address1 <= raddr(5 downto 2) when ar_hs = '1' else waddr(5 downto 2);
    int_ofmap_8_ce1      <= '1' when ar_hs = '1' or (int_ofmap_8_write = '1' and WVALID  = '1') else '0';
    int_ofmap_8_we1      <= '1' when int_ofmap_8_write = '1' and WVALID = '1' else '0';
    int_ofmap_8_be1      <= UNSIGNED(WSTRB);
    int_ofmap_8_d1       <= UNSIGNED(WDATA);
    -- ofmap_9
    int_ofmap_9_address0 <= UNSIGNED(ofmap_9_address0);
    int_ofmap_9_ce0      <= ofmap_9_ce0;
    int_ofmap_9_we0      <= ofmap_9_we0;
    int_ofmap_9_be0      <= (others => ofmap_9_we0);
    int_ofmap_9_d0       <= RESIZE(UNSIGNED(ofmap_9_d0), 32);
    int_ofmap_9_address1 <= raddr(5 downto 2) when ar_hs = '1' else waddr(5 downto 2);
    int_ofmap_9_ce1      <= '1' when ar_hs = '1' or (int_ofmap_9_write = '1' and WVALID  = '1') else '0';
    int_ofmap_9_we1      <= '1' when int_ofmap_9_write = '1' and WVALID = '1' else '0';
    int_ofmap_9_be1      <= UNSIGNED(WSTRB);
    int_ofmap_9_d1       <= UNSIGNED(WDATA);
    -- ofmap_10
    int_ofmap_10_address0 <= UNSIGNED(ofmap_10_address0);
    int_ofmap_10_ce0     <= ofmap_10_ce0;
    int_ofmap_10_we0     <= ofmap_10_we0;
    int_ofmap_10_be0     <= (others => ofmap_10_we0);
    int_ofmap_10_d0      <= RESIZE(UNSIGNED(ofmap_10_d0), 32);
    int_ofmap_10_address1 <= raddr(5 downto 2) when ar_hs = '1' else waddr(5 downto 2);
    int_ofmap_10_ce1     <= '1' when ar_hs = '1' or (int_ofmap_10_write = '1' and WVALID  = '1') else '0';
    int_ofmap_10_we1     <= '1' when int_ofmap_10_write = '1' and WVALID = '1' else '0';
    int_ofmap_10_be1     <= UNSIGNED(WSTRB);
    int_ofmap_10_d1      <= UNSIGNED(WDATA);
    -- ofmap_11
    int_ofmap_11_address0 <= UNSIGNED(ofmap_11_address0);
    int_ofmap_11_ce0     <= ofmap_11_ce0;
    int_ofmap_11_we0     <= ofmap_11_we0;
    int_ofmap_11_be0     <= (others => ofmap_11_we0);
    int_ofmap_11_d0      <= RESIZE(UNSIGNED(ofmap_11_d0), 32);
    int_ofmap_11_address1 <= raddr(5 downto 2) when ar_hs = '1' else waddr(5 downto 2);
    int_ofmap_11_ce1     <= '1' when ar_hs = '1' or (int_ofmap_11_write = '1' and WVALID  = '1') else '0';
    int_ofmap_11_we1     <= '1' when int_ofmap_11_write = '1' and WVALID = '1' else '0';
    int_ofmap_11_be1     <= UNSIGNED(WSTRB);
    int_ofmap_11_d1      <= UNSIGNED(WDATA);

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ofmap_0_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_OFMAP_0_BASE and raddr <= ADDR_OFMAP_0_HIGH) then
                    int_ofmap_0_read <= '1';
                else
                    int_ofmap_0_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ofmap_0_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_OFMAP_0_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_OFMAP_0_HIGH) then
                    int_ofmap_0_write <= '1';
                elsif (WVALID = '1') then
                    int_ofmap_0_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ofmap_1_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_OFMAP_1_BASE and raddr <= ADDR_OFMAP_1_HIGH) then
                    int_ofmap_1_read <= '1';
                else
                    int_ofmap_1_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ofmap_1_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_OFMAP_1_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_OFMAP_1_HIGH) then
                    int_ofmap_1_write <= '1';
                elsif (WVALID = '1') then
                    int_ofmap_1_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ofmap_2_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_OFMAP_2_BASE and raddr <= ADDR_OFMAP_2_HIGH) then
                    int_ofmap_2_read <= '1';
                else
                    int_ofmap_2_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ofmap_2_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_OFMAP_2_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_OFMAP_2_HIGH) then
                    int_ofmap_2_write <= '1';
                elsif (WVALID = '1') then
                    int_ofmap_2_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ofmap_3_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_OFMAP_3_BASE and raddr <= ADDR_OFMAP_3_HIGH) then
                    int_ofmap_3_read <= '1';
                else
                    int_ofmap_3_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ofmap_3_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_OFMAP_3_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_OFMAP_3_HIGH) then
                    int_ofmap_3_write <= '1';
                elsif (WVALID = '1') then
                    int_ofmap_3_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ofmap_4_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_OFMAP_4_BASE and raddr <= ADDR_OFMAP_4_HIGH) then
                    int_ofmap_4_read <= '1';
                else
                    int_ofmap_4_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ofmap_4_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_OFMAP_4_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_OFMAP_4_HIGH) then
                    int_ofmap_4_write <= '1';
                elsif (WVALID = '1') then
                    int_ofmap_4_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ofmap_5_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_OFMAP_5_BASE and raddr <= ADDR_OFMAP_5_HIGH) then
                    int_ofmap_5_read <= '1';
                else
                    int_ofmap_5_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ofmap_5_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_OFMAP_5_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_OFMAP_5_HIGH) then
                    int_ofmap_5_write <= '1';
                elsif (WVALID = '1') then
                    int_ofmap_5_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ofmap_6_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_OFMAP_6_BASE and raddr <= ADDR_OFMAP_6_HIGH) then
                    int_ofmap_6_read <= '1';
                else
                    int_ofmap_6_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ofmap_6_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_OFMAP_6_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_OFMAP_6_HIGH) then
                    int_ofmap_6_write <= '1';
                elsif (WVALID = '1') then
                    int_ofmap_6_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ofmap_7_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_OFMAP_7_BASE and raddr <= ADDR_OFMAP_7_HIGH) then
                    int_ofmap_7_read <= '1';
                else
                    int_ofmap_7_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ofmap_7_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_OFMAP_7_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_OFMAP_7_HIGH) then
                    int_ofmap_7_write <= '1';
                elsif (WVALID = '1') then
                    int_ofmap_7_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ofmap_8_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_OFMAP_8_BASE and raddr <= ADDR_OFMAP_8_HIGH) then
                    int_ofmap_8_read <= '1';
                else
                    int_ofmap_8_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ofmap_8_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_OFMAP_8_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_OFMAP_8_HIGH) then
                    int_ofmap_8_write <= '1';
                elsif (WVALID = '1') then
                    int_ofmap_8_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ofmap_9_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_OFMAP_9_BASE and raddr <= ADDR_OFMAP_9_HIGH) then
                    int_ofmap_9_read <= '1';
                else
                    int_ofmap_9_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ofmap_9_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_OFMAP_9_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_OFMAP_9_HIGH) then
                    int_ofmap_9_write <= '1';
                elsif (WVALID = '1') then
                    int_ofmap_9_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ofmap_10_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_OFMAP_10_BASE and raddr <= ADDR_OFMAP_10_HIGH) then
                    int_ofmap_10_read <= '1';
                else
                    int_ofmap_10_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ofmap_10_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_OFMAP_10_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_OFMAP_10_HIGH) then
                    int_ofmap_10_write <= '1';
                elsif (WVALID = '1') then
                    int_ofmap_10_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ofmap_11_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_OFMAP_11_BASE and raddr <= ADDR_OFMAP_11_HIGH) then
                    int_ofmap_11_read <= '1';
                else
                    int_ofmap_11_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ofmap_11_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_OFMAP_11_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_OFMAP_11_HIGH) then
                    int_ofmap_11_write <= '1';
                elsif (WVALID = '1') then
                    int_ofmap_11_write <= '0';
                end if;
            end if;
        end if;
    end process;


end architecture behave;

library IEEE;
USE IEEE.std_logic_1164.all;
USE IEEE.numeric_std.all;

entity conv_AXILiteS_s_axi_ram is
    generic (
        BYTES   : INTEGER :=4;
        DEPTH   : INTEGER :=256;
        AWIDTH  : INTEGER :=8);
    port (
        clk0    : in  STD_LOGIC;
        address0: in  UNSIGNED(AWIDTH-1 downto 0);
        ce0     : in  STD_LOGIC;
        we0     : in  STD_LOGIC;
        be0     : in  UNSIGNED(BYTES-1 downto 0);
        d0      : in  UNSIGNED(BYTES*8-1 downto 0);
        q0      : out UNSIGNED(BYTES*8-1 downto 0);
        clk1    : in  STD_LOGIC;
        address1: in  UNSIGNED(AWIDTH-1 downto 0);
        ce1     : in  STD_LOGIC;
        we1     : in  STD_LOGIC;
        be1     : in  UNSIGNED(BYTES-1 downto 0);
        d1      : in  UNSIGNED(BYTES*8-1 downto 0);
        q1      : out UNSIGNED(BYTES*8-1 downto 0));

end entity conv_AXILiteS_s_axi_ram;

architecture behave of conv_AXILiteS_s_axi_ram is
    signal address0_tmp : UNSIGNED(AWIDTH-1 downto 0);
    signal address1_tmp : UNSIGNED(AWIDTH-1 downto 0);
    type RAM_T is array (0 to DEPTH - 1) of UNSIGNED(BYTES*8 - 1 downto 0);
    shared variable mem : RAM_T := (others => (others => '0'));
begin

    process (address0)
    begin
    address0_tmp <= address0;
    --synthesis translate_off
          if (address0 > DEPTH-1) then
              address0_tmp <= (others => '0');
          else
              address0_tmp <= address0;
          end if;
    --synthesis translate_on
    end process;

    process (address1)
    begin
    address1_tmp <= address1;
    --synthesis translate_off
          if (address1 > DEPTH-1) then
              address1_tmp <= (others => '0');
          else
              address1_tmp <= address1;
          end if;
    --synthesis translate_on
    end process;

    --read port 0
    process (clk0) begin
        if (clk0'event and clk0 = '1') then
            if (ce0 = '1') then
                q0 <= mem(to_integer(address0_tmp));
            end if;
        end if;
    end process;

    --read port 1
    process (clk1) begin
        if (clk1'event and clk1 = '1') then
            if (ce1 = '1') then
                q1 <= mem(to_integer(address1_tmp));
            end if;
        end if;
    end process;

    gen_write : for i in 0 to BYTES - 1 generate
    begin
        --write port 0
        process (clk0)
        begin
            if (clk0'event and clk0 = '1') then
                if (ce0 = '1' and we0 = '1' and be0(i) = '1') then
                    mem(to_integer(address0_tmp))(8*i+7 downto 8*i) := d0(8*i+7 downto 8*i);
                end if;
            end if;
        end process;

        --write port 1
        process (clk1)
        begin
            if (clk1'event and clk1 = '1') then
                if (ce1 = '1' and we1 = '1' and be1(i) = '1') then
                    mem(to_integer(address1_tmp))(8*i+7 downto 8*i) := d1(8*i+7 downto 8*i);
                end if;
            end if;
        end process;

    end generate;

end architecture behave;


