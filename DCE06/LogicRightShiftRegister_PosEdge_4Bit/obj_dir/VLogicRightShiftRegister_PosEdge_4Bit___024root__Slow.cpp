// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLogicRightShiftRegister_PosEdge_4Bit.h for the primary calling header

#include "VLogicRightShiftRegister_PosEdge_4Bit___024root.h"
#include "VLogicRightShiftRegister_PosEdge_4Bit__Syms.h"

//==========


void VLogicRightShiftRegister_PosEdge_4Bit___024root___ctor_var_reset(VLogicRightShiftRegister_PosEdge_4Bit___024root* vlSelf);

VLogicRightShiftRegister_PosEdge_4Bit___024root::VLogicRightShiftRegister_PosEdge_4Bit___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VLogicRightShiftRegister_PosEdge_4Bit___024root___ctor_var_reset(this);
}

void VLogicRightShiftRegister_PosEdge_4Bit___024root::__Vconfigure(VLogicRightShiftRegister_PosEdge_4Bit__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VLogicRightShiftRegister_PosEdge_4Bit___024root::~VLogicRightShiftRegister_PosEdge_4Bit___024root() {
}

void VLogicRightShiftRegister_PosEdge_4Bit___024root___eval_initial(VLogicRightShiftRegister_PosEdge_4Bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLogicRightShiftRegister_PosEdge_4Bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLogicRightShiftRegister_PosEdge_4Bit___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

void VLogicRightShiftRegister_PosEdge_4Bit___024root___eval_settle(VLogicRightShiftRegister_PosEdge_4Bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLogicRightShiftRegister_PosEdge_4Bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLogicRightShiftRegister_PosEdge_4Bit___024root___eval_settle\n"); );
}

void VLogicRightShiftRegister_PosEdge_4Bit___024root___final(VLogicRightShiftRegister_PosEdge_4Bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLogicRightShiftRegister_PosEdge_4Bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLogicRightShiftRegister_PosEdge_4Bit___024root___final\n"); );
}

void VLogicRightShiftRegister_PosEdge_4Bit___024root___ctor_var_reset(VLogicRightShiftRegister_PosEdge_4Bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLogicRightShiftRegister_PosEdge_4Bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLogicRightShiftRegister_PosEdge_4Bit___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->D = VL_RAND_RESET_I(4);
    vlSelf->Q = VL_RAND_RESET_I(4);
}
