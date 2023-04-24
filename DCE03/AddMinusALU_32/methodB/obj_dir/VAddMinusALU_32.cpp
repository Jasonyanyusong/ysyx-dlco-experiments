// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VAddMinusALU_32.h"
#include "VAddMinusALU_32__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VAddMinusALU_32::VAddMinusALU_32(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VAddMinusALU_32__Syms(_vcontextp__, _vcname__, this)}
    , sub_add{vlSymsp->TOP.sub_add}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , carry{vlSymsp->TOP.carry}
    , zero{vlSymsp->TOP.zero}
    , overflow{vlSymsp->TOP.overflow}
    , result{vlSymsp->TOP.result}
    , rootp{&(vlSymsp->TOP)}
{
}

VAddMinusALU_32::VAddMinusALU_32(const char* _vcname__)
    : VAddMinusALU_32(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VAddMinusALU_32::~VAddMinusALU_32() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VAddMinusALU_32___024root___eval_initial(VAddMinusALU_32___024root* vlSelf);
void VAddMinusALU_32___024root___eval_settle(VAddMinusALU_32___024root* vlSelf);
void VAddMinusALU_32___024root___eval(VAddMinusALU_32___024root* vlSelf);
QData VAddMinusALU_32___024root___change_request(VAddMinusALU_32___024root* vlSelf);
#ifdef VL_DEBUG
void VAddMinusALU_32___024root___eval_debug_assertions(VAddMinusALU_32___024root* vlSelf);
#endif  // VL_DEBUG
void VAddMinusALU_32___024root___final(VAddMinusALU_32___024root* vlSelf);

static void _eval_initial_loop(VAddMinusALU_32__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VAddMinusALU_32___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VAddMinusALU_32___024root___eval_settle(&(vlSymsp->TOP));
        VAddMinusALU_32___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VAddMinusALU_32___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("AddMinusALU_32.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VAddMinusALU_32___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VAddMinusALU_32::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VAddMinusALU_32::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VAddMinusALU_32___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VAddMinusALU_32___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VAddMinusALU_32___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("AddMinusALU_32.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VAddMinusALU_32___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void VAddMinusALU_32::final() {
    VAddMinusALU_32___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* VAddMinusALU_32::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VAddMinusALU_32::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void VAddMinusALU_32___024root__traceInitTop(VAddMinusALU_32___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VAddMinusALU_32___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAddMinusALU_32___024root*>(voidSelf);
    VAddMinusALU_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VAddMinusALU_32___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void VAddMinusALU_32___024root__traceRegister(VAddMinusALU_32___024root* vlSelf, VerilatedVcd* tracep);

void VAddMinusALU_32::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    VAddMinusALU_32___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
