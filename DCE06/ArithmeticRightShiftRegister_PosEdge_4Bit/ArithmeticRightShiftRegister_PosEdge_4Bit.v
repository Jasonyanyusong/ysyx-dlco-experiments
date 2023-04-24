module ArithmeticRightShiftRegister_PosEdge_4Bit (clock, reset, D, Q);
    input clock;
    input reset;
    input [3:0] D;
    output reg [3:0] Q;

    always @(posedge clock)
    begin
        if (reset)
            Q <= 4'b0000;
        else
            Q <= {D[3], D[3:1]};        
    end
endmodule
