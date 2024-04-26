// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv32.h for the primary calling header

#include "verilated.h"

#include "Vrv32___024root.h"

VL_ATTR_COLD void Vrv32___024root___eval_static(Vrv32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vrv32___024root___eval_initial__TOP(Vrv32___024root* vlSelf);

VL_ATTR_COLD void Vrv32___024root___eval_initial(Vrv32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32___024root___eval_initial\n"); );
    // Body
    Vrv32___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void Vrv32___024root___eval_initial__TOP(Vrv32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->rv32__DOT__i1__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->rv32__DOT__i1__DOT__i0__DOT__key_list[1U] = 0U;
}

VL_ATTR_COLD void Vrv32___024root___eval_final(Vrv32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vrv32___024root___eval_triggers__stl(Vrv32___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv32___024root___dump_triggers__stl(Vrv32___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vrv32___024root___eval_stl(Vrv32___024root* vlSelf);

VL_ATTR_COLD void Vrv32___024root___eval_settle(Vrv32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vrv32___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vrv32___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/alemin/Desktop/ics2023/npc/vsrc/rv32.v", 34, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vrv32___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv32___024root___dump_triggers__stl(Vrv32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vrv32___024root___stl_sequent__TOP__0(Vrv32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->rv32__DOT__i1__DOT__i0__DOT__hit = vlSelf->rv32__DOT__i1__DOT__i0__DOT__key_list
        [0U];
    vlSelf->rv32__DOT__i1__DOT__i0__DOT__hit = ((IData)(vlSelf->rv32__DOT__i1__DOT__i0__DOT__hit) 
                                                | vlSelf->rv32__DOT__i1__DOT__i0__DOT__key_list
                                                [1U]);
    vlSelf->rv32__DOT__src1 = ((0U == (0x1fU & (vlSelf->inst 
                                                >> 0xfU)))
                                ? 0U : vlSelf->rv32__DOT__register_file_inst__DOT__regs
                               [(0x1fU & (vlSelf->inst 
                                          >> 0xfU))]);
    if ((0U == (0x1fU & (vlSelf->inst >> 0x14U)))) {
        vlSelf->rv32__DOT__src2 = 0U;
        vlSelf->rv32__DOT__i1__DOT__i0__DOT__data_list[1U] = 0U;
    } else {
        vlSelf->rv32__DOT__src2 = vlSelf->rv32__DOT__register_file_inst__DOT__regs
            [(0x1fU & (vlSelf->inst >> 0x14U))];
        vlSelf->rv32__DOT__i1__DOT__i0__DOT__data_list[1U] 
            = vlSelf->rv32__DOT__register_file_inst__DOT__regs
            [(0x1fU & (vlSelf->inst >> 0x14U))];
    }
    vlSelf->rv32__DOT__imm_extend_inst__DOT__imm_12 
        = ((1U == ((0x13U == (0x7fU & vlSelf->inst))
                    ? 2U : 0U)) ? 0U : ((2U == ((0x13U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->inst))
                                                 ? 2U
                                                 : 0U))
                                         ? (vlSelf->inst 
                                            >> 0x14U)
                                         : 0U));
    vlSelf->rv32__DOT__i1__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(vlSelf->rv32__DOT__src2));
    vlSelf->rv32__DOT__imm = (((- (IData)((1U & ((IData)(vlSelf->rv32__DOT__imm_extend_inst__DOT__imm_12) 
                                                 >> 0xbU)))) 
                               << 0xcU) | (IData)(vlSelf->rv32__DOT__imm_extend_inst__DOT__imm_12));
    vlSelf->rv32__DOT__i1__DOT__i0__DOT__data_list[0U] 
        = (((- (IData)((1U & ((IData)(vlSelf->rv32__DOT__imm_extend_inst__DOT__imm_12) 
                              >> 0xbU)))) << 0xcU) 
           | (IData)(vlSelf->rv32__DOT__imm_extend_inst__DOT__imm_12));
    vlSelf->rv32__DOT__i1__DOT__i0__DOT__pair_list[0U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->rv32__DOT__imm)));
    vlSelf->rv32__DOT__i1__DOT__i0__DOT__lut_out = 
        ((- (IData)(vlSelf->rv32__DOT__i1__DOT__i0__DOT__key_list
                    [0U])) & vlSelf->rv32__DOT__i1__DOT__i0__DOT__data_list
         [0U]);
    vlSelf->rv32__DOT__i1__DOT__i0__DOT__lut_out = 
        (vlSelf->rv32__DOT__i1__DOT__i0__DOT__lut_out 
         | ((- (IData)(vlSelf->rv32__DOT__i1__DOT__i0__DOT__key_list
                       [1U])) & vlSelf->rv32__DOT__i1__DOT__i0__DOT__data_list
            [1U]));
    vlSelf->rv32__DOT__num2 = vlSelf->rv32__DOT__i1__DOT__i0__DOT__lut_out;
}

VL_ATTR_COLD void Vrv32___024root___eval_stl(Vrv32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vrv32___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv32___024root___dump_triggers__ico(Vrv32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv32___024root___dump_triggers__act(Vrv32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or posedge rst)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv32___024root___dump_triggers__nba(Vrv32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or posedge rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vrv32___024root___ctor_var_reset(Vrv32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->inst = VL_RAND_RESET_I(32);
    vlSelf->pc = VL_RAND_RESET_I(32);
    vlSelf->rv32__DOT__src1 = VL_RAND_RESET_I(32);
    vlSelf->rv32__DOT__src2 = VL_RAND_RESET_I(32);
    vlSelf->rv32__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->rv32__DOT__num2 = VL_RAND_RESET_I(32);
    vlSelf->rv32__DOT__PC_inst__DOT__clk_div4 = VL_RAND_RESET_I(2);
    vlSelf->rv32__DOT__register_file_inst__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->rv32__DOT__register_file_inst__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->rv32__DOT__imm_extend_inst__DOT__imm_12 = VL_RAND_RESET_I(12);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->rv32__DOT__i1__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(33);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->rv32__DOT__i1__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->rv32__DOT__i1__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->rv32__DOT__i1__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->rv32__DOT__i1__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__rst = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
