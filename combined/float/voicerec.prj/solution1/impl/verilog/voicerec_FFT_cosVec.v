// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.3
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

`timescale 1 ns / 1 ps
module voicerec_FFT_cosVec_rom (
addr0, ce0, q0, clk);

parameter DWIDTH = 64;
parameter AWIDTH = 8;
parameter MEM_SIZE = 256;

input[AWIDTH-1:0] addr0;
input ce0;
output reg[DWIDTH-1:0] q0;
input clk;

reg [DWIDTH-1:0] ram[MEM_SIZE-1:0];

initial begin
    $readmemh("./voicerec_FFT_cosVec_rom.dat", ram);
end



always @(posedge clk)  
begin 
    if (ce0) 
    begin
        q0 <= ram[addr0];
    end
end



endmodule


`timescale 1 ns / 1 ps
module voicerec_FFT_cosVec(
    reset,
    clk,
    address0,
    ce0,
    q0);

parameter DataWidth = 32'd64;
parameter AddressRange = 32'd256;
parameter AddressWidth = 32'd8;
input reset;
input clk;
input[AddressWidth - 1:0] address0;
input ce0;
output[DataWidth - 1:0] q0;



voicerec_FFT_cosVec_rom voicerec_FFT_cosVec_rom_U(
    .clk( clk ),
    .addr0( address0 ),
    .ce0( ce0 ),
    .q0( q0 ));

endmodule

