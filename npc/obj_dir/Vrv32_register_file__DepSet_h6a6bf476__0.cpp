// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv32.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrv32_register_file.h"

VL_INLINE_OPT void Vrv32_register_file___ico_sequent__TOP__rv32__register_file_inst__0(Vrv32_register_file* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrv32_register_file___ico_sequent__TOP__rv32__register_file_inst__0\n"); );
    // Body
    vlSelf->src1 = ((0U == (IData)(vlSelf->rs1)) ? 0U
                     : vlSelf->regs[vlSelf->rs1]);
    vlSelf->src2 = ((0U == (IData)(vlSelf->rs2)) ? 0U
                     : vlSelf->regs[vlSelf->rs2]);
    vlSelf->r_wen = ((IData)(vlSelf->clk1_flag) & (IData)(vlSelf->wen));
}

VL_INLINE_OPT void Vrv32_register_file___nba_sequent__TOP__rv32__register_file_inst__0(Vrv32_register_file* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrv32_register_file___nba_sequent__TOP__rv32__register_file_inst__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__regs__v0;
    __Vdlyvset__regs__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__regs__v32;
    __Vdlyvdim0__regs__v32 = 0;
    IData/*31:0*/ __Vdlyvval__regs__v32;
    __Vdlyvval__regs__v32 = 0;
    CData/*0:0*/ __Vdlyvset__regs__v32;
    __Vdlyvset__regs__v32 = 0;
    // Body
    __Vdlyvset__regs__v0 = 0U;
    __Vdlyvset__regs__v32 = 0U;
    if (vlSelf->rst) {
        vlSelf->i = 1U;
        vlSelf->i = 2U;
        vlSelf->i = 3U;
        vlSelf->i = 4U;
        vlSelf->i = 5U;
        vlSelf->i = 6U;
        vlSelf->i = 7U;
        vlSelf->i = 8U;
        vlSelf->i = 9U;
        vlSelf->i = 0xaU;
        vlSelf->i = 0xbU;
        vlSelf->i = 0xcU;
        vlSelf->i = 0xdU;
        vlSelf->i = 0xeU;
        vlSelf->i = 0xfU;
        vlSelf->i = 0x10U;
        vlSelf->i = 0x11U;
        vlSelf->i = 0x12U;
        vlSelf->i = 0x13U;
        vlSelf->i = 0x14U;
        vlSelf->i = 0x15U;
        vlSelf->i = 0x16U;
        vlSelf->i = 0x17U;
        vlSelf->i = 0x18U;
        vlSelf->i = 0x19U;
        vlSelf->i = 0x1aU;
        vlSelf->i = 0x1bU;
        vlSelf->i = 0x1cU;
        vlSelf->i = 0x1dU;
        vlSelf->i = 0x1eU;
        vlSelf->i = 0x1fU;
        vlSelf->i = 0x20U;
        __Vdlyvset__regs__v0 = 1U;
    } else {
        __Vdlyvval__regs__v32 = (((IData)(vlSelf->r_wen) 
                                  & (0U != (IData)(vlSelf->rd)))
                                  ? vlSelf->rin : vlSelf->regs
                                 [vlSelf->rd]);
        __Vdlyvset__regs__v32 = 1U;
        __Vdlyvdim0__regs__v32 = vlSelf->rd;
    }
    if (__Vdlyvset__regs__v0) {
        vlSelf->regs[0U] = 0U;
        vlSelf->regs[1U] = 0U;
        vlSelf->regs[2U] = 0U;
        vlSelf->regs[3U] = 0U;
        vlSelf->regs[4U] = 0U;
        vlSelf->regs[5U] = 0U;
        vlSelf->regs[6U] = 0U;
        vlSelf->regs[7U] = 0U;
        vlSelf->regs[8U] = 0U;
        vlSelf->regs[9U] = 0U;
        vlSelf->regs[0xaU] = 0U;
        vlSelf->regs[0xbU] = 0U;
        vlSelf->regs[0xcU] = 0U;
        vlSelf->regs[0xdU] = 0U;
        vlSelf->regs[0xeU] = 0U;
        vlSelf->regs[0xfU] = 0U;
        vlSelf->regs[0x10U] = 0U;
        vlSelf->regs[0x11U] = 0U;
        vlSelf->regs[0x12U] = 0U;
        vlSelf->regs[0x13U] = 0U;
        vlSelf->regs[0x14U] = 0U;
        vlSelf->regs[0x15U] = 0U;
        vlSelf->regs[0x16U] = 0U;
        vlSelf->regs[0x17U] = 0U;
        vlSelf->regs[0x18U] = 0U;
        vlSelf->regs[0x19U] = 0U;
        vlSelf->regs[0x1aU] = 0U;
        vlSelf->regs[0x1bU] = 0U;
        vlSelf->regs[0x1cU] = 0U;
        vlSelf->regs[0x1dU] = 0U;
        vlSelf->regs[0x1eU] = 0U;
        vlSelf->regs[0x1fU] = 0U;
    }
    if (__Vdlyvset__regs__v32) {
        vlSelf->regs[__Vdlyvdim0__regs__v32] = __Vdlyvval__regs__v32;
    }
}

VL_INLINE_OPT void Vrv32_register_file___nba_sequent__TOP__rv32__register_file_inst__1(Vrv32_register_file* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrv32_register_file___nba_sequent__TOP__rv32__register_file_inst__1\n"); );
    // Body
    vlSelf->src1 = ((0U == (IData)(vlSelf->rs1)) ? 0U
                     : vlSelf->regs[vlSelf->rs1]);
    vlSelf->src2 = ((0U == (IData)(vlSelf->rs2)) ? 0U
                     : vlSelf->regs[vlSelf->rs2]);
}

VL_INLINE_OPT void Vrv32_register_file___nba_sequent__TOP__rv32__register_file_inst__2(Vrv32_register_file* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrv32_register_file___nba_sequent__TOP__rv32__register_file_inst__2\n"); );
    // Body
    vlSelf->r_wen = ((IData)(vlSelf->clk1_flag) & (IData)(vlSelf->wen));
}
