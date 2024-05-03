// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv32.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrv32_rv32.h"

VL_INLINE_OPT void Vrv32_rv32___nba_sequent__TOP__rv32__1(Vrv32_rv32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrv32_rv32___nba_sequent__TOP__rv32__1\n"); );
    // Body
    vlSelf->__PVT__clk_count_inst__DOT__clk_cnt = vlSelf->__Vdly__clk_count_inst__DOT__clk_cnt;
}
