// (c) Copyright 1995-2015 Xilinx, Inc. All rights reserved.
// 
// This file contains confidential and proprietary information
// of Xilinx, Inc. and is protected under U.S. and
// international copyright and other intellectual property
// laws.
// 
// DISCLAIMER
// This disclaimer is not a license and does not grant any
// rights to the materials distributed herewith. Except as
// otherwise provided in a valid license issued to you by
// Xilinx, and to the maximum extent permitted by applicable
// law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND
// WITH ALL FAULTS, AND XILINX HEREBY DISCLAIMS ALL WARRANTIES
// AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING
// BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-
// INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and
// (2) Xilinx shall not be liable (whether in contract or tort,
// including negligence, or under any other theory of
// liability) for any loss or damage of any kind or nature
// related to, arising under or in connection with these
// materials, including for any direct, or any indirect,
// special, incidental, or consequential loss or damage
// (including loss of data, profits, goodwill, or any type of
// loss or damage suffered as a result of any action brought
// by a third party) even if such damage or loss was
// reasonably foreseeable or Xilinx had been advised of the
// possibility of the same.
// 
// CRITICAL APPLICATIONS
// Xilinx products are not designed or intended to be fail-
// safe, or for use in any application requiring fail-safe
// performance, such as life-support or safety devices or
// systems, Class III medical devices, nuclear facilities,
// applications related to the deployment of airbags, or any
// other applications that could lead to death, personal
// injury, or severe property or environmental damage
// (individually and collectively, "Critical
// Applications"). Customer assumes the sole risk and
// liability of any use of Xilinx products in Critical
// Applications, subject only to applicable laws and
// regulations governing limitations on product liability.
// 
// THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS
// PART OF THIS FILE AT ALL TIMES.
// 
// DO NOT MODIFY THIS FILE.


// IP VLNV: xilinx.com:hls:voicerec:1.0
// IP Revision: 1512092225

(* X_CORE_INFO = "voicerec,Vivado 2014.4" *)
(* CHECK_LICENSE_TYPE = "system_voicerec_0_0,voicerec,{}" *)
(* CORE_GENERATION_INFO = "system_voicerec_0_0,voicerec,{x_ipProduct=Vivado 2014.4,x_ipVendor=xilinx.com,x_ipLibrary=hls,x_ipName=voicerec,x_ipVersion=1.0,x_ipCoreRevision=1512092225,x_ipLanguage=VERILOG,x_ipSimLanguage=VERILOG,C_S_AXI_VOICEREC_CTRL_ADDR_WIDTH=5,C_S_AXI_VOICEREC_CTRL_DATA_WIDTH=32,C_M_AXI_VOICEREC_INSOUND_ID_WIDTH=1,C_M_AXI_VOICEREC_INSOUND_ADDR_WIDTH=32,C_M_AXI_VOICEREC_INSOUND_DATA_WIDTH=64,C_M_AXI_VOICEREC_INSOUND_AWUSER_WIDTH=1,C_M_AXI_VOICEREC_INSOUND_ARUSER_WIDTH=1,C_M_AXI_VOICEREC_INSOUND_WUSER_WIDTH=1,C_M_AXI_VOICEREC_INSOUND_RUSER_WIDTH=1,C_M_AXI_VOICEREC_INSOUND_BUSER_WIDTH=1,C_M_AXI_VOICEREC_INSOUND_USER_VALUE=0x00000000,C_M_AXI_VOICEREC_INSOUND_PROT_VALUE=000,C_M_AXI_VOICEREC_INSOUND_CACHE_VALUE=0011,C_M_AXI_VOICEREC_INSOUND_TARGET_ADDR=0x40000000}" *)
(* DowngradeIPIdentifiedWarnings = "yes" *)
module system_voicerec_0_0 (
  s_axi_voicerec_ctrl_AWADDR,
  s_axi_voicerec_ctrl_AWVALID,
  s_axi_voicerec_ctrl_AWREADY,
  s_axi_voicerec_ctrl_WDATA,
  s_axi_voicerec_ctrl_WSTRB,
  s_axi_voicerec_ctrl_WVALID,
  s_axi_voicerec_ctrl_WREADY,
  s_axi_voicerec_ctrl_BRESP,
  s_axi_voicerec_ctrl_BVALID,
  s_axi_voicerec_ctrl_BREADY,
  s_axi_voicerec_ctrl_ARADDR,
  s_axi_voicerec_ctrl_ARVALID,
  s_axi_voicerec_ctrl_ARREADY,
  s_axi_voicerec_ctrl_RDATA,
  s_axi_voicerec_ctrl_RRESP,
  s_axi_voicerec_ctrl_RVALID,
  s_axi_voicerec_ctrl_RREADY,
  ap_clk,
  ap_rst_n,
  interrupt,
  m_axi_voicerec_inSound_AWID,
  m_axi_voicerec_inSound_AWADDR,
  m_axi_voicerec_inSound_AWLEN,
  m_axi_voicerec_inSound_AWSIZE,
  m_axi_voicerec_inSound_AWBURST,
  m_axi_voicerec_inSound_AWLOCK,
  m_axi_voicerec_inSound_AWREGION,
  m_axi_voicerec_inSound_AWCACHE,
  m_axi_voicerec_inSound_AWPROT,
  m_axi_voicerec_inSound_AWQOS,
  m_axi_voicerec_inSound_AWVALID,
  m_axi_voicerec_inSound_AWREADY,
  m_axi_voicerec_inSound_WID,
  m_axi_voicerec_inSound_WDATA,
  m_axi_voicerec_inSound_WSTRB,
  m_axi_voicerec_inSound_WLAST,
  m_axi_voicerec_inSound_WVALID,
  m_axi_voicerec_inSound_WREADY,
  m_axi_voicerec_inSound_BID,
  m_axi_voicerec_inSound_BRESP,
  m_axi_voicerec_inSound_BVALID,
  m_axi_voicerec_inSound_BREADY,
  m_axi_voicerec_inSound_ARID,
  m_axi_voicerec_inSound_ARADDR,
  m_axi_voicerec_inSound_ARLEN,
  m_axi_voicerec_inSound_ARSIZE,
  m_axi_voicerec_inSound_ARBURST,
  m_axi_voicerec_inSound_ARLOCK,
  m_axi_voicerec_inSound_ARREGION,
  m_axi_voicerec_inSound_ARCACHE,
  m_axi_voicerec_inSound_ARPROT,
  m_axi_voicerec_inSound_ARQOS,
  m_axi_voicerec_inSound_ARVALID,
  m_axi_voicerec_inSound_ARREADY,
  m_axi_voicerec_inSound_RID,
  m_axi_voicerec_inSound_RDATA,
  m_axi_voicerec_inSound_RRESP,
  m_axi_voicerec_inSound_RLAST,
  m_axi_voicerec_inSound_RVALID,
  m_axi_voicerec_inSound_RREADY
);

(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_voicerec_ctrl AWADDR" *)
input wire [4 : 0] s_axi_voicerec_ctrl_AWADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_voicerec_ctrl AWVALID" *)
input wire s_axi_voicerec_ctrl_AWVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_voicerec_ctrl AWREADY" *)
output wire s_axi_voicerec_ctrl_AWREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_voicerec_ctrl WDATA" *)
input wire [31 : 0] s_axi_voicerec_ctrl_WDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_voicerec_ctrl WSTRB" *)
input wire [3 : 0] s_axi_voicerec_ctrl_WSTRB;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_voicerec_ctrl WVALID" *)
input wire s_axi_voicerec_ctrl_WVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_voicerec_ctrl WREADY" *)
output wire s_axi_voicerec_ctrl_WREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_voicerec_ctrl BRESP" *)
output wire [1 : 0] s_axi_voicerec_ctrl_BRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_voicerec_ctrl BVALID" *)
output wire s_axi_voicerec_ctrl_BVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_voicerec_ctrl BREADY" *)
input wire s_axi_voicerec_ctrl_BREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_voicerec_ctrl ARADDR" *)
input wire [4 : 0] s_axi_voicerec_ctrl_ARADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_voicerec_ctrl ARVALID" *)
input wire s_axi_voicerec_ctrl_ARVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_voicerec_ctrl ARREADY" *)
output wire s_axi_voicerec_ctrl_ARREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_voicerec_ctrl RDATA" *)
output wire [31 : 0] s_axi_voicerec_ctrl_RDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_voicerec_ctrl RRESP" *)
output wire [1 : 0] s_axi_voicerec_ctrl_RRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_voicerec_ctrl RVALID" *)
output wire s_axi_voicerec_ctrl_RVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_voicerec_ctrl RREADY" *)
input wire s_axi_voicerec_ctrl_RREADY;
(* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 ap_clk CLK" *)
input wire ap_clk;
(* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 ap_rst_n RST" *)
input wire ap_rst_n;
(* X_INTERFACE_INFO = "xilinx.com:signal:interrupt:1.0 interrupt INTERRUPT" *)
output wire interrupt;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound AWID" *)
output wire [0 : 0] m_axi_voicerec_inSound_AWID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound AWADDR" *)
output wire [31 : 0] m_axi_voicerec_inSound_AWADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound AWLEN" *)
output wire [7 : 0] m_axi_voicerec_inSound_AWLEN;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound AWSIZE" *)
output wire [2 : 0] m_axi_voicerec_inSound_AWSIZE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound AWBURST" *)
output wire [1 : 0] m_axi_voicerec_inSound_AWBURST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound AWLOCK" *)
output wire [1 : 0] m_axi_voicerec_inSound_AWLOCK;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound AWREGION" *)
output wire [3 : 0] m_axi_voicerec_inSound_AWREGION;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound AWCACHE" *)
output wire [3 : 0] m_axi_voicerec_inSound_AWCACHE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound AWPROT" *)
output wire [2 : 0] m_axi_voicerec_inSound_AWPROT;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound AWQOS" *)
output wire [3 : 0] m_axi_voicerec_inSound_AWQOS;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound AWVALID" *)
output wire m_axi_voicerec_inSound_AWVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound AWREADY" *)
input wire m_axi_voicerec_inSound_AWREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound WID" *)
output wire [0 : 0] m_axi_voicerec_inSound_WID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound WDATA" *)
output wire [63 : 0] m_axi_voicerec_inSound_WDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound WSTRB" *)
output wire [7 : 0] m_axi_voicerec_inSound_WSTRB;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound WLAST" *)
output wire m_axi_voicerec_inSound_WLAST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound WVALID" *)
output wire m_axi_voicerec_inSound_WVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound WREADY" *)
input wire m_axi_voicerec_inSound_WREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound BID" *)
input wire [0 : 0] m_axi_voicerec_inSound_BID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound BRESP" *)
input wire [1 : 0] m_axi_voicerec_inSound_BRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound BVALID" *)
input wire m_axi_voicerec_inSound_BVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound BREADY" *)
output wire m_axi_voicerec_inSound_BREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound ARID" *)
output wire [0 : 0] m_axi_voicerec_inSound_ARID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound ARADDR" *)
output wire [31 : 0] m_axi_voicerec_inSound_ARADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound ARLEN" *)
output wire [7 : 0] m_axi_voicerec_inSound_ARLEN;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound ARSIZE" *)
output wire [2 : 0] m_axi_voicerec_inSound_ARSIZE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound ARBURST" *)
output wire [1 : 0] m_axi_voicerec_inSound_ARBURST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound ARLOCK" *)
output wire [1 : 0] m_axi_voicerec_inSound_ARLOCK;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound ARREGION" *)
output wire [3 : 0] m_axi_voicerec_inSound_ARREGION;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound ARCACHE" *)
output wire [3 : 0] m_axi_voicerec_inSound_ARCACHE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound ARPROT" *)
output wire [2 : 0] m_axi_voicerec_inSound_ARPROT;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound ARQOS" *)
output wire [3 : 0] m_axi_voicerec_inSound_ARQOS;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound ARVALID" *)
output wire m_axi_voicerec_inSound_ARVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound ARREADY" *)
input wire m_axi_voicerec_inSound_ARREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound RID" *)
input wire [0 : 0] m_axi_voicerec_inSound_RID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound RDATA" *)
input wire [63 : 0] m_axi_voicerec_inSound_RDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound RRESP" *)
input wire [1 : 0] m_axi_voicerec_inSound_RRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound RLAST" *)
input wire m_axi_voicerec_inSound_RLAST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound RVALID" *)
input wire m_axi_voicerec_inSound_RVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound RREADY" *)
output wire m_axi_voicerec_inSound_RREADY;

  voicerec #(
    .C_S_AXI_VOICEREC_CTRL_ADDR_WIDTH(5),
    .C_S_AXI_VOICEREC_CTRL_DATA_WIDTH(32),
    .C_M_AXI_VOICEREC_INSOUND_ID_WIDTH(1),
    .C_M_AXI_VOICEREC_INSOUND_ADDR_WIDTH(32),
    .C_M_AXI_VOICEREC_INSOUND_DATA_WIDTH(64),
    .C_M_AXI_VOICEREC_INSOUND_AWUSER_WIDTH(1),
    .C_M_AXI_VOICEREC_INSOUND_ARUSER_WIDTH(1),
    .C_M_AXI_VOICEREC_INSOUND_WUSER_WIDTH(1),
    .C_M_AXI_VOICEREC_INSOUND_RUSER_WIDTH(1),
    .C_M_AXI_VOICEREC_INSOUND_BUSER_WIDTH(1),
    .C_M_AXI_VOICEREC_INSOUND_USER_VALUE('H00000000),
    .C_M_AXI_VOICEREC_INSOUND_PROT_VALUE('B000),
    .C_M_AXI_VOICEREC_INSOUND_CACHE_VALUE('B0011),
    .C_M_AXI_VOICEREC_INSOUND_TARGET_ADDR('H40000000)
  ) inst (
    .s_axi_voicerec_ctrl_AWADDR(s_axi_voicerec_ctrl_AWADDR),
    .s_axi_voicerec_ctrl_AWVALID(s_axi_voicerec_ctrl_AWVALID),
    .s_axi_voicerec_ctrl_AWREADY(s_axi_voicerec_ctrl_AWREADY),
    .s_axi_voicerec_ctrl_WDATA(s_axi_voicerec_ctrl_WDATA),
    .s_axi_voicerec_ctrl_WSTRB(s_axi_voicerec_ctrl_WSTRB),
    .s_axi_voicerec_ctrl_WVALID(s_axi_voicerec_ctrl_WVALID),
    .s_axi_voicerec_ctrl_WREADY(s_axi_voicerec_ctrl_WREADY),
    .s_axi_voicerec_ctrl_BRESP(s_axi_voicerec_ctrl_BRESP),
    .s_axi_voicerec_ctrl_BVALID(s_axi_voicerec_ctrl_BVALID),
    .s_axi_voicerec_ctrl_BREADY(s_axi_voicerec_ctrl_BREADY),
    .s_axi_voicerec_ctrl_ARADDR(s_axi_voicerec_ctrl_ARADDR),
    .s_axi_voicerec_ctrl_ARVALID(s_axi_voicerec_ctrl_ARVALID),
    .s_axi_voicerec_ctrl_ARREADY(s_axi_voicerec_ctrl_ARREADY),
    .s_axi_voicerec_ctrl_RDATA(s_axi_voicerec_ctrl_RDATA),
    .s_axi_voicerec_ctrl_RRESP(s_axi_voicerec_ctrl_RRESP),
    .s_axi_voicerec_ctrl_RVALID(s_axi_voicerec_ctrl_RVALID),
    .s_axi_voicerec_ctrl_RREADY(s_axi_voicerec_ctrl_RREADY),
    .ap_clk(ap_clk),
    .ap_rst_n(ap_rst_n),
    .interrupt(interrupt),
    .m_axi_voicerec_inSound_AWID(m_axi_voicerec_inSound_AWID),
    .m_axi_voicerec_inSound_AWADDR(m_axi_voicerec_inSound_AWADDR),
    .m_axi_voicerec_inSound_AWLEN(m_axi_voicerec_inSound_AWLEN),
    .m_axi_voicerec_inSound_AWSIZE(m_axi_voicerec_inSound_AWSIZE),
    .m_axi_voicerec_inSound_AWBURST(m_axi_voicerec_inSound_AWBURST),
    .m_axi_voicerec_inSound_AWLOCK(m_axi_voicerec_inSound_AWLOCK),
    .m_axi_voicerec_inSound_AWREGION(m_axi_voicerec_inSound_AWREGION),
    .m_axi_voicerec_inSound_AWCACHE(m_axi_voicerec_inSound_AWCACHE),
    .m_axi_voicerec_inSound_AWPROT(m_axi_voicerec_inSound_AWPROT),
    .m_axi_voicerec_inSound_AWQOS(m_axi_voicerec_inSound_AWQOS),
    .m_axi_voicerec_inSound_AWUSER(),
    .m_axi_voicerec_inSound_AWVALID(m_axi_voicerec_inSound_AWVALID),
    .m_axi_voicerec_inSound_AWREADY(m_axi_voicerec_inSound_AWREADY),
    .m_axi_voicerec_inSound_WID(m_axi_voicerec_inSound_WID),
    .m_axi_voicerec_inSound_WDATA(m_axi_voicerec_inSound_WDATA),
    .m_axi_voicerec_inSound_WSTRB(m_axi_voicerec_inSound_WSTRB),
    .m_axi_voicerec_inSound_WLAST(m_axi_voicerec_inSound_WLAST),
    .m_axi_voicerec_inSound_WUSER(),
    .m_axi_voicerec_inSound_WVALID(m_axi_voicerec_inSound_WVALID),
    .m_axi_voicerec_inSound_WREADY(m_axi_voicerec_inSound_WREADY),
    .m_axi_voicerec_inSound_BID(m_axi_voicerec_inSound_BID),
    .m_axi_voicerec_inSound_BRESP(m_axi_voicerec_inSound_BRESP),
    .m_axi_voicerec_inSound_BUSER(1'B0),
    .m_axi_voicerec_inSound_BVALID(m_axi_voicerec_inSound_BVALID),
    .m_axi_voicerec_inSound_BREADY(m_axi_voicerec_inSound_BREADY),
    .m_axi_voicerec_inSound_ARID(m_axi_voicerec_inSound_ARID),
    .m_axi_voicerec_inSound_ARADDR(m_axi_voicerec_inSound_ARADDR),
    .m_axi_voicerec_inSound_ARLEN(m_axi_voicerec_inSound_ARLEN),
    .m_axi_voicerec_inSound_ARSIZE(m_axi_voicerec_inSound_ARSIZE),
    .m_axi_voicerec_inSound_ARBURST(m_axi_voicerec_inSound_ARBURST),
    .m_axi_voicerec_inSound_ARLOCK(m_axi_voicerec_inSound_ARLOCK),
    .m_axi_voicerec_inSound_ARREGION(m_axi_voicerec_inSound_ARREGION),
    .m_axi_voicerec_inSound_ARCACHE(m_axi_voicerec_inSound_ARCACHE),
    .m_axi_voicerec_inSound_ARPROT(m_axi_voicerec_inSound_ARPROT),
    .m_axi_voicerec_inSound_ARQOS(m_axi_voicerec_inSound_ARQOS),
    .m_axi_voicerec_inSound_ARUSER(),
    .m_axi_voicerec_inSound_ARVALID(m_axi_voicerec_inSound_ARVALID),
    .m_axi_voicerec_inSound_ARREADY(m_axi_voicerec_inSound_ARREADY),
    .m_axi_voicerec_inSound_RID(m_axi_voicerec_inSound_RID),
    .m_axi_voicerec_inSound_RDATA(m_axi_voicerec_inSound_RDATA),
    .m_axi_voicerec_inSound_RRESP(m_axi_voicerec_inSound_RRESP),
    .m_axi_voicerec_inSound_RLAST(m_axi_voicerec_inSound_RLAST),
    .m_axi_voicerec_inSound_RUSER(1'B0),
    .m_axi_voicerec_inSound_RVALID(m_axi_voicerec_inSound_RVALID),
    .m_axi_voicerec_inSound_RREADY(m_axi_voicerec_inSound_RREADY)
  );
endmodule
