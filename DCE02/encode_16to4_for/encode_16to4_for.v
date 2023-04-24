module encode_16to4_for(x, en, y);
    input [15:0] x;
    input en;
    output reg [3:0] y;
    integer i;
    always @ (x or en)
        begin
            if (en)
                begin
                    y = 0;
                    for (i = 0; i<= 15; i = i + 1)
                        if(x [i] == 1)
                            y = i[3:0];
                end
                else
                    y = 0;
        end
endmodule
