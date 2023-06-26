`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:57:21 06/22/2023
// Design Name:   synFIFO
// Module Name:   /home/ise/synFIFO/synFIFOtb.v
// Project Name:  synFIFO
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: synFIFO
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////
module synFIFO_tb;
  reg clk;
  reg rst;
  reg wr_en;
  reg rd_en;
  reg [7:0] buf_in;
  wire [7:0] buf_out;
  wire buf_empty;
  wire buf_full;
  wire [15:0] fifo_counter;

  synFIFO dut (
    .clk(clk),
    .rst(rst),
    .wr_en(wr_en),
    .rd_en(rd_en),
    .buf_in(buf_in),
    .buf_out(buf_out),
    .buf_empty(buf_empty),
    .buf_full(buf_full),
    .fifo_counter(fifo_counter)
  );
  initial begin
    clk = 0;
    forever #5 clk = ~clk;
  end

  initial begin
    rst = 1;
    wr_en = 0;
    rd_en = 0;
    buf_in = 8'h00;
    #20 rst = 0; // Deassert reset after 20 time units
  // Write data into the FIFO
    wr_en = 1;
    buf_in = 8'h01;
    #10;
    buf_in = 8'h02;
    #10;
    buf_in = 8'h03;
    #10;
    wr_en = 0;

    // Read data from the FIFO
    rd_en = 1;
    #15;
    rd_en = 0;

    // Write more data
    wr_en = 1;
    buf_in = 8'h04;
    #10;
    buf_in = 8'h05;
    #10;
    buf_in = 8'h06;
    #10;
    buf_in = 8'h07;
    #10;
    wr_en = 0;

    // Read more data
    rd_en = 1;
    #20;
    rd_en = 0;
    $finish; // End simulation
  end
endmodule
