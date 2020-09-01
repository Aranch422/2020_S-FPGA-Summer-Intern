# This script segment is generated automatically by AutoPilot

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


