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
    vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__i = 1U;
    vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__i = 2U;
    vlSelf->i1__DOT__i0__DOT__i = 1U;
    vlSelf->i1__DOT__i0__DOT__i = 2U;
    vlSelf->i2__DOT__i0__DOT__i = 1U;
    vlSelf->i2__DOT__i0__DOT__i = 2U;
    vlSelf->i4__DOT__i0__DOT__i = 1U;
    vlSelf->i4__DOT__i0__DOT__i = 2U;
    vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelf->i1__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->i1__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelf->i4__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->i4__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelf->i2__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->i2__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelf->alu_inst__DOT__temp = 0xfffffffeU;
    vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__default_out = 0U;
    vlSelf->i1__DOT__i0__DOT__default_out = 0U;
    vlSelf->i2__DOT__i0__DOT__default_out = 0U;
    vlSelf->i4__DOT__i0__DOT__default_out = 0U;
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
    vlSelf->clk1_flag = VL_RAND_RESET_I(1);
    vlSelf->clk2_flag = VL_RAND_RESET_I(1);
    vlSelf->rs1 = VL_RAND_RESET_I(5);
    vlSelf->rs2 = VL_RAND_RESET_I(5);
    vlSelf->rd = VL_RAND_RESET_I(5);
    vlSelf->funct3 = VL_RAND_RESET_I(3);
    vlSelf->funct7 = VL_RAND_RESET_I(7);
    vlSelf->type4 = VL_RAND_RESET_I(3);
    vlSelf->wen = VL_RAND_RESET_I(1);
    vlSelf->m1 = VL_RAND_RESET_I(1);
    vlSelf->m2 = VL_RAND_RESET_I(1);
    vlSelf->m3 = VL_RAND_RESET_I(1);
    vlSelf->m4 = VL_RAND_RESET_I(1);
    vlSelf->aluc = VL_RAND_RESET_I(2);
    vlSelf->PCadd4 = VL_RAND_RESET_I(32);
    vlSelf->result = VL_RAND_RESET_I(32);
    vlSelf->rin = VL_RAND_RESET_I(32);
    vlSelf->src1 = VL_RAND_RESET_I(32);
    vlSelf->src2 = VL_RAND_RESET_I(32);
    vlSelf->imm = VL_RAND_RESET_I(32);
    vlSelf->num1 = VL_RAND_RESET_I(32);
    vlSelf->num2 = VL_RAND_RESET_I(32);
    vlSelf->clk_count_inst__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->clk_count_inst__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->clk_count_inst__DOT__clk1_flag = VL_RAND_RESET_I(1);
    vlSelf->clk_count_inst__DOT__clk2_flag = VL_RAND_RESET_I(1);
    vlSelf->clk_count_inst__DOT__clk_cnt = VL_RAND_RESET_I(2);
    vlSelf->PC_inst__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->PC_inst__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->PC_inst__DOT__m3 = VL_RAND_RESET_I(1);
    vlSelf->PC_inst__DOT__clk2_flag = VL_RAND_RESET_I(1);
    vlSelf->PC_inst__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->PC_inst__DOT__PCadd4 = VL_RAND_RESET_I(32);
    vlSelf->PC_inst__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->PC_inst__DOT__pc_temp = VL_RAND_RESET_I(32);
    vlSelf->PC_inst__DOT__i3__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->PC_inst__DOT__i3__DOT__key = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(66, vlSelf->PC_inst__DOT__i3__DOT__lut);
    vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__key = VL_RAND_RESET_I(1);
    vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__default_out = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(66, vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__lut);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(33);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->control_unit_inst__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->control_unit_inst__DOT__rd_11_7 = VL_RAND_RESET_I(5);
    vlSelf->control_unit_inst__DOT__rs1_19_15 = VL_RAND_RESET_I(5);
    vlSelf->control_unit_inst__DOT__rs2_24_20 = VL_RAND_RESET_I(5);
    vlSelf->control_unit_inst__DOT__fun3_14_12 = VL_RAND_RESET_I(3);
    vlSelf->control_unit_inst__DOT__fun7_31_25 = VL_RAND_RESET_I(7);
    vlSelf->control_unit_inst__DOT__type1 = VL_RAND_RESET_I(3);
    vlSelf->control_unit_inst__DOT__aluc = VL_RAND_RESET_I(2);
    vlSelf->control_unit_inst__DOT__wen = VL_RAND_RESET_I(1);
    vlSelf->control_unit_inst__DOT__m1 = VL_RAND_RESET_I(1);
    vlSelf->control_unit_inst__DOT__m2 = VL_RAND_RESET_I(1);
    vlSelf->control_unit_inst__DOT__m3 = VL_RAND_RESET_I(1);
    vlSelf->control_unit_inst__DOT__m4 = VL_RAND_RESET_I(1);
    vlSelf->control_unit_inst__DOT__opcode_6_0 = VL_RAND_RESET_I(7);
    vlSelf->imm_extend_inst__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->imm_extend_inst__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->imm_extend_inst__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->imm_extend_inst__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->imm_extend_inst__DOT__funct7 = VL_RAND_RESET_I(7);
    vlSelf->imm_extend_inst__DOT__type3 = VL_RAND_RESET_I(3);
    vlSelf->imm_extend_inst__DOT__imm32 = VL_RAND_RESET_I(32);
    vlSelf->imm_extend_inst__DOT__imm_12 = VL_RAND_RESET_I(12);
    vlSelf->imm_extend_inst__DOT__imm_20 = VL_RAND_RESET_I(20);
    vlSelf->imm_extend_inst__DOT__imm_12_to_32 = VL_RAND_RESET_I(32);
    vlSelf->imm_extend_inst__DOT__imm_20_to_32 = VL_RAND_RESET_I(32);
    vlSelf->imm_extend_inst__DOT__RISB_type_inst__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->imm_extend_inst__DOT__RISB_type_inst__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->imm_extend_inst__DOT__RISB_type_inst__DOT__funct7 = VL_RAND_RESET_I(7);
    vlSelf->imm_extend_inst__DOT__RISB_type_inst__DOT__type2 = VL_RAND_RESET_I(3);
    vlSelf->imm_extend_inst__DOT__RISB_type_inst__DOT__imm_12 = VL_RAND_RESET_I(12);
    vlSelf->imm_extend_inst__DOT__UJ_type_inst__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->imm_extend_inst__DOT__UJ_type_inst__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->imm_extend_inst__DOT__UJ_type_inst__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->imm_extend_inst__DOT__UJ_type_inst__DOT__funct7 = VL_RAND_RESET_I(7);
    vlSelf->imm_extend_inst__DOT__UJ_type_inst__DOT__type2 = VL_RAND_RESET_I(3);
    vlSelf->imm_extend_inst__DOT__UJ_type_inst__DOT__imm_20 = VL_RAND_RESET_I(20);
    vlSelf->imm_extend_inst__DOT__Extend_12_inst__DOT__imm_12 = VL_RAND_RESET_I(12);
    vlSelf->imm_extend_inst__DOT__Extend_12_inst__DOT__imm_12_to_32 = VL_RAND_RESET_I(32);
    vlSelf->imm_extend_inst__DOT__Extend_20_inst__DOT__imm_20 = VL_RAND_RESET_I(20);
    vlSelf->imm_extend_inst__DOT__Extend_20_inst__DOT__imm_20_to_32 = VL_RAND_RESET_I(32);
    vlSelf->i1__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->i1__DOT__key = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(66, vlSelf->i1__DOT__lut);
    vlSelf->i1__DOT__i0__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->i1__DOT__i0__DOT__key = VL_RAND_RESET_I(1);
    vlSelf->i1__DOT__i0__DOT__default_out = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(66, vlSelf->i1__DOT__i0__DOT__lut);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->i1__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(33);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->i1__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->i1__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->i1__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->i1__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->i1__DOT__i0__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->i2__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->i2__DOT__key = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(66, vlSelf->i2__DOT__lut);
    vlSelf->i2__DOT__i0__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->i2__DOT__i0__DOT__key = VL_RAND_RESET_I(1);
    vlSelf->i2__DOT__i0__DOT__default_out = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(66, vlSelf->i2__DOT__i0__DOT__lut);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->i2__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(33);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->i2__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->i2__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->i2__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->i2__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->i2__DOT__i0__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->i4__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->i4__DOT__key = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(66, vlSelf->i4__DOT__lut);
    vlSelf->i4__DOT__i0__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->i4__DOT__i0__DOT__key = VL_RAND_RESET_I(1);
    vlSelf->i4__DOT__i0__DOT__default_out = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(66, vlSelf->i4__DOT__i0__DOT__lut);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->i4__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(33);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->i4__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->i4__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->i4__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->i4__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->i4__DOT__i0__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->alu_inst__DOT__aluc = VL_RAND_RESET_I(2);
    vlSelf->alu_inst__DOT__num1 = VL_RAND_RESET_I(32);
    vlSelf->alu_inst__DOT__num2 = VL_RAND_RESET_I(32);
    vlSelf->alu_inst__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->alu_inst__DOT__temp = VL_RAND_RESET_I(32);
}
