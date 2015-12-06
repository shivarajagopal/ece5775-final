set C_TypeInfoList {{ 
"voicerec" : [[], {"return": [[], {"scalar": "int"}] }, [{"ExternC" : 0}], [ {"inSound": [[], {"array": [ {"scalar": "double"}, [16000]]}] }],["0","1","2","3","4","5","6"],""],
 "0": [ "input", [[], {"array": [ {"scalar": "float"}, [883]]}],""],
 "1": [ "hidden", [[], {"array": [ {"scalar": "float"}, [26]]}],""],
 "2": [ "output", [[], {"array": [ {"scalar": "float"}, [4]]}],""],
 "3": [ "c", [[], {"array": [ {"scalar": "double"}, [512]]}],""],
 "4": [ "d", [[], {"array": [ {"scalar": "double"}, [256]]}],""],
 "5": [ "e", [[], {"array": [ {"scalar": "double"}, [26]]}],""],
 "6": [ "result", [[], {"array": [ {"scalar": "double"}, [63,14]]}],""]
}}
set moduleName voicerec
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set C_modelName {voicerec}
set C_modelType { int 32 }
set C_modelArgList { 
	{ inSound double 64 regular {array 16000 { 2 3 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "inSound", "interface" : "memory", "bitwidth" : 64 ,"direction" : "READWRITE" ,"bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "inSound","cData": "double","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 15999,"step" : 1}]}]}]} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 32,"bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "return","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 1,"step" : 0}]}]}]} ]}
# RTL Port declarations: 
set portNum 12
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
	{ inSound_d0 sc_out sc_lv 64 signal 0 } 
	{ inSound_q0 sc_in sc_lv 64 signal 0 } 
	{ ap_return sc_out sc_lv 32 signal -1 } 
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
 	{ "name": "inSound_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "inSound", "role": "d0" }} , 
 	{ "name": "inSound_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "inSound", "role": "q0" }} , 
 	{ "name": "ap_return", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return", "role": "default" }}  ]}
set Spec2ImplPortList { 
	inSound { ap_memory {  { inSound_address0 mem_address 1 14 }  { inSound_ce0 mem_ce 1 1 }  { inSound_we0 mem_we 1 1 }  { inSound_d0 mem_din 1 64 }  { inSound_q0 mem_dout 0 64 } } }
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
