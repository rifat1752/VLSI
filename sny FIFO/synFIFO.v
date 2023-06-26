`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:45:59 06/22/2023 
// Design Name: 
// Module Name:    synFIFO 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module synFIFO (
  input clk,
  input rst,
  input wr_en,
  input rd_en,
  input [7:0] buf_in,
  output reg [7:0] buf_out,
  output reg buf_empty,
  output reg buf_full,
  output reg [15:0] fifo_counter
);
reg [7:0] buf_mem [0:255];
  reg [7:0] rd_ptr;
  reg [7:0] wr_ptr;

  always @(posedge clk or posedge rst) begin
    if (rst) begin
      rd_ptr <= 0;
      wr_ptr <= 0;
      buf_out <= 0;
      buf_empty <= 1;
      buf_full <= 0;
      fifo_counter <= 0;
		end else begin
      if (wr_en && !buf_full) begin
        buf_mem[wr_ptr] <= buf_in;
        wr_ptr <= wr_ptr + 1;
        buf_full <= (wr_ptr == rd_ptr);
        fifo_counter <= fifo_counter + 1;
      end
      if (rd_en && !buf_empty) begin
        buf_out <= buf_mem[rd_ptr];
        rd_ptr <= rd_ptr + 1;
        buf_empty <= (rd_ptr == wr_ptr);
        fifo_counter <= fifo_counter - 1;
      end
    end
  end
endmodule
