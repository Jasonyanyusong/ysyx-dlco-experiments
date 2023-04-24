// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VArithmeticRightShiftRegister_NegEdge_2Bit.h"
#include "VArithmeticRightShiftRegister_NegEdge_2Bit__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VArithmeticRightShiftRegister_NegEdge_2Bit::VArithmeticRightShiftRegister_NegEdge_2Bit(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VArithmeticRightShiftRegister_NegEdge_2Bit__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , D{vlSymsp->TOP.D}
    , Q{vlSymsp->TOP.Q}
    , rootp{&(vlSymsp->TOP)}
{
}

VArithmeticRightShiftRegister_NegEdge_2Bit::VArithmeticRightShiftRegister_NegEdge_2Bit(const char* _vcname__)
    : VArithmeticRightShiftRegister_NegEdge_2Bit(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VArithmeticRightShiftRegister_NegEdge_2Bit::~VArithmeticRightShiftRegister_NegEdge_2Bit() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VArithmeticRightShiftRegister_NegEdge_2Bit___024root___eval_initial(VArithmeticRightShiftRegister_NegEdge_2Bit___024root* vlSelf);
void VArithmeticRightShiftRegister_NegEdge_2Bit___024root___eval_settle(VArithmeticRightShiftRegister_NegEdge_2Bit___024root* vlSelf);
void VArithmeticRightShiftRegister_NegEdge_2Bit___024root___eval(VArithmeticRightShiftRegister_NegEdge_2Bit___024root* vlSelf);
QData VArithmeticRightShiftRegister_NegEdge_2Bit___024root___change_request(VArithmeticRightShiftRegister_NegEdge_2Bit___024root* vlSelf);
#ifdef VL_DEBUG
void VArithmeticRightShiftRegister_NegEdge_2Bit___024root___eval_debug_assertions(VArithmeticRightShiftRegister_NegEdge_2Bit___024root* vlSelf);
#endif  // VL_DEBUG
void VArithmeticRightShiftRegister_NegEdge_2Bit___024root___final(VArithmeticRightShiftRegister_NegEdge_2Bit___024root* vlSelf);

static void _eval_initial_loop(VArithmeticRightShiftRegister_NegEdge_2Bit__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VArithmeticRightShiftRegister_NegEdge_2Bit___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VArithmeticRightShiftRegister_NegEdge_2Bit___024root___eval_settle(&(vlSymsp->TOP));
        VArithmeticRightShiftRegister_NegEdge_2Bit___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VArithmeticRightShiftRegister_NegEdge_2Bit___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("ArithmeticRightShiftRegister_NegEdge_2Bit.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VArithmeticRightShiftRegister_NegEdge_2Bit___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VArithmeticRightShiftRegister_NegEdge_2Bit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VArithmeticRightShiftRegister_NegEdge_2Bit::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VArithmeticRightShiftRegister_NegEdge_2Bit___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VArithmeticRightShiftRegister_NegEdge_2Bit___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VArithmeticRightShiftRegister_NegEdge_2Bit___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("ArithmeticRightShiftRegister_NegEdge_2Bit.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VArithmeticRightShiftRegister_NegEdge_2Bit___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void VArithmeticRightShiftRegister_NegEdge_2Bit::final() {
    VArithmeticRightShiftRegister_NegEdge_2Bit___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* VArithmeticRightShiftRegister_NegEdge_2Bit::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VArithmeticRightShiftRegister_NegEdge_2Bit::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void VArithmeticRightShiftRegister_NegEdge_2Bit___024root__traceInitTop(VArithmeticRightShiftRegister_NegEdge_2Bit___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VArithmeticRightShiftRegister_NegEdge_2Bit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VArithmeticRightShiftRegister_NegEdge_2Bit___024root*>(voidSelf);
    VArithmeticRightShiftRegister_NegEdge_2Bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VArithmeticRightShiftRegister_NegEdge_2Bit___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void VArithmeticRightShiftRegister_NegEdge_2Bit___024root__traceRegister(VArithmeticRightShiftRegister_NegEdge_2Bit___024root* vlSelf, VerilatedVcd* tracep);

void VArithmeticRightShiftRegister_NegEdge_2Bit::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    VArithmeticRightShiftRegister_NegEdge_2Bit___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
