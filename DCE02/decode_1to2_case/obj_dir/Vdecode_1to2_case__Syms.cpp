// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vdecode_1to2_case__Syms.h"
#include "Vdecode_1to2_case.h"
#include "Vdecode_1to2_case___024root.h"

// FUNCTIONS
Vdecode_1to2_case__Syms::~Vdecode_1to2_case__Syms()
{
}

Vdecode_1to2_case__Syms::Vdecode_1to2_case__Syms(VerilatedContext* contextp, const char* namep, Vdecode_1to2_case* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
