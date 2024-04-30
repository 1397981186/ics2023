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
    if ((0U == (0x1fU & (vlSelf->inst >> 0x14U)))) {
        vlSelf->rv32__DOT__src2 = 0U;
        vlSelf->rv32__DOT__i2__DOT__i0__DOT__data_list[1U] = 0U;
    } else {
        vlSelf->rv32__DOT__src2 = vlSelf->rv32__DOT__register_file_inst__DOT__regs
            [(0x1fU & (vlSelf->inst >> 0x14U))];
        vlSelf->rv32__DOT__i2__DOT__i0__DOT__data_list[1U] 
            = vlSelf->rv32__DOT__register_file_inst__DOT__regs
            [(0x1fU & (vlSelf->inst >> 0x14U))];
    }
    if ((0U == (0x1fU & (vlSelf->inst >> 0xfU)))) {
        vlSelf->rv32__DOT__src1 = 0U;
        vlSelf->rv32__DOT__i1__DOT__i0__DOT__data_list[0U] = 0U;
    } else {
        vlSelf->rv32__DOT__src1 = vlSelf->rv32__DOT__register_file_inst__DOT__regs
            [(0x1fU & (vlSelf->inst >> 0xfU))];
        vlSelf->rv32__DOT__i1__DOT__i0__DOT__data_list[0U] 
            = vlSelf->rv32__DOT__register_file_inst__DOT__regs
            [(0x1fU & (vlSelf->inst >> 0xfU))];
    }
    if ((0x40U & vlSelf->inst)) {
        if ((0x20U & vlSelf->inst)) {
            if ((0x10U & vlSelf->inst)) {
                if ((8U & vlSelf->inst)) {
                    Vrv32___024root____Vdpiimwrap_rv32__DOT__control_unit_inst__DOT__ebreak_TOP(2U, vlSelf->inst);
                } else if ((4U & vlSelf->inst)) {
                    Vrv32___024root____Vdpiimwrap_rv32__DOT__control_unit_inst__DOT__ebreak_TOP(2U, vlSelf->inst);
                } else if ((2U & vlSelf->inst)) {
                    if ((1U & vlSelf->inst)) {
                        if ((1U == (vlSelf->inst >> 0x14U))) {
                            Vrv32___024root____Vdpiimwrap_rv32__DOT__control_unit_inst__DOT__ebreak_TOP(1U, vlSelf->inst);
                        } else {
                            Vrv32___024root____Vdpiimwrap_rv32__DOT__control_unit_inst__DOT__ebreak_TOP(2U, vlSelf->inst);
                        }
                    } else {
                        Vrv32___024root____Vdpiimwrap_rv32__DOT__control_unit_inst__DOT__ebreak_TOP(2U, vlSelf->inst);
                    }
                } else {
                    Vrv32___024root____Vdpiimwrap_rv32__DOT__control_unit_inst__DOT__ebreak_TOP(2U, vlSelf->inst);
                }
            } else if ((8U & vlSelf->inst)) {
                if ((4U & vlSelf->inst)) {
                    if ((2U & vlSelf->inst)) {
                        if ((1U & vlSelf->inst)) {
                            vlSelf->rv32__DOT__type4 = 6U;
                            vlSelf->rv32__DOT__wen = 1U;
                            vlSelf->rv32__DOT__m1 = 0U;
                            vlSelf->rv32__DOT__m2 = 1U;
                            vlSelf->rv32__DOT__m3 = 1U;
                            vlSelf->rv32__DOT__m4 = 0U;
                            vlSelf->rv32__DOT__aluc = 1U;
                        } else {
                            Vrv32___024root____Vdpiimwrap_rv32__DOT__control_unit_inst__DOT__ebreak_TOP(2U, vlSelf->inst);
                        }
                    } else {
                        Vrv32___024root____Vdpiimwrap_rv32__DOT__control_unit_inst__DOT__ebreak_TOP(2U, vlSelf->inst);
                    }
                } else {
                    Vrv32___024root____Vdpiimwrap_rv32__DOT__control_unit_inst__DOT__ebreak_TOP(2U, vlSelf->inst);
                }
            } else if ((4U & vlSelf->inst)) {
                if ((2U & vlSelf->inst)) {
                    if ((1U & vlSelf->inst)) {
                        vlSelf->rv32__DOT__type4 = 2U;
                        vlSelf->rv32__DOT__wen = 1U;
                        vlSelf->rv32__DOT__m1 = 1U;
                        vlSelf->rv32__DOT__m2 = 1U;
                        vlSelf->rv32__DOT__m3 = 1U;
                        vlSelf->rv32__DOT__m4 = 0U;
                        vlSelf->rv32__DOT__aluc = 2U;
                    } else {
                        Vrv32___024root____Vdpiimwrap_rv32__DOT__control_unit_inst__DOT__ebreak_TOP(2U, vlSelf->inst);
                    }
                } else {
                    Vrv32___024root____Vdpiimwrap_rv32__DOT__control_unit_inst__DOT__ebreak_TOP(2U, vlSelf->inst);
                }
            } else {
                Vrv32___024root____Vdpiimwrap_rv32__DOT__control_unit_inst__DOT__ebreak_TOP(2U, vlSelf->inst);
            }
        } else {
            Vrv32___024root____Vdpiimwrap_rv32__DOT__control_unit_inst__DOT__ebreak_TOP(2U, vlSelf->inst);
        }
    } else if ((0x20U & vlSelf->inst)) {
        if ((0x10U & vlSelf->inst)) {
            Vrv32___024root____Vdpiimwrap_rv32__DOT__control_unit_inst__DOT__ebreak_TOP(2U, vlSelf->inst);
        } else if ((8U & vlSelf->inst)) {
            Vrv32___024root____Vdpiimwrap_rv32__DOT__control_unit_inst__DOT__ebreak_TOP(2U, vlSelf->inst);
        } else if ((4U & vlSelf->inst)) {
            Vrv32___024root____Vdpiimwrap_rv32__DOT__control_unit_inst__DOT__ebreak_TOP(2U, vlSelf->inst);
        } else if ((2U & vlSelf->inst)) {
            if ((1U & vlSelf->inst)) {
                vlSelf->rv32__DOT__type4 = 3U;
                vlSelf->rv32__DOT__wen = 0U;
                vlSelf->rv32__DOT__m1 = 1U;
                vlSelf->rv32__DOT__m2 = 1U;
                vlSelf->rv32__DOT__m3 = 0U;
                vlSelf->rv32__DOT__m4 = 1U;
                vlSelf->rv32__DOT__aluc = 1U;
            } else {
                Vrv32___024root____Vdpiimwrap_rv32__DOT__control_unit_inst__DOT__ebreak_TOP(2U, vlSelf->inst);
            }
        } else {
            Vrv32___024root____Vdpiimwrap_rv32__DOT__control_unit_inst__DOT__ebreak_TOP(2U, vlSelf->inst);
        }
    } else if ((0x10U & vlSelf->inst)) {
        if ((8U & vlSelf->inst)) {
            Vrv32___024root____Vdpiimwrap_rv32__DOT__control_unit_inst__DOT__ebreak_TOP(2U, vlSelf->inst);
        } else if ((4U & vlSelf->inst)) {
            if ((2U & vlSelf->inst)) {
                if ((1U & vlSelf->inst)) {
                    vlSelf->rv32__DOT__type4 = 4U;
                    vlSelf->rv32__DOT__wen = 1U;
                    vlSelf->rv32__DOT__m1 = 0U;
                    vlSelf->rv32__DOT__m2 = 1U;
                    vlSelf->rv32__DOT__m3 = 0U;
                    vlSelf->rv32__DOT__m4 = 1U;
                    vlSelf->rv32__DOT__aluc = 1U;
                } else {
                    Vrv32___024root____Vdpiimwrap_rv32__DOT__control_unit_inst__DOT__ebreak_TOP(2U, vlSelf->inst);
                }
            } else {
                Vrv32___024root____Vdpiimwrap_rv32__DOT__control_unit_inst__DOT__ebreak_TOP(2U, vlSelf->inst);
            }
        } else if ((2U & vlSelf->inst)) {
            if ((1U & vlSelf->inst)) {
                vlSelf->rv32__DOT__type4 = 2U;
                vlSelf->rv32__DOT__wen = 1U;
                vlSelf->rv32__DOT__m1 = 1U;
                vlSelf->rv32__DOT__m2 = 1U;
                vlSelf->rv32__DOT__m3 = 0U;
                vlSelf->rv32__DOT__m4 = 1U;
                vlSelf->rv32__DOT__aluc = 1U;
            } else {
                Vrv32___024root____Vdpiimwrap_rv32__DOT__control_unit_inst__DOT__ebreak_TOP(2U, vlSelf->inst);
            }
        } else {
            Vrv32___024root____Vdpiimwrap_rv32__DOT__control_unit_inst__DOT__ebreak_TOP(2U, vlSelf->inst);
        }
    } else {
        Vrv32___024root____Vdpiimwrap_rv32__DOT__control_unit_inst__DOT__ebreak_TOP(2U, vlSelf->inst);
    }
    vlSelf->rv32__DOT__i2__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(vlSelf->rv32__DOT__src2));
    vlSelf->rv32__DOT__i1__DOT__i0__DOT__pair_list[0U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->rv32__DOT__src1)));
    vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->rv32__DOT__m3) == vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->rv32__DOT__m3) == vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->rv32__DOT__i4__DOT__i0__DOT__hit = ((IData)(vlSelf->rv32__DOT__m4) 
                                                == 
                                                vlSelf->rv32__DOT__i4__DOT__i0__DOT__key_list
                                                [0U]);
    vlSelf->rv32__DOT__i4__DOT__i0__DOT__hit = ((IData)(vlSelf->rv32__DOT__i4__DOT__i0__DOT__hit) 
                                                | ((IData)(vlSelf->rv32__DOT__m4) 
                                                   == 
                                                   vlSelf->rv32__DOT__i4__DOT__i0__DOT__key_list
                                                   [1U]));
    vlSelf->rv32__DOT__i2__DOT__i0__DOT__hit = ((IData)(vlSelf->rv32__DOT__m2) 
                                                == 
                                                vlSelf->rv32__DOT__i2__DOT__i0__DOT__key_list
                                                [0U]);
    vlSelf->rv32__DOT__i2__DOT__i0__DOT__hit = ((IData)(vlSelf->rv32__DOT__i2__DOT__i0__DOT__hit) 
                                                | ((IData)(vlSelf->rv32__DOT__m2) 
                                                   == 
                                                   vlSelf->rv32__DOT__i2__DOT__i0__DOT__key_list
                                                   [1U]));
    vlSelf->rv32__DOT__i1__DOT__i0__DOT__hit = ((IData)(vlSelf->rv32__DOT__m1) 
                                                == 
                                                vlSelf->rv32__DOT__i1__DOT__i0__DOT__key_list
                                                [0U]);
    vlSelf->rv32__DOT__i1__DOT__i0__DOT__hit = ((IData)(vlSelf->rv32__DOT__i1__DOT__i0__DOT__hit) 
                                                | ((IData)(vlSelf->rv32__DOT__m1) 
                                                   == 
                                                   vlSelf->rv32__DOT__i1__DOT__i0__DOT__key_list
                                                   [1U]));
    vlSelf->rv32__DOT__i1__DOT__i0__DOT__lut_out = 
        ((- (IData)(((IData)(vlSelf->rv32__DOT__m1) 
                     == vlSelf->rv32__DOT__i1__DOT__i0__DOT__key_list
                     [0U]))) & vlSelf->rv32__DOT__i1__DOT__i0__DOT__data_list
         [0U]);
    vlSelf->rv32__DOT__i1__DOT__i0__DOT__lut_out = 
        (vlSelf->rv32__DOT__i1__DOT__i0__DOT__lut_out 
         | ((- (IData)(((IData)(vlSelf->rv32__DOT__m1) 
                        == vlSelf->rv32__DOT__i1__DOT__i0__DOT__key_list
                        [1U]))) & vlSelf->rv32__DOT__i1__DOT__i0__DOT__data_list
            [1U]));
    vlSelf->rv32__DOT__num1 = vlSelf->rv32__DOT__i1__DOT__i0__DOT__lut_out;
    vlSelf->rv32__DOT__imm_extend_inst__DOT__imm_12 
        = (0xfffU & ((2U == (IData)(vlSelf->rv32__DOT__type4))
                      ? (vlSelf->inst >> 0x14U) : (
                                                   (3U 
                                                    == (IData)(vlSelf->rv32__DOT__type4))
                                                    ? 
                                                   ((0xfe0U 
                                                     & (vlSelf->inst 
                                                        >> 0x14U)) 
                                                    | (0x1fU 
                                                       & (vlSelf->inst 
                                                          >> 7U)))
                                                    : 0U)));
    vlSelf->rv32__DOT__imm_extend_inst__DOT__imm_20 
        = (0xfffffU & ((4U == (IData)(vlSelf->rv32__DOT__type4))
                        ? (0xfffff000U & vlSelf->inst)
                        : ((6U == (IData)(vlSelf->rv32__DOT__type4))
                            ? ((0x100000U & (vlSelf->inst 
                                             >> 0xbU)) 
                               | ((0xf8000U & vlSelf->inst) 
                                  | ((0x7000U & vlSelf->inst) 
                                     | ((0x800U & (vlSelf->inst 
                                                   >> 9U)) 
                                        | (0x7feU & 
                                           (vlSelf->inst 
                                            >> 0x14U))))))
                            : 0U)));
    vlSelf->rv32__DOT__imm_extend_inst__DOT__imm_12_to_32 
        = (((- (IData)((1U & ((IData)(vlSelf->rv32__DOT__imm_extend_inst__DOT__imm_12) 
                              >> 0xbU)))) << 0xcU) 
           | (IData)(vlSelf->rv32__DOT__imm_extend_inst__DOT__imm_12));
    vlSelf->rv32__DOT__imm_extend_inst__DOT__imm_20_to_32 
        = (((- (IData)((1U & (vlSelf->rv32__DOT__imm_extend_inst__DOT__imm_20 
                              >> 0x13U)))) << 0x14U) 
           | vlSelf->rv32__DOT__imm_extend_inst__DOT__imm_20);
    vlSelf->rv32__DOT__imm = ((4U & (IData)(vlSelf->rv32__DOT__type4))
                               ? ((2U & (IData)(vlSelf->rv32__DOT__type4))
                                   ? ((1U & (IData)(vlSelf->rv32__DOT__type4))
                                       ? 0U : vlSelf->rv32__DOT__imm_extend_inst__DOT__imm_20_to_32)
                                   : ((1U & (IData)(vlSelf->rv32__DOT__type4))
                                       ? vlSelf->rv32__DOT__imm_extend_inst__DOT__imm_12_to_32
                                       : vlSelf->rv32__DOT__imm_extend_inst__DOT__imm_20_to_32))
                               : ((2U & (IData)(vlSelf->rv32__DOT__type4))
                                   ? vlSelf->rv32__DOT__imm_extend_inst__DOT__imm_12_to_32
                                   : ((1U & (IData)(vlSelf->rv32__DOT__type4))
                                       ? vlSelf->rv32__DOT__imm_extend_inst__DOT__imm_12_to_32
                                       : 0U)));
    vlSelf->rv32__DOT__i2__DOT__i0__DOT__pair_list[0U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->rv32__DOT__imm)));
    vlSelf->rv32__DOT__i2__DOT__i0__DOT__data_list[0U] 
        = vlSelf->rv32__DOT__imm;
    vlSelf->rv32__DOT__i2__DOT__i0__DOT__lut_out = 
        ((- (IData)(((IData)(vlSelf->rv32__DOT__m2) 
                     == vlSelf->rv32__DOT__i2__DOT__i0__DOT__key_list
                     [0U]))) & vlSelf->rv32__DOT__i2__DOT__i0__DOT__data_list
         [0U]);
    vlSelf->rv32__DOT__i2__DOT__i0__DOT__lut_out = 
        (vlSelf->rv32__DOT__i2__DOT__i0__DOT__lut_out 
         | ((- (IData)(((IData)(vlSelf->rv32__DOT__m2) 
                        == vlSelf->rv32__DOT__i2__DOT__i0__DOT__key_list
                        [1U]))) & vlSelf->rv32__DOT__i2__DOT__i0__DOT__data_list
            [1U]));
    vlSelf->rv32__DOT__num2 = vlSelf->rv32__DOT__i2__DOT__i0__DOT__lut_out;
    vlSelf->rv32__DOT__result = ((1U == (IData)(vlSelf->rv32__DOT__aluc))
                                  ? (vlSelf->rv32__DOT__num1 
                                     + vlSelf->rv32__DOT__num2)
                                  : ((2U == (IData)(vlSelf->rv32__DOT__aluc))
                                      ? (0xfffffffeU 
                                         & (vlSelf->rv32__DOT__num1 
                                            + vlSelf->rv32__DOT__num2))
                                      : (vlSelf->rv32__DOT__num1 
                                         + vlSelf->rv32__DOT__num2)));
    vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__pair_list[0U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->rv32__DOT__result)));
    vlSelf->rv32__DOT__i4__DOT__i0__DOT__pair_list[0U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->rv32__DOT__result)));
    vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__data_list[0U] 
        = vlSelf->rv32__DOT__result;
    vlSelf->rv32__DOT__i4__DOT__i0__DOT__data_list[0U] 
        = vlSelf->rv32__DOT__result;
    vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->rv32__DOT__m3) 
                       == vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__lut_out 
        = (vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->rv32__DOT__m3) 
                          == vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->rv32__DOT__PC_inst__DOT__pc_temp = vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__lut_out;
    vlSelf->rv32__DOT__i4__DOT__i0__DOT__lut_out = 
        ((- (IData)(((IData)(vlSelf->rv32__DOT__m4) 
                     == vlSelf->rv32__DOT__i4__DOT__i0__DOT__key_list
                     [0U]))) & vlSelf->rv32__DOT__i4__DOT__i0__DOT__data_list
         [0U]);
    vlSelf->rv32__DOT__i4__DOT__i0__DOT__lut_out = 
        (vlSelf->rv32__DOT__i4__DOT__i0__DOT__lut_out 
         | ((- (IData)(((IData)(vlSelf->rv32__DOT__m4) 
                        == vlSelf->rv32__DOT__i4__DOT__i0__DOT__key_list
                        [1U]))) & vlSelf->rv32__DOT__i4__DOT__i0__DOT__data_list
            [1U]));
    vlSelf->rv32__DOT__rin = vlSelf->rv32__DOT__i4__DOT__i0__DOT__lut_out;
}

void Vrv32___024root___eval_ico(Vrv32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vrv32___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
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
    CData/*0:0*/ __Vdlyvset__rv32__DOT__register_file_inst__DOT__regs__v0;
    __Vdlyvset__rv32__DOT__register_file_inst__DOT__regs__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__rv32__DOT__register_file_inst__DOT__regs__v32;
    __Vdlyvdim0__rv32__DOT__register_file_inst__DOT__regs__v32 = 0;
    IData/*31:0*/ __Vdlyvval__rv32__DOT__register_file_inst__DOT__regs__v32;
    __Vdlyvval__rv32__DOT__register_file_inst__DOT__regs__v32 = 0;
    CData/*0:0*/ __Vdlyvset__rv32__DOT__register_file_inst__DOT__regs__v32;
    __Vdlyvset__rv32__DOT__register_file_inst__DOT__regs__v32 = 0;
    // Body
    __Vdly__rv32__DOT__clk_count_inst__DOT__clk_cnt 
        = vlSelf->rv32__DOT__clk_count_inst__DOT__clk_cnt;
    __Vdlyvset__rv32__DOT__register_file_inst__DOT__regs__v0 = 0U;
    __Vdlyvset__rv32__DOT__register_file_inst__DOT__regs__v32 = 0U;
    if (vlSelf->rst) {
        vlSelf->rv32__DOT__register_file_inst__DOT__i = 0x20U;
        __Vdly__rv32__DOT__clk_count_inst__DOT__clk_cnt = 0U;
        __Vdlyvset__rv32__DOT__register_file_inst__DOT__regs__v0 = 1U;
        vlSelf->pc = 0x80000000U;
    } else {
        if ((2U == (IData)(vlSelf->rv32__DOT__clk_count_inst__DOT__clk_cnt))) {
            __Vdly__rv32__DOT__clk_count_inst__DOT__clk_cnt = 0U;
            vlSelf->pc = vlSelf->rv32__DOT__PC_inst__DOT__pc_temp;
        } else {
            __Vdly__rv32__DOT__clk_count_inst__DOT__clk_cnt 
                = (3U & ((IData)(1U) + (IData)(vlSelf->rv32__DOT__clk_count_inst__DOT__clk_cnt)));
        }
        __Vdlyvval__rv32__DOT__register_file_inst__DOT__regs__v32 
            = ((((1U == (IData)(vlSelf->rv32__DOT__clk_count_inst__DOT__clk_cnt)) 
                 & (IData)(vlSelf->rv32__DOT__wen)) 
                & (0U != (0x1fU & (vlSelf->inst >> 7U))))
                ? vlSelf->rv32__DOT__rin : vlSelf->rv32__DOT__register_file_inst__DOT__regs
               [(0x1fU & (vlSelf->inst >> 7U))]);
        __Vdlyvset__rv32__DOT__register_file_inst__DOT__regs__v32 = 1U;
        __Vdlyvdim0__rv32__DOT__register_file_inst__DOT__regs__v32 
            = (0x1fU & (vlSelf->inst >> 7U));
    }
    if (__Vdlyvset__rv32__DOT__register_file_inst__DOT__regs__v0) {
        vlSelf->rv32__DOT__register_file_inst__DOT__regs[0U] = 0U;
        vlSelf->rv32__DOT__register_file_inst__DOT__regs[1U] = 0U;
        vlSelf->rv32__DOT__register_file_inst__DOT__regs[2U] = 0U;
        vlSelf->rv32__DOT__register_file_inst__DOT__regs[3U] = 0U;
        vlSelf->rv32__DOT__register_file_inst__DOT__regs[4U] = 0U;
        vlSelf->rv32__DOT__register_file_inst__DOT__regs[5U] = 0U;
        vlSelf->rv32__DOT__register_file_inst__DOT__regs[6U] = 0U;
        vlSelf->rv32__DOT__register_file_inst__DOT__regs[7U] = 0U;
        vlSelf->rv32__DOT__register_file_inst__DOT__regs[8U] = 0U;
        vlSelf->rv32__DOT__register_file_inst__DOT__regs[9U] = 0U;
        vlSelf->rv32__DOT__register_file_inst__DOT__regs[0xaU] = 0U;
        vlSelf->rv32__DOT__register_file_inst__DOT__regs[0xbU] = 0U;
        vlSelf->rv32__DOT__register_file_inst__DOT__regs[0xcU] = 0U;
        vlSelf->rv32__DOT__register_file_inst__DOT__regs[0xdU] = 0U;
        vlSelf->rv32__DOT__register_file_inst__DOT__regs[0xeU] = 0U;
        vlSelf->rv32__DOT__register_file_inst__DOT__regs[0xfU] = 0U;
        vlSelf->rv32__DOT__register_file_inst__DOT__regs[0x10U] = 0U;
        vlSelf->rv32__DOT__register_file_inst__DOT__regs[0x11U] = 0U;
        vlSelf->rv32__DOT__register_file_inst__DOT__regs[0x12U] = 0U;
        vlSelf->rv32__DOT__register_file_inst__DOT__regs[0x13U] = 0U;
        vlSelf->rv32__DOT__register_file_inst__DOT__regs[0x14U] = 0U;
        vlSelf->rv32__DOT__register_file_inst__DOT__regs[0x15U] = 0U;
        vlSelf->rv32__DOT__register_file_inst__DOT__regs[0x16U] = 0U;
        vlSelf->rv32__DOT__register_file_inst__DOT__regs[0x17U] = 0U;
        vlSelf->rv32__DOT__register_file_inst__DOT__regs[0x18U] = 0U;
        vlSelf->rv32__DOT__register_file_inst__DOT__regs[0x19U] = 0U;
        vlSelf->rv32__DOT__register_file_inst__DOT__regs[0x1aU] = 0U;
        vlSelf->rv32__DOT__register_file_inst__DOT__regs[0x1bU] = 0U;
        vlSelf->rv32__DOT__register_file_inst__DOT__regs[0x1cU] = 0U;
        vlSelf->rv32__DOT__register_file_inst__DOT__regs[0x1dU] = 0U;
        vlSelf->rv32__DOT__register_file_inst__DOT__regs[0x1eU] = 0U;
        vlSelf->rv32__DOT__register_file_inst__DOT__regs[0x1fU] = 0U;
    }
    if (__Vdlyvset__rv32__DOT__register_file_inst__DOT__regs__v32) {
        vlSelf->rv32__DOT__register_file_inst__DOT__regs[__Vdlyvdim0__rv32__DOT__register_file_inst__DOT__regs__v32] 
            = __Vdlyvval__rv32__DOT__register_file_inst__DOT__regs__v32;
    }
    vlSelf->rv32__DOT__clk_count_inst__DOT__clk_cnt 
        = __Vdly__rv32__DOT__clk_count_inst__DOT__clk_cnt;
    if ((0U == (0x1fU & (vlSelf->inst >> 0x14U)))) {
        vlSelf->rv32__DOT__src2 = 0U;
        vlSelf->rv32__DOT__i2__DOT__i0__DOT__data_list[1U] = 0U;
    } else {
        vlSelf->rv32__DOT__src2 = vlSelf->rv32__DOT__register_file_inst__DOT__regs
            [(0x1fU & (vlSelf->inst >> 0x14U))];
        vlSelf->rv32__DOT__i2__DOT__i0__DOT__data_list[1U] 
            = vlSelf->rv32__DOT__register_file_inst__DOT__regs
            [(0x1fU & (vlSelf->inst >> 0x14U))];
    }
    if ((0U == (0x1fU & (vlSelf->inst >> 0xfU)))) {
        vlSelf->rv32__DOT__src1 = 0U;
        vlSelf->rv32__DOT__i1__DOT__i0__DOT__data_list[0U] = 0U;
    } else {
        vlSelf->rv32__DOT__src1 = vlSelf->rv32__DOT__register_file_inst__DOT__regs
            [(0x1fU & (vlSelf->inst >> 0xfU))];
        vlSelf->rv32__DOT__i1__DOT__i0__DOT__data_list[0U] 
            = vlSelf->rv32__DOT__register_file_inst__DOT__regs
            [(0x1fU & (vlSelf->inst >> 0xfU))];
    }
    vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(((IData)(4U) + vlSelf->pc)));
    vlSelf->rv32__DOT__i1__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(vlSelf->pc));
    vlSelf->rv32__DOT__i4__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(((IData)(4U) + vlSelf->pc)));
    vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__data_list[1U] 
        = ((IData)(4U) + vlSelf->pc);
    vlSelf->rv32__DOT__i4__DOT__i0__DOT__data_list[1U] 
        = ((IData)(4U) + vlSelf->pc);
    vlSelf->rv32__DOT__i1__DOT__i0__DOT__data_list[1U] 
        = vlSelf->pc;
    vlSelf->rv32__DOT__i2__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(vlSelf->rv32__DOT__src2));
    vlSelf->rv32__DOT__i1__DOT__i0__DOT__pair_list[0U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->rv32__DOT__src1)));
}

VL_INLINE_OPT void Vrv32___024root___nba_sequent__TOP__1(Vrv32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->rv32__DOT__i1__DOT__i0__DOT__lut_out = 
        ((- (IData)(((IData)(vlSelf->rv32__DOT__m1) 
                     == vlSelf->rv32__DOT__i1__DOT__i0__DOT__key_list
                     [0U]))) & vlSelf->rv32__DOT__i1__DOT__i0__DOT__data_list
         [0U]);
    vlSelf->rv32__DOT__i1__DOT__i0__DOT__lut_out = 
        (vlSelf->rv32__DOT__i1__DOT__i0__DOT__lut_out 
         | ((- (IData)(((IData)(vlSelf->rv32__DOT__m1) 
                        == vlSelf->rv32__DOT__i1__DOT__i0__DOT__key_list
                        [1U]))) & vlSelf->rv32__DOT__i1__DOT__i0__DOT__data_list
            [1U]));
    vlSelf->rv32__DOT__num1 = vlSelf->rv32__DOT__i1__DOT__i0__DOT__lut_out;
    vlSelf->rv32__DOT__i2__DOT__i0__DOT__lut_out = 
        ((- (IData)(((IData)(vlSelf->rv32__DOT__m2) 
                     == vlSelf->rv32__DOT__i2__DOT__i0__DOT__key_list
                     [0U]))) & vlSelf->rv32__DOT__i2__DOT__i0__DOT__data_list
         [0U]);
    vlSelf->rv32__DOT__i2__DOT__i0__DOT__lut_out = 
        (vlSelf->rv32__DOT__i2__DOT__i0__DOT__lut_out 
         | ((- (IData)(((IData)(vlSelf->rv32__DOT__m2) 
                        == vlSelf->rv32__DOT__i2__DOT__i0__DOT__key_list
                        [1U]))) & vlSelf->rv32__DOT__i2__DOT__i0__DOT__data_list
            [1U]));
    vlSelf->rv32__DOT__num2 = vlSelf->rv32__DOT__i2__DOT__i0__DOT__lut_out;
    vlSelf->rv32__DOT__result = ((1U == (IData)(vlSelf->rv32__DOT__aluc))
                                  ? (vlSelf->rv32__DOT__num1 
                                     + vlSelf->rv32__DOT__num2)
                                  : ((2U == (IData)(vlSelf->rv32__DOT__aluc))
                                      ? (0xfffffffeU 
                                         & (vlSelf->rv32__DOT__num1 
                                            + vlSelf->rv32__DOT__num2))
                                      : (vlSelf->rv32__DOT__num1 
                                         + vlSelf->rv32__DOT__num2)));
    vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__pair_list[0U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->rv32__DOT__result)));
    vlSelf->rv32__DOT__i4__DOT__i0__DOT__pair_list[0U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->rv32__DOT__result)));
    vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__data_list[0U] 
        = vlSelf->rv32__DOT__result;
    vlSelf->rv32__DOT__i4__DOT__i0__DOT__data_list[0U] 
        = vlSelf->rv32__DOT__result;
    vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->rv32__DOT__m3) 
                       == vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__lut_out 
        = (vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->rv32__DOT__m3) 
                          == vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->rv32__DOT__PC_inst__DOT__pc_temp = vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__lut_out;
    vlSelf->rv32__DOT__i4__DOT__i0__DOT__lut_out = 
        ((- (IData)(((IData)(vlSelf->rv32__DOT__m4) 
                     == vlSelf->rv32__DOT__i4__DOT__i0__DOT__key_list
                     [0U]))) & vlSelf->rv32__DOT__i4__DOT__i0__DOT__data_list
         [0U]);
    vlSelf->rv32__DOT__i4__DOT__i0__DOT__lut_out = 
        (vlSelf->rv32__DOT__i4__DOT__i0__DOT__lut_out 
         | ((- (IData)(((IData)(vlSelf->rv32__DOT__m4) 
                        == vlSelf->rv32__DOT__i4__DOT__i0__DOT__key_list
                        [1U]))) & vlSelf->rv32__DOT__i4__DOT__i0__DOT__data_list
            [1U]));
    vlSelf->rv32__DOT__rin = vlSelf->rv32__DOT__i4__DOT__i0__DOT__lut_out;
}

void Vrv32___024root___eval_nba(Vrv32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vrv32___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        Vrv32___024root___nba_sequent__TOP__1(vlSelf);
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
                VL_FATAL_MT("/home/alemin/Desktop/ics2023/npc/vsrc/rv32.v", 57, "", "Input combinational region did not converge.");
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
                    VL_FATAL_MT("/home/alemin/Desktop/ics2023/npc/vsrc/rv32.v", 57, "", "Active region did not converge.");
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
                VL_FATAL_MT("/home/alemin/Desktop/ics2023/npc/vsrc/rv32.v", 57, "", "NBA region did not converge.");
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
