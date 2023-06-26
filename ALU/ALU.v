`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:41:18 06/18/2023 
// Design Name: 
// Module Name:    ALU 
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
module ALU(a,b,s, y);
    input [3:0] a,b,s;
    output [7:0] y;
   	 reg [7:0] y;
	 always @*
	 begin
	 case(5)
	 4'b0000: y<=a+b;
	 4'b0001: y<=a-b;
	 4'b0010: y<=a*b;
	 4'b0011: y<=a/b;
	 4'b0100: y<=a%b;
	 4'b0101: y<=a&b;
	 4'b0110: y<=a|b;
	 4'b0111: y<=a==b;
	 4'b1000: y<=a&&b;
	 4'b1001: y<=a||b;
	 4'b1010: y<=a>>b;
	 4'b1011: y<=a<<b;
	 4'b1100: y<=a^b;
	 4'b1101: y<=~a;
	 4'b1110: y<={a,b};
	 4'b1111: y<={2{a}};
	 endcase
	 end
	 

endmodule
