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

// The following must be inserted into your Verilog file for this
// core to be instantiated. Change the instance name and port connections
// (in parentheses) to your own signal names.

//----------- Begin Cut here for INSTANTIATION Template ---// INST_TAG
system_voicerec_0_2 your_instance_name (
  .s_axi_voicerec_ctrl_AWADDR(s_axi_voicerec_ctrl_AWADDR),            // input wire [4 : 0] s_axi_voicerec_ctrl_AWADDR
  .s_axi_voicerec_ctrl_AWVALID(s_axi_voicerec_ctrl_AWVALID),          // input wire s_axi_voicerec_ctrl_AWVALID
  .s_axi_voicerec_ctrl_AWREADY(s_axi_voicerec_ctrl_AWREADY),          // output wire s_axi_voicerec_ctrl_AWREADY
  .s_axi_voicerec_ctrl_WDATA(s_axi_voicerec_ctrl_WDATA),              // input wire [31 : 0] s_axi_voicerec_ctrl_WDATA
  .s_axi_voicerec_ctrl_WSTRB(s_axi_voicerec_ctrl_WSTRB),              // input wire [3 : 0] s_axi_voicerec_ctrl_WSTRB
  .s_axi_voicerec_ctrl_WVALID(s_axi_voicerec_ctrl_WVALID),            // input wire s_axi_voicerec_ctrl_WVALID
  .s_axi_voicerec_ctrl_WREADY(s_axi_voicerec_ctrl_WREADY),            // output wire s_axi_voicerec_ctrl_WREADY
  .s_axi_voicerec_ctrl_BRESP(s_axi_voicerec_ctrl_BRESP),              // output wire [1 : 0] s_axi_voicerec_ctrl_BRESP
  .s_axi_voicerec_ctrl_BVALID(s_axi_voicerec_ctrl_BVALID),            // output wire s_axi_voicerec_ctrl_BVALID
  .s_axi_voicerec_ctrl_BREADY(s_axi_voicerec_ctrl_BREADY),            // input wire s_axi_voicerec_ctrl_BREADY
  .s_axi_voicerec_ctrl_ARADDR(s_axi_voicerec_ctrl_ARADDR),            // input wire [4 : 0] s_axi_voicerec_ctrl_ARADDR
  .s_axi_voicerec_ctrl_ARVALID(s_axi_voicerec_ctrl_ARVALID),          // input wire s_axi_voicerec_ctrl_ARVALID
  .s_axi_voicerec_ctrl_ARREADY(s_axi_voicerec_ctrl_ARREADY),          // output wire s_axi_voicerec_ctrl_ARREADY
  .s_axi_voicerec_ctrl_RDATA(s_axi_voicerec_ctrl_RDATA),              // output wire [31 : 0] s_axi_voicerec_ctrl_RDATA
  .s_axi_voicerec_ctrl_RRESP(s_axi_voicerec_ctrl_RRESP),              // output wire [1 : 0] s_axi_voicerec_ctrl_RRESP
  .s_axi_voicerec_ctrl_RVALID(s_axi_voicerec_ctrl_RVALID),            // output wire s_axi_voicerec_ctrl_RVALID
  .s_axi_voicerec_ctrl_RREADY(s_axi_voicerec_ctrl_RREADY),            // input wire s_axi_voicerec_ctrl_RREADY
  .ap_clk(ap_clk),                                                    // input wire ap_clk
  .ap_rst_n(ap_rst_n),                                                // input wire ap_rst_n
  .interrupt(interrupt),                                              // output wire interrupt
  .m_axi_voicerec_inSound_AWID(m_axi_voicerec_inSound_AWID),          // output wire [0 : 0] m_axi_voicerec_inSound_AWID
  .m_axi_voicerec_inSound_AWADDR(m_axi_voicerec_inSound_AWADDR),      // output wire [31 : 0] m_axi_voicerec_inSound_AWADDR
  .m_axi_voicerec_inSound_AWLEN(m_axi_voicerec_inSound_AWLEN),        // output wire [7 : 0] m_axi_voicerec_inSound_AWLEN
  .m_axi_voicerec_inSound_AWSIZE(m_axi_voicerec_inSound_AWSIZE),      // output wire [2 : 0] m_axi_voicerec_inSound_AWSIZE
  .m_axi_voicerec_inSound_AWBURST(m_axi_voicerec_inSound_AWBURST),    // output wire [1 : 0] m_axi_voicerec_inSound_AWBURST
  .m_axi_voicerec_inSound_AWLOCK(m_axi_voicerec_inSound_AWLOCK),      // output wire [1 : 0] m_axi_voicerec_inSound_AWLOCK
  .m_axi_voicerec_inSound_AWREGION(m_axi_voicerec_inSound_AWREGION),  // output wire [3 : 0] m_axi_voicerec_inSound_AWREGION
  .m_axi_voicerec_inSound_AWCACHE(m_axi_voicerec_inSound_AWCACHE),    // output wire [3 : 0] m_axi_voicerec_inSound_AWCACHE
  .m_axi_voicerec_inSound_AWPROT(m_axi_voicerec_inSound_AWPROT),      // output wire [2 : 0] m_axi_voicerec_inSound_AWPROT
  .m_axi_voicerec_inSound_AWQOS(m_axi_voicerec_inSound_AWQOS),        // output wire [3 : 0] m_axi_voicerec_inSound_AWQOS
  .m_axi_voicerec_inSound_AWVALID(m_axi_voicerec_inSound_AWVALID),    // output wire m_axi_voicerec_inSound_AWVALID
  .m_axi_voicerec_inSound_AWREADY(m_axi_voicerec_inSound_AWREADY),    // input wire m_axi_voicerec_inSound_AWREADY
  .m_axi_voicerec_inSound_WID(m_axi_voicerec_inSound_WID),            // output wire [0 : 0] m_axi_voicerec_inSound_WID
  .m_axi_voicerec_inSound_WDATA(m_axi_voicerec_inSound_WDATA),        // output wire [63 : 0] m_axi_voicerec_inSound_WDATA
  .m_axi_voicerec_inSound_WSTRB(m_axi_voicerec_inSound_WSTRB),        // output wire [7 : 0] m_axi_voicerec_inSound_WSTRB
  .m_axi_voicerec_inSound_WLAST(m_axi_voicerec_inSound_WLAST),        // output wire m_axi_voicerec_inSound_WLAST
  .m_axi_voicerec_inSound_WVALID(m_axi_voicerec_inSound_WVALID),      // output wire m_axi_voicerec_inSound_WVALID
  .m_axi_voicerec_inSound_WREADY(m_axi_voicerec_inSound_WREADY),      // input wire m_axi_voicerec_inSound_WREADY
  .m_axi_voicerec_inSound_BID(m_axi_voicerec_inSound_BID),            // input wire [0 : 0] m_axi_voicerec_inSound_BID
  .m_axi_voicerec_inSound_BRESP(m_axi_voicerec_inSound_BRESP),        // input wire [1 : 0] m_axi_voicerec_inSound_BRESP
  .m_axi_voicerec_inSound_BVALID(m_axi_voicerec_inSound_BVALID),      // input wire m_axi_voicerec_inSound_BVALID
  .m_axi_voicerec_inSound_BREADY(m_axi_voicerec_inSound_BREADY),      // output wire m_axi_voicerec_inSound_BREADY
  .m_axi_voicerec_inSound_ARID(m_axi_voicerec_inSound_ARID),          // output wire [0 : 0] m_axi_voicerec_inSound_ARID
  .m_axi_voicerec_inSound_ARADDR(m_axi_voicerec_inSound_ARADDR),      // output wire [31 : 0] m_axi_voicerec_inSound_ARADDR
  .m_axi_voicerec_inSound_ARLEN(m_axi_voicerec_inSound_ARLEN),        // output wire [7 : 0] m_axi_voicerec_inSound_ARLEN
  .m_axi_voicerec_inSound_ARSIZE(m_axi_voicerec_inSound_ARSIZE),      // output wire [2 : 0] m_axi_voicerec_inSound_ARSIZE
  .m_axi_voicerec_inSound_ARBURST(m_axi_voicerec_inSound_ARBURST),    // output wire [1 : 0] m_axi_voicerec_inSound_ARBURST
  .m_axi_voicerec_inSound_ARLOCK(m_axi_voicerec_inSound_ARLOCK),      // output wire [1 : 0] m_axi_voicerec_inSound_ARLOCK
  .m_axi_voicerec_inSound_ARREGION(m_axi_voicerec_inSound_ARREGION),  // output wire [3 : 0] m_axi_voicerec_inSound_ARREGION
  .m_axi_voicerec_inSound_ARCACHE(m_axi_voicerec_inSound_ARCACHE),    // output wire [3 : 0] m_axi_voicerec_inSound_ARCACHE
  .m_axi_voicerec_inSound_ARPROT(m_axi_voicerec_inSound_ARPROT),      // output wire [2 : 0] m_axi_voicerec_inSound_ARPROT
  .m_axi_voicerec_inSound_ARQOS(m_axi_voicerec_inSound_ARQOS),        // output wire [3 : 0] m_axi_voicerec_inSound_ARQOS
  .m_axi_voicerec_inSound_ARVALID(m_axi_voicerec_inSound_ARVALID),    // output wire m_axi_voicerec_inSound_ARVALID
  .m_axi_voicerec_inSound_ARREADY(m_axi_voicerec_inSound_ARREADY),    // input wire m_axi_voicerec_inSound_ARREADY
  .m_axi_voicerec_inSound_RID(m_axi_voicerec_inSound_RID),            // input wire [0 : 0] m_axi_voicerec_inSound_RID
  .m_axi_voicerec_inSound_RDATA(m_axi_voicerec_inSound_RDATA),        // input wire [63 : 0] m_axi_voicerec_inSound_RDATA
  .m_axi_voicerec_inSound_RRESP(m_axi_voicerec_inSound_RRESP),        // input wire [1 : 0] m_axi_voicerec_inSound_RRESP
  .m_axi_voicerec_inSound_RLAST(m_axi_voicerec_inSound_RLAST),        // input wire m_axi_voicerec_inSound_RLAST
  .m_axi_voicerec_inSound_RVALID(m_axi_voicerec_inSound_RVALID),      // input wire m_axi_voicerec_inSound_RVALID
  .m_axi_voicerec_inSound_RREADY(m_axi_voicerec_inSound_RREADY)      // output wire m_axi_voicerec_inSound_RREADY
);
// INST_TAG_END ------ End INSTANTIATION Template ---------

// You must compile the wrapper file system_voicerec_0_2.v when simulating
// the core, system_voicerec_0_2. When compiling the wrapper file, be sure to
// reference the Verilog simulation library.

