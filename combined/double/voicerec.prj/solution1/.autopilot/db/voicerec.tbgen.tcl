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
	{ voicerec_inSound double 64 regular {axi_master 2}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "voicerec_inSound", "interface" : "axi_master", "bitwidth" : 64 ,"direction" : "READWRITE" ,"bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "inSound","cData": "double","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 15999,"step" : 1}]}]}]} , 
 	{ "Name" : "ap_return", "interface" : "axi_slave", "bundle":"voicerec_ctrl","type":"ap_none","bitwidth" : 32,"bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "return","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 1,"step" : 0}]}]}], "offset" : {"out":16}} ]}
# RTL Port declarations: 
set portNum 65
set portList { 
	{ s_axi_voicerec_ctrl_AWVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_voicerec_ctrl_AWREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_voicerec_ctrl_AWADDR sc_in sc_lv 5 signal -1 } 
	{ s_axi_voicerec_ctrl_WVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_voicerec_ctrl_WREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_voicerec_ctrl_WDATA sc_in sc_lv 32 signal -1 } 
	{ s_axi_voicerec_ctrl_WSTRB sc_in sc_lv 4 signal -1 } 
	{ s_axi_voicerec_ctrl_ARVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_voicerec_ctrl_ARREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_voicerec_ctrl_ARADDR sc_in sc_lv 5 signal -1 } 
	{ s_axi_voicerec_ctrl_RVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_voicerec_ctrl_RREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_voicerec_ctrl_RDATA sc_out sc_lv 32 signal -1 } 
	{ s_axi_voicerec_ctrl_RRESP sc_out sc_lv 2 signal -1 } 
	{ s_axi_voicerec_ctrl_BVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_voicerec_ctrl_BREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_voicerec_ctrl_BRESP sc_out sc_lv 2 signal -1 } 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst_n sc_in sc_logic 1 reset -1 active_low_sync } 
	{ m_axi_voicerec_inSound_AWVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_voicerec_inSound_AWREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_voicerec_inSound_AWADDR sc_out sc_lv 32 signal 0 } 
	{ m_axi_voicerec_inSound_AWID sc_out sc_lv 1 signal 0 } 
	{ m_axi_voicerec_inSound_AWLEN sc_out sc_lv 8 signal 0 } 
	{ m_axi_voicerec_inSound_AWSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_voicerec_inSound_AWBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_voicerec_inSound_AWLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_voicerec_inSound_AWCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_voicerec_inSound_AWPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_voicerec_inSound_AWQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_voicerec_inSound_AWREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_voicerec_inSound_AWUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_voicerec_inSound_WVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_voicerec_inSound_WREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_voicerec_inSound_WDATA sc_out sc_lv 64 signal 0 } 
	{ m_axi_voicerec_inSound_WSTRB sc_out sc_lv 8 signal 0 } 
	{ m_axi_voicerec_inSound_WLAST sc_out sc_logic 1 signal 0 } 
	{ m_axi_voicerec_inSound_WID sc_out sc_lv 1 signal 0 } 
	{ m_axi_voicerec_inSound_WUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_voicerec_inSound_ARVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_voicerec_inSound_ARREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_voicerec_inSound_ARADDR sc_out sc_lv 32 signal 0 } 
	{ m_axi_voicerec_inSound_ARID sc_out sc_lv 1 signal 0 } 
	{ m_axi_voicerec_inSound_ARLEN sc_out sc_lv 8 signal 0 } 
	{ m_axi_voicerec_inSound_ARSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_voicerec_inSound_ARBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_voicerec_inSound_ARLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_voicerec_inSound_ARCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_voicerec_inSound_ARPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_voicerec_inSound_ARQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_voicerec_inSound_ARREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_voicerec_inSound_ARUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_voicerec_inSound_RVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_voicerec_inSound_RREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_voicerec_inSound_RDATA sc_in sc_lv 64 signal 0 } 
	{ m_axi_voicerec_inSound_RLAST sc_in sc_logic 1 signal 0 } 
	{ m_axi_voicerec_inSound_RID sc_in sc_lv 1 signal 0 } 
	{ m_axi_voicerec_inSound_RUSER sc_in sc_lv 1 signal 0 } 
	{ m_axi_voicerec_inSound_RRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_voicerec_inSound_BVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_voicerec_inSound_BREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_voicerec_inSound_BRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_voicerec_inSound_BID sc_in sc_lv 1 signal 0 } 
	{ m_axi_voicerec_inSound_BUSER sc_in sc_lv 1 signal 0 } 
	{ interrupt sc_out sc_logic 1 signal -1 } 
}
set NewPortList {[ 
	{ "name": "s_axi_voicerec_ctrl_AWADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "voicerec_ctrl", "role": "AWADDR" },"address":[{"name":"voicerec","role":"start","value":"0","valid_bit":"0"},{"name":"voicerec","role":"continue","value":"0","valid_bit":"4"},{"name":"voicerec","role":"auto_start","value":"0","valid_bit":"7"}] },
	{ "name": "s_axi_voicerec_ctrl_AWVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "voicerec_ctrl", "role": "AWVALID" } },
	{ "name": "s_axi_voicerec_ctrl_AWREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "voicerec_ctrl", "role": "AWREADY" } },
	{ "name": "s_axi_voicerec_ctrl_WVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "voicerec_ctrl", "role": "WVALID" } },
	{ "name": "s_axi_voicerec_ctrl_WREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "voicerec_ctrl", "role": "WREADY" } },
	{ "name": "s_axi_voicerec_ctrl_WDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "voicerec_ctrl", "role": "WDATA" } },
	{ "name": "s_axi_voicerec_ctrl_WSTRB", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "voicerec_ctrl", "role": "WSTRB" } },
	{ "name": "s_axi_voicerec_ctrl_ARADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "voicerec_ctrl", "role": "ARADDR" },"address":[{"name":"voicerec","role":"start","value":"0","valid_bit":"0"},{"name":"voicerec","role":"done","value":"0","valid_bit":"1"},{"name":"voicerec","role":"idle","value":"0","valid_bit":"2"},{"name":"voicerec","role":"ready","value":"0","valid_bit":"3"},{"name":"voicerec","role":"auto_start","value":"0","valid_bit":"7"},{"name":"return","role":"data","value":"16"}] },
	{ "name": "s_axi_voicerec_ctrl_ARVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "voicerec_ctrl", "role": "ARVALID" } },
	{ "name": "s_axi_voicerec_ctrl_ARREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "voicerec_ctrl", "role": "ARREADY" } },
	{ "name": "s_axi_voicerec_ctrl_RVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "voicerec_ctrl", "role": "RVALID" } },
	{ "name": "s_axi_voicerec_ctrl_RREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "voicerec_ctrl", "role": "RREADY" } },
	{ "name": "s_axi_voicerec_ctrl_RDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "voicerec_ctrl", "role": "RDATA" } },
	{ "name": "s_axi_voicerec_ctrl_RRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "voicerec_ctrl", "role": "RRESP" } },
	{ "name": "s_axi_voicerec_ctrl_BVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "voicerec_ctrl", "role": "BVALID" } },
	{ "name": "s_axi_voicerec_ctrl_BREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "voicerec_ctrl", "role": "BREADY" } },
	{ "name": "s_axi_voicerec_ctrl_BRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "voicerec_ctrl", "role": "BRESP" } }, 
 	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst_n", "role": "default" }} , 
 	{ "name": "m_axi_voicerec_inSound_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "voicerec_inSound", "role": "AWVALID" }} , 
 	{ "name": "m_axi_voicerec_inSound_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "voicerec_inSound", "role": "AWREADY" }} , 
 	{ "name": "m_axi_voicerec_inSound_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "voicerec_inSound", "role": "AWADDR" }} , 
 	{ "name": "m_axi_voicerec_inSound_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "voicerec_inSound", "role": "AWID" }} , 
 	{ "name": "m_axi_voicerec_inSound_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "voicerec_inSound", "role": "AWLEN" }} , 
 	{ "name": "m_axi_voicerec_inSound_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "voicerec_inSound", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_voicerec_inSound_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "voicerec_inSound", "role": "AWBURST" }} , 
 	{ "name": "m_axi_voicerec_inSound_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "voicerec_inSound", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_voicerec_inSound_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "voicerec_inSound", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_voicerec_inSound_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "voicerec_inSound", "role": "AWPROT" }} , 
 	{ "name": "m_axi_voicerec_inSound_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "voicerec_inSound", "role": "AWQOS" }} , 
 	{ "name": "m_axi_voicerec_inSound_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "voicerec_inSound", "role": "AWREGION" }} , 
 	{ "name": "m_axi_voicerec_inSound_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "voicerec_inSound", "role": "AWUSER" }} , 
 	{ "name": "m_axi_voicerec_inSound_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "voicerec_inSound", "role": "WVALID" }} , 
 	{ "name": "m_axi_voicerec_inSound_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "voicerec_inSound", "role": "WREADY" }} , 
 	{ "name": "m_axi_voicerec_inSound_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "voicerec_inSound", "role": "WDATA" }} , 
 	{ "name": "m_axi_voicerec_inSound_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "voicerec_inSound", "role": "WSTRB" }} , 
 	{ "name": "m_axi_voicerec_inSound_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "voicerec_inSound", "role": "WLAST" }} , 
 	{ "name": "m_axi_voicerec_inSound_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "voicerec_inSound", "role": "WID" }} , 
 	{ "name": "m_axi_voicerec_inSound_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "voicerec_inSound", "role": "WUSER" }} , 
 	{ "name": "m_axi_voicerec_inSound_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "voicerec_inSound", "role": "ARVALID" }} , 
 	{ "name": "m_axi_voicerec_inSound_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "voicerec_inSound", "role": "ARREADY" }} , 
 	{ "name": "m_axi_voicerec_inSound_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "voicerec_inSound", "role": "ARADDR" }} , 
 	{ "name": "m_axi_voicerec_inSound_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "voicerec_inSound", "role": "ARID" }} , 
 	{ "name": "m_axi_voicerec_inSound_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "voicerec_inSound", "role": "ARLEN" }} , 
 	{ "name": "m_axi_voicerec_inSound_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "voicerec_inSound", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_voicerec_inSound_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "voicerec_inSound", "role": "ARBURST" }} , 
 	{ "name": "m_axi_voicerec_inSound_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "voicerec_inSound", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_voicerec_inSound_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "voicerec_inSound", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_voicerec_inSound_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "voicerec_inSound", "role": "ARPROT" }} , 
 	{ "name": "m_axi_voicerec_inSound_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "voicerec_inSound", "role": "ARQOS" }} , 
 	{ "name": "m_axi_voicerec_inSound_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "voicerec_inSound", "role": "ARREGION" }} , 
 	{ "name": "m_axi_voicerec_inSound_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "voicerec_inSound", "role": "ARUSER" }} , 
 	{ "name": "m_axi_voicerec_inSound_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "voicerec_inSound", "role": "RVALID" }} , 
 	{ "name": "m_axi_voicerec_inSound_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "voicerec_inSound", "role": "RREADY" }} , 
 	{ "name": "m_axi_voicerec_inSound_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "voicerec_inSound", "role": "RDATA" }} , 
 	{ "name": "m_axi_voicerec_inSound_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "voicerec_inSound", "role": "RLAST" }} , 
 	{ "name": "m_axi_voicerec_inSound_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "voicerec_inSound", "role": "RID" }} , 
 	{ "name": "m_axi_voicerec_inSound_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "voicerec_inSound", "role": "RUSER" }} , 
 	{ "name": "m_axi_voicerec_inSound_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "voicerec_inSound", "role": "RRESP" }} , 
 	{ "name": "m_axi_voicerec_inSound_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "voicerec_inSound", "role": "BVALID" }} , 
 	{ "name": "m_axi_voicerec_inSound_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "voicerec_inSound", "role": "BREADY" }} , 
 	{ "name": "m_axi_voicerec_inSound_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "voicerec_inSound", "role": "BRESP" }} , 
 	{ "name": "m_axi_voicerec_inSound_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "voicerec_inSound", "role": "BID" }} , 
 	{ "name": "m_axi_voicerec_inSound_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "voicerec_inSound", "role": "BUSER" }} , 
 	{ "name": "interrupt", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "interrupt", "role": "default" }}  ]}
set Spec2ImplPortList { 
	voicerec_inSound { m_axi {  { m_axi_voicerec_inSound_AWVALID VALID 1 1 }  { m_axi_voicerec_inSound_AWREADY READY 0 1 }  { m_axi_voicerec_inSound_AWADDR ADDR 1 32 }  { m_axi_voicerec_inSound_AWID ID 1 1 }  { m_axi_voicerec_inSound_AWLEN LEN 1 8 }  { m_axi_voicerec_inSound_AWSIZE SIZE 1 3 }  { m_axi_voicerec_inSound_AWBURST BURST 1 2 }  { m_axi_voicerec_inSound_AWLOCK LOCK 1 2 }  { m_axi_voicerec_inSound_AWCACHE CACHE 1 4 }  { m_axi_voicerec_inSound_AWPROT PROT 1 3 }  { m_axi_voicerec_inSound_AWQOS QOS 1 4 }  { m_axi_voicerec_inSound_AWREGION REGION 1 4 }  { m_axi_voicerec_inSound_AWUSER USER 1 1 }  { m_axi_voicerec_inSound_WVALID VALID 1 1 }  { m_axi_voicerec_inSound_WREADY READY 0 1 }  { m_axi_voicerec_inSound_WDATA DATA 1 64 }  { m_axi_voicerec_inSound_WSTRB STRB 1 8 }  { m_axi_voicerec_inSound_WLAST LAST 1 1 }  { m_axi_voicerec_inSound_WID ID 1 1 }  { m_axi_voicerec_inSound_WUSER USER 1 1 }  { m_axi_voicerec_inSound_ARVALID VALID 1 1 }  { m_axi_voicerec_inSound_ARREADY READY 0 1 }  { m_axi_voicerec_inSound_ARADDR ADDR 1 32 }  { m_axi_voicerec_inSound_ARID ID 1 1 }  { m_axi_voicerec_inSound_ARLEN LEN 1 8 }  { m_axi_voicerec_inSound_ARSIZE SIZE 1 3 }  { m_axi_voicerec_inSound_ARBURST BURST 1 2 }  { m_axi_voicerec_inSound_ARLOCK LOCK 1 2 }  { m_axi_voicerec_inSound_ARCACHE CACHE 1 4 }  { m_axi_voicerec_inSound_ARPROT PROT 1 3 }  { m_axi_voicerec_inSound_ARQOS QOS 1 4 }  { m_axi_voicerec_inSound_ARREGION REGION 1 4 }  { m_axi_voicerec_inSound_ARUSER USER 1 1 }  { m_axi_voicerec_inSound_RVALID VALID 0 1 }  { m_axi_voicerec_inSound_RREADY READY 1 1 }  { m_axi_voicerec_inSound_RDATA DATA 0 64 }  { m_axi_voicerec_inSound_RLAST LAST 0 1 }  { m_axi_voicerec_inSound_RID ID 0 1 }  { m_axi_voicerec_inSound_RUSER USER 0 1 }  { m_axi_voicerec_inSound_RRESP RESP 0 2 }  { m_axi_voicerec_inSound_BVALID VALID 0 1 }  { m_axi_voicerec_inSound_BREADY READY 1 1 }  { m_axi_voicerec_inSound_BRESP RESP 0 2 }  { m_axi_voicerec_inSound_BID ID 0 1 }  { m_axi_voicerec_inSound_BUSER USER 0 1 } } }
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
	{ voicerec_inSound 5 }
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
	{ voicerec_inSound 5 }
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
