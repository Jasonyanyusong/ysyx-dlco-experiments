// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAddCounter8bit__Syms.h"


void VAddCounter8bit___024root__traceInitSub0(VAddCounter8bit___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VAddCounter8bit___024root__traceInitTop(VAddCounter8bit___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAddCounter8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VAddCounter8bit___024root__traceInitSub0(vlSelf, tracep);
    }
}

void VAddCounter8bit___024root__traceInitSub0(VAddCounter8bit___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAddCounter8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clk", false,-1);
        tracep->declBit(c+2,"en", false,-1);
        tracep->declBus(c+3,"out_q", false,-1, 7,0);
        tracep->declBit(c+1,"AddCounter8bit clk", false,-1);
        tracep->declBit(c+2,"AddCounter8bit en", false,-1);
        tracep->declBus(c+3,"AddCounter8bit out_q", false,-1, 7,0);
    }
}

void VAddCounter8bit___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void VAddCounter8bit___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void VAddCounter8bit___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void VAddCounter8bit___024root__traceRegister(VAddCounter8bit___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAddCounter8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&VAddCounter8bit___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&VAddCounter8bit___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&VAddCounter8bit___024root__traceCleanup, vlSelf);
    }
}

void VAddCounter8bit___024root__traceFullSub0(VAddCounter8bit___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VAddCounter8bit___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    VAddCounter8bit___024root* const __restrict vlSelf = static_cast<VAddCounter8bit___024root*>(voidSelf);
    VAddCounter8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VAddCounter8bit___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void VAddCounter8bit___024root__traceFullSub0(VAddCounter8bit___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAddCounter8bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->clk));
        tracep->fullBit(oldp+2,(vlSelf->en));
        tracep->fullCData(oldp+3,(vlSelf->out_q),8);
    }
}
