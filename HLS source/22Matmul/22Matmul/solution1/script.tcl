############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project 22Matmul
set_top matmul
add_files src.c
add_files -tb src_test.c -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
open_solution "solution1"
set_part {xc7z020clg400-1}
create_clock -period 10 -name default
#source "./22Matmul/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
