// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VCyclicLeftShiftRegister_NegEdge_16Bit__Syms.h"
#include "VCyclicLeftShiftRegister_NegEdge_16Bit.h"
#include "VCyclicLeftShiftRegister_NegEdge_16Bit___024root.h"

// FUNCTIONS
VCyclicLeftShiftRegister_NegEdge_16Bit__Syms::~VCyclicLeftShiftRegister_NegEdge_16Bit__Syms()
{
}

VCyclicLeftShiftRegister_NegEdge_16Bit__Syms::VCyclicLeftShiftRegister_NegEdge_16Bit__Syms(VerilatedContext* contextp, const char* namep,VCyclicLeftShiftRegister_NegEdge_16Bit* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp(modelp)
    // Setup module instances
    , TOP(namep)
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
}
