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
    vlSelf->__PVT__PC_inst__DOT__i1__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->__PVT__PC_inst__DOT__i1__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelf->__PVT__PC_inst__DOT__i2__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->__PVT__PC_inst__DOT__i2__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelf->__PVT__i3__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->__PVT__i3__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelf->__PVT__i4__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->__PVT__i4__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelf->__PVT__i5__DOT__i0__DOT__key_list[0U] = 3U;
    vlSelf->__PVT__i5__DOT__i0__DOT__key_list[1U] = 2U;
    vlSelf->__PVT__i5__DOT__i0__DOT__key_list[2U] = 1U;
    vlSelf->__PVT__i5__DOT__i0__DOT__key_list[3U] = 0U;
    vlSelf->__PVT__i5__DOT__i0__DOT__data_list[0U] = 0xdeadbeafU;
    vlSelf->__PVT__i5__DOT__i0__DOT__pair_list[0U] = 0x3deadbeafULL;
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
    vlSelf->__PVT__IType = VL_RAND_RESET_I(3);
    vlSelf->__PVT__reg_wen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_wen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_ren = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wmask = VL_RAND_RESET_I(8);
    vlSelf->__PVT__rmask = VL_RAND_RESET_I(3);
    vlSelf->__PVT__m1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__m2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__m3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__m4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__m5 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__aluc = VL_RAND_RESET_I(5);
    vlSelf->__PVT__result = VL_RAND_RESET_I(32);
    vlSelf->__PVT__reg_in = VL_RAND_RESET_I(32);
    vlSelf->__PVT__imm32 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__num1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__num2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_rdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__PC_inst__DOT__npc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__PC_inst__DOT__npc_temp = VL_RAND_RESET_I(32);
    vlSelf->__PVT__PC_inst__DOT__PCaddIMM32 = VL_RAND_RESET_I(32);
    vlSelf->PC_inst__DOT____Vcellinp__i1____pinNumber2 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__PC_inst__DOT__i1__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(33);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__PC_inst__DOT__i1__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__PC_inst__DOT__i1__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__PC_inst__DOT__i1__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->__PVT__PC_inst__DOT__i1__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__PC_inst__DOT__i2__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(33);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__PC_inst__DOT__i2__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__PC_inst__DOT__i2__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__PC_inst__DOT__i2__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->__PVT__PC_inst__DOT__i2__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_inst__DOT__rdata_temp = VL_RAND_RESET_I(32);
    vlSelf->__PVT__imm_extend_inst__DOT__imm_12 = VL_RAND_RESET_I(12);
    vlSelf->__PVT__imm_extend_inst__DOT__imm_20 = VL_RAND_RESET_I(20);
    vlSelf->__PVT__imm_extend_inst__DOT__imm_12_to_32 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__imm_extend_inst__DOT__imm_20_to_32 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__i3__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(33);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__i3__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__i3__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__i3__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->__PVT__i3__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
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
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__i5__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(34);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__i5__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__i5__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__i5__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->__PVT__i5__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_mem_inst__DOT__pmem_read__0__Vfuncout = 0;
    vlSelf->__Vfunc_mem_inst__DOT__pmem_read__2__Vfuncout = 0;
}
