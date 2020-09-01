############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project MatMul
set_top top
add_files MatMul/sys_matmul8x8_port2.cpp
add_files MatMul/coretest.cpp
open_solution "solution1"
set_part {xc7z020-clg400-1}
create_clock -period 10 -name default
#source "./MatMul/solution1/directives.tcl"
#csim_design
csynth_design
#cosim_design -O
export_design -flow syn -rtl vhdl -format ip_catalog
