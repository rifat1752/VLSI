module SequenceDetectorTb;

  reg clk, rstn;
  reg in;
  wire out;

  SequenceDetector dut (
    .clk(clk),
    .rstn(rstn),
    .in(in),
    .out(out)
  );

  initial begin
    clk <= 0;
    rstn <= 0;
    in <= 0;
    #10 rstn <= 1;

    #10 in <= 1;
    #10 in <= 0;
    #10 in <= 1;
    #10 in <= 1;

    #10 in <= 0;
    #10 in <= 0;
    #10 in <= 1;
    #10 in <= 1;

    #10 in <= 0;
    #10 in <= 1;
    #10 in <= 1;

    #10 $finish;
  end

  always #10 clk <= ~clk;

endmodule
