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
	{ inSound float 64 regular {axi_master 2}  }
	{ outSound float 64 regular {array 8000 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "inSound", "interface" : "axi_master", "bitwidth" : 64 ,"direction" : "READWRITE" } , 
 	{ "Name" : "outSound", "interface" : "memory", "bitwidth" : 64 ,"direction" : "WRITEONLY" } ]}
# RTL Port declarations: 
set portNum 55
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ m_axi_inSound_AWVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_inSound_AWREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_inSound_AWADDR sc_out sc_lv 32 signal 0 } 
	{ m_axi_inSound_AWID sc_out sc_lv 1 signal 0 } 
	{ m_axi_inSound_AWLEN sc_out sc_lv 32 signal 0 } 
	{ m_axi_inSound_AWSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_inSound_AWBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_inSound_AWLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_inSound_AWCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_inSound_AWPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_inSound_AWQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_inSound_AWREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_inSound_AWUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_inSound_WVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_inSound_WREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_inSound_WDATA sc_out sc_lv 64 signal 0 } 
	{ m_axi_inSound_WSTRB sc_out sc_lv 8 signal 0 } 
	{ m_axi_inSound_WLAST sc_out sc_logic 1 signal 0 } 
	{ m_axi_inSound_WID sc_out sc_lv 1 signal 0 } 
	{ m_axi_inSound_WUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_inSound_ARVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_inSound_ARREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_inSound_ARADDR sc_out sc_lv 32 signal 0 } 
	{ m_axi_inSound_ARID sc_out sc_lv 1 signal 0 } 
	{ m_axi_inSound_ARLEN sc_out sc_lv 32 signal 0 } 
	{ m_axi_inSound_ARSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_inSound_ARBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_inSound_ARLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_inSound_ARCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_inSound_ARPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_inSound_ARQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_inSound_ARREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_inSound_ARUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_inSound_RVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_inSound_RREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_inSound_RDATA sc_in sc_lv 64 signal 0 } 
	{ m_axi_inSound_RLAST sc_in sc_logic 1 signal 0 } 
	{ m_axi_inSound_RID sc_in sc_lv 1 signal 0 } 
	{ m_axi_inSound_RUSER sc_in sc_lv 1 signal 0 } 
	{ m_axi_inSound_RRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_inSound_BVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_inSound_BREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_inSound_BRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_inSound_BID sc_in sc_lv 1 signal 0 } 
	{ m_axi_inSound_BUSER sc_in sc_lv 1 signal 0 } 
	{ outSound_address0 sc_out sc_lv 13 signal 1 } 
	{ outSound_ce0 sc_out sc_logic 1 signal 1 } 
	{ outSound_we0 sc_out sc_logic 1 signal 1 } 
	{ outSound_d0 sc_out sc_lv 64 signal 1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "m_axi_inSound_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inSound", "role": "AWVALID" }} , 
 	{ "name": "m_axi_inSound_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inSound", "role": "AWREADY" }} , 
 	{ "name": "m_axi_inSound_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inSound", "role": "AWADDR" }} , 
 	{ "name": "m_axi_inSound_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "inSound", "role": "AWID" }} , 
 	{ "name": "m_axi_inSound_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inSound", "role": "AWLEN" }} , 
 	{ "name": "m_axi_inSound_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "inSound", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_inSound_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "inSound", "role": "AWBURST" }} , 
 	{ "name": "m_axi_inSound_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "inSound", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_inSound_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "inSound", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_inSound_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "inSound", "role": "AWPROT" }} , 
 	{ "name": "m_axi_inSound_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "inSound", "role": "AWQOS" }} , 
 	{ "name": "m_axi_inSound_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "inSound", "role": "AWREGION" }} , 
 	{ "name": "m_axi_inSound_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "inSound", "role": "AWUSER" }} , 
 	{ "name": "m_axi_inSound_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inSound", "role": "WVALID" }} , 
 	{ "name": "m_axi_inSound_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inSound", "role": "WREADY" }} , 
 	{ "name": "m_axi_inSound_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "inSound", "role": "WDATA" }} , 
 	{ "name": "m_axi_inSound_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "inSound", "role": "WSTRB" }} , 
 	{ "name": "m_axi_inSound_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inSound", "role": "WLAST" }} , 
 	{ "name": "m_axi_inSound_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "inSound", "role": "WID" }} , 
 	{ "name": "m_axi_inSound_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "inSound", "role": "WUSER" }} , 
 	{ "name": "m_axi_inSound_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inSound", "role": "ARVALID" }} , 
 	{ "name": "m_axi_inSound_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inSound", "role": "ARREADY" }} , 
 	{ "name": "m_axi_inSound_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inSound", "role": "ARADDR" }} , 
 	{ "name": "m_axi_inSound_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "inSound", "role": "ARID" }} , 
 	{ "name": "m_axi_inSound_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "inSound", "role": "ARLEN" }} , 
 	{ "name": "m_axi_inSound_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "inSound", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_inSound_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "inSound", "role": "ARBURST" }} , 
 	{ "name": "m_axi_inSound_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "inSound", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_inSound_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "inSound", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_inSound_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "inSound", "role": "ARPROT" }} , 
 	{ "name": "m_axi_inSound_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "inSound", "role": "ARQOS" }} , 
 	{ "name": "m_axi_inSound_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "inSound", "role": "ARREGION" }} , 
 	{ "name": "m_axi_inSound_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "inSound", "role": "ARUSER" }} , 
 	{ "name": "m_axi_inSound_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inSound", "role": "RVALID" }} , 
 	{ "name": "m_axi_inSound_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inSound", "role": "RREADY" }} , 
 	{ "name": "m_axi_inSound_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "inSound", "role": "RDATA" }} , 
 	{ "name": "m_axi_inSound_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inSound", "role": "RLAST" }} , 
 	{ "name": "m_axi_inSound_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "inSound", "role": "RID" }} , 
 	{ "name": "m_axi_inSound_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "inSound", "role": "RUSER" }} , 
 	{ "name": "m_axi_inSound_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "inSound", "role": "RRESP" }} , 
 	{ "name": "m_axi_inSound_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inSound", "role": "BVALID" }} , 
 	{ "name": "m_axi_inSound_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "inSound", "role": "BREADY" }} , 
 	{ "name": "m_axi_inSound_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "inSound", "role": "BRESP" }} , 
 	{ "name": "m_axi_inSound_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "inSound", "role": "BID" }} , 
 	{ "name": "m_axi_inSound_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "inSound", "role": "BUSER" }} , 
 	{ "name": "outSound_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "outSound", "role": "address0" }} , 
 	{ "name": "outSound_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "outSound", "role": "ce0" }} , 
 	{ "name": "outSound_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "outSound", "role": "we0" }} , 
 	{ "name": "outSound_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "outSound", "role": "d0" }}  ]}
set Spec2ImplPortList { 
	inSound { m_axi {  { m_axi_inSound_AWVALID VALID 1 1 }  { m_axi_inSound_AWREADY READY 0 1 }  { m_axi_inSound_AWADDR ADDR 1 32 }  { m_axi_inSound_AWID ID 1 1 }  { m_axi_inSound_AWLEN LEN 1 32 }  { m_axi_inSound_AWSIZE SIZE 1 3 }  { m_axi_inSound_AWBURST BURST 1 2 }  { m_axi_inSound_AWLOCK LOCK 1 2 }  { m_axi_inSound_AWCACHE CACHE 1 4 }  { m_axi_inSound_AWPROT PROT 1 3 }  { m_axi_inSound_AWQOS QOS 1 4 }  { m_axi_inSound_AWREGION REGION 1 4 }  { m_axi_inSound_AWUSER USER 1 1 }  { m_axi_inSound_WVALID VALID 1 1 }  { m_axi_inSound_WREADY READY 0 1 }  { m_axi_inSound_WDATA DATA 1 64 }  { m_axi_inSound_WSTRB STRB 1 8 }  { m_axi_inSound_WLAST LAST 1 1 }  { m_axi_inSound_WID ID 1 1 }  { m_axi_inSound_WUSER USER 1 1 }  { m_axi_inSound_ARVALID VALID 1 1 }  { m_axi_inSound_ARREADY READY 0 1 }  { m_axi_inSound_ARADDR ADDR 1 32 }  { m_axi_inSound_ARID ID 1 1 }  { m_axi_inSound_ARLEN LEN 1 32 }  { m_axi_inSound_ARSIZE SIZE 1 3 }  { m_axi_inSound_ARBURST BURST 1 2 }  { m_axi_inSound_ARLOCK LOCK 1 2 }  { m_axi_inSound_ARCACHE CACHE 1 4 }  { m_axi_inSound_ARPROT PROT 1 3 }  { m_axi_inSound_ARQOS QOS 1 4 }  { m_axi_inSound_ARREGION REGION 1 4 }  { m_axi_inSound_ARUSER USER 1 1 }  { m_axi_inSound_RVALID VALID 0 1 }  { m_axi_inSound_RREADY READY 1 1 }  { m_axi_inSound_RDATA DATA 0 64 }  { m_axi_inSound_RLAST LAST 0 1 }  { m_axi_inSound_RID ID 0 1 }  { m_axi_inSound_RUSER USER 0 1 }  { m_axi_inSound_RRESP RESP 0 2 }  { m_axi_inSound_BVALID VALID 0 1 }  { m_axi_inSound_BREADY READY 1 1 }  { m_axi_inSound_BRESP RESP 0 2 }  { m_axi_inSound_BID ID 0 1 }  { m_axi_inSound_BUSER USER 0 1 } } }
	outSound { ap_memory {  { outSound_address0 mem_address 1 13 }  { outSound_ce0 mem_ce 1 1 }  { outSound_we0 mem_we 1 1 }  { outSound_d0 mem_din 1 64 } } }
}
