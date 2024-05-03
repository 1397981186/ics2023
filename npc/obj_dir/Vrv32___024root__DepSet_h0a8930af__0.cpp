// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv32.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrv32__Syms.h"
#include "Vrv32___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv32___024root___dump_triggers__ico(Vrv32___024root* vlSelf);
#endif  // VL_DEBUG

void Vrv32___024root___eval_triggers__ico(Vrv32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vrv32___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

void Vrv32_rv32___ico_sequent__TOP__rv32__0(Vrv32_rv32* vlSelf);
void Vrv32_register_file___ico_sequent__TOP__rv32__register_file_inst__0(Vrv32_register_file* vlSelf);
void Vrv32_rv32___ico_sequent__TOP__rv32__1(Vrv32_rv32* vlSelf);

void Vrv32___024root___eval_ico(Vrv32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vrv32_rv32___ico_sequent__TOP__rv32__0((&vlSymsp->TOP__rv32));
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vrv32_register_file___ico_sequent__TOP__rv32__register_file_inst__0((&vlSymsp->TOP__rv32__register_file_inst));
        Vrv32_rv32___ico_sequent__TOP__rv32__1((&vlSymsp->TOP__rv32));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv32___024root___dump_triggers__act(Vrv32___024root* vlSelf);
#endif  // VL_DEBUG

void Vrv32___024root___eval_triggers__act(Vrv32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vrv32___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vrv32___024root___nba_sequent__TOP__0(Vrv32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->pc = vlSymsp->TOP__rv32.pc;
}

void Vrv32_rv32___nba_sequent__TOP__rv32__0(Vrv32_rv32* vlSelf);
void Vrv32_register_file___nba_sequent__TOP__rv32__register_file_inst__0(Vrv32_register_file* vlSelf);
void Vrv32_rv32___nba_sequent__TOP__rv32__1(Vrv32_rv32* vlSelf);

void Vrv32___024root___eval_nba(Vrv32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vrv32_rv32___nba_sequent__TOP__rv32__0((&vlSymsp->TOP__rv32));
        vlSelf->__Vm_traceActivity[2U] = 1U;
        Vrv32_register_file___nba_sequent__TOP__rv32__register_file_inst__0((&vlSymsp->TOP__rv32__register_file_inst));
        Vrv32___024root___nba_sequent__TOP__0(vlSelf);
        Vrv32_rv32___nba_sequent__TOP__rv32__1((&vlSymsp->TOP__rv32));
        Vrv32_register_file___ico_sequent__TOP__rv32__register_file_inst__0((&vlSymsp->TOP__rv32__register_file_inst));
        Vrv32_rv32___ico_sequent__TOP__rv32__1((&vlSymsp->TOP__rv32));
    }
}
