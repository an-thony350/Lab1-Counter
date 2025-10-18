module counter #(
  parameter WIDTH = 8
)(
  // interface signalsxw
  input  logic             clk,      // clock
  input  logic             rst,      // reset
  input  logic             en,       // load counter from data
  input  logic [WIDTH-1:0] v,        // value to preload
  output logic [WIDTH-1:0] count     // count output
);

always_ff @ (posedge en)
  if (rst) count <= v;
  else     count <= count + 1'b1;
endmodule
