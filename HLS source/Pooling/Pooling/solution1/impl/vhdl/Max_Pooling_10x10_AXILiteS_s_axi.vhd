-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library IEEE;
use IEEE.STD_LOGIC_1164.all;
use IEEE.NUMERIC_STD.all;

entity Max_Pooling_10x10_AXILiteS_s_axi is
generic (
    C_S_AXI_ADDR_WIDTH    : INTEGER := 10;
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
    ifmap_0_address0      :in   STD_LOGIC_VECTOR(3 downto 0);
    ifmap_0_ce0           :in   STD_LOGIC;
    ifmap_0_q0            :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_1_address0      :in   STD_LOGIC_VECTOR(3 downto 0);
    ifmap_1_ce0           :in   STD_LOGIC;
    ifmap_1_q0            :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_2_address0      :in   STD_LOGIC_VECTOR(3 downto 0);
    ifmap_2_ce0           :in   STD_LOGIC;
    ifmap_2_q0            :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_3_address0      :in   STD_LOGIC_VECTOR(3 downto 0);
    ifmap_3_ce0           :in   STD_LOGIC;
    ifmap_3_q0            :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_4_address0      :in   STD_LOGIC_VECTOR(3 downto 0);
    ifmap_4_ce0           :in   STD_LOGIC;
    ifmap_4_q0            :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_5_address0      :in   STD_LOGIC_VECTOR(3 downto 0);
    ifmap_5_ce0           :in   STD_LOGIC;
    ifmap_5_q0            :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_6_address0      :in   STD_LOGIC_VECTOR(3 downto 0);
    ifmap_6_ce0           :in   STD_LOGIC;
    ifmap_6_q0            :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_7_address0      :in   STD_LOGIC_VECTOR(3 downto 0);
    ifmap_7_ce0           :in   STD_LOGIC;
    ifmap_7_q0            :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_8_address0      :in   STD_LOGIC_VECTOR(3 downto 0);
    ifmap_8_ce0           :in   STD_LOGIC;
    ifmap_8_q0            :out  STD_LOGIC_VECTOR(31 downto 0);
    ifmap_9_address0      :in   STD_LOGIC_VECTOR(3 downto 0);
    ifmap_9_ce0           :in   STD_LOGIC;
    ifmap_9_q0            :out  STD_LOGIC_VECTOR(31 downto 0);
    result_address0       :in   STD_LOGIC_VECTOR(4 downto 0);
    result_ce0            :in   STD_LOGIC;
    result_we0            :in   STD_LOGIC;
    result_d0             :in   STD_LOGIC_VECTOR(31 downto 0)
);
end entity Max_Pooling_10x10_AXILiteS_s_axi;

-- ------------------------Address Info-------------------
-- 0x040 ~
-- 0x07f : Memory 'ifmap_0' (10 * 32b)
--         Word n : bit [31:0] - ifmap_0[n]
-- 0x080 ~
-- 0x0bf : Memory 'ifmap_1' (10 * 32b)
--         Word n : bit [31:0] - ifmap_1[n]
-- 0x0c0 ~
-- 0x0ff : Memory 'ifmap_2' (10 * 32b)
--         Word n : bit [31:0] - ifmap_2[n]
-- 0x100 ~
-- 0x13f : Memory 'ifmap_3' (10 * 32b)
--         Word n : bit [31:0] - ifmap_3[n]
-- 0x140 ~
-- 0x17f : Memory 'ifmap_4' (10 * 32b)
--         Word n : bit [31:0] - ifmap_4[n]
-- 0x180 ~
-- 0x1bf : Memory 'ifmap_5' (10 * 32b)
--         Word n : bit [31:0] - ifmap_5[n]
-- 0x1c0 ~
-- 0x1ff : Memory 'ifmap_6' (10 * 32b)
--         Word n : bit [31:0] - ifmap_6[n]
-- 0x200 ~
-- 0x23f : Memory 'ifmap_7' (10 * 32b)
--         Word n : bit [31:0] - ifmap_7[n]
-- 0x240 ~
-- 0x27f : Memory 'ifmap_8' (10 * 32b)
--         Word n : bit [31:0] - ifmap_8[n]
-- 0x280 ~
-- 0x2bf : Memory 'ifmap_9' (10 * 32b)
--         Word n : bit [31:0] - ifmap_9[n]
-- 0x300 ~
-- 0x37f : Memory 'result' (25 * 32b)
--         Word n : bit [31:0] - result[n]
-- (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

architecture behave of Max_Pooling_10x10_AXILiteS_s_axi is
    type states is (wridle, wrdata, wrresp, wrreset, rdidle, rddata, rdreset);  -- read and write fsm states
    signal wstate  : states := wrreset;
    signal rstate  : states := rdreset;
    signal wnext, rnext: states;
    constant ADDR_IFMAP_0_BASE : INTEGER := 16#040#;
    constant ADDR_IFMAP_0_HIGH : INTEGER := 16#07f#;
    constant ADDR_IFMAP_1_BASE : INTEGER := 16#080#;
    constant ADDR_IFMAP_1_HIGH : INTEGER := 16#0bf#;
    constant ADDR_IFMAP_2_BASE : INTEGER := 16#0c0#;
    constant ADDR_IFMAP_2_HIGH : INTEGER := 16#0ff#;
    constant ADDR_IFMAP_3_BASE : INTEGER := 16#100#;
    constant ADDR_IFMAP_3_HIGH : INTEGER := 16#13f#;
    constant ADDR_IFMAP_4_BASE : INTEGER := 16#140#;
    constant ADDR_IFMAP_4_HIGH : INTEGER := 16#17f#;
    constant ADDR_IFMAP_5_BASE : INTEGER := 16#180#;
    constant ADDR_IFMAP_5_HIGH : INTEGER := 16#1bf#;
    constant ADDR_IFMAP_6_BASE : INTEGER := 16#1c0#;
    constant ADDR_IFMAP_6_HIGH : INTEGER := 16#1ff#;
    constant ADDR_IFMAP_7_BASE : INTEGER := 16#200#;
    constant ADDR_IFMAP_7_HIGH : INTEGER := 16#23f#;
    constant ADDR_IFMAP_8_BASE : INTEGER := 16#240#;
    constant ADDR_IFMAP_8_HIGH : INTEGER := 16#27f#;
    constant ADDR_IFMAP_9_BASE : INTEGER := 16#280#;
    constant ADDR_IFMAP_9_HIGH : INTEGER := 16#2bf#;
    constant ADDR_RESULT_BASE  : INTEGER := 16#300#;
    constant ADDR_RESULT_HIGH  : INTEGER := 16#37f#;
    constant ADDR_BITS         : INTEGER := 10;

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
    -- memory signals
    signal int_ifmap_0_address0 : UNSIGNED(3 downto 0);
    signal int_ifmap_0_ce0     : STD_LOGIC;
    signal int_ifmap_0_we0     : STD_LOGIC;
    signal int_ifmap_0_be0     : UNSIGNED(3 downto 0);
    signal int_ifmap_0_d0      : UNSIGNED(31 downto 0);
    signal int_ifmap_0_q0      : UNSIGNED(31 downto 0);
    signal int_ifmap_0_address1 : UNSIGNED(3 downto 0);
    signal int_ifmap_0_ce1     : STD_LOGIC;
    signal int_ifmap_0_we1     : STD_LOGIC;
    signal int_ifmap_0_be1     : UNSIGNED(3 downto 0);
    signal int_ifmap_0_d1      : UNSIGNED(31 downto 0);
    signal int_ifmap_0_q1      : UNSIGNED(31 downto 0);
    signal int_ifmap_0_read    : STD_LOGIC;
    signal int_ifmap_0_write   : STD_LOGIC;
    signal int_ifmap_1_address0 : UNSIGNED(3 downto 0);
    signal int_ifmap_1_ce0     : STD_LOGIC;
    signal int_ifmap_1_we0     : STD_LOGIC;
    signal int_ifmap_1_be0     : UNSIGNED(3 downto 0);
    signal int_ifmap_1_d0      : UNSIGNED(31 downto 0);
    signal int_ifmap_1_q0      : UNSIGNED(31 downto 0);
    signal int_ifmap_1_address1 : UNSIGNED(3 downto 0);
    signal int_ifmap_1_ce1     : STD_LOGIC;
    signal int_ifmap_1_we1     : STD_LOGIC;
    signal int_ifmap_1_be1     : UNSIGNED(3 downto 0);
    signal int_ifmap_1_d1      : UNSIGNED(31 downto 0);
    signal int_ifmap_1_q1      : UNSIGNED(31 downto 0);
    signal int_ifmap_1_read    : STD_LOGIC;
    signal int_ifmap_1_write   : STD_LOGIC;
    signal int_ifmap_2_address0 : UNSIGNED(3 downto 0);
    signal int_ifmap_2_ce0     : STD_LOGIC;
    signal int_ifmap_2_we0     : STD_LOGIC;
    signal int_ifmap_2_be0     : UNSIGNED(3 downto 0);
    signal int_ifmap_2_d0      : UNSIGNED(31 downto 0);
    signal int_ifmap_2_q0      : UNSIGNED(31 downto 0);
    signal int_ifmap_2_address1 : UNSIGNED(3 downto 0);
    signal int_ifmap_2_ce1     : STD_LOGIC;
    signal int_ifmap_2_we1     : STD_LOGIC;
    signal int_ifmap_2_be1     : UNSIGNED(3 downto 0);
    signal int_ifmap_2_d1      : UNSIGNED(31 downto 0);
    signal int_ifmap_2_q1      : UNSIGNED(31 downto 0);
    signal int_ifmap_2_read    : STD_LOGIC;
    signal int_ifmap_2_write   : STD_LOGIC;
    signal int_ifmap_3_address0 : UNSIGNED(3 downto 0);
    signal int_ifmap_3_ce0     : STD_LOGIC;
    signal int_ifmap_3_we0     : STD_LOGIC;
    signal int_ifmap_3_be0     : UNSIGNED(3 downto 0);
    signal int_ifmap_3_d0      : UNSIGNED(31 downto 0);
    signal int_ifmap_3_q0      : UNSIGNED(31 downto 0);
    signal int_ifmap_3_address1 : UNSIGNED(3 downto 0);
    signal int_ifmap_3_ce1     : STD_LOGIC;
    signal int_ifmap_3_we1     : STD_LOGIC;
    signal int_ifmap_3_be1     : UNSIGNED(3 downto 0);
    signal int_ifmap_3_d1      : UNSIGNED(31 downto 0);
    signal int_ifmap_3_q1      : UNSIGNED(31 downto 0);
    signal int_ifmap_3_read    : STD_LOGIC;
    signal int_ifmap_3_write   : STD_LOGIC;
    signal int_ifmap_4_address0 : UNSIGNED(3 downto 0);
    signal int_ifmap_4_ce0     : STD_LOGIC;
    signal int_ifmap_4_we0     : STD_LOGIC;
    signal int_ifmap_4_be0     : UNSIGNED(3 downto 0);
    signal int_ifmap_4_d0      : UNSIGNED(31 downto 0);
    signal int_ifmap_4_q0      : UNSIGNED(31 downto 0);
    signal int_ifmap_4_address1 : UNSIGNED(3 downto 0);
    signal int_ifmap_4_ce1     : STD_LOGIC;
    signal int_ifmap_4_we1     : STD_LOGIC;
    signal int_ifmap_4_be1     : UNSIGNED(3 downto 0);
    signal int_ifmap_4_d1      : UNSIGNED(31 downto 0);
    signal int_ifmap_4_q1      : UNSIGNED(31 downto 0);
    signal int_ifmap_4_read    : STD_LOGIC;
    signal int_ifmap_4_write   : STD_LOGIC;
    signal int_ifmap_5_address0 : UNSIGNED(3 downto 0);
    signal int_ifmap_5_ce0     : STD_LOGIC;
    signal int_ifmap_5_we0     : STD_LOGIC;
    signal int_ifmap_5_be0     : UNSIGNED(3 downto 0);
    signal int_ifmap_5_d0      : UNSIGNED(31 downto 0);
    signal int_ifmap_5_q0      : UNSIGNED(31 downto 0);
    signal int_ifmap_5_address1 : UNSIGNED(3 downto 0);
    signal int_ifmap_5_ce1     : STD_LOGIC;
    signal int_ifmap_5_we1     : STD_LOGIC;
    signal int_ifmap_5_be1     : UNSIGNED(3 downto 0);
    signal int_ifmap_5_d1      : UNSIGNED(31 downto 0);
    signal int_ifmap_5_q1      : UNSIGNED(31 downto 0);
    signal int_ifmap_5_read    : STD_LOGIC;
    signal int_ifmap_5_write   : STD_LOGIC;
    signal int_ifmap_6_address0 : UNSIGNED(3 downto 0);
    signal int_ifmap_6_ce0     : STD_LOGIC;
    signal int_ifmap_6_we0     : STD_LOGIC;
    signal int_ifmap_6_be0     : UNSIGNED(3 downto 0);
    signal int_ifmap_6_d0      : UNSIGNED(31 downto 0);
    signal int_ifmap_6_q0      : UNSIGNED(31 downto 0);
    signal int_ifmap_6_address1 : UNSIGNED(3 downto 0);
    signal int_ifmap_6_ce1     : STD_LOGIC;
    signal int_ifmap_6_we1     : STD_LOGIC;
    signal int_ifmap_6_be1     : UNSIGNED(3 downto 0);
    signal int_ifmap_6_d1      : UNSIGNED(31 downto 0);
    signal int_ifmap_6_q1      : UNSIGNED(31 downto 0);
    signal int_ifmap_6_read    : STD_LOGIC;
    signal int_ifmap_6_write   : STD_LOGIC;
    signal int_ifmap_7_address0 : UNSIGNED(3 downto 0);
    signal int_ifmap_7_ce0     : STD_LOGIC;
    signal int_ifmap_7_we0     : STD_LOGIC;
    signal int_ifmap_7_be0     : UNSIGNED(3 downto 0);
    signal int_ifmap_7_d0      : UNSIGNED(31 downto 0);
    signal int_ifmap_7_q0      : UNSIGNED(31 downto 0);
    signal int_ifmap_7_address1 : UNSIGNED(3 downto 0);
    signal int_ifmap_7_ce1     : STD_LOGIC;
    signal int_ifmap_7_we1     : STD_LOGIC;
    signal int_ifmap_7_be1     : UNSIGNED(3 downto 0);
    signal int_ifmap_7_d1      : UNSIGNED(31 downto 0);
    signal int_ifmap_7_q1      : UNSIGNED(31 downto 0);
    signal int_ifmap_7_read    : STD_LOGIC;
    signal int_ifmap_7_write   : STD_LOGIC;
    signal int_ifmap_8_address0 : UNSIGNED(3 downto 0);
    signal int_ifmap_8_ce0     : STD_LOGIC;
    signal int_ifmap_8_we0     : STD_LOGIC;
    signal int_ifmap_8_be0     : UNSIGNED(3 downto 0);
    signal int_ifmap_8_d0      : UNSIGNED(31 downto 0);
    signal int_ifmap_8_q0      : UNSIGNED(31 downto 0);
    signal int_ifmap_8_address1 : UNSIGNED(3 downto 0);
    signal int_ifmap_8_ce1     : STD_LOGIC;
    signal int_ifmap_8_we1     : STD_LOGIC;
    signal int_ifmap_8_be1     : UNSIGNED(3 downto 0);
    signal int_ifmap_8_d1      : UNSIGNED(31 downto 0);
    signal int_ifmap_8_q1      : UNSIGNED(31 downto 0);
    signal int_ifmap_8_read    : STD_LOGIC;
    signal int_ifmap_8_write   : STD_LOGIC;
    signal int_ifmap_9_address0 : UNSIGNED(3 downto 0);
    signal int_ifmap_9_ce0     : STD_LOGIC;
    signal int_ifmap_9_we0     : STD_LOGIC;
    signal int_ifmap_9_be0     : UNSIGNED(3 downto 0);
    signal int_ifmap_9_d0      : UNSIGNED(31 downto 0);
    signal int_ifmap_9_q0      : UNSIGNED(31 downto 0);
    signal int_ifmap_9_address1 : UNSIGNED(3 downto 0);
    signal int_ifmap_9_ce1     : STD_LOGIC;
    signal int_ifmap_9_we1     : STD_LOGIC;
    signal int_ifmap_9_be1     : UNSIGNED(3 downto 0);
    signal int_ifmap_9_d1      : UNSIGNED(31 downto 0);
    signal int_ifmap_9_q1      : UNSIGNED(31 downto 0);
    signal int_ifmap_9_read    : STD_LOGIC;
    signal int_ifmap_9_write   : STD_LOGIC;
    signal int_result_address0 : UNSIGNED(4 downto 0);
    signal int_result_ce0      : STD_LOGIC;
    signal int_result_we0      : STD_LOGIC;
    signal int_result_be0      : UNSIGNED(3 downto 0);
    signal int_result_d0       : UNSIGNED(31 downto 0);
    signal int_result_q0       : UNSIGNED(31 downto 0);
    signal int_result_address1 : UNSIGNED(4 downto 0);
    signal int_result_ce1      : STD_LOGIC;
    signal int_result_we1      : STD_LOGIC;
    signal int_result_be1      : UNSIGNED(3 downto 0);
    signal int_result_d1       : UNSIGNED(31 downto 0);
    signal int_result_q1       : UNSIGNED(31 downto 0);
    signal int_result_read     : STD_LOGIC;
    signal int_result_write    : STD_LOGIC;

    component Max_Pooling_10x10_AXILiteS_s_axi_ram is
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
    end component Max_Pooling_10x10_AXILiteS_s_axi_ram;

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
-- int_ifmap_0
int_ifmap_0 : Max_Pooling_10x10_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 10,
     AWIDTH   => log2(10))
port map (
     clk0     => ACLK,
     address0 => int_ifmap_0_address0,
     ce0      => int_ifmap_0_ce0,
     we0      => int_ifmap_0_we0,
     be0      => int_ifmap_0_be0,
     d0       => int_ifmap_0_d0,
     q0       => int_ifmap_0_q0,
     clk1     => ACLK,
     address1 => int_ifmap_0_address1,
     ce1      => int_ifmap_0_ce1,
     we1      => int_ifmap_0_we1,
     be1      => int_ifmap_0_be1,
     d1       => int_ifmap_0_d1,
     q1       => int_ifmap_0_q1);
-- int_ifmap_1
int_ifmap_1 : Max_Pooling_10x10_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 10,
     AWIDTH   => log2(10))
port map (
     clk0     => ACLK,
     address0 => int_ifmap_1_address0,
     ce0      => int_ifmap_1_ce0,
     we0      => int_ifmap_1_we0,
     be0      => int_ifmap_1_be0,
     d0       => int_ifmap_1_d0,
     q0       => int_ifmap_1_q0,
     clk1     => ACLK,
     address1 => int_ifmap_1_address1,
     ce1      => int_ifmap_1_ce1,
     we1      => int_ifmap_1_we1,
     be1      => int_ifmap_1_be1,
     d1       => int_ifmap_1_d1,
     q1       => int_ifmap_1_q1);
-- int_ifmap_2
int_ifmap_2 : Max_Pooling_10x10_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 10,
     AWIDTH   => log2(10))
port map (
     clk0     => ACLK,
     address0 => int_ifmap_2_address0,
     ce0      => int_ifmap_2_ce0,
     we0      => int_ifmap_2_we0,
     be0      => int_ifmap_2_be0,
     d0       => int_ifmap_2_d0,
     q0       => int_ifmap_2_q0,
     clk1     => ACLK,
     address1 => int_ifmap_2_address1,
     ce1      => int_ifmap_2_ce1,
     we1      => int_ifmap_2_we1,
     be1      => int_ifmap_2_be1,
     d1       => int_ifmap_2_d1,
     q1       => int_ifmap_2_q1);
-- int_ifmap_3
int_ifmap_3 : Max_Pooling_10x10_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 10,
     AWIDTH   => log2(10))
port map (
     clk0     => ACLK,
     address0 => int_ifmap_3_address0,
     ce0      => int_ifmap_3_ce0,
     we0      => int_ifmap_3_we0,
     be0      => int_ifmap_3_be0,
     d0       => int_ifmap_3_d0,
     q0       => int_ifmap_3_q0,
     clk1     => ACLK,
     address1 => int_ifmap_3_address1,
     ce1      => int_ifmap_3_ce1,
     we1      => int_ifmap_3_we1,
     be1      => int_ifmap_3_be1,
     d1       => int_ifmap_3_d1,
     q1       => int_ifmap_3_q1);
-- int_ifmap_4
int_ifmap_4 : Max_Pooling_10x10_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 10,
     AWIDTH   => log2(10))
port map (
     clk0     => ACLK,
     address0 => int_ifmap_4_address0,
     ce0      => int_ifmap_4_ce0,
     we0      => int_ifmap_4_we0,
     be0      => int_ifmap_4_be0,
     d0       => int_ifmap_4_d0,
     q0       => int_ifmap_4_q0,
     clk1     => ACLK,
     address1 => int_ifmap_4_address1,
     ce1      => int_ifmap_4_ce1,
     we1      => int_ifmap_4_we1,
     be1      => int_ifmap_4_be1,
     d1       => int_ifmap_4_d1,
     q1       => int_ifmap_4_q1);
-- int_ifmap_5
int_ifmap_5 : Max_Pooling_10x10_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 10,
     AWIDTH   => log2(10))
port map (
     clk0     => ACLK,
     address0 => int_ifmap_5_address0,
     ce0      => int_ifmap_5_ce0,
     we0      => int_ifmap_5_we0,
     be0      => int_ifmap_5_be0,
     d0       => int_ifmap_5_d0,
     q0       => int_ifmap_5_q0,
     clk1     => ACLK,
     address1 => int_ifmap_5_address1,
     ce1      => int_ifmap_5_ce1,
     we1      => int_ifmap_5_we1,
     be1      => int_ifmap_5_be1,
     d1       => int_ifmap_5_d1,
     q1       => int_ifmap_5_q1);
-- int_ifmap_6
int_ifmap_6 : Max_Pooling_10x10_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 10,
     AWIDTH   => log2(10))
port map (
     clk0     => ACLK,
     address0 => int_ifmap_6_address0,
     ce0      => int_ifmap_6_ce0,
     we0      => int_ifmap_6_we0,
     be0      => int_ifmap_6_be0,
     d0       => int_ifmap_6_d0,
     q0       => int_ifmap_6_q0,
     clk1     => ACLK,
     address1 => int_ifmap_6_address1,
     ce1      => int_ifmap_6_ce1,
     we1      => int_ifmap_6_we1,
     be1      => int_ifmap_6_be1,
     d1       => int_ifmap_6_d1,
     q1       => int_ifmap_6_q1);
-- int_ifmap_7
int_ifmap_7 : Max_Pooling_10x10_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 10,
     AWIDTH   => log2(10))
port map (
     clk0     => ACLK,
     address0 => int_ifmap_7_address0,
     ce0      => int_ifmap_7_ce0,
     we0      => int_ifmap_7_we0,
     be0      => int_ifmap_7_be0,
     d0       => int_ifmap_7_d0,
     q0       => int_ifmap_7_q0,
     clk1     => ACLK,
     address1 => int_ifmap_7_address1,
     ce1      => int_ifmap_7_ce1,
     we1      => int_ifmap_7_we1,
     be1      => int_ifmap_7_be1,
     d1       => int_ifmap_7_d1,
     q1       => int_ifmap_7_q1);
-- int_ifmap_8
int_ifmap_8 : Max_Pooling_10x10_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 10,
     AWIDTH   => log2(10))
port map (
     clk0     => ACLK,
     address0 => int_ifmap_8_address0,
     ce0      => int_ifmap_8_ce0,
     we0      => int_ifmap_8_we0,
     be0      => int_ifmap_8_be0,
     d0       => int_ifmap_8_d0,
     q0       => int_ifmap_8_q0,
     clk1     => ACLK,
     address1 => int_ifmap_8_address1,
     ce1      => int_ifmap_8_ce1,
     we1      => int_ifmap_8_we1,
     be1      => int_ifmap_8_be1,
     d1       => int_ifmap_8_d1,
     q1       => int_ifmap_8_q1);
-- int_ifmap_9
int_ifmap_9 : Max_Pooling_10x10_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 10,
     AWIDTH   => log2(10))
port map (
     clk0     => ACLK,
     address0 => int_ifmap_9_address0,
     ce0      => int_ifmap_9_ce0,
     we0      => int_ifmap_9_we0,
     be0      => int_ifmap_9_be0,
     d0       => int_ifmap_9_d0,
     q0       => int_ifmap_9_q0,
     clk1     => ACLK,
     address1 => int_ifmap_9_address1,
     ce1      => int_ifmap_9_ce1,
     we1      => int_ifmap_9_we1,
     be1      => int_ifmap_9_be1,
     d1       => int_ifmap_9_d1,
     q1       => int_ifmap_9_q1);
-- int_result
int_result : Max_Pooling_10x10_AXILiteS_s_axi_ram
generic map (
     BYTES    => 4,
     DEPTH    => 25,
     AWIDTH   => log2(25))
port map (
     clk0     => ACLK,
     address0 => int_result_address0,
     ce0      => int_result_ce0,
     we0      => int_result_we0,
     be0      => int_result_be0,
     d0       => int_result_d0,
     q0       => int_result_q0,
     clk1     => ACLK,
     address1 => int_result_address1,
     ce1      => int_result_ce1,
     we1      => int_result_we1,
     be1      => int_result_be1,
     d1       => int_result_d1,
     q1       => int_result_q1);

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
    RVALID_t  <= '1' when (rstate = rddata) and (int_ifmap_0_read = '0') and (int_ifmap_1_read = '0') and (int_ifmap_2_read = '0') and (int_ifmap_3_read = '0') and (int_ifmap_4_read = '0') and (int_ifmap_5_read = '0') and (int_ifmap_6_read = '0') and (int_ifmap_7_read = '0') and (int_ifmap_8_read = '0') and (int_ifmap_9_read = '0') and (int_result_read = '0') else '0';
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
                elsif (int_ifmap_0_read = '1') then
                    rdata_data <= int_ifmap_0_q1;
                elsif (int_ifmap_1_read = '1') then
                    rdata_data <= int_ifmap_1_q1;
                elsif (int_ifmap_2_read = '1') then
                    rdata_data <= int_ifmap_2_q1;
                elsif (int_ifmap_3_read = '1') then
                    rdata_data <= int_ifmap_3_q1;
                elsif (int_ifmap_4_read = '1') then
                    rdata_data <= int_ifmap_4_q1;
                elsif (int_ifmap_5_read = '1') then
                    rdata_data <= int_ifmap_5_q1;
                elsif (int_ifmap_6_read = '1') then
                    rdata_data <= int_ifmap_6_q1;
                elsif (int_ifmap_7_read = '1') then
                    rdata_data <= int_ifmap_7_q1;
                elsif (int_ifmap_8_read = '1') then
                    rdata_data <= int_ifmap_8_q1;
                elsif (int_ifmap_9_read = '1') then
                    rdata_data <= int_ifmap_9_q1;
                elsif (int_result_read = '1') then
                    rdata_data <= int_result_q1;
                end if;
            end if;
        end if;
    end process;

-- ----------------------- Register logic ----------------

-- ----------------------- Memory logic ------------------
    -- ifmap_0
    int_ifmap_0_address0 <= UNSIGNED(ifmap_0_address0);
    int_ifmap_0_ce0      <= ifmap_0_ce0;
    int_ifmap_0_we0      <= '0';
    int_ifmap_0_be0      <= (others => '0');
    int_ifmap_0_d0       <= (others => '0');
    ifmap_0_q0           <= STD_LOGIC_VECTOR(RESIZE(int_ifmap_0_q0, 32));
    int_ifmap_0_address1 <= raddr(5 downto 2) when ar_hs = '1' else waddr(5 downto 2);
    int_ifmap_0_ce1      <= '1' when ar_hs = '1' or (int_ifmap_0_write = '1' and WVALID  = '1') else '0';
    int_ifmap_0_we1      <= '1' when int_ifmap_0_write = '1' and WVALID = '1' else '0';
    int_ifmap_0_be1      <= UNSIGNED(WSTRB);
    int_ifmap_0_d1       <= UNSIGNED(WDATA);
    -- ifmap_1
    int_ifmap_1_address0 <= UNSIGNED(ifmap_1_address0);
    int_ifmap_1_ce0      <= ifmap_1_ce0;
    int_ifmap_1_we0      <= '0';
    int_ifmap_1_be0      <= (others => '0');
    int_ifmap_1_d0       <= (others => '0');
    ifmap_1_q0           <= STD_LOGIC_VECTOR(RESIZE(int_ifmap_1_q0, 32));
    int_ifmap_1_address1 <= raddr(5 downto 2) when ar_hs = '1' else waddr(5 downto 2);
    int_ifmap_1_ce1      <= '1' when ar_hs = '1' or (int_ifmap_1_write = '1' and WVALID  = '1') else '0';
    int_ifmap_1_we1      <= '1' when int_ifmap_1_write = '1' and WVALID = '1' else '0';
    int_ifmap_1_be1      <= UNSIGNED(WSTRB);
    int_ifmap_1_d1       <= UNSIGNED(WDATA);
    -- ifmap_2
    int_ifmap_2_address0 <= UNSIGNED(ifmap_2_address0);
    int_ifmap_2_ce0      <= ifmap_2_ce0;
    int_ifmap_2_we0      <= '0';
    int_ifmap_2_be0      <= (others => '0');
    int_ifmap_2_d0       <= (others => '0');
    ifmap_2_q0           <= STD_LOGIC_VECTOR(RESIZE(int_ifmap_2_q0, 32));
    int_ifmap_2_address1 <= raddr(5 downto 2) when ar_hs = '1' else waddr(5 downto 2);
    int_ifmap_2_ce1      <= '1' when ar_hs = '1' or (int_ifmap_2_write = '1' and WVALID  = '1') else '0';
    int_ifmap_2_we1      <= '1' when int_ifmap_2_write = '1' and WVALID = '1' else '0';
    int_ifmap_2_be1      <= UNSIGNED(WSTRB);
    int_ifmap_2_d1       <= UNSIGNED(WDATA);
    -- ifmap_3
    int_ifmap_3_address0 <= UNSIGNED(ifmap_3_address0);
    int_ifmap_3_ce0      <= ifmap_3_ce0;
    int_ifmap_3_we0      <= '0';
    int_ifmap_3_be0      <= (others => '0');
    int_ifmap_3_d0       <= (others => '0');
    ifmap_3_q0           <= STD_LOGIC_VECTOR(RESIZE(int_ifmap_3_q0, 32));
    int_ifmap_3_address1 <= raddr(5 downto 2) when ar_hs = '1' else waddr(5 downto 2);
    int_ifmap_3_ce1      <= '1' when ar_hs = '1' or (int_ifmap_3_write = '1' and WVALID  = '1') else '0';
    int_ifmap_3_we1      <= '1' when int_ifmap_3_write = '1' and WVALID = '1' else '0';
    int_ifmap_3_be1      <= UNSIGNED(WSTRB);
    int_ifmap_3_d1       <= UNSIGNED(WDATA);
    -- ifmap_4
    int_ifmap_4_address0 <= UNSIGNED(ifmap_4_address0);
    int_ifmap_4_ce0      <= ifmap_4_ce0;
    int_ifmap_4_we0      <= '0';
    int_ifmap_4_be0      <= (others => '0');
    int_ifmap_4_d0       <= (others => '0');
    ifmap_4_q0           <= STD_LOGIC_VECTOR(RESIZE(int_ifmap_4_q0, 32));
    int_ifmap_4_address1 <= raddr(5 downto 2) when ar_hs = '1' else waddr(5 downto 2);
    int_ifmap_4_ce1      <= '1' when ar_hs = '1' or (int_ifmap_4_write = '1' and WVALID  = '1') else '0';
    int_ifmap_4_we1      <= '1' when int_ifmap_4_write = '1' and WVALID = '1' else '0';
    int_ifmap_4_be1      <= UNSIGNED(WSTRB);
    int_ifmap_4_d1       <= UNSIGNED(WDATA);
    -- ifmap_5
    int_ifmap_5_address0 <= UNSIGNED(ifmap_5_address0);
    int_ifmap_5_ce0      <= ifmap_5_ce0;
    int_ifmap_5_we0      <= '0';
    int_ifmap_5_be0      <= (others => '0');
    int_ifmap_5_d0       <= (others => '0');
    ifmap_5_q0           <= STD_LOGIC_VECTOR(RESIZE(int_ifmap_5_q0, 32));
    int_ifmap_5_address1 <= raddr(5 downto 2) when ar_hs = '1' else waddr(5 downto 2);
    int_ifmap_5_ce1      <= '1' when ar_hs = '1' or (int_ifmap_5_write = '1' and WVALID  = '1') else '0';
    int_ifmap_5_we1      <= '1' when int_ifmap_5_write = '1' and WVALID = '1' else '0';
    int_ifmap_5_be1      <= UNSIGNED(WSTRB);
    int_ifmap_5_d1       <= UNSIGNED(WDATA);
    -- ifmap_6
    int_ifmap_6_address0 <= UNSIGNED(ifmap_6_address0);
    int_ifmap_6_ce0      <= ifmap_6_ce0;
    int_ifmap_6_we0      <= '0';
    int_ifmap_6_be0      <= (others => '0');
    int_ifmap_6_d0       <= (others => '0');
    ifmap_6_q0           <= STD_LOGIC_VECTOR(RESIZE(int_ifmap_6_q0, 32));
    int_ifmap_6_address1 <= raddr(5 downto 2) when ar_hs = '1' else waddr(5 downto 2);
    int_ifmap_6_ce1      <= '1' when ar_hs = '1' or (int_ifmap_6_write = '1' and WVALID  = '1') else '0';
    int_ifmap_6_we1      <= '1' when int_ifmap_6_write = '1' and WVALID = '1' else '0';
    int_ifmap_6_be1      <= UNSIGNED(WSTRB);
    int_ifmap_6_d1       <= UNSIGNED(WDATA);
    -- ifmap_7
    int_ifmap_7_address0 <= UNSIGNED(ifmap_7_address0);
    int_ifmap_7_ce0      <= ifmap_7_ce0;
    int_ifmap_7_we0      <= '0';
    int_ifmap_7_be0      <= (others => '0');
    int_ifmap_7_d0       <= (others => '0');
    ifmap_7_q0           <= STD_LOGIC_VECTOR(RESIZE(int_ifmap_7_q0, 32));
    int_ifmap_7_address1 <= raddr(5 downto 2) when ar_hs = '1' else waddr(5 downto 2);
    int_ifmap_7_ce1      <= '1' when ar_hs = '1' or (int_ifmap_7_write = '1' and WVALID  = '1') else '0';
    int_ifmap_7_we1      <= '1' when int_ifmap_7_write = '1' and WVALID = '1' else '0';
    int_ifmap_7_be1      <= UNSIGNED(WSTRB);
    int_ifmap_7_d1       <= UNSIGNED(WDATA);
    -- ifmap_8
    int_ifmap_8_address0 <= UNSIGNED(ifmap_8_address0);
    int_ifmap_8_ce0      <= ifmap_8_ce0;
    int_ifmap_8_we0      <= '0';
    int_ifmap_8_be0      <= (others => '0');
    int_ifmap_8_d0       <= (others => '0');
    ifmap_8_q0           <= STD_LOGIC_VECTOR(RESIZE(int_ifmap_8_q0, 32));
    int_ifmap_8_address1 <= raddr(5 downto 2) when ar_hs = '1' else waddr(5 downto 2);
    int_ifmap_8_ce1      <= '1' when ar_hs = '1' or (int_ifmap_8_write = '1' and WVALID  = '1') else '0';
    int_ifmap_8_we1      <= '1' when int_ifmap_8_write = '1' and WVALID = '1' else '0';
    int_ifmap_8_be1      <= UNSIGNED(WSTRB);
    int_ifmap_8_d1       <= UNSIGNED(WDATA);
    -- ifmap_9
    int_ifmap_9_address0 <= UNSIGNED(ifmap_9_address0);
    int_ifmap_9_ce0      <= ifmap_9_ce0;
    int_ifmap_9_we0      <= '0';
    int_ifmap_9_be0      <= (others => '0');
    int_ifmap_9_d0       <= (others => '0');
    ifmap_9_q0           <= STD_LOGIC_VECTOR(RESIZE(int_ifmap_9_q0, 32));
    int_ifmap_9_address1 <= raddr(5 downto 2) when ar_hs = '1' else waddr(5 downto 2);
    int_ifmap_9_ce1      <= '1' when ar_hs = '1' or (int_ifmap_9_write = '1' and WVALID  = '1') else '0';
    int_ifmap_9_we1      <= '1' when int_ifmap_9_write = '1' and WVALID = '1' else '0';
    int_ifmap_9_be1      <= UNSIGNED(WSTRB);
    int_ifmap_9_d1       <= UNSIGNED(WDATA);
    -- result
    int_result_address0  <= UNSIGNED(result_address0);
    int_result_ce0       <= result_ce0;
    int_result_we0       <= result_we0;
    int_result_be0       <= (others => result_we0);
    int_result_d0        <= RESIZE(UNSIGNED(result_d0), 32);
    int_result_address1  <= raddr(6 downto 2) when ar_hs = '1' else waddr(6 downto 2);
    int_result_ce1       <= '1' when ar_hs = '1' or (int_result_write = '1' and WVALID  = '1') else '0';
    int_result_we1       <= '1' when int_result_write = '1' and WVALID = '1' else '0';
    int_result_be1       <= UNSIGNED(WSTRB);
    int_result_d1        <= UNSIGNED(WDATA);

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ifmap_0_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_IFMAP_0_BASE and raddr <= ADDR_IFMAP_0_HIGH) then
                    int_ifmap_0_read <= '1';
                else
                    int_ifmap_0_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ifmap_0_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_IFMAP_0_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_IFMAP_0_HIGH) then
                    int_ifmap_0_write <= '1';
                elsif (WVALID = '1') then
                    int_ifmap_0_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ifmap_1_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_IFMAP_1_BASE and raddr <= ADDR_IFMAP_1_HIGH) then
                    int_ifmap_1_read <= '1';
                else
                    int_ifmap_1_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ifmap_1_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_IFMAP_1_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_IFMAP_1_HIGH) then
                    int_ifmap_1_write <= '1';
                elsif (WVALID = '1') then
                    int_ifmap_1_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ifmap_2_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_IFMAP_2_BASE and raddr <= ADDR_IFMAP_2_HIGH) then
                    int_ifmap_2_read <= '1';
                else
                    int_ifmap_2_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ifmap_2_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_IFMAP_2_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_IFMAP_2_HIGH) then
                    int_ifmap_2_write <= '1';
                elsif (WVALID = '1') then
                    int_ifmap_2_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ifmap_3_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_IFMAP_3_BASE and raddr <= ADDR_IFMAP_3_HIGH) then
                    int_ifmap_3_read <= '1';
                else
                    int_ifmap_3_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ifmap_3_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_IFMAP_3_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_IFMAP_3_HIGH) then
                    int_ifmap_3_write <= '1';
                elsif (WVALID = '1') then
                    int_ifmap_3_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ifmap_4_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_IFMAP_4_BASE and raddr <= ADDR_IFMAP_4_HIGH) then
                    int_ifmap_4_read <= '1';
                else
                    int_ifmap_4_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ifmap_4_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_IFMAP_4_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_IFMAP_4_HIGH) then
                    int_ifmap_4_write <= '1';
                elsif (WVALID = '1') then
                    int_ifmap_4_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ifmap_5_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_IFMAP_5_BASE and raddr <= ADDR_IFMAP_5_HIGH) then
                    int_ifmap_5_read <= '1';
                else
                    int_ifmap_5_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ifmap_5_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_IFMAP_5_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_IFMAP_5_HIGH) then
                    int_ifmap_5_write <= '1';
                elsif (WVALID = '1') then
                    int_ifmap_5_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ifmap_6_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_IFMAP_6_BASE and raddr <= ADDR_IFMAP_6_HIGH) then
                    int_ifmap_6_read <= '1';
                else
                    int_ifmap_6_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ifmap_6_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_IFMAP_6_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_IFMAP_6_HIGH) then
                    int_ifmap_6_write <= '1';
                elsif (WVALID = '1') then
                    int_ifmap_6_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ifmap_7_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_IFMAP_7_BASE and raddr <= ADDR_IFMAP_7_HIGH) then
                    int_ifmap_7_read <= '1';
                else
                    int_ifmap_7_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ifmap_7_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_IFMAP_7_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_IFMAP_7_HIGH) then
                    int_ifmap_7_write <= '1';
                elsif (WVALID = '1') then
                    int_ifmap_7_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ifmap_8_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_IFMAP_8_BASE and raddr <= ADDR_IFMAP_8_HIGH) then
                    int_ifmap_8_read <= '1';
                else
                    int_ifmap_8_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ifmap_8_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_IFMAP_8_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_IFMAP_8_HIGH) then
                    int_ifmap_8_write <= '1';
                elsif (WVALID = '1') then
                    int_ifmap_8_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ifmap_9_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_IFMAP_9_BASE and raddr <= ADDR_IFMAP_9_HIGH) then
                    int_ifmap_9_read <= '1';
                else
                    int_ifmap_9_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ifmap_9_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_IFMAP_9_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_IFMAP_9_HIGH) then
                    int_ifmap_9_write <= '1';
                elsif (WVALID = '1') then
                    int_ifmap_9_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_result_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_RESULT_BASE and raddr <= ADDR_RESULT_HIGH) then
                    int_result_read <= '1';
                else
                    int_result_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_result_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_RESULT_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_RESULT_HIGH) then
                    int_result_write <= '1';
                elsif (WVALID = '1') then
                    int_result_write <= '0';
                end if;
            end if;
        end if;
    end process;


end architecture behave;

library IEEE;
USE IEEE.std_logic_1164.all;
USE IEEE.numeric_std.all;

entity Max_Pooling_10x10_AXILiteS_s_axi_ram is
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

end entity Max_Pooling_10x10_AXILiteS_s_axi_ram;

architecture behave of Max_Pooling_10x10_AXILiteS_s_axi_ram is
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


