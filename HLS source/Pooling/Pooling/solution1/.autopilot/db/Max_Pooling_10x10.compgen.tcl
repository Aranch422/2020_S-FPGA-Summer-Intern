# This script segment is generated automatically by AutoPilot

# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

set axilite_register_dict [dict create]
set port_AXILiteS {
ifmap_0 { 
	dir I
	width 32
	depth 10
	mode ap_memory
	offset 64
	offset_end 127
}
ifmap_1 { 
	dir I
	width 32
	depth 10
	mode ap_memory
	offset 128
	offset_end 191
}
ifmap_2 { 
	dir I
	width 32
	depth 10
	mode ap_memory
	offset 192
	offset_end 255
}
ifmap_3 { 
	dir I
	width 32
	depth 10
	mode ap_memory
	offset 256
	offset_end 319
}
ifmap_4 { 
	dir I
	width 32
	depth 10
	mode ap_memory
	offset 320
	offset_end 383
}
ifmap_5 { 
	dir I
	width 32
	depth 10
	mode ap_memory
	offset 384
	offset_end 447
}
ifmap_6 { 
	dir I
	width 32
	depth 10
	mode ap_memory
	offset 448
	offset_end 511
}
ifmap_7 { 
	dir I
	width 32
	depth 10
	mode ap_memory
	offset 512
	offset_end 575
}
ifmap_8 { 
	dir I
	width 32
	depth 10
	mode ap_memory
	offset 576
	offset_end 639
}
ifmap_9 { 
	dir I
	width 32
	depth 10
	mode ap_memory
	offset 640
	offset_end 703
}
result { 
	dir O
	width 32
	depth 25
	mode ap_memory
	offset 768
	offset_end 895
}
}
dict set axilite_register_dict AXILiteS $port_AXILiteS


# Native S_AXILite:
if {${::AESL::PGuard_simmodel_gen}} {
	if {[info proc ::AESL_LIB_XILADAPTER::s_axilite_gen] == "::AESL_LIB_XILADAPTER::s_axilite_gen"} {
		eval "::AESL_LIB_XILADAPTER::s_axilite_gen { \
			id 1 \
			corename Max_Pooling_10x10_AXILiteS_axilite \
			name Max_Pooling_10x10_AXILiteS_s_axi \
			ports {$port_AXILiteS} \
			op interface \
			is_flushable 0 \ 
		} "
	} else {
		puts "@W \[IMPL-110\] Cannot find AXI Lite interface model in the library. Ignored generation of AXI Lite  interface for 'AXILiteS'"
	}
}

if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler Max_Pooling_10x10_AXILiteS_s_axi
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -1 \
    name ${PortName} \
    reset_level 0 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst_n
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -2 \
    name ${PortName} \
    reset_level 0 \
    sync_rst true \
    corename apif_ap_rst_n \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


