// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vregister16.h"
#include "Vregister16__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vregister16::Vregister16(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vregister16__Syms(_vcontextp__, _vcname__, this)}
    , load{vlSymsp->TOP.load}
    , clr{vlSymsp->TOP.clr}
    , clk{vlSymsp->TOP.clk}
    , inp{vlSymsp->TOP.inp}
    , q{vlSymsp->TOP.q}
    , rootp{&(vlSymsp->TOP)}
{
}

Vregister16::Vregister16(const char* _vcname__)
    : Vregister16(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vregister16::~Vregister16() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vregister16___024root___eval_initial(Vregister16___024root* vlSelf);
void Vregister16___024root___eval_settle(Vregister16___024root* vlSelf);
void Vregister16___024root___eval(Vregister16___024root* vlSelf);
QData Vregister16___024root___change_request(Vregister16___024root* vlSelf);
#ifdef VL_DEBUG
void Vregister16___024root___eval_debug_assertions(Vregister16___024root* vlSelf);
#endif  // VL_DEBUG
void Vregister16___024root___final(Vregister16___024root* vlSelf);

static void _eval_initial_loop(Vregister16__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vregister16___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vregister16___024root___eval_settle(&(vlSymsp->TOP));
        Vregister16___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vregister16___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("register16.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vregister16___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vregister16::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vregister16::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vregister16___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vregister16___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vregister16___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("register16.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vregister16___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vregister16::final() {
    Vregister16___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vregister16::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vregister16::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vregister16___024root__traceInitTop(Vregister16___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vregister16___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vregister16___024root*>(voidSelf);
    Vregister16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vregister16___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vregister16___024root__traceRegister(Vregister16___024root* vlSelf, VerilatedVcd* tracep);

void Vregister16::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vregister16___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
