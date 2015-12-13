set moduleName voicerec
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set C_modelName voicerec
set C_modelType { int 32 }
set C_modelArgList { 
	{ new_sample float 32 regular {axi_slave 0}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "new_sample", "interface" : "axi_slave", "bundle":"voicerec_io","type":"ap_none","bitwidth" : 32,"bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "new_sample","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}], "offset" : [{"in":24}]} , 
 	{ "Name" : "ap_return", "interface" : "axi_slave", "bundle":"voicerec_io","type":"ap_none","bitwidth" : 32,"bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "return","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 1,"step" : 0}]}]}], "offset" : [{"out":16}]} ]}
# RTL Port declarations: 
set portNum 20
set portList { 
	{ s_axi_voicerec_io_AWVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_voicerec_io_AWREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_voicerec_io_AWADDR sc_in sc_lv 6 signal -1 } 
	{ s_axi_voicerec_io_WVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_voicerec_io_WREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_voicerec_io_WDATA sc_in sc_lv 32 signal -1 } 
	{ s_axi_voicerec_io_WSTRB sc_in sc_lv 4 signal -1 } 
	{ s_axi_voicerec_io_ARVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_voicerec_io_ARREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_voicerec_io_ARADDR sc_in sc_lv 6 signal -1 } 
	{ s_axi_voicerec_io_RVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_voicerec_io_RREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_voicerec_io_RDATA sc_out sc_lv 32 signal -1 } 
	{ s_axi_voicerec_io_RRESP sc_out sc_lv 2 signal -1 } 
	{ s_axi_voicerec_io_BVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_voicerec_io_BREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_voicerec_io_BRESP sc_out sc_lv 2 signal -1 } 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst_n sc_in sc_logic 1 reset -1 active_low_sync } 
	{ interrupt sc_out sc_logic 1 signal -1 } 
}
set NewPortList {[ 
	{ "name": "s_axi_voicerec_io_AWADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "voicerec_io", "role": "AWADDR" },"address":[{"name":"voicerec","role":"start","value":"0","valid_bit":"0"},{"name":"voicerec","role":"continue","value":"0","valid_bit":"4"},{"name":"voicerec","role":"auto_start","value":"0","valid_bit":"7"},{"name":"new_sample","role":"data","value":"24"}] },
	{ "name": "s_axi_voicerec_io_AWVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "voicerec_io", "role": "AWVALID" } },
	{ "name": "s_axi_voicerec_io_AWREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "voicerec_io", "role": "AWREADY" } },
	{ "name": "s_axi_voicerec_io_WVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "voicerec_io", "role": "WVALID" } },
	{ "name": "s_axi_voicerec_io_WREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "voicerec_io", "role": "WREADY" } },
	{ "name": "s_axi_voicerec_io_WDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "voicerec_io", "role": "WDATA" } },
	{ "name": "s_axi_voicerec_io_WSTRB", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "voicerec_io", "role": "WSTRB" } },
	{ "name": "s_axi_voicerec_io_ARADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "voicerec_io", "role": "ARADDR" },"address":[{"name":"voicerec","role":"start","value":"0","valid_bit":"0"},{"name":"voicerec","role":"done","value":"0","valid_bit":"1"},{"name":"voicerec","role":"idle","value":"0","valid_bit":"2"},{"name":"voicerec","role":"ready","value":"0","valid_bit":"3"},{"name":"voicerec","role":"auto_start","value":"0","valid_bit":"7"},{"name":"return","role":"data","value":"16"}] },
	{ "name": "s_axi_voicerec_io_ARVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "voicerec_io", "role": "ARVALID" } },
	{ "name": "s_axi_voicerec_io_ARREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "voicerec_io", "role": "ARREADY" } },
	{ "name": "s_axi_voicerec_io_RVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "voicerec_io", "role": "RVALID" } },
	{ "name": "s_axi_voicerec_io_RREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "voicerec_io", "role": "RREADY" } },
	{ "name": "s_axi_voicerec_io_RDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "voicerec_io", "role": "RDATA" } },
	{ "name": "s_axi_voicerec_io_RRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "voicerec_io", "role": "RRESP" } },
	{ "name": "s_axi_voicerec_io_BVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "voicerec_io", "role": "BVALID" } },
	{ "name": "s_axi_voicerec_io_BREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "voicerec_io", "role": "BREADY" } },
	{ "name": "s_axi_voicerec_io_BRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "voicerec_io", "role": "BRESP" } }, 
 	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst_n", "role": "default" }} , 
 	{ "name": "interrupt", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "interrupt", "role": "default" }}  ]}
set Spec2ImplPortList { 
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
