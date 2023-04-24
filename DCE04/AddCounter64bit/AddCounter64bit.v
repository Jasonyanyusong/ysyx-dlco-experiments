module AddCounter64bit(clk, en, out_q);
    input clk;
    input en;
    output reg [63 : 0] out_q;

    always @(posedge clk) begin
        if (en) out_q <= out_q + 1;
        else out_q <= 0;
    end

endmodule
