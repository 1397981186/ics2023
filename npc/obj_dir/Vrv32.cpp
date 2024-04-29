// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vrv32.h"
#include "Vrv32__Syms.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vrv32::Vrv32(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vrv32__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , inst{vlSymsp->TOP.inst}
    , pc{vlSymsp->TOP.pc}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vrv32::Vrv32(const char* _vcname__)
    : Vrv32(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vrv32::~Vrv32() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vrv32___024root___eval_debug_assertions(Vrv32___024root* vlSelf);
#endif  // VL_DEBUG
void Vrv32___024root___eval_static(Vrv32___024root* vlSelf);
void Vrv32___024root___eval_initial(Vrv32___024root* vlSelf);
void Vrv32___024root___eval_settle(Vrv32___024root* vlSelf);
void Vrv32___024root___eval(Vrv32___024root* vlSelf);

void Vrv32::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vrv32::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vrv32___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vrv32___024root___eval_static(&(vlSymsp->TOP));
        Vrv32___024root___eval_initial(&(vlSymsp->TOP));
        Vrv32___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vrv32___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vrv32::eventsPending() { return false; }

uint64_t Vrv32::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vrv32::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vrv32___024root___eval_final(Vrv32___024root* vlSelf);

VL_ATTR_COLD void Vrv32::final() {
    Vrv32___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vrv32::hierName() const { return vlSymsp->name(); }
const char* Vrv32::modelName() const { return "Vrv32"; }
unsigned Vrv32::threads() const { return 1; }
