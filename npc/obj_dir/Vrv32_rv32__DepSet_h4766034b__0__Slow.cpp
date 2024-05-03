// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv32.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrv32_rv32.h"

VL_ATTR_COLD void Vrv32_rv32___eval_initial__TOP__rv32(Vrv32_rv32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrv32_rv32___eval_initial__TOP__rv32\n"); );
    // Body
    vlSelf->__PVT__PC_inst__DOT__i3__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->__PVT__PC_inst__DOT__i3__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelf->__PVT__i1__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->__PVT__i1__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelf->__PVT__i4__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->__PVT__i4__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelf->__PVT__i2__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->__PVT__i2__DOT__i0__DOT__key_list[1U] = 0U;
}

VL_ATTR_COLD void Vrv32_rv32___ctor_var_reset(Vrv32_rv32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrv32_rv32___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->inst = VL_RAND_RESET_I(32);
    vlSelf->pc = VL_RAND_RESET_I(32);
    vlSelf->rs1 = VL_RAND_RESET_I(5);
    vlSelf->rs2 = VL_RAND_RESET_I(5);
    vlSelf->rd = VL_RAND_RESET_I(5);
    vlSelf->funct3 = VL_RAND_RESET_I(3);
    vlSelf->funct7 = VL_RAND_RESET_I(7);
    vlSelf->type4 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__wen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__m1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__m2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__m3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__m4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__aluc = VL_RAND_RESET_I(2);
    vlSelf->__PVT__result = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rin = VL_RAND_RESET_I(32);
    vlSelf->__PVT__imm = VL_RAND_RESET_I(32);
    vlSelf->__PVT__num1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__num2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__clk_count_inst__DOT__clk_cnt = VL_RAND_RESET_I(2);
    vlSelf->__PVT__PC_inst__DOT__pc_temp = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__PC_inst__DOT__i3__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(33);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__PC_inst__DOT__i3__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__PC_inst__DOT__i3__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__PC_inst__DOT__i3__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->__PVT__PC_inst__DOT__i3__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->__PVT__imm_extend_inst__DOT__imm_12 = VL_RAND_RESET_I(12);
    vlSelf->__PVT__imm_extend_inst__DOT__imm_20 = VL_RAND_RESET_I(20);
    vlSelf->__PVT__imm_extend_inst__DOT__imm_12_to_32 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__imm_extend_inst__DOT__imm_20_to_32 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__i1__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(33);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__i1__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__i1__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__i1__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->__PVT__i1__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__i2__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(33);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__i2__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__i2__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__i2__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->__PVT__i2__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__i4__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(33);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__i4__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__i4__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__i4__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->__PVT__i4__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__clk_count_inst__DOT__clk_cnt = VL_RAND_RESET_I(2);
}
