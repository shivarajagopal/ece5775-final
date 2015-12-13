set C_TypeInfoList {{ 
"voicerec" : [[], {"return": [[], {"scalar": "int"}] }, [{"ExternC" : 0}], [ {"new_sample": [[],{ "pointer":  {"scalar": "float"}}] }],["0","1","2","3","4","5","6","7","8"],""],
 "0": [ "input", [[], {"array": [ {"scalar": "float"}, [883]]}],""],
 "1": [ "hidden", [[], {"array": [ {"scalar": "float"}, [26]]}],""],
 "2": [ "output", [[], {"array": [ {"scalar": "float"}, [4]]}],""],
 "3": [ "result", [[], {"array": [ {"scalar": "float"}, [63,14]]}],""],
 "4": [ "c", [[], {"array": [ {"scalar": "float"}, [512]]}],""],
 "5": [ "spec", [[], {"array": [ {"scalar": "float"}, [256]]}],""],
 "6": [ "e", [[], {"array": [ {"scalar": "float"}, [26]]}],""],
 "7": [ "begins", [[], {"array": [ {"scalar": "int"}, [80]]}],""],
 "8": [ "ends", [[], {"array": [ {"scalar": "int"}, [80]]}],""]
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
	{ new_sample float 32 regular {pointer 0}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "new_sample", "interface" : "wire", "bitwidth" : 32 ,"direction" : "READONLY" ,"bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "new_sample","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 32,"bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "return","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 1,"step" : 0}]}]}]} ]}
# RTL Port declarations: 
set portNum 8
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ new_sample sc_in sc_lv 32 signal 0 } 
	{ ap_return sc_out sc_lv 32 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "new_sample", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "new_sample", "role": "default" }} , 
 	{ "name": "ap_return", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return", "role": "default" }}  ]}
set Spec2ImplPortList { 
	new_sample { ap_none {  { new_sample in_data 0 32 } } }
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
