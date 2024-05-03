// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv32.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrv32_register_file.h"

VL_ATTR_COLD void Vrv32_register_file___ctor_var_reset(Vrv32_register_file* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrv32_register_file___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__clk1_flag = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rd = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rin = VL_RAND_RESET_I(32);
    vlSelf->__PVT__src1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__src2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->regs[__Vi0] = VL_RAND_RESET_I(32);
    }
}
