// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv32.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrv32___024root.h"

void Vrv32___024root____Vdpiimwrap_rv32__DOT__control_unit_inst__DOT__ebreak_TOP(IData/*31:0*/ station, IData/*31:0*/ inst);

VL_INLINE_OPT void Vrv32___024root___ico_sequent__TOP__0(Vrv32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32___024root___ico_sequent__TOP__0\n"); );
    // Body
    if ((0x13U != (0x7fU & vlSelf->inst))) {
        if ((0x73U == (0x7fU & vlSelf->inst))) {
            if ((1U == (vlSelf->inst >> 0x14U))) {
                Vrv32___024root____Vdpiimwrap_rv32__DOT__control_unit_inst__DOT__ebreak_TOP(1U, vlSelf->inst);
            } else {
                Vrv32___024root____Vdpiimwrap_rv32__DOT__control_unit_inst__DOT__ebreak_TOP(3U, vlSelf->inst);
            }
        }
    }
}

void Vrv32___024root___eval_ico(Vrv32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vrv32___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vrv32___024root___eval_act(Vrv32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vrv32___024root___nba_sequent__TOP__0(Vrv32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*1:0*/ __Vdly__rv32__DOT__clk_count_inst__DOT__clk_cnt;
    __Vdly__rv32__DOT__clk_count_inst__DOT__clk_cnt = 0;
    IData/*31:0*/ __Vdly__pc;
    __Vdly__pc = 0;
    // Body
    __Vdly__rv32__DOT__clk_count_inst__DOT__clk_cnt 
        = vlSelf->rv32__DOT__clk_count_inst__DOT__clk_cnt;
    __Vdly__pc = vlSelf->pc;
    if (vlSelf->rst) {
        __Vdly__rv32__DOT__clk_count_inst__DOT__clk_cnt = 0U;
        __Vdly__pc = 0x80000000U;
    } else if ((2U == (IData)(vlSelf->rv32__DOT__clk_count_inst__DOT__clk_cnt))) {
        __Vdly__rv32__DOT__clk_count_inst__DOT__clk_cnt = 0U;
        __Vdly__pc = ((IData)(4U) + vlSelf->pc);
    } else {
        __Vdly__rv32__DOT__clk_count_inst__DOT__clk_cnt 
            = (3U & ((IData)(1U) + (IData)(vlSelf->rv32__DOT__clk_count_inst__DOT__clk_cnt)));
    }
    vlSelf->pc = __Vdly__pc;
    vlSelf->rv32__DOT__clk_count_inst__DOT__clk_cnt 
        = __Vdly__rv32__DOT__clk_count_inst__DOT__clk_cnt;
}

void Vrv32___024root___eval_nba(Vrv32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vrv32___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vrv32___024root___eval_triggers__ico(Vrv32___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv32___024root___dump_triggers__ico(Vrv32___024root* vlSelf);
#endif  // VL_DEBUG
void Vrv32___024root___eval_triggers__act(Vrv32___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv32___024root___dump_triggers__act(Vrv32___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv32___024root___dump_triggers__nba(Vrv32___024root* vlSelf);
#endif  // VL_DEBUG

void Vrv32___024root___eval(Vrv32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vrv32___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vrv32___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/alemin/Desktop/ics2023/npc/vsrc/rv32.v", 45, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vrv32___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vrv32___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vrv32___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/alemin/Desktop/ics2023/npc/vsrc/rv32.v", 45, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vrv32___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vrv32___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/alemin/Desktop/ics2023/npc/vsrc/rv32.v", 45, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vrv32___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vrv32___024root___eval_debug_assertions(Vrv32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
