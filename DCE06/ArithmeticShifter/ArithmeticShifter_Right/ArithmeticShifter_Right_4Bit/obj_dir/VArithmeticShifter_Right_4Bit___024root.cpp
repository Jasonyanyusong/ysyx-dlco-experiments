// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VArithmeticShifter_Right_4Bit.h for the primary calling header

#include "VArithmeticShifter_Right_4Bit___024root.h"
#include "VArithmeticShifter_Right_4Bit__Syms.h"

//==========

VL_INLINE_OPT void VArithmeticShifter_Right_4Bit___024root___sequent__TOP__1(VArithmeticShifter_Right_4Bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VArithmeticShifter_Right_4Bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VArithmeticShifter_Right_4Bit___024root___sequent__TOP__1\n"); );
    // Body
    vlSelf->outp = ((IData)(vlSelf->load) ? (IData)(vlSelf->inp)
                     : ((IData)(vlSelf->clr) ? 0U : 
                        ((8U & (IData)(vlSelf->outp)) 
                         | (7U & ((IData)(vlSelf->outp) 
                                  >> 1U)))));
}

void VArithmeticShifter_Right_4Bit___024root___eval(VArithmeticShifter_Right_4Bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VArithmeticShifter_Right_4Bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VArithmeticShifter_Right_4Bit___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        VArithmeticShifter_Right_4Bit___024root___sequent__TOP__1(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData VArithmeticShifter_Right_4Bit___024root___change_request_1(VArithmeticShifter_Right_4Bit___024root* vlSelf);

VL_INLINE_OPT QData VArithmeticShifter_Right_4Bit___024root___change_request(VArithmeticShifter_Right_4Bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VArithmeticShifter_Right_4Bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VArithmeticShifter_Right_4Bit___024root___change_request\n"); );
    // Body
    return (VArithmeticShifter_Right_4Bit___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VArithmeticShifter_Right_4Bit___024root___change_request_1(VArithmeticShifter_Right_4Bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VArithmeticShifter_Right_4Bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VArithmeticShifter_Right_4Bit___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VArithmeticShifter_Right_4Bit___024root___eval_debug_assertions(VArithmeticShifter_Right_4Bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VArithmeticShifter_Right_4Bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VArithmeticShifter_Right_4Bit___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->clr & 0xfeU))) {
        Verilated::overWidthError("clr");}
    if (VL_UNLIKELY((vlSelf->load & 0xfeU))) {
        Verilated::overWidthError("load");}
    if (VL_UNLIKELY((vlSelf->inp & 0xf0U))) {
        Verilated::overWidthError("inp");}
}
#endif  // VL_DEBUG
