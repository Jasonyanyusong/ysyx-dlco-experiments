#include <verilated.h>
#include <verilated_vcd_c.h>
#include <iostream>
#include "./obj_dir/VMultiFunctionShiftRegister_NegEdge_8Bit.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static VMultiFunctionShiftRegister_NegEdge_8Bit* top;

void step_and_dump_wave()
{
	top -> eval();
	contextp -> timeInc(1);
	tfp -> dump(contextp -> time());
}

void sim_init()
{
	contextp = new VerilatedContext;
	tfp = new VerilatedVcdC;
	top = new VMultiFunctionShiftRegister_NegEdge_8Bit;
	contextp -> traceEverOn(true);
	top -> trace (tfp, 0);
	tfp -> open ("dump.vcd");
}

void sim_exit()
{
	step_and_dump_wave();
	tfp -> close();
}

int main()
{
	printf("Verilator Generated File simulator\n");
	printf("This is a MultiFunctionShiftRegister_NegEdge_8Bit\n");
	sim_init();

    // posedge clk

    // sel = 0b000
    top -> clk = 0; top -> sel = 0b000; top -> inp = 0; top -> D = 0b00000000; step_and_dump_wave();
    top -> clk = 1; top -> sel = 0b000; top -> inp = 0; top -> D = 0b00000000; step_and_dump_wave();

    top -> clk = 0; top -> sel = 0b001; top -> inp = 0; top -> D = 0b10100101; step_and_dump_wave();
    top -> clk = 1; top -> sel = 0b001; top -> inp = 0; top -> D = 0b10100101; step_and_dump_wave();

    top -> clk = 0; top -> sel = 0b010; top -> inp = 0; top -> D = 0b10100101; step_and_dump_wave();
    top -> clk = 1; top -> sel = 0b010; top -> inp = 0; top -> D = 0b10100101; step_and_dump_wave();

    top -> clk = 0; top -> sel = 0b011; top -> inp = 0; top -> D = 0b10100101; step_and_dump_wave();
    top -> clk = 1; top -> sel = 0b011; top -> inp = 0; top -> D = 0b10100101; step_and_dump_wave();

    top -> clk = 0; top -> sel = 0b100; top -> inp = 0; top -> D = 0b10100101; step_and_dump_wave();
    top -> clk = 1; top -> sel = 0b100; top -> inp = 0; top -> D = 0b10100101; step_and_dump_wave();

    top -> clk = 0; top -> sel = 0b101; top -> inp = 0; top -> D = 0b10100101; step_and_dump_wave();
    top -> clk = 1; top -> sel = 0b101; top -> inp = 0; top -> D = 0b10100101; step_and_dump_wave();

    top -> clk = 0; top -> sel = 0b101; top -> inp = 1; top -> D = 0b10100101; step_and_dump_wave();
    top -> clk = 1; top -> sel = 0b101; top -> inp = 1; top -> D = 0b10100101; step_and_dump_wave();

    top -> clk = 0; top -> sel = 0b110; top -> inp = 0; top -> D = 0b10100101; step_and_dump_wave();
    top -> clk = 1; top -> sel = 0b110; top -> inp = 0; top -> D = 0b10100101; step_and_dump_wave();

    top -> clk = 0; top -> sel = 0b111; top -> inp = 0; top -> D = 0b10100101; step_and_dump_wave();
    top -> clk = 1; top -> sel = 0b111; top -> inp = 0; top -> D = 0b10100101; step_and_dump_wave();


	sim_exit();
	return 0;
}
