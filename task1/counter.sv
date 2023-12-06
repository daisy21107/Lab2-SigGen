module counter #(
    parameter WIDTH = 8
)(
    //interface signals
    input logic                 clk,        // clock
    input logic                 rst,        // reset
    input logic                 en,         // counter enable
    input logic     [WIDTH-1:0] incr, 
    output logic    [WIDTH-1:0] count       // count output

);

always_ff @ (posedge clk, posedge rst)
    if (rst)    count <= {WIDTH{1'b0}};
    else if (en)        count <= count + incr;

endmodule

//The current counter has a synchronous reset. 
//To implement asynchronous reset, you can change line 11 of counter.sv to detect change in rst signal.

