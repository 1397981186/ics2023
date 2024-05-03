// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv32.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrv32__Syms.h"
#include "Vrv32_rv32.h"

void Vrv32_rv32____Vdpiimwrap_control_unit_inst__DOT__ebreak_TOP__rv32(IData/*31:0*/ station, IData/*31:0*/ inst);

VL_ATTR_COLD void Vrv32_rv32___stl_sequent__TOP__rv32__0(Vrv32_rv32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrv32_rv32___stl_sequent__TOP__rv32__0\n"); );
    // Body
    vlSelf->__PVT__PC_inst__DOT__i3__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(((IData)(4U) + vlSelf->pc)));
    vlSelf->__PVT__i1__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(vlSelf->pc));
    vlSelf->__PVT__i4__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(((IData)(4U) + vlSelf->pc)));
    vlSelf->__PVT__PC_inst__DOT__i3__DOT__i0__DOT__data_list[1U] 
        = ((IData)(4U) + vlSelf->pc);
    vlSelf->__PVT__i4__DOT__i0__DOT__data_list[1U] 
        = ((IData)(4U) + vlSelf->pc);
    vlSelf->__PVT__i1__DOT__i0__DOT__data_list[1U] 
        = vlSelf->pc;
    vlSelf->rd = (0x1fU & (vlSymsp->TOP.inst >> 7U));
    vlSelf->funct3 = (7U & (vlSymsp->TOP.inst >> 0xcU));
    vlSelf->rs1 = (0x1fU & (vlSymsp->TOP.inst >> 0xfU));
    vlSelf->funct7 = (vlSymsp->TOP.inst >> 0x19U);
    vlSelf->rs2 = (0x1fU & (vlSymsp->TOP.inst >> 0x14U));
    if ((0x40U & vlSymsp->TOP.inst)) {
        if ((0x20U & vlSymsp->TOP.inst)) {
            if ((0x10U & vlSymsp->TOP.inst)) {
                if ((8U & vlSymsp->TOP.inst)) {
                    Vrv32_rv32____Vdpiimwrap_control_unit_inst__DOT__ebreak_TOP__rv32(2U, vlSymsp->TOP.inst);
                } else if ((4U & vlSymsp->TOP.inst)) {
                    Vrv32_rv32____Vdpiimwrap_control_unit_inst__DOT__ebreak_TOP__rv32(2U, vlSymsp->TOP.inst);
                } else if ((2U & vlSymsp->TOP.inst)) {
                    if ((1U & vlSymsp->TOP.inst)) {
                        if ((1U == (((IData)(vlSelf->funct7) 
                                     << 5U) | (IData)(vlSelf->rs2)))) {
                            Vrv32_rv32____Vdpiimwrap_control_unit_inst__DOT__ebreak_TOP__rv32(1U, vlSymsp->TOP.inst);
                        } else {
                            Vrv32_rv32____Vdpiimwrap_control_unit_inst__DOT__ebreak_TOP__rv32(2U, vlSymsp->TOP.inst);
                        }
                    } else {
                        Vrv32_rv32____Vdpiimwrap_control_unit_inst__DOT__ebreak_TOP__rv32(2U, vlSymsp->TOP.inst);
                    }
                } else {
                    Vrv32_rv32____Vdpiimwrap_control_unit_inst__DOT__ebreak_TOP__rv32(2U, vlSymsp->TOP.inst);
                }
            } else if ((8U & vlSymsp->TOP.inst)) {
                if ((4U & vlSymsp->TOP.inst)) {
                    if ((2U & vlSymsp->TOP.inst)) {
                        if ((1U & vlSymsp->TOP.inst)) {
                            vlSelf->type4 = 6U;
                            vlSelf->__PVT__wen = 1U;
                            vlSelf->__PVT__m1 = 0U;
                            vlSelf->__PVT__m2 = 1U;
                            vlSelf->__PVT__m3 = 1U;
                            vlSelf->__PVT__m4 = 0U;
                            vlSelf->__PVT__aluc = 1U;
                        } else {
                            Vrv32_rv32____Vdpiimwrap_control_unit_inst__DOT__ebreak_TOP__rv32(2U, vlSymsp->TOP.inst);
                        }
                    } else {
                        Vrv32_rv32____Vdpiimwrap_control_unit_inst__DOT__ebreak_TOP__rv32(2U, vlSymsp->TOP.inst);
                    }
                } else {
                    Vrv32_rv32____Vdpiimwrap_control_unit_inst__DOT__ebreak_TOP__rv32(2U, vlSymsp->TOP.inst);
                }
            } else if ((4U & vlSymsp->TOP.inst)) {
                if ((2U & vlSymsp->TOP.inst)) {
                    if ((1U & vlSymsp->TOP.inst)) {
                        vlSelf->type4 = 2U;
                        vlSelf->__PVT__wen = 1U;
                        vlSelf->__PVT__m1 = 1U;
                        vlSelf->__PVT__m2 = 1U;
                        vlSelf->__PVT__m3 = 1U;
                        vlSelf->__PVT__m4 = 0U;
                        vlSelf->__PVT__aluc = 2U;
                    } else {
                        Vrv32_rv32____Vdpiimwrap_control_unit_inst__DOT__ebreak_TOP__rv32(2U, vlSymsp->TOP.inst);
                    }
                } else {
                    Vrv32_rv32____Vdpiimwrap_control_unit_inst__DOT__ebreak_TOP__rv32(2U, vlSymsp->TOP.inst);
                }
            } else {
                Vrv32_rv32____Vdpiimwrap_control_unit_inst__DOT__ebreak_TOP__rv32(2U, vlSymsp->TOP.inst);
            }
        } else {
            Vrv32_rv32____Vdpiimwrap_control_unit_inst__DOT__ebreak_TOP__rv32(2U, vlSymsp->TOP.inst);
        }
    } else if ((0x20U & vlSymsp->TOP.inst)) {
        if ((0x10U & vlSymsp->TOP.inst)) {
            Vrv32_rv32____Vdpiimwrap_control_unit_inst__DOT__ebreak_TOP__rv32(2U, vlSymsp->TOP.inst);
        } else if ((8U & vlSymsp->TOP.inst)) {
            Vrv32_rv32____Vdpiimwrap_control_unit_inst__DOT__ebreak_TOP__rv32(2U, vlSymsp->TOP.inst);
        } else if ((4U & vlSymsp->TOP.inst)) {
            Vrv32_rv32____Vdpiimwrap_control_unit_inst__DOT__ebreak_TOP__rv32(2U, vlSymsp->TOP.inst);
        } else if ((2U & vlSymsp->TOP.inst)) {
            if ((1U & vlSymsp->TOP.inst)) {
                vlSelf->type4 = 3U;
                vlSelf->__PVT__wen = 0U;
                vlSelf->__PVT__m1 = 1U;
                vlSelf->__PVT__m2 = 1U;
                vlSelf->__PVT__m3 = 0U;
                vlSelf->__PVT__m4 = 1U;
                vlSelf->__PVT__aluc = 1U;
            } else {
                Vrv32_rv32____Vdpiimwrap_control_unit_inst__DOT__ebreak_TOP__rv32(2U, vlSymsp->TOP.inst);
            }
        } else {
            Vrv32_rv32____Vdpiimwrap_control_unit_inst__DOT__ebreak_TOP__rv32(2U, vlSymsp->TOP.inst);
        }
    } else if ((0x10U & vlSymsp->TOP.inst)) {
        if ((8U & vlSymsp->TOP.inst)) {
            Vrv32_rv32____Vdpiimwrap_control_unit_inst__DOT__ebreak_TOP__rv32(2U, vlSymsp->TOP.inst);
        } else if ((4U & vlSymsp->TOP.inst)) {
            if ((2U & vlSymsp->TOP.inst)) {
                if ((1U & vlSymsp->TOP.inst)) {
                    vlSelf->type4 = 4U;
                    vlSelf->__PVT__wen = 1U;
                    vlSelf->__PVT__m1 = 0U;
                    vlSelf->__PVT__m2 = 1U;
                    vlSelf->__PVT__m3 = 0U;
                    vlSelf->__PVT__m4 = 1U;
                    vlSelf->__PVT__aluc = 1U;
                } else {
                    Vrv32_rv32____Vdpiimwrap_control_unit_inst__DOT__ebreak_TOP__rv32(2U, vlSymsp->TOP.inst);
                }
            } else {
                Vrv32_rv32____Vdpiimwrap_control_unit_inst__DOT__ebreak_TOP__rv32(2U, vlSymsp->TOP.inst);
            }
        } else if ((2U & vlSymsp->TOP.inst)) {
            if ((1U & vlSymsp->TOP.inst)) {
                vlSelf->type4 = 2U;
                vlSelf->__PVT__wen = 1U;
                vlSelf->__PVT__m1 = 1U;
                vlSelf->__PVT__m2 = 1U;
                vlSelf->__PVT__m3 = 0U;
                vlSelf->__PVT__m4 = 1U;
                vlSelf->__PVT__aluc = 1U;
            } else {
                Vrv32_rv32____Vdpiimwrap_control_unit_inst__DOT__ebreak_TOP__rv32(2U, vlSymsp->TOP.inst);
            }
        } else {
            Vrv32_rv32____Vdpiimwrap_control_unit_inst__DOT__ebreak_TOP__rv32(2U, vlSymsp->TOP.inst);
        }
    } else {
        Vrv32_rv32____Vdpiimwrap_control_unit_inst__DOT__ebreak_TOP__rv32(2U, vlSymsp->TOP.inst);
    }
    vlSelf->__PVT__PC_inst__DOT__i3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->__PVT__m3) == vlSelf->__PVT__PC_inst__DOT__i3__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->__PVT__PC_inst__DOT__i3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->__PVT__PC_inst__DOT__i3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->__PVT__m3) == vlSelf->__PVT__PC_inst__DOT__i3__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->__PVT__i4__DOT__i0__DOT__hit = ((IData)(vlSelf->__PVT__m4) 
                                            == vlSelf->__PVT__i4__DOT__i0__DOT__key_list
                                            [0U]);
    vlSelf->__PVT__i4__DOT__i0__DOT__hit = ((IData)(vlSelf->__PVT__i4__DOT__i0__DOT__hit) 
                                            | ((IData)(vlSelf->__PVT__m4) 
                                               == vlSelf->__PVT__i4__DOT__i0__DOT__key_list
                                               [1U]));
    vlSelf->__PVT__i1__DOT__i0__DOT__hit = ((IData)(vlSelf->__PVT__m1) 
                                            == vlSelf->__PVT__i1__DOT__i0__DOT__key_list
                                            [0U]);
    vlSelf->__PVT__i1__DOT__i0__DOT__hit = ((IData)(vlSelf->__PVT__i1__DOT__i0__DOT__hit) 
                                            | ((IData)(vlSelf->__PVT__m1) 
                                               == vlSelf->__PVT__i1__DOT__i0__DOT__key_list
                                               [1U]));
    vlSelf->__PVT__i2__DOT__i0__DOT__hit = ((IData)(vlSelf->__PVT__m2) 
                                            == vlSelf->__PVT__i2__DOT__i0__DOT__key_list
                                            [0U]);
    vlSelf->__PVT__i2__DOT__i0__DOT__hit = ((IData)(vlSelf->__PVT__i2__DOT__i0__DOT__hit) 
                                            | ((IData)(vlSelf->__PVT__m2) 
                                               == vlSelf->__PVT__i2__DOT__i0__DOT__key_list
                                               [1U]));
    vlSelf->__PVT__imm_extend_inst__DOT__imm_12 = (
                                                   (2U 
                                                    == (IData)(vlSelf->type4))
                                                    ? 
                                                   (((IData)(vlSelf->funct7) 
                                                     << 5U) 
                                                    | (IData)(vlSelf->rs2))
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->type4))
                                                     ? 
                                                    (((IData)(vlSelf->funct7) 
                                                      << 5U) 
                                                     | (IData)(vlSelf->rd))
                                                     : 0U));
    vlSelf->__PVT__imm_extend_inst__DOT__imm_20 = (0xfffffU 
                                                   & ((4U 
                                                       == (IData)(vlSelf->type4))
                                                       ? 
                                                      (((IData)(vlSelf->funct7) 
                                                        << 0x19U) 
                                                       | (((IData)(vlSelf->rs2) 
                                                           << 0x14U) 
                                                          | (((IData)(vlSelf->rs1) 
                                                              << 0xfU) 
                                                             | ((IData)(vlSelf->funct3) 
                                                                << 0xcU))))
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelf->type4))
                                                        ? 
                                                       ((0x100000U 
                                                         & ((IData)(vlSelf->funct7) 
                                                            << 0xeU)) 
                                                        | (((IData)(vlSelf->rs1) 
                                                            << 0xfU) 
                                                           | (((IData)(vlSelf->funct3) 
                                                               << 0xcU) 
                                                              | ((0x800U 
                                                                  & ((IData)(vlSelf->rs2) 
                                                                     << 0xbU)) 
                                                                 | ((0x7e0U 
                                                                     & ((IData)(vlSelf->funct7) 
                                                                        << 5U)) 
                                                                    | (0x1eU 
                                                                       & (IData)(vlSelf->rs2)))))))
                                                        : 0U)));
    vlSelf->__PVT__imm_extend_inst__DOT__imm_12_to_32 
        = (((- (IData)((1U & ((IData)(vlSelf->__PVT__imm_extend_inst__DOT__imm_12) 
                              >> 0xbU)))) << 0xcU) 
           | (IData)(vlSelf->__PVT__imm_extend_inst__DOT__imm_12));
    vlSelf->__PVT__imm_extend_inst__DOT__imm_20_to_32 
        = (((- (IData)((1U & (vlSelf->__PVT__imm_extend_inst__DOT__imm_20 
                              >> 0x13U)))) << 0x14U) 
           | vlSelf->__PVT__imm_extend_inst__DOT__imm_20);
    vlSelf->__PVT__imm = ((4U & (IData)(vlSelf->type4))
                           ? ((2U & (IData)(vlSelf->type4))
                               ? ((1U & (IData)(vlSelf->type4))
                                   ? 0U : vlSelf->__PVT__imm_extend_inst__DOT__imm_20_to_32)
                               : ((1U & (IData)(vlSelf->type4))
                                   ? vlSelf->__PVT__imm_extend_inst__DOT__imm_12_to_32
                                   : vlSelf->__PVT__imm_extend_inst__DOT__imm_20_to_32))
                           : ((2U & (IData)(vlSelf->type4))
                               ? vlSelf->__PVT__imm_extend_inst__DOT__imm_12_to_32
                               : ((1U & (IData)(vlSelf->type4))
                                   ? vlSelf->__PVT__imm_extend_inst__DOT__imm_12_to_32
                                   : 0U)));
    vlSelf->__PVT__i2__DOT__i0__DOT__pair_list[0U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->__PVT__imm)));
    vlSelf->__PVT__i2__DOT__i0__DOT__data_list[0U] 
        = vlSelf->__PVT__imm;
}
