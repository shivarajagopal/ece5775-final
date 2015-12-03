set moduleName fir
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set C_modelName fir
set C_modelType { void 0 }
set C_modelArgList { 
	{ y int 16 regular {axi_slave 1}  }
	{ x int 16 regular {axi_slave 0}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "y", "interface" : "axi_slave", "bundle":"fir_io","type":"ap_vld","bitwidth" : 16,"bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "y","cData": "short","cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}], "offset" : [{"out":16}]} , 
 	{ "Name" : "x", "interface" : "axi_slave", "bundle":"fir_io","type":"ap_none","bitwidth" : 16,"bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "x","cData": "short","cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}], "offset" : [{"in":24}]} ]}
# RTL Port declarations: 
set portNum 20
set portList { 
	{ s_axi_fir_io_AWVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_fir_io_AWREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_fir_io_AWADDR sc_in sc_lv 6 signal -1 } 
	{ s_axi_fir_io_WVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_fir_io_WREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_fir_io_WDATA sc_in sc_lv 32 signal -1 } 
	{ s_axi_fir_io_WSTRB sc_in sc_lv 4 signal -1 } 
	{ s_axi_fir_io_ARVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_fir_io_ARREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_fir_io_ARADDR sc_in sc_lv 6 signal -1 } 
	{ s_axi_fir_io_RVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_fir_io_RREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_fir_io_RDATA sc_out sc_lv 32 signal -1 } 
	{ s_axi_fir_io_RRESP sc_out sc_lv 2 signal -1 } 
	{ s_axi_fir_io_BVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_fir_io_BREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_fir_io_BRESP sc_out sc_lv 2 signal -1 } 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst_n sc_in sc_logic 1 reset -1 active_low_sync } 
	{ interrupt sc_out sc_logic 1 signal -1 } 
}
set NewPortList {[ 
	{ "name": "s_axi_fir_io_AWADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "fir_io", "role": "AWADDR" },"address":[{"name":"fir","role":"start","value":"0","valid_bit":"0"},{"name":"fir","role":"continue","value":"0","valid_bit":"4"},{"name":"fir","role":"auto_start","value":"0","valid_bit":"7"},{"name":"x","role":"data","value":"24"}] },
	{ "name": "s_axi_fir_io_AWVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fir_io", "role": "AWVALID" } },
	{ "name": "s_axi_fir_io_AWREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fir_io", "role": "AWREADY" } },
	{ "name": "s_axi_fir_io_WVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fir_io", "role": "WVALID" } },
	{ "name": "s_axi_fir_io_WREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fir_io", "role": "WREADY" } },
	{ "name": "s_axi_fir_io_WDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "fir_io", "role": "WDATA" } },
	{ "name": "s_axi_fir_io_WSTRB", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "fir_io", "role": "WSTRB" } },
	{ "name": "s_axi_fir_io_ARADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "fir_io", "role": "ARADDR" },"address":[{"name":"fir","role":"start","value":"0","valid_bit":"0"},{"name":"fir","role":"done","value":"0","valid_bit":"1"},{"name":"fir","role":"idle","value":"0","valid_bit":"2"},{"name":"fir","role":"ready","value":"0","valid_bit":"3"},{"name":"fir","role":"auto_start","value":"0","valid_bit":"7"},{"name":"y","role":"data","value":"16"}, {"name":"y","role":"valid","value":"20","valid_bit":"0"}] },
	{ "name": "s_axi_fir_io_ARVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fir_io", "role": "ARVALID" } },
	{ "name": "s_axi_fir_io_ARREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fir_io", "role": "ARREADY" } },
	{ "name": "s_axi_fir_io_RVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fir_io", "role": "RVALID" } },
	{ "name": "s_axi_fir_io_RREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fir_io", "role": "RREADY" } },
	{ "name": "s_axi_fir_io_RDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "fir_io", "role": "RDATA" } },
	{ "name": "s_axi_fir_io_RRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "fir_io", "role": "RRESP" } },
	{ "name": "s_axi_fir_io_BVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fir_io", "role": "BVALID" } },
	{ "name": "s_axi_fir_io_BREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fir_io", "role": "BREADY" } },
	{ "name": "s_axi_fir_io_BRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "fir_io", "role": "BRESP" } }, 
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
