// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv32.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrv32__Syms.h"
#include "Vrv32_register_file.h"

VL_INLINE_OPT void Vrv32_register_file___ico_sequent__TOP__rv32__register_file_inst__0(Vrv32_register_file* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrv32_register_file___ico_sequent__TOP__rv32__register_file_inst__0\n"); );
    // Body
    vlSelf->__PVT__src1 = ((0U == (IData)(vlSymsp->TOP__rv32.rs1))
                            ? 0U : vlSelf->regs[vlSymsp->TOP__rv32.rs1]);
    vlSelf->__PVT__src2 = ((0U == (IData)(vlSymsp->TOP__rv32.rs2))
                            ? 0U : vlSelf->regs[vlSymsp->TOP__rv32.rs2]);
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
    if (vlSymsp->TOP.rst) {
        vlSelf->__PVT__i = 0x20U;
        __Vdlyvset__regs__v0 = 1U;
    } else {
        __Vdlyvval__regs__v32 = ((((1U == (IData)(vlSymsp->TOP__rv32.__PVT__clk_count_inst__DOT__clk_cnt)) 
                                   & (IData)(vlSymsp->TOP__rv32.__PVT__wen)) 
                                  & (0U != (IData)(vlSymsp->TOP__rv32.rd)))
                                  ? vlSymsp->TOP__rv32.__PVT__rin
                                  : vlSelf->regs[vlSymsp->TOP__rv32.rd]);
        __Vdlyvset__regs__v32 = 1U;
        __Vdlyvdim0__regs__v32 = vlSymsp->TOP__rv32.rd;
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
