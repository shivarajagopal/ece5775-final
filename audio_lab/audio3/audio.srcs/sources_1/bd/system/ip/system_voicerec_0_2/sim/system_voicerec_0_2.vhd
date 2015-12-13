-- (c) Copyright 1995-2015 Xilinx, Inc. All rights reserved.
-- 
-- This file contains confidential and proprietary information
-- of Xilinx, Inc. and is protected under U.S. and
-- international copyright and other intellectual property
-- laws.
-- 
-- DISCLAIMER
-- This disclaimer is not a license and does not grant any
-- rights to the materials distributed herewith. Except as
-- otherwise provided in a valid license issued to you by
-- Xilinx, and to the maximum extent permitted by applicable
-- law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND
-- WITH ALL FAULTS, AND XILINX HEREBY DISCLAIMS ALL WARRANTIES
-- AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING
-- BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-
-- INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and
-- (2) Xilinx shall not be liable (whether in contract or tort,
-- including negligence, or under any other theory of
-- liability) for any loss or damage of any kind or nature
-- related to, arising under or in connection with these
-- materials, including for any direct, or any indirect,
-- special, incidental, or consequential loss or damage
-- (including loss of data, profits, goodwill, or any type of
-- loss or damage suffered as a result of any action brought
-- by a third party) even if such damage or loss was
-- reasonably foreseeable or Xilinx had been advised of the
-- possibility of the same.
-- 
-- CRITICAL APPLICATIONS
-- Xilinx products are not designed or intended to be fail-
-- safe, or for use in any application requiring fail-safe
-- performance, such as life-support or safety devices or
-- systems, Class III medical devices, nuclear facilities,
-- applications related to the deployment of airbags, or any
-- other applications that could lead to death, personal
-- injury, or severe property or environmental damage
-- (individually and collectively, "Critical
-- Applications"). Customer assumes the sole risk and
-- liability of any use of Xilinx products in Critical
-- Applications, subject only to applicable laws and
-- regulations governing limitations on product liability.
-- 
-- THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS
-- PART OF THIS FILE AT ALL TIMES.
-- 
-- DO NOT MODIFY THIS FILE.

-- IP VLNV: xilinx.com:hls:voicerec:1.0
-- IP Revision: 1512092225

LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;

ENTITY system_voicerec_0_2 IS
  PORT (
    s_axi_voicerec_ctrl_AWADDR : IN STD_LOGIC_VECTOR(4 DOWNTO 0);
    s_axi_voicerec_ctrl_AWVALID : IN STD_LOGIC;
    s_axi_voicerec_ctrl_AWREADY : OUT STD_LOGIC;
    s_axi_voicerec_ctrl_WDATA : IN STD_LOGIC_VECTOR(31 DOWNTO 0);
    s_axi_voicerec_ctrl_WSTRB : IN STD_LOGIC_VECTOR(3 DOWNTO 0);
    s_axi_voicerec_ctrl_WVALID : IN STD_LOGIC;
    s_axi_voicerec_ctrl_WREADY : OUT STD_LOGIC;
    s_axi_voicerec_ctrl_BRESP : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    s_axi_voicerec_ctrl_BVALID : OUT STD_LOGIC;
    s_axi_voicerec_ctrl_BREADY : IN STD_LOGIC;
    s_axi_voicerec_ctrl_ARADDR : IN STD_LOGIC_VECTOR(4 DOWNTO 0);
    s_axi_voicerec_ctrl_ARVALID : IN STD_LOGIC;
    s_axi_voicerec_ctrl_ARREADY : OUT STD_LOGIC;
    s_axi_voicerec_ctrl_RDATA : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
    s_axi_voicerec_ctrl_RRESP : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    s_axi_voicerec_ctrl_RVALID : OUT STD_LOGIC;
    s_axi_voicerec_ctrl_RREADY : IN STD_LOGIC;
    ap_clk : IN STD_LOGIC;
    ap_rst_n : IN STD_LOGIC;
    interrupt : OUT STD_LOGIC;
    m_axi_voicerec_inSound_AWID : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
    m_axi_voicerec_inSound_AWADDR : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
    m_axi_voicerec_inSound_AWLEN : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
    m_axi_voicerec_inSound_AWSIZE : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
    m_axi_voicerec_inSound_AWBURST : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_voicerec_inSound_AWLOCK : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_voicerec_inSound_AWREGION : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_voicerec_inSound_AWCACHE : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_voicerec_inSound_AWPROT : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
    m_axi_voicerec_inSound_AWQOS : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_voicerec_inSound_AWVALID : OUT STD_LOGIC;
    m_axi_voicerec_inSound_AWREADY : IN STD_LOGIC;
    m_axi_voicerec_inSound_WID : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
    m_axi_voicerec_inSound_WDATA : OUT STD_LOGIC_VECTOR(63 DOWNTO 0);
    m_axi_voicerec_inSound_WSTRB : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
    m_axi_voicerec_inSound_WLAST : OUT STD_LOGIC;
    m_axi_voicerec_inSound_WVALID : OUT STD_LOGIC;
    m_axi_voicerec_inSound_WREADY : IN STD_LOGIC;
    m_axi_voicerec_inSound_BID : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
    m_axi_voicerec_inSound_BRESP : IN STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_voicerec_inSound_BVALID : IN STD_LOGIC;
    m_axi_voicerec_inSound_BREADY : OUT STD_LOGIC;
    m_axi_voicerec_inSound_ARID : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
    m_axi_voicerec_inSound_ARADDR : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
    m_axi_voicerec_inSound_ARLEN : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
    m_axi_voicerec_inSound_ARSIZE : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
    m_axi_voicerec_inSound_ARBURST : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_voicerec_inSound_ARLOCK : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_voicerec_inSound_ARREGION : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_voicerec_inSound_ARCACHE : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_voicerec_inSound_ARPROT : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
    m_axi_voicerec_inSound_ARQOS : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    m_axi_voicerec_inSound_ARVALID : OUT STD_LOGIC;
    m_axi_voicerec_inSound_ARREADY : IN STD_LOGIC;
    m_axi_voicerec_inSound_RID : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
    m_axi_voicerec_inSound_RDATA : IN STD_LOGIC_VECTOR(63 DOWNTO 0);
    m_axi_voicerec_inSound_RRESP : IN STD_LOGIC_VECTOR(1 DOWNTO 0);
    m_axi_voicerec_inSound_RLAST : IN STD_LOGIC;
    m_axi_voicerec_inSound_RVALID : IN STD_LOGIC;
    m_axi_voicerec_inSound_RREADY : OUT STD_LOGIC
  );
END system_voicerec_0_2;

ARCHITECTURE system_voicerec_0_2_arch OF system_voicerec_0_2 IS
  ATTRIBUTE DowngradeIPIdentifiedWarnings : string;
  ATTRIBUTE DowngradeIPIdentifiedWarnings OF system_voicerec_0_2_arch: ARCHITECTURE IS "yes";

  COMPONENT voicerec IS
    GENERIC (
      C_S_AXI_VOICEREC_CTRL_ADDR_WIDTH : INTEGER;
      C_S_AXI_VOICEREC_CTRL_DATA_WIDTH : INTEGER;
      C_M_AXI_VOICEREC_INSOUND_ID_WIDTH : INTEGER;
      C_M_AXI_VOICEREC_INSOUND_ADDR_WIDTH : INTEGER;
      C_M_AXI_VOICEREC_INSOUND_DATA_WIDTH : INTEGER;
      C_M_AXI_VOICEREC_INSOUND_AWUSER_WIDTH : INTEGER;
      C_M_AXI_VOICEREC_INSOUND_ARUSER_WIDTH : INTEGER;
      C_M_AXI_VOICEREC_INSOUND_WUSER_WIDTH : INTEGER;
      C_M_AXI_VOICEREC_INSOUND_RUSER_WIDTH : INTEGER;
      C_M_AXI_VOICEREC_INSOUND_BUSER_WIDTH : INTEGER;
      C_M_AXI_VOICEREC_INSOUND_USER_VALUE : STD_LOGIC_VECTOR;
      C_M_AXI_VOICEREC_INSOUND_PROT_VALUE : STD_LOGIC_VECTOR;
      C_M_AXI_VOICEREC_INSOUND_CACHE_VALUE : STD_LOGIC_VECTOR;
      C_M_AXI_VOICEREC_INSOUND_TARGET_ADDR : STD_LOGIC_VECTOR
    );
    PORT (
      s_axi_voicerec_ctrl_AWADDR : IN STD_LOGIC_VECTOR(4 DOWNTO 0);
      s_axi_voicerec_ctrl_AWVALID : IN STD_LOGIC;
      s_axi_voicerec_ctrl_AWREADY : OUT STD_LOGIC;
      s_axi_voicerec_ctrl_WDATA : IN STD_LOGIC_VECTOR(31 DOWNTO 0);
      s_axi_voicerec_ctrl_WSTRB : IN STD_LOGIC_VECTOR(3 DOWNTO 0);
      s_axi_voicerec_ctrl_WVALID : IN STD_LOGIC;
      s_axi_voicerec_ctrl_WREADY : OUT STD_LOGIC;
      s_axi_voicerec_ctrl_BRESP : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      s_axi_voicerec_ctrl_BVALID : OUT STD_LOGIC;
      s_axi_voicerec_ctrl_BREADY : IN STD_LOGIC;
      s_axi_voicerec_ctrl_ARADDR : IN STD_LOGIC_VECTOR(4 DOWNTO 0);
      s_axi_voicerec_ctrl_ARVALID : IN STD_LOGIC;
      s_axi_voicerec_ctrl_ARREADY : OUT STD_LOGIC;
      s_axi_voicerec_ctrl_RDATA : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
      s_axi_voicerec_ctrl_RRESP : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      s_axi_voicerec_ctrl_RVALID : OUT STD_LOGIC;
      s_axi_voicerec_ctrl_RREADY : IN STD_LOGIC;
      ap_clk : IN STD_LOGIC;
      ap_rst_n : IN STD_LOGIC;
      interrupt : OUT STD_LOGIC;
      m_axi_voicerec_inSound_AWID : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_voicerec_inSound_AWADDR : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
      m_axi_voicerec_inSound_AWLEN : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
      m_axi_voicerec_inSound_AWSIZE : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
      m_axi_voicerec_inSound_AWBURST : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_voicerec_inSound_AWLOCK : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_voicerec_inSound_AWREGION : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_voicerec_inSound_AWCACHE : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_voicerec_inSound_AWPROT : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
      m_axi_voicerec_inSound_AWQOS : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_voicerec_inSound_AWUSER : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_voicerec_inSound_AWVALID : OUT STD_LOGIC;
      m_axi_voicerec_inSound_AWREADY : IN STD_LOGIC;
      m_axi_voicerec_inSound_WID : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_voicerec_inSound_WDATA : OUT STD_LOGIC_VECTOR(63 DOWNTO 0);
      m_axi_voicerec_inSound_WSTRB : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
      m_axi_voicerec_inSound_WLAST : OUT STD_LOGIC;
      m_axi_voicerec_inSound_WUSER : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_voicerec_inSound_WVALID : OUT STD_LOGIC;
      m_axi_voicerec_inSound_WREADY : IN STD_LOGIC;
      m_axi_voicerec_inSound_BID : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_voicerec_inSound_BRESP : IN STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_voicerec_inSound_BUSER : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_voicerec_inSound_BVALID : IN STD_LOGIC;
      m_axi_voicerec_inSound_BREADY : OUT STD_LOGIC;
      m_axi_voicerec_inSound_ARID : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_voicerec_inSound_ARADDR : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
      m_axi_voicerec_inSound_ARLEN : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
      m_axi_voicerec_inSound_ARSIZE : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
      m_axi_voicerec_inSound_ARBURST : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_voicerec_inSound_ARLOCK : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_voicerec_inSound_ARREGION : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_voicerec_inSound_ARCACHE : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_voicerec_inSound_ARPROT : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
      m_axi_voicerec_inSound_ARQOS : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
      m_axi_voicerec_inSound_ARUSER : OUT STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_voicerec_inSound_ARVALID : OUT STD_LOGIC;
      m_axi_voicerec_inSound_ARREADY : IN STD_LOGIC;
      m_axi_voicerec_inSound_RID : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_voicerec_inSound_RDATA : IN STD_LOGIC_VECTOR(63 DOWNTO 0);
      m_axi_voicerec_inSound_RRESP : IN STD_LOGIC_VECTOR(1 DOWNTO 0);
      m_axi_voicerec_inSound_RLAST : IN STD_LOGIC;
      m_axi_voicerec_inSound_RUSER : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
      m_axi_voicerec_inSound_RVALID : IN STD_LOGIC;
      m_axi_voicerec_inSound_RREADY : OUT STD_LOGIC
    );
  END COMPONENT voicerec;
  ATTRIBUTE X_INTERFACE_INFO : STRING;
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_voicerec_ctrl_AWADDR: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_voicerec_ctrl AWADDR";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_voicerec_ctrl_AWVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_voicerec_ctrl AWVALID";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_voicerec_ctrl_AWREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_voicerec_ctrl AWREADY";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_voicerec_ctrl_WDATA: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_voicerec_ctrl WDATA";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_voicerec_ctrl_WSTRB: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_voicerec_ctrl WSTRB";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_voicerec_ctrl_WVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_voicerec_ctrl WVALID";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_voicerec_ctrl_WREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_voicerec_ctrl WREADY";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_voicerec_ctrl_BRESP: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_voicerec_ctrl BRESP";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_voicerec_ctrl_BVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_voicerec_ctrl BVALID";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_voicerec_ctrl_BREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_voicerec_ctrl BREADY";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_voicerec_ctrl_ARADDR: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_voicerec_ctrl ARADDR";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_voicerec_ctrl_ARVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_voicerec_ctrl ARVALID";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_voicerec_ctrl_ARREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_voicerec_ctrl ARREADY";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_voicerec_ctrl_RDATA: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_voicerec_ctrl RDATA";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_voicerec_ctrl_RRESP: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_voicerec_ctrl RRESP";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_voicerec_ctrl_RVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_voicerec_ctrl RVALID";
  ATTRIBUTE X_INTERFACE_INFO OF s_axi_voicerec_ctrl_RREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 s_axi_voicerec_ctrl RREADY";
  ATTRIBUTE X_INTERFACE_INFO OF ap_clk: SIGNAL IS "xilinx.com:signal:clock:1.0 ap_clk CLK";
  ATTRIBUTE X_INTERFACE_INFO OF ap_rst_n: SIGNAL IS "xilinx.com:signal:reset:1.0 ap_rst_n RST";
  ATTRIBUTE X_INTERFACE_INFO OF interrupt: SIGNAL IS "xilinx.com:signal:interrupt:1.0 interrupt INTERRUPT";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_voicerec_inSound_AWID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound AWID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_voicerec_inSound_AWADDR: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound AWADDR";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_voicerec_inSound_AWLEN: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound AWLEN";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_voicerec_inSound_AWSIZE: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound AWSIZE";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_voicerec_inSound_AWBURST: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound AWBURST";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_voicerec_inSound_AWLOCK: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound AWLOCK";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_voicerec_inSound_AWREGION: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound AWREGION";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_voicerec_inSound_AWCACHE: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound AWCACHE";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_voicerec_inSound_AWPROT: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound AWPROT";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_voicerec_inSound_AWQOS: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound AWQOS";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_voicerec_inSound_AWVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound AWVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_voicerec_inSound_AWREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound AWREADY";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_voicerec_inSound_WID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound WID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_voicerec_inSound_WDATA: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound WDATA";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_voicerec_inSound_WSTRB: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound WSTRB";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_voicerec_inSound_WLAST: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound WLAST";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_voicerec_inSound_WVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound WVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_voicerec_inSound_WREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound WREADY";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_voicerec_inSound_BID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound BID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_voicerec_inSound_BRESP: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound BRESP";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_voicerec_inSound_BVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound BVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_voicerec_inSound_BREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound BREADY";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_voicerec_inSound_ARID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound ARID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_voicerec_inSound_ARADDR: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound ARADDR";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_voicerec_inSound_ARLEN: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound ARLEN";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_voicerec_inSound_ARSIZE: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound ARSIZE";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_voicerec_inSound_ARBURST: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound ARBURST";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_voicerec_inSound_ARLOCK: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound ARLOCK";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_voicerec_inSound_ARREGION: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound ARREGION";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_voicerec_inSound_ARCACHE: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound ARCACHE";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_voicerec_inSound_ARPROT: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound ARPROT";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_voicerec_inSound_ARQOS: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound ARQOS";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_voicerec_inSound_ARVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound ARVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_voicerec_inSound_ARREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound ARREADY";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_voicerec_inSound_RID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound RID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_voicerec_inSound_RDATA: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound RDATA";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_voicerec_inSound_RRESP: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound RRESP";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_voicerec_inSound_RLAST: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound RLAST";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_voicerec_inSound_RVALID: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound RVALID";
  ATTRIBUTE X_INTERFACE_INFO OF m_axi_voicerec_inSound_RREADY: SIGNAL IS "xilinx.com:interface:aximm:1.0 m_axi_voicerec_inSound RREADY";
BEGIN
  U0 : voicerec
    GENERIC MAP (
      C_S_AXI_VOICEREC_CTRL_ADDR_WIDTH => 5,
      C_S_AXI_VOICEREC_CTRL_DATA_WIDTH => 32,
      C_M_AXI_VOICEREC_INSOUND_ID_WIDTH => 1,
      C_M_AXI_VOICEREC_INSOUND_ADDR_WIDTH => 32,
      C_M_AXI_VOICEREC_INSOUND_DATA_WIDTH => 64,
      C_M_AXI_VOICEREC_INSOUND_AWUSER_WIDTH => 1,
      C_M_AXI_VOICEREC_INSOUND_ARUSER_WIDTH => 1,
      C_M_AXI_VOICEREC_INSOUND_WUSER_WIDTH => 1,
      C_M_AXI_VOICEREC_INSOUND_RUSER_WIDTH => 1,
      C_M_AXI_VOICEREC_INSOUND_BUSER_WIDTH => 1,
      C_M_AXI_VOICEREC_INSOUND_USER_VALUE => X"00000000",
      C_M_AXI_VOICEREC_INSOUND_PROT_VALUE => B"000",
      C_M_AXI_VOICEREC_INSOUND_CACHE_VALUE => B"0011",
      C_M_AXI_VOICEREC_INSOUND_TARGET_ADDR => X"00000000"
    )
    PORT MAP (
      s_axi_voicerec_ctrl_AWADDR => s_axi_voicerec_ctrl_AWADDR,
      s_axi_voicerec_ctrl_AWVALID => s_axi_voicerec_ctrl_AWVALID,
      s_axi_voicerec_ctrl_AWREADY => s_axi_voicerec_ctrl_AWREADY,
      s_axi_voicerec_ctrl_WDATA => s_axi_voicerec_ctrl_WDATA,
      s_axi_voicerec_ctrl_WSTRB => s_axi_voicerec_ctrl_WSTRB,
      s_axi_voicerec_ctrl_WVALID => s_axi_voicerec_ctrl_WVALID,
      s_axi_voicerec_ctrl_WREADY => s_axi_voicerec_ctrl_WREADY,
      s_axi_voicerec_ctrl_BRESP => s_axi_voicerec_ctrl_BRESP,
      s_axi_voicerec_ctrl_BVALID => s_axi_voicerec_ctrl_BVALID,
      s_axi_voicerec_ctrl_BREADY => s_axi_voicerec_ctrl_BREADY,
      s_axi_voicerec_ctrl_ARADDR => s_axi_voicerec_ctrl_ARADDR,
      s_axi_voicerec_ctrl_ARVALID => s_axi_voicerec_ctrl_ARVALID,
      s_axi_voicerec_ctrl_ARREADY => s_axi_voicerec_ctrl_ARREADY,
      s_axi_voicerec_ctrl_RDATA => s_axi_voicerec_ctrl_RDATA,
      s_axi_voicerec_ctrl_RRESP => s_axi_voicerec_ctrl_RRESP,
      s_axi_voicerec_ctrl_RVALID => s_axi_voicerec_ctrl_RVALID,
      s_axi_voicerec_ctrl_RREADY => s_axi_voicerec_ctrl_RREADY,
      ap_clk => ap_clk,
      ap_rst_n => ap_rst_n,
      interrupt => interrupt,
      m_axi_voicerec_inSound_AWID => m_axi_voicerec_inSound_AWID,
      m_axi_voicerec_inSound_AWADDR => m_axi_voicerec_inSound_AWADDR,
      m_axi_voicerec_inSound_AWLEN => m_axi_voicerec_inSound_AWLEN,
      m_axi_voicerec_inSound_AWSIZE => m_axi_voicerec_inSound_AWSIZE,
      m_axi_voicerec_inSound_AWBURST => m_axi_voicerec_inSound_AWBURST,
      m_axi_voicerec_inSound_AWLOCK => m_axi_voicerec_inSound_AWLOCK,
      m_axi_voicerec_inSound_AWREGION => m_axi_voicerec_inSound_AWREGION,
      m_axi_voicerec_inSound_AWCACHE => m_axi_voicerec_inSound_AWCACHE,
      m_axi_voicerec_inSound_AWPROT => m_axi_voicerec_inSound_AWPROT,
      m_axi_voicerec_inSound_AWQOS => m_axi_voicerec_inSound_AWQOS,
      m_axi_voicerec_inSound_AWVALID => m_axi_voicerec_inSound_AWVALID,
      m_axi_voicerec_inSound_AWREADY => m_axi_voicerec_inSound_AWREADY,
      m_axi_voicerec_inSound_WID => m_axi_voicerec_inSound_WID,
      m_axi_voicerec_inSound_WDATA => m_axi_voicerec_inSound_WDATA,
      m_axi_voicerec_inSound_WSTRB => m_axi_voicerec_inSound_WSTRB,
      m_axi_voicerec_inSound_WLAST => m_axi_voicerec_inSound_WLAST,
      m_axi_voicerec_inSound_WVALID => m_axi_voicerec_inSound_WVALID,
      m_axi_voicerec_inSound_WREADY => m_axi_voicerec_inSound_WREADY,
      m_axi_voicerec_inSound_BID => m_axi_voicerec_inSound_BID,
      m_axi_voicerec_inSound_BRESP => m_axi_voicerec_inSound_BRESP,
      m_axi_voicerec_inSound_BUSER => STD_LOGIC_VECTOR(TO_UNSIGNED(0, 1)),
      m_axi_voicerec_inSound_BVALID => m_axi_voicerec_inSound_BVALID,
      m_axi_voicerec_inSound_BREADY => m_axi_voicerec_inSound_BREADY,
      m_axi_voicerec_inSound_ARID => m_axi_voicerec_inSound_ARID,
      m_axi_voicerec_inSound_ARADDR => m_axi_voicerec_inSound_ARADDR,
      m_axi_voicerec_inSound_ARLEN => m_axi_voicerec_inSound_ARLEN,
      m_axi_voicerec_inSound_ARSIZE => m_axi_voicerec_inSound_ARSIZE,
      m_axi_voicerec_inSound_ARBURST => m_axi_voicerec_inSound_ARBURST,
      m_axi_voicerec_inSound_ARLOCK => m_axi_voicerec_inSound_ARLOCK,
      m_axi_voicerec_inSound_ARREGION => m_axi_voicerec_inSound_ARREGION,
      m_axi_voicerec_inSound_ARCACHE => m_axi_voicerec_inSound_ARCACHE,
      m_axi_voicerec_inSound_ARPROT => m_axi_voicerec_inSound_ARPROT,
      m_axi_voicerec_inSound_ARQOS => m_axi_voicerec_inSound_ARQOS,
      m_axi_voicerec_inSound_ARVALID => m_axi_voicerec_inSound_ARVALID,
      m_axi_voicerec_inSound_ARREADY => m_axi_voicerec_inSound_ARREADY,
      m_axi_voicerec_inSound_RID => m_axi_voicerec_inSound_RID,
      m_axi_voicerec_inSound_RDATA => m_axi_voicerec_inSound_RDATA,
      m_axi_voicerec_inSound_RRESP => m_axi_voicerec_inSound_RRESP,
      m_axi_voicerec_inSound_RLAST => m_axi_voicerec_inSound_RLAST,
      m_axi_voicerec_inSound_RUSER => STD_LOGIC_VECTOR(TO_UNSIGNED(0, 1)),
      m_axi_voicerec_inSound_RVALID => m_axi_voicerec_inSound_RVALID,
      m_axi_voicerec_inSound_RREADY => m_axi_voicerec_inSound_RREADY
    );
END system_voicerec_0_2_arch;
