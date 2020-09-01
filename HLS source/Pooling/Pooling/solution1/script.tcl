############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project Pooling
set_top Max_Pooling_10x10
add_files Pooling/maxPooling_10x10.cpp
add_files Pooling/maxPooling_28x28.cpp
open_solution "solution1"
set_part {xc7z020clg400-1}
create_clock -period 10 -name default
#source "./Pooling/solution1/directives.tcl"
#csim_design
csynth_design
#cosim_design
export_design -format ip_catalog
