set moduleName Max_Pooling_10x10
set isTopModule 1
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_none
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {Max_Pooling_10x10}
set C_modelType { void 0 }
set C_modelArgList {
	{ ifmap_0 int 32 regular {axi_slave 0}  }
	{ ifmap_1 int 32 regular {axi_slave 0}  }
	{ ifmap_2 int 32 regular {axi_slave 0}  }
	{ ifmap_3 int 32 regular {axi_slave 0}  }
	{ ifmap_4 int 32 regular {axi_slave 0}  }
	{ ifmap_5 int 32 regular {axi_slave 0}  }
	{ ifmap_6 int 32 regular {axi_slave 0}  }
	{ ifmap_7 int 32 regular {axi_slave 0}  }
	{ ifmap_8 int 32 regular {axi_slave 0}  }
	{ ifmap_9 int 32 regular {axi_slave 0}  }
	{ result int 32 regular {axi_slave 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "ifmap_0", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_memory","bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "ifmap","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 2},{"low" : 0,"up" : 9,"step" : 1}]}]}], "offset" : {"in":64}, "offset_end" : {"in":127}} , 
 	{ "Name" : "ifmap_1", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_memory","bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "ifmap","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 1,"up" : 1,"step" : 2},{"low" : 0,"up" : 9,"step" : 1}]}]}], "offset" : {"in":128}, "offset_end" : {"in":191}} , 
 	{ "Name" : "ifmap_2", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_memory","bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "ifmap","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 2,"up" : 2,"step" : 2},{"low" : 0,"up" : 9,"step" : 1}]}]}], "offset" : {"in":192}, "offset_end" : {"in":255}} , 
 	{ "Name" : "ifmap_3", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_memory","bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "ifmap","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 3,"up" : 3,"step" : 2},{"low" : 0,"up" : 9,"step" : 1}]}]}], "offset" : {"in":256}, "offset_end" : {"in":319}} , 
 	{ "Name" : "ifmap_4", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_memory","bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "ifmap","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 4,"up" : 4,"step" : 2},{"low" : 0,"up" : 9,"step" : 1}]}]}], "offset" : {"in":320}, "offset_end" : {"in":383}} , 
 	{ "Name" : "ifmap_5", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_memory","bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "ifmap","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 5,"up" : 5,"step" : 2},{"low" : 0,"up" : 9,"step" : 1}]}]}], "offset" : {"in":384}, "offset_end" : {"in":447}} , 
 	{ "Name" : "ifmap_6", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_memory","bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "ifmap","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 6,"up" : 6,"step" : 2},{"low" : 0,"up" : 9,"step" : 1}]}]}], "offset" : {"in":448}, "offset_end" : {"in":511}} , 
 	{ "Name" : "ifmap_7", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_memory","bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "ifmap","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 7,"up" : 7,"step" : 2},{"low" : 0,"up" : 9,"step" : 1}]}]}], "offset" : {"in":512}, "offset_end" : {"in":575}} , 
 	{ "Name" : "ifmap_8", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_memory","bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "ifmap","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 8,"up" : 8,"step" : 2},{"low" : 0,"up" : 9,"step" : 1}]}]}], "offset" : {"in":576}, "offset_end" : {"in":639}} , 
 	{ "Name" : "ifmap_9", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_memory","bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "ifmap","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 9,"up" : 9,"step" : 2},{"low" : 0,"up" : 9,"step" : 1}]}]}], "offset" : {"in":640}, "offset_end" : {"in":703}} , 
 	{ "Name" : "result", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_memory","bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "result","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 24,"step" : 1}]}]}], "offset" : {"out":768}, "offset_end" : {"out":895}} ]}
# RTL Port declarations: 
set portNum 19
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst_n sc_in sc_logic 1 reset -1 active_low_sync } 
	{ s_axi_AXILiteS_AWVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_AWREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_AWADDR sc_in sc_lv 10 signal -1 } 
	{ s_axi_AXILiteS_WVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_WREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_WDATA sc_in sc_lv 32 signal -1 } 
	{ s_axi_AXILiteS_WSTRB sc_in sc_lv 4 signal -1 } 
	{ s_axi_AXILiteS_ARVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_ARREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_ARADDR sc_in sc_lv 10 signal -1 } 
	{ s_axi_AXILiteS_RVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_RREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_RDATA sc_out sc_lv 32 signal -1 } 
	{ s_axi_AXILiteS_RRESP sc_out sc_lv 2 signal -1 } 
	{ s_axi_AXILiteS_BVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_BREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_BRESP sc_out sc_lv 2 signal -1 } 
}
set NewPortList {[ 
	{ "name": "s_axi_AXILiteS_AWADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "AXILiteS", "role": "AWADDR" },"address":[{"name":"ifmap_0","role":"data","value":"64"},{"name":"ifmap_1","role":"data","value":"128"},{"name":"ifmap_2","role":"data","value":"192"},{"name":"ifmap_3","role":"data","value":"256"},{"name":"ifmap_4","role":"data","value":"320"},{"name":"ifmap_5","role":"data","value":"384"},{"name":"ifmap_6","role":"data","value":"448"},{"name":"ifmap_7","role":"data","value":"512"},{"name":"ifmap_8","role":"data","value":"576"},{"name":"ifmap_9","role":"data","value":"640"}] },
	{ "name": "s_axi_AXILiteS_AWVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "AWVALID" } },
	{ "name": "s_axi_AXILiteS_AWREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "AWREADY" } },
	{ "name": "s_axi_AXILiteS_WVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "WVALID" } },
	{ "name": "s_axi_AXILiteS_WREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "WREADY" } },
	{ "name": "s_axi_AXILiteS_WDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "AXILiteS", "role": "WDATA" } },
	{ "name": "s_axi_AXILiteS_WSTRB", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "AXILiteS", "role": "WSTRB" } },
	{ "name": "s_axi_AXILiteS_ARADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "AXILiteS", "role": "ARADDR" },"address":[{"name":"result","role":"data","value":"768"}] },
	{ "name": "s_axi_AXILiteS_ARVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "ARVALID" } },
	{ "name": "s_axi_AXILiteS_ARREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "ARREADY" } },
	{ "name": "s_axi_AXILiteS_RVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "RVALID" } },
	{ "name": "s_axi_AXILiteS_RREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "RREADY" } },
	{ "name": "s_axi_AXILiteS_RDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "AXILiteS", "role": "RDATA" } },
	{ "name": "s_axi_AXILiteS_RRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "AXILiteS", "role": "RRESP" } },
	{ "name": "s_axi_AXILiteS_BVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "BVALID" } },
	{ "name": "s_axi_AXILiteS_BREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "BREADY" } },
	{ "name": "s_axi_AXILiteS_BRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "AXILiteS", "role": "BRESP" } }, 
 	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst_n", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1"],
		"CDFG" : "Max_Pooling_10x10",
		"Protocol" : "ap_ctrl_none",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "53", "EstimateLatencyMax" : "53",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "ifmap_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ifmap_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ifmap_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ifmap_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ifmap_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ifmap_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ifmap_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ifmap_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ifmap_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ifmap_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "result", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Max_Pooling_10x10_AXILiteS_s_axi_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	Max_Pooling_10x10 {
		ifmap_0 {Type I LastRead 11 FirstWrite -1}
		ifmap_1 {Type I LastRead 11 FirstWrite -1}
		ifmap_2 {Type I LastRead 11 FirstWrite -1}
		ifmap_3 {Type I LastRead 11 FirstWrite -1}
		ifmap_4 {Type I LastRead 11 FirstWrite -1}
		ifmap_5 {Type I LastRead 11 FirstWrite -1}
		ifmap_6 {Type I LastRead 11 FirstWrite -1}
		ifmap_7 {Type I LastRead 11 FirstWrite -1}
		ifmap_8 {Type I LastRead 11 FirstWrite -1}
		ifmap_9 {Type I LastRead 11 FirstWrite -1}
		result {Type O LastRead -1 FirstWrite 4}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "53", "Max" : "53"}
	, {"Name" : "Interval", "Min" : "54", "Max" : "54"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
