`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:53:33 06/18/2023
// Design Name:   ALU
// Module Name:   /home/ise/ALU/ALUtb.v
// Project Name:  ALU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ALUtb;

	// Inputs
	reg [3:0] a;
	reg [3:0] b;
	reg [3:0] s;

	// Outputs
	wire [7:0] y;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.a(a), 
		.b(b), 
		.s(s), 
		.y(y)
	);

	initial begin
		// Initialize Inputs
		a =4'b1010;b = 4'b1001;
		s = 4'b0000;#20
		s = 4'b0001;#20
		s = 4'b0010;#20
		s = 4'b0011;#20
		s = 4'b0100;#20
		s = 4'b0101;#20
		s = 4'b0110;#20
		s = 4'b0111;#20
		s = 4'b1000;#20
		s = 4'b1001;#20
		s = 4'b1010;#20
		s = 4'b1011;#20
		s = 4'b1100;#20
		s = 4'b1101;#20
		s = 4'b1110;#20
		s = 4'b1111;#20

		// Wait 100 ns for global reset to finish
		$stop;
        
		// Add stimulus here

	end
      
endmodule

