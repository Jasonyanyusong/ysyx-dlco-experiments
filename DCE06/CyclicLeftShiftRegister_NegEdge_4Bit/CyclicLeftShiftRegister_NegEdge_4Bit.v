module CyclicLeftShiftRegister_NegEdge_4Bit (clock, reset, D, Q);
    input clock;
    input reset;
    input [3:0] D;
    output reg [3:0] Q;

    always @(negedge clock)
    begin
        if (reset)
            Q <= 4'b0000;
        else
            Q <= {D[2:0], D[3]};        
    end
endmodule
