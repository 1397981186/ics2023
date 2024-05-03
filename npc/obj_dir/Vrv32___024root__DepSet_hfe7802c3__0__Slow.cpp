// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv32.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

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
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vrv32___024root___eval_initial__TOP(Vrv32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__i = 1U;
    vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__i = 2U;
    vlSelf->rv32__DOT__i1__DOT__i0__DOT__i = 1U;
    vlSelf->rv32__DOT__i1__DOT__i0__DOT__i = 2U;
    vlSelf->rv32__DOT__i2__DOT__i0__DOT__i = 1U;
    vlSelf->rv32__DOT__i2__DOT__i0__DOT__i = 2U;
    vlSelf->rv32__DOT__i4__DOT__i0__DOT__i = 1U;
    vlSelf->rv32__DOT__i4__DOT__i0__DOT__i = 2U;
    vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelf->rv32__DOT__i1__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->rv32__DOT__i1__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelf->rv32__DOT__i2__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->rv32__DOT__i2__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelf->rv32__DOT__i4__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->rv32__DOT__i4__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelf->rv32__DOT__alu_inst__DOT__temp = 0xfffffffeU;
    vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__default_out = 0U;
    vlSelf->rv32__DOT__i1__DOT__i0__DOT__default_out = 0U;
    vlSelf->rv32__DOT__i2__DOT__i0__DOT__default_out = 0U;
    vlSelf->rv32__DOT__i4__DOT__i0__DOT__default_out = 0U;
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
                VL_FATAL_MT("/home/alemin/Desktop/ics2023/npc/vsrc/rv32.v", 57, "", "Settle region did not converge.");
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

void Vrv32___024root___ico_sequent__TOP__0(Vrv32___024root* vlSelf);

VL_ATTR_COLD void Vrv32___024root___eval_stl(Vrv32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vrv32___024root___ico_sequent__TOP__0(vlSelf);
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
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
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
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
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
    vlSelf->rv32__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->rv32__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->rv32__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->rv32__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->rv32__DOT__clk1_flag = VL_RAND_RESET_I(1);
    vlSelf->rv32__DOT__clk2_flag = VL_RAND_RESET_I(1);
    vlSelf->rv32__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->rv32__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->rv32__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->rv32__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->rv32__DOT__funct7 = VL_RAND_RESET_I(7);
    vlSelf->rv32__DOT__type4 = VL_RAND_RESET_I(3);
    vlSelf->rv32__DOT__wen = VL_RAND_RESET_I(1);
    vlSelf->rv32__DOT__m1 = VL_RAND_RESET_I(1);
    vlSelf->rv32__DOT__m2 = VL_RAND_RESET_I(1);
    vlSelf->rv32__DOT__m3 = VL_RAND_RESET_I(1);
    vlSelf->rv32__DOT__m4 = VL_RAND_RESET_I(1);
    vlSelf->rv32__DOT__aluc = VL_RAND_RESET_I(2);
    vlSelf->rv32__DOT__PCadd4 = VL_RAND_RESET_I(32);
    vlSelf->rv32__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->rv32__DOT__rin = VL_RAND_RESET_I(32);
    vlSelf->rv32__DOT__src1 = VL_RAND_RESET_I(32);
    vlSelf->rv32__DOT__src2 = VL_RAND_RESET_I(32);
    vlSelf->rv32__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->rv32__DOT__num1 = VL_RAND_RESET_I(32);
    vlSelf->rv32__DOT__num2 = VL_RAND_RESET_I(32);
    vlSelf->rv32__DOT__clk_count_inst__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->rv32__DOT__clk_count_inst__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->rv32__DOT__clk_count_inst__DOT__clk1_flag = VL_RAND_RESET_I(1);
    vlSelf->rv32__DOT__clk_count_inst__DOT__clk2_flag = VL_RAND_RESET_I(1);
    vlSelf->rv32__DOT__clk_count_inst__DOT__clk_cnt = VL_RAND_RESET_I(2);
    vlSelf->rv32__DOT__PC_inst__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->rv32__DOT__PC_inst__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->rv32__DOT__PC_inst__DOT__m3 = VL_RAND_RESET_I(1);
    vlSelf->rv32__DOT__PC_inst__DOT__clk2_flag = VL_RAND_RESET_I(1);
    vlSelf->rv32__DOT__PC_inst__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->rv32__DOT__PC_inst__DOT__PCadd4 = VL_RAND_RESET_I(32);
    vlSelf->rv32__DOT__PC_inst__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->rv32__DOT__PC_inst__DOT__pc_temp = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(66, vlSelf->rv32__DOT__PC_inst__DOT____Vcellinp__i3____pinNumber3);
    vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__key = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(66, vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__lut);
    vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__key = VL_RAND_RESET_I(1);
    vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__default_out = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(66, vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__lut);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(33);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->rv32__DOT__control_unit_inst__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->rv32__DOT__control_unit_inst__DOT__rd_11_7 = VL_RAND_RESET_I(5);
    vlSelf->rv32__DOT__control_unit_inst__DOT__rs1_19_15 = VL_RAND_RESET_I(5);
    vlSelf->rv32__DOT__control_unit_inst__DOT__rs2_24_20 = VL_RAND_RESET_I(5);
    vlSelf->rv32__DOT__control_unit_inst__DOT__fun3_14_12 = VL_RAND_RESET_I(3);
    vlSelf->rv32__DOT__control_unit_inst__DOT__fun7_31_25 = VL_RAND_RESET_I(7);
    vlSelf->rv32__DOT__control_unit_inst__DOT__type1 = VL_RAND_RESET_I(3);
    vlSelf->rv32__DOT__control_unit_inst__DOT__aluc = VL_RAND_RESET_I(2);
    vlSelf->rv32__DOT__control_unit_inst__DOT__wen = VL_RAND_RESET_I(1);
    vlSelf->rv32__DOT__control_unit_inst__DOT__m1 = VL_RAND_RESET_I(1);
    vlSelf->rv32__DOT__control_unit_inst__DOT__m2 = VL_RAND_RESET_I(1);
    vlSelf->rv32__DOT__control_unit_inst__DOT__m3 = VL_RAND_RESET_I(1);
    vlSelf->rv32__DOT__control_unit_inst__DOT__m4 = VL_RAND_RESET_I(1);
    vlSelf->rv32__DOT__control_unit_inst__DOT__opcode_6_0 = VL_RAND_RESET_I(7);
    vlSelf->rv32__DOT__register_file_inst__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->rv32__DOT__register_file_inst__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->rv32__DOT__register_file_inst__DOT__clk1_flag = VL_RAND_RESET_I(1);
    vlSelf->rv32__DOT__register_file_inst__DOT__wen = VL_RAND_RESET_I(1);
    vlSelf->rv32__DOT__register_file_inst__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->rv32__DOT__register_file_inst__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->rv32__DOT__register_file_inst__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->rv32__DOT__register_file_inst__DOT__rin = VL_RAND_RESET_I(32);
    vlSelf->rv32__DOT__register_file_inst__DOT__src1 = VL_RAND_RESET_I(32);
    vlSelf->rv32__DOT__register_file_inst__DOT__src2 = VL_RAND_RESET_I(32);
    vlSelf->rv32__DOT__register_file_inst__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->rv32__DOT__register_file_inst__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->rv32__DOT__register_file_inst__DOT__r_wen = VL_RAND_RESET_I(1);
    vlSelf->rv32__DOT__imm_extend_inst__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->rv32__DOT__imm_extend_inst__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->rv32__DOT__imm_extend_inst__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->rv32__DOT__imm_extend_inst__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->rv32__DOT__imm_extend_inst__DOT__funct7 = VL_RAND_RESET_I(7);
    vlSelf->rv32__DOT__imm_extend_inst__DOT__type3 = VL_RAND_RESET_I(3);
    vlSelf->rv32__DOT__imm_extend_inst__DOT__imm32 = VL_RAND_RESET_I(32);
    vlSelf->rv32__DOT__imm_extend_inst__DOT__imm_12 = VL_RAND_RESET_I(12);
    vlSelf->rv32__DOT__imm_extend_inst__DOT__imm_20 = VL_RAND_RESET_I(20);
    vlSelf->rv32__DOT__imm_extend_inst__DOT__imm_12_to_32 = VL_RAND_RESET_I(32);
    vlSelf->rv32__DOT__imm_extend_inst__DOT__imm_20_to_32 = VL_RAND_RESET_I(32);
    vlSelf->rv32__DOT__imm_extend_inst__DOT__RISB_type_inst__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->rv32__DOT__imm_extend_inst__DOT__RISB_type_inst__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->rv32__DOT__imm_extend_inst__DOT__RISB_type_inst__DOT__funct7 = VL_RAND_RESET_I(7);
    vlSelf->rv32__DOT__imm_extend_inst__DOT__RISB_type_inst__DOT__type2 = VL_RAND_RESET_I(3);
    vlSelf->rv32__DOT__imm_extend_inst__DOT__RISB_type_inst__DOT__imm_12 = VL_RAND_RESET_I(12);
    vlSelf->rv32__DOT__imm_extend_inst__DOT__UJ_type_inst__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->rv32__DOT__imm_extend_inst__DOT__UJ_type_inst__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->rv32__DOT__imm_extend_inst__DOT__UJ_type_inst__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->rv32__DOT__imm_extend_inst__DOT__UJ_type_inst__DOT__funct7 = VL_RAND_RESET_I(7);
    vlSelf->rv32__DOT__imm_extend_inst__DOT__UJ_type_inst__DOT__type2 = VL_RAND_RESET_I(3);
    vlSelf->rv32__DOT__imm_extend_inst__DOT__UJ_type_inst__DOT__imm_20 = VL_RAND_RESET_I(20);
    vlSelf->rv32__DOT__imm_extend_inst__DOT__Extend_12_inst__DOT__imm_12 = VL_RAND_RESET_I(12);
    vlSelf->rv32__DOT__imm_extend_inst__DOT__Extend_12_inst__DOT__imm_12_to_32 = VL_RAND_RESET_I(32);
    vlSelf->rv32__DOT__imm_extend_inst__DOT__Extend_20_inst__DOT__imm_20 = VL_RAND_RESET_I(20);
    vlSelf->rv32__DOT__imm_extend_inst__DOT__Extend_20_inst__DOT__imm_20_to_32 = VL_RAND_RESET_I(32);
    vlSelf->rv32__DOT__i1__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->rv32__DOT__i1__DOT__key = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(66, vlSelf->rv32__DOT__i1__DOT__lut);
    vlSelf->rv32__DOT__i1__DOT__i0__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->rv32__DOT__i1__DOT__i0__DOT__key = VL_RAND_RESET_I(1);
    vlSelf->rv32__DOT__i1__DOT__i0__DOT__default_out = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(66, vlSelf->rv32__DOT__i1__DOT__i0__DOT__lut);
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
    vlSelf->rv32__DOT__i1__DOT__i0__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->rv32__DOT__i2__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->rv32__DOT__i2__DOT__key = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(66, vlSelf->rv32__DOT__i2__DOT__lut);
    vlSelf->rv32__DOT__i2__DOT__i0__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->rv32__DOT__i2__DOT__i0__DOT__key = VL_RAND_RESET_I(1);
    vlSelf->rv32__DOT__i2__DOT__i0__DOT__default_out = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(66, vlSelf->rv32__DOT__i2__DOT__i0__DOT__lut);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->rv32__DOT__i2__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(33);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->rv32__DOT__i2__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->rv32__DOT__i2__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->rv32__DOT__i2__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->rv32__DOT__i2__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->rv32__DOT__i2__DOT__i0__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->rv32__DOT__i4__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->rv32__DOT__i4__DOT__key = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(66, vlSelf->rv32__DOT__i4__DOT__lut);
    vlSelf->rv32__DOT__i4__DOT__i0__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->rv32__DOT__i4__DOT__i0__DOT__key = VL_RAND_RESET_I(1);
    vlSelf->rv32__DOT__i4__DOT__i0__DOT__default_out = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(66, vlSelf->rv32__DOT__i4__DOT__i0__DOT__lut);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->rv32__DOT__i4__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(33);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->rv32__DOT__i4__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->rv32__DOT__i4__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->rv32__DOT__i4__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->rv32__DOT__i4__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->rv32__DOT__i4__DOT__i0__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->rv32__DOT__alu_inst__DOT__aluc = VL_RAND_RESET_I(2);
    vlSelf->rv32__DOT__alu_inst__DOT__num1 = VL_RAND_RESET_I(32);
    vlSelf->rv32__DOT__alu_inst__DOT__num2 = VL_RAND_RESET_I(32);
    vlSelf->rv32__DOT__alu_inst__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->rv32__DOT__alu_inst__DOT__temp = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
}
