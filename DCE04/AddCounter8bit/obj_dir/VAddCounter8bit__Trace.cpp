// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAddCounter8bit__Syms.h"


void VAddCounter8bit___024root__traceChgSub0(VAddCounter8bit___024root* vlSelf, VerilatedVcd* tracep);

void VAddCounter8bit___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    VAddCounter8bit___024root* const __restrict vlSelf = static_cast<VAddCounter8bit___024root*>(voidSelf);
    VAddCounter8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        VAddCounter8bit___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void VAddCounter8bit___024root__traceChgSub0(VAddCounter8bit___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAddCounter8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlSelf->clk));
        tracep->chgBit(oldp+1,(vlSelf->en));
        tracep->chgCData(oldp+2,(vlSelf->out_q),8);
    }
}

void VAddCounter8bit___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    VAddCounter8bit___024root* const __restrict vlSelf = static_cast<VAddCounter8bit___024root*>(voidSelf);
    VAddCounter8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        __Vm_traceActivity[0U] = 0U;
    }
}
