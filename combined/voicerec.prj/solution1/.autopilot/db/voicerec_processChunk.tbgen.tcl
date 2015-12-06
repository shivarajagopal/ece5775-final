set moduleName voicerec_processChunk
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set C_modelName {voicerec_processChunk}
set C_modelType { void 0 }
set C_modelArgList { 
	{ sp int 32 regular  }
	{ np int 32 regular  }
	{ ret double 64 regular {array 882 { 0 3 } 0 1 }  }
	{ tmp_122 int 32 regular  }
	{ inputSound double 64 regular {array 8000 { 1 3 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "sp", "interface" : "wire", "bitwidth" : 32 ,"direction" : "READONLY" } , 
 	{ "Name" : "np", "interface" : "wire", "bitwidth" : 32 ,"direction" : "READONLY" } , 
 	{ "Name" : "ret", "interface" : "memory", "bitwidth" : 64 ,"direction" : "WRITEONLY" } , 
 	{ "Name" : "tmp_122", "interface" : "wire", "bitwidth" : 32 ,"direction" : "READONLY" } , 
 	{ "Name" : "inputSound", "interface" : "memory", "bitwidth" : 64 ,"direction" : "READONLY" } ]}
# RTL Port declarations: 
set portNum 16
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ sp sc_in sc_lv 32 signal 0 } 
	{ np sc_in sc_lv 32 signal 1 } 
	{ ret_address0 sc_out sc_lv 10 signal 2 } 
	{ ret_ce0 sc_out sc_logic 1 signal 2 } 
	{ ret_we0 sc_out sc_logic 1 signal 2 } 
	{ ret_d0 sc_out sc_lv 64 signal 2 } 
	{ tmp_122 sc_in sc_lv 32 signal 3 } 
	{ inputSound_address0 sc_out sc_lv 13 signal 4 } 
	{ inputSound_ce0 sc_out sc_logic 1 signal 4 } 
	{ inputSound_q0 sc_in sc_lv 64 signal 4 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "sp", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "sp", "role": "default" }} , 
 	{ "name": "np", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "np", "role": "default" }} , 
 	{ "name": "ret_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "ret", "role": "address0" }} , 
 	{ "name": "ret_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ret", "role": "ce0" }} , 
 	{ "name": "ret_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ret", "role": "we0" }} , 
 	{ "name": "ret_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "ret", "role": "d0" }} , 
 	{ "name": "tmp_122", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "tmp_122", "role": "default" }} , 
 	{ "name": "inputSound_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "inputSound", "role": "address0" }} , 
 	{ "name": "inputSound_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inputSound", "role": "ce0" }} , 
 	{ "name": "inputSound_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "inputSound", "role": "q0" }}  ]}
set Spec2ImplPortList { 
	sp { ap_none {  { sp in_data 0 32 } } }
	np { ap_none {  { np in_data 0 32 } } }
	ret { ap_memory {  { ret_address0 mem_address 1 10 }  { ret_ce0 mem_ce 1 1 }  { ret_we0 mem_we 1 1 }  { ret_d0 mem_din 1 64 } } }
	tmp_122 { ap_none {  { tmp_122 in_data 0 32 } } }
	inputSound { ap_memory {  { inputSound_address0 mem_address 1 13 }  { inputSound_ce0 mem_ce 1 1 }  { inputSound_q0 mem_dout 0 64 } } }
}
