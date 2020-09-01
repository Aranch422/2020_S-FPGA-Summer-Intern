############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project Matmul_2
set_top LeNetMatmul
add_files Matmul_2/src/LeNet5_matmul.cpp
open_solution "solution1"
set_part {xc7z020-clg400-1}
create_clock -period 10 -name default
#source "./Matmul_2/solution1/directives.tcl"
#csim_design
csynth_design
#cosim_design
export_design -rtl verilog -format ip_catalog
