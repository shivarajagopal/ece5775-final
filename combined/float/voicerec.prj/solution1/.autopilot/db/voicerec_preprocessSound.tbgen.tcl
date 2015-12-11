set moduleName voicerec_preprocessSound
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set C_modelName {voicerec_preprocessSound}
set C_modelType { void 0 }
set C_modelArgList { 
	{ inSound float 32 regular {array 16000 { 2 3 } 1 1 }  }
	{ outSound float 32 regular {array 8000 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "inSound", "interface" : "memory", "bitwidth" : 32 ,"direction" : "READWRITE" } , 
 	{ "Name" : "outSound", "interface" : "memory", "bitwidth" : 32 ,"direction" : "WRITEONLY" } ]}
# RTL Port declarations: 
set portNum 15
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ inSound_address0 sc_out sc_lv 14 signal 0 } 
	{ inSound_ce0 sc_out sc_logic 1 signal 0 } 
	{ inSound_we0 sc_out sc_logic 1 signal 0 } 
	{ inSound_d0 sc_out sc_lv 32 signal 0 } 
	{ inSound_q0 sc_in sc_lv 32 signal 0 } 
	{ outSound_address0 sc_out sc_lv 13 signal 1 } 
	{ outSound_ce0 sc_out sc_logic 1 signal 1 } 
	{ outSound_we0 sc_out sc_logic 1 signal 1 } 
	{ outSound_d0 sc_out sc_lv 32 signal 1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "inSound_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "inSound", "role": "address0" }} , 
 	{ "name": "inSound_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inSound", "role": "ce0" }} , 
 	{ "name": "inSound_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inSound", "role": "we0" }} , 
 	{ "name": "inSound_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inSound", "role": "d0" }} , 
 	{ "name": "inSound_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inSound", "role": "q0" }} , 
 	{ "name": "outSound_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "outSound", "role": "address0" }} , 
 	{ "name": "outSound_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "outSound", "role": "ce0" }} , 
 	{ "name": "outSound_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "outSound", "role": "we0" }} , 
 	{ "name": "outSound_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "outSound", "role": "d0" }}  ]}
set Spec2ImplPortList { 
	inSound { ap_memory {  { inSound_address0 mem_address 1 14 }  { inSound_ce0 mem_ce 1 1 }  { inSound_we0 mem_we 1 1 }  { inSound_d0 mem_din 1 32 }  { inSound_q0 mem_dout 0 32 } } }
	outSound { ap_memory {  { outSound_address0 mem_address 1 13 }  { outSound_ce0 mem_ce 1 1 }  { outSound_we0 mem_we 1 1 }  { outSound_d0 mem_din 1 32 } } }
}
