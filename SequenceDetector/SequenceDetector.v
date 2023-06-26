module SequenceDetector (
  input clk,
  input rstn,
  input in,
  output reg out
);

  reg [2:0] state;
always @(posedge clk or posedge rstn) begin
    if (rstn) begin
      state <= 0;
		out <= 0;
    end else begin
      case (state)
        0: begin
          if (in) begin
            state <= 1;
          end
        end
        1: begin
          if (in) begin
            state <= 2;
          end else begin
            state <= 0;
          end
        end
		  2: begin
          if (in) begin
            state <= 3;
          end else begin
            state <= 0;
          end
        end
        3: begin
          out <= 1;
          state <= 0;
        end
        default: begin
          state <= 0;
			  out <= 0;
        end
      endcase
    end
  end
endmodule
