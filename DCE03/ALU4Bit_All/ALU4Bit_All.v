module ALU4Bit_All(sel, a, b, result, overflow, carry, zero);
    input [2:0] sel;
    input [3:0] a, b;
    output reg [3:0] result;
    output reg overflow, carry, zero;
    reg Cin;
    reg [3:0] t_no_Cin;
    reg [4:0] carry_and_result;
    integer i;

    /* verilator lint_off WIDTH */
    /* verilator lint_off LATCH */
    always @(sel)
    begin
        case(sel)
        3'b000: 
        begin
            assign Cin = 0;
            assign t_no_Cin = {4{ Cin }}^b;
            assign carry_and_result = a + t_no_Cin + Cin;
            assign result = carry_and_result[3:0];
            assign carry = carry_and_result [4];
            assign overflow = (a[3] == t_no_Cin[3]) && (result [3] != a[3]);
            assign zero = ~(| result);
        end
        3'b001: 
        begin
            assign Cin = 1;
            assign t_no_Cin = {4{ Cin }}^b;
            assign carry_and_result = a + t_no_Cin + Cin;
            assign result = carry_and_result[3:0];
            assign carry = carry_and_result [4];
            assign overflow = (a[3] == t_no_Cin[3]) && (result [3] != a[3]);
            assign zero = ~(| result);
        end
        3'b010:
        begin
            assign Cin = 1;
            assign result = {4{ Cin }}^b;
            assign zero = ~(| result);
            assign carry = 0;
            assign overflow = 0;
        end
        3'b011:
        begin
            for (i=0; i <= 3; i = i + 1)
                if (a[i] == b[i]) 
                    if (a[i] == 1)
                        result[i] = 1;
                    else
                        result[i] = 0;
                else
                    result[i] = 0;
            assign zero = ~(| result);
            assign carry = 0;
            assign overflow = 0;
        end
        3'b100: 
        begin
            for (i=0; i <= 3; i = i + 1)
                if ((a[i] == 1) | (b[i] == 1)) 
                    result[i] = 1;
                else
                    result[i] = 0;
            assign zero = ~(| result);
            assign carry = 0;
            assign overflow = 0;
        end
        3'b101:
        begin
            for (i=0; i <= 3; i = i + 1)
                if (a[i] != b[i]) 
                    result[i] = 1;
                else
                    result[i] = 0;
            assign zero = ~(| result);
            assign carry = 0;
            assign overflow = 0;
        end
        3'b110: 
        begin
            if (a < b)
                assign result = 3'b001;
            else
                assign result = 3'b000;
            assign zero = ~(| result);
            assign carry = 0;
            assign overflow = 0;
        end
        3'b111:
        begin
            if(a == b)
                assign result = 3'b001;
            else
                assign result = 3'b000;
            assign zero = ~(| result);
            assign carry = 0;
            assign overflow = 0;
        end
        endcase
    end
    /* verilator lint_on WIDTH */
    /* verilator lint_on LATCH */

endmodule