// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv32.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrv32__Syms.h"
#include "Vrv32_rv32.h"

extern "C" void ebreak(int station, int inst);

VL_INLINE_OPT void Vrv32_rv32____Vdpiimwrap_control_unit_inst__DOT__ebreak_TOP__rv32(IData/*31:0*/ station, IData/*31:0*/ inst) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrv32_rv32____Vdpiimwrap_control_unit_inst__DOT__ebreak_TOP__rv32\n"); );
    // Body
    int station__Vcvt;
    for (size_t station__Vidx = 0; station__Vidx < 1; ++station__Vidx) station__Vcvt = station;
    int inst__Vcvt;
    for (size_t inst__Vidx = 0; inst__Vidx < 1; ++inst__Vidx) inst__Vcvt = inst;
    ebreak(station__Vcvt, inst__Vcvt);
}

VL_INLINE_OPT void Vrv32_rv32___ico_sequent__TOP__rv32__0(Vrv32_rv32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrv32_rv32___ico_sequent__TOP__rv32__0\n"); );
    // Body
    vlSelf->i1__DOT__i0__DOT__pair_list[1U] = (QData)((IData)(vlSelf->PC_inst__DOT__pc));
    vlSelf->pc = vlSelf->PC_inst__DOT__pc;
    vlSelf->clk_count_inst__DOT__clk2_flag = (2U == (IData)(vlSelf->clk_count_inst__DOT__clk_cnt));
    vlSelf->clk_count_inst__DOT__clk1_flag = (1U == (IData)(vlSelf->clk_count_inst__DOT__clk_cnt));
    vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__data_list[1U] 
        = ((IData)(4U) + vlSelf->PC_inst__DOT__pc);
    vlSelf->i4__DOT__i0__DOT__data_list[1U] = ((IData)(4U) 
                                               + vlSelf->PC_inst__DOT__pc);
    vlSelf->PC_inst__DOT__PCadd4 = ((IData)(4U) + vlSelf->PC_inst__DOT__pc);
    vlSelf->i1__DOT__i0__DOT__data_list[1U] = vlSelf->PC_inst__DOT__pc;
    vlSelf->PC_inst__DOT__clk2_flag = vlSelf->clk_count_inst__DOT__clk2_flag;
    vlSelf->clk2_flag = vlSelf->clk_count_inst__DOT__clk2_flag;
    vlSelf->clk1_flag = vlSelf->clk_count_inst__DOT__clk1_flag;
    vlSymsp->TOP__rv32__register_file_inst.clk1_flag 
        = vlSelf->clk_count_inst__DOT__clk1_flag;
    vlSelf->PCadd4 = vlSelf->PC_inst__DOT__PCadd4;
    vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(vlSelf->PC_inst__DOT__PCadd4));
    vlSelf->i4__DOT__i0__DOT__pair_list[1U] = (QData)((IData)(vlSelf->PC_inst__DOT__PCadd4));
}

VL_INLINE_OPT void Vrv32_rv32___ico_sequent__TOP__rv32__1(Vrv32_rv32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrv32_rv32___ico_sequent__TOP__rv32__1\n"); );
    // Body
    vlSymsp->TOP__rv32__register_file_inst.clk = vlSelf->clk;
    vlSelf->clk_count_inst__DOT__clk = vlSelf->clk;
    vlSelf->PC_inst__DOT__clk = vlSelf->clk;
    vlSymsp->TOP__rv32__register_file_inst.rst = vlSelf->rst;
    vlSelf->clk_count_inst__DOT__rst = vlSelf->rst;
    vlSelf->PC_inst__DOT__rst = vlSelf->rst;
    vlSelf->control_unit_inst__DOT__inst = vlSelf->inst;
    vlSelf->control_unit_inst__DOT__fun3_14_12 = (7U 
                                                  & (vlSelf->inst 
                                                     >> 0xcU));
    vlSelf->control_unit_inst__DOT__rd_11_7 = (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 7U));
    vlSelf->control_unit_inst__DOT__rs1_19_15 = (0x1fU 
                                                 & (vlSelf->inst 
                                                    >> 0xfU));
    vlSelf->control_unit_inst__DOT__opcode_6_0 = (0x7fU 
                                                  & vlSelf->inst);
    vlSelf->control_unit_inst__DOT__fun7_31_25 = (vlSelf->inst 
                                                  >> 0x19U);
    vlSelf->control_unit_inst__DOT__rs2_24_20 = (0x1fU 
                                                 & (vlSelf->inst 
                                                    >> 0x14U));
    vlSelf->funct3 = vlSelf->control_unit_inst__DOT__fun3_14_12;
    vlSelf->imm_extend_inst__DOT__funct3 = vlSelf->control_unit_inst__DOT__fun3_14_12;
    vlSymsp->TOP__rv32__register_file_inst.rd = vlSelf->control_unit_inst__DOT__rd_11_7;
    vlSelf->rd = vlSelf->control_unit_inst__DOT__rd_11_7;
    vlSelf->imm_extend_inst__DOT__rd = vlSelf->control_unit_inst__DOT__rd_11_7;
    vlSelf->rs1 = vlSelf->control_unit_inst__DOT__rs1_19_15;
    vlSelf->imm_extend_inst__DOT__rs1 = vlSelf->control_unit_inst__DOT__rs1_19_15;
    vlSymsp->TOP__rv32__register_file_inst.rs1 = vlSelf->control_unit_inst__DOT__rs1_19_15;
    vlSelf->funct7 = vlSelf->control_unit_inst__DOT__fun7_31_25;
    vlSelf->imm_extend_inst__DOT__funct7 = vlSelf->control_unit_inst__DOT__fun7_31_25;
    vlSelf->rs2 = vlSelf->control_unit_inst__DOT__rs2_24_20;
    vlSelf->imm_extend_inst__DOT__rs2 = vlSelf->control_unit_inst__DOT__rs2_24_20;
    vlSymsp->TOP__rv32__register_file_inst.rs2 = vlSelf->control_unit_inst__DOT__rs2_24_20;
    if ((0x40U & (IData)(vlSelf->control_unit_inst__DOT__opcode_6_0))) {
        if ((0x20U & (IData)(vlSelf->control_unit_inst__DOT__opcode_6_0))) {
            if ((0x10U & (IData)(vlSelf->control_unit_inst__DOT__opcode_6_0))) {
                if ((8U & (IData)(vlSelf->control_unit_inst__DOT__opcode_6_0))) {
                    Vrv32_rv32____Vdpiimwrap_control_unit_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst);
                } else if ((4U & (IData)(vlSelf->control_unit_inst__DOT__opcode_6_0))) {
                    Vrv32_rv32____Vdpiimwrap_control_unit_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst);
                } else if ((2U & (IData)(vlSelf->control_unit_inst__DOT__opcode_6_0))) {
                    if ((1U & (IData)(vlSelf->control_unit_inst__DOT__opcode_6_0))) {
                        if ((1U == (((IData)(vlSelf->control_unit_inst__DOT__fun7_31_25) 
                                     << 5U) | (IData)(vlSelf->control_unit_inst__DOT__rs2_24_20)))) {
                            Vrv32_rv32____Vdpiimwrap_control_unit_inst__DOT__ebreak_TOP__rv32(1U, vlSelf->inst);
                        } else {
                            Vrv32_rv32____Vdpiimwrap_control_unit_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst);
                        }
                    } else {
                        Vrv32_rv32____Vdpiimwrap_control_unit_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst);
                    }
                } else {
                    Vrv32_rv32____Vdpiimwrap_control_unit_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst);
                }
            } else if ((8U & (IData)(vlSelf->control_unit_inst__DOT__opcode_6_0))) {
                if ((4U & (IData)(vlSelf->control_unit_inst__DOT__opcode_6_0))) {
                    if ((2U & (IData)(vlSelf->control_unit_inst__DOT__opcode_6_0))) {
                        if ((1U & (IData)(vlSelf->control_unit_inst__DOT__opcode_6_0))) {
                            vlSelf->control_unit_inst__DOT__type1 = 6U;
                            vlSelf->control_unit_inst__DOT__wen = 1U;
                            vlSelf->control_unit_inst__DOT__m1 = 0U;
                            vlSelf->control_unit_inst__DOT__m2 = 1U;
                            vlSelf->control_unit_inst__DOT__m3 = 1U;
                            vlSelf->control_unit_inst__DOT__m4 = 0U;
                            vlSelf->control_unit_inst__DOT__aluc = 1U;
                        } else {
                            Vrv32_rv32____Vdpiimwrap_control_unit_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst);
                        }
                    } else {
                        Vrv32_rv32____Vdpiimwrap_control_unit_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst);
                    }
                } else {
                    Vrv32_rv32____Vdpiimwrap_control_unit_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst);
                }
            } else if ((4U & (IData)(vlSelf->control_unit_inst__DOT__opcode_6_0))) {
                if ((2U & (IData)(vlSelf->control_unit_inst__DOT__opcode_6_0))) {
                    if ((1U & (IData)(vlSelf->control_unit_inst__DOT__opcode_6_0))) {
                        vlSelf->control_unit_inst__DOT__type1 = 2U;
                        vlSelf->control_unit_inst__DOT__wen = 1U;
                        vlSelf->control_unit_inst__DOT__m1 = 1U;
                        vlSelf->control_unit_inst__DOT__m2 = 1U;
                        vlSelf->control_unit_inst__DOT__m3 = 1U;
                        vlSelf->control_unit_inst__DOT__m4 = 0U;
                        vlSelf->control_unit_inst__DOT__aluc = 2U;
                    } else {
                        Vrv32_rv32____Vdpiimwrap_control_unit_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst);
                    }
                } else {
                    Vrv32_rv32____Vdpiimwrap_control_unit_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst);
                }
            } else {
                Vrv32_rv32____Vdpiimwrap_control_unit_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst);
            }
        } else {
            Vrv32_rv32____Vdpiimwrap_control_unit_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst);
        }
    } else if ((0x20U & (IData)(vlSelf->control_unit_inst__DOT__opcode_6_0))) {
        if ((0x10U & (IData)(vlSelf->control_unit_inst__DOT__opcode_6_0))) {
            Vrv32_rv32____Vdpiimwrap_control_unit_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst);
        } else if ((8U & (IData)(vlSelf->control_unit_inst__DOT__opcode_6_0))) {
            Vrv32_rv32____Vdpiimwrap_control_unit_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst);
        } else if ((4U & (IData)(vlSelf->control_unit_inst__DOT__opcode_6_0))) {
            Vrv32_rv32____Vdpiimwrap_control_unit_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst);
        } else if ((2U & (IData)(vlSelf->control_unit_inst__DOT__opcode_6_0))) {
            if ((1U & (IData)(vlSelf->control_unit_inst__DOT__opcode_6_0))) {
                vlSelf->control_unit_inst__DOT__type1 = 3U;
                vlSelf->control_unit_inst__DOT__wen = 0U;
                vlSelf->control_unit_inst__DOT__m1 = 1U;
                vlSelf->control_unit_inst__DOT__m2 = 1U;
                vlSelf->control_unit_inst__DOT__m3 = 0U;
                vlSelf->control_unit_inst__DOT__m4 = 1U;
                vlSelf->control_unit_inst__DOT__aluc = 1U;
            } else {
                Vrv32_rv32____Vdpiimwrap_control_unit_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst);
            }
        } else {
            Vrv32_rv32____Vdpiimwrap_control_unit_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst);
        }
    } else if ((0x10U & (IData)(vlSelf->control_unit_inst__DOT__opcode_6_0))) {
        if ((8U & (IData)(vlSelf->control_unit_inst__DOT__opcode_6_0))) {
            Vrv32_rv32____Vdpiimwrap_control_unit_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst);
        } else if ((4U & (IData)(vlSelf->control_unit_inst__DOT__opcode_6_0))) {
            if ((2U & (IData)(vlSelf->control_unit_inst__DOT__opcode_6_0))) {
                if ((1U & (IData)(vlSelf->control_unit_inst__DOT__opcode_6_0))) {
                    vlSelf->control_unit_inst__DOT__type1 = 4U;
                    vlSelf->control_unit_inst__DOT__wen = 1U;
                    vlSelf->control_unit_inst__DOT__m1 = 0U;
                    vlSelf->control_unit_inst__DOT__m2 = 1U;
                    vlSelf->control_unit_inst__DOT__m3 = 0U;
                    vlSelf->control_unit_inst__DOT__m4 = 1U;
                    vlSelf->control_unit_inst__DOT__aluc = 1U;
                } else {
                    Vrv32_rv32____Vdpiimwrap_control_unit_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst);
                }
            } else {
                Vrv32_rv32____Vdpiimwrap_control_unit_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst);
            }
        } else if ((2U & (IData)(vlSelf->control_unit_inst__DOT__opcode_6_0))) {
            if ((1U & (IData)(vlSelf->control_unit_inst__DOT__opcode_6_0))) {
                vlSelf->control_unit_inst__DOT__type1 = 2U;
                vlSelf->control_unit_inst__DOT__wen = 1U;
                vlSelf->control_unit_inst__DOT__m1 = 1U;
                vlSelf->control_unit_inst__DOT__m2 = 1U;
                vlSelf->control_unit_inst__DOT__m3 = 0U;
                vlSelf->control_unit_inst__DOT__m4 = 1U;
                vlSelf->control_unit_inst__DOT__aluc = 1U;
            } else {
                Vrv32_rv32____Vdpiimwrap_control_unit_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst);
            }
        } else {
            Vrv32_rv32____Vdpiimwrap_control_unit_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst);
        }
    } else {
        Vrv32_rv32____Vdpiimwrap_control_unit_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst);
    }
    vlSelf->imm_extend_inst__DOT__UJ_type_inst__DOT__funct3 
        = vlSelf->imm_extend_inst__DOT__funct3;
    vlSelf->imm_extend_inst__DOT__RISB_type_inst__DOT__rd 
        = vlSelf->imm_extend_inst__DOT__rd;
    vlSelf->imm_extend_inst__DOT__UJ_type_inst__DOT__rs1 
        = vlSelf->imm_extend_inst__DOT__rs1;
    vlSelf->imm_extend_inst__DOT__RISB_type_inst__DOT__funct7 
        = vlSelf->imm_extend_inst__DOT__funct7;
    vlSelf->imm_extend_inst__DOT__UJ_type_inst__DOT__funct7 
        = vlSelf->imm_extend_inst__DOT__funct7;
    vlSelf->imm_extend_inst__DOT__RISB_type_inst__DOT__rs2 
        = vlSelf->imm_extend_inst__DOT__rs2;
    vlSelf->imm_extend_inst__DOT__UJ_type_inst__DOT__rs2 
        = vlSelf->imm_extend_inst__DOT__rs2;
    vlSelf->wen = vlSelf->control_unit_inst__DOT__wen;
    vlSelf->m3 = vlSelf->control_unit_inst__DOT__m3;
    vlSelf->m4 = vlSelf->control_unit_inst__DOT__m4;
    vlSelf->aluc = vlSelf->control_unit_inst__DOT__aluc;
    vlSelf->m1 = vlSelf->control_unit_inst__DOT__m1;
    vlSelf->m2 = vlSelf->control_unit_inst__DOT__m2;
    vlSelf->type4 = vlSelf->control_unit_inst__DOT__type1;
    vlSymsp->TOP__rv32__register_file_inst.wen = vlSelf->wen;
    vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__hit = 0U;
    vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__hit = ((IData)(vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__hit) 
                                                   | ((IData)(vlSelf->m3) 
                                                      == 
                                                      vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__key_list
                                                      [0U]));
    vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__hit = ((IData)(vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__hit) 
                                                   | ((IData)(vlSelf->m3) 
                                                      == 
                                                      vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__key_list
                                                      [1U]));
    vlSelf->PC_inst__DOT__m3 = vlSelf->m3;
    vlSelf->i4__DOT__i0__DOT__hit = 0U;
    vlSelf->i4__DOT__i0__DOT__hit = ((IData)(vlSelf->i4__DOT__i0__DOT__hit) 
                                     | ((IData)(vlSelf->m4) 
                                        == vlSelf->i4__DOT__i0__DOT__key_list
                                        [0U]));
    vlSelf->i4__DOT__i0__DOT__hit = ((IData)(vlSelf->i4__DOT__i0__DOT__hit) 
                                     | ((IData)(vlSelf->m4) 
                                        == vlSelf->i4__DOT__i0__DOT__key_list
                                        [1U]));
    vlSelf->i4__DOT__key = vlSelf->m4;
    vlSelf->alu_inst__DOT__aluc = vlSelf->aluc;
    vlSelf->i1__DOT__i0__DOT__hit = 0U;
    vlSelf->i1__DOT__i0__DOT__hit = ((IData)(vlSelf->i1__DOT__i0__DOT__hit) 
                                     | ((IData)(vlSelf->m1) 
                                        == vlSelf->i1__DOT__i0__DOT__key_list
                                        [0U]));
    vlSelf->i1__DOT__i0__DOT__hit = ((IData)(vlSelf->i1__DOT__i0__DOT__hit) 
                                     | ((IData)(vlSelf->m1) 
                                        == vlSelf->i1__DOT__i0__DOT__key_list
                                        [1U]));
    vlSelf->i1__DOT__key = vlSelf->m1;
    vlSelf->i2__DOT__i0__DOT__hit = 0U;
    vlSelf->i2__DOT__i0__DOT__hit = ((IData)(vlSelf->i2__DOT__i0__DOT__hit) 
                                     | ((IData)(vlSelf->m2) 
                                        == vlSelf->i2__DOT__i0__DOT__key_list
                                        [0U]));
    vlSelf->i2__DOT__i0__DOT__hit = ((IData)(vlSelf->i2__DOT__i0__DOT__hit) 
                                     | ((IData)(vlSelf->m2) 
                                        == vlSelf->i2__DOT__i0__DOT__key_list
                                        [1U]));
    vlSelf->i2__DOT__key = vlSelf->m2;
    vlSelf->imm_extend_inst__DOT__type3 = vlSelf->type4;
    vlSelf->imm_extend_inst__DOT__RISB_type_inst__DOT__imm_12 
        = ((2U == (IData)(vlSelf->type4)) ? (((IData)(vlSelf->control_unit_inst__DOT__fun7_31_25) 
                                              << 5U) 
                                             | (IData)(vlSelf->control_unit_inst__DOT__rs2_24_20))
            : ((3U == (IData)(vlSelf->type4)) ? (((IData)(vlSelf->control_unit_inst__DOT__fun7_31_25) 
                                                  << 5U) 
                                                 | (IData)(vlSelf->control_unit_inst__DOT__rd_11_7))
                : 0U));
    vlSelf->imm_extend_inst__DOT__UJ_type_inst__DOT__imm_20 
        = (0xfffffU & ((4U == (IData)(vlSelf->type4))
                        ? (((IData)(vlSelf->control_unit_inst__DOT__fun7_31_25) 
                            << 0x19U) | (((IData)(vlSelf->control_unit_inst__DOT__rs2_24_20) 
                                          << 0x14U) 
                                         | (((IData)(vlSelf->control_unit_inst__DOT__rs1_19_15) 
                                             << 0xfU) 
                                            | ((IData)(vlSelf->control_unit_inst__DOT__fun3_14_12) 
                                               << 0xcU))))
                        : ((6U == (IData)(vlSelf->type4))
                            ? ((0x100000U & ((IData)(vlSelf->control_unit_inst__DOT__fun7_31_25) 
                                             << 0xeU)) 
                               | (((IData)(vlSelf->control_unit_inst__DOT__rs1_19_15) 
                                   << 0xfU) | (((IData)(vlSelf->control_unit_inst__DOT__fun3_14_12) 
                                                << 0xcU) 
                                               | ((0x800U 
                                                   & ((IData)(vlSelf->control_unit_inst__DOT__rs2_24_20) 
                                                      << 0xbU)) 
                                                  | ((0x7e0U 
                                                      & ((IData)(vlSelf->control_unit_inst__DOT__fun7_31_25) 
                                                         << 5U)) 
                                                     | (0x1eU 
                                                        & (IData)(vlSelf->control_unit_inst__DOT__rs2_24_20)))))))
                            : 0U)));
    vlSelf->PC_inst__DOT__i3__DOT__key = vlSelf->PC_inst__DOT__m3;
    vlSelf->i4__DOT__i0__DOT__key = vlSelf->i4__DOT__key;
    vlSelf->i1__DOT__i0__DOT__key = vlSelf->i1__DOT__key;
    vlSelf->i2__DOT__i0__DOT__key = vlSelf->i2__DOT__key;
    vlSelf->imm_extend_inst__DOT__RISB_type_inst__DOT__type2 
        = vlSelf->imm_extend_inst__DOT__type3;
    vlSelf->imm_extend_inst__DOT__UJ_type_inst__DOT__type2 
        = vlSelf->imm_extend_inst__DOT__type3;
    vlSelf->imm_extend_inst__DOT__imm_12 = vlSelf->imm_extend_inst__DOT__RISB_type_inst__DOT__imm_12;
    vlSelf->imm_extend_inst__DOT__Extend_12_inst__DOT__imm_12_to_32 
        = (((- (IData)((1U & ((IData)(vlSelf->imm_extend_inst__DOT__RISB_type_inst__DOT__imm_12) 
                              >> 0xbU)))) << 0xcU) 
           | (IData)(vlSelf->imm_extend_inst__DOT__RISB_type_inst__DOT__imm_12));
    vlSelf->imm_extend_inst__DOT__imm_20 = vlSelf->imm_extend_inst__DOT__UJ_type_inst__DOT__imm_20;
    vlSelf->imm_extend_inst__DOT__Extend_20_inst__DOT__imm_20_to_32 
        = (((- (IData)((1U & (vlSelf->imm_extend_inst__DOT__UJ_type_inst__DOT__imm_20 
                              >> 0x13U)))) << 0x14U) 
           | vlSelf->imm_extend_inst__DOT__UJ_type_inst__DOT__imm_20);
    vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__key = vlSelf->PC_inst__DOT__i3__DOT__key;
    vlSelf->imm_extend_inst__DOT__Extend_12_inst__DOT__imm_12 
        = vlSelf->imm_extend_inst__DOT__imm_12;
    vlSelf->imm_extend_inst__DOT__imm_12_to_32 = vlSelf->imm_extend_inst__DOT__Extend_12_inst__DOT__imm_12_to_32;
    vlSelf->imm_extend_inst__DOT__Extend_20_inst__DOT__imm_20 
        = vlSelf->imm_extend_inst__DOT__imm_20;
    vlSelf->imm_extend_inst__DOT__imm_20_to_32 = vlSelf->imm_extend_inst__DOT__Extend_20_inst__DOT__imm_20_to_32;
    vlSelf->imm_extend_inst__DOT__imm32 = ((4U & (IData)(vlSelf->type4))
                                            ? ((2U 
                                                & (IData)(vlSelf->type4))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->type4))
                                                    ? 0U
                                                    : vlSelf->imm_extend_inst__DOT__Extend_20_inst__DOT__imm_20_to_32)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->type4))
                                                    ? vlSelf->imm_extend_inst__DOT__Extend_12_inst__DOT__imm_12_to_32
                                                    : vlSelf->imm_extend_inst__DOT__Extend_20_inst__DOT__imm_20_to_32))
                                            : ((2U 
                                                & (IData)(vlSelf->type4))
                                                ? vlSelf->imm_extend_inst__DOT__Extend_12_inst__DOT__imm_12_to_32
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->type4))
                                                    ? vlSelf->imm_extend_inst__DOT__Extend_12_inst__DOT__imm_12_to_32
                                                    : 0U)));
    vlSelf->imm = vlSelf->imm_extend_inst__DOT__imm32;
    vlSelf->i2__DOT__i0__DOT__pair_list[0U] = (0x100000000ULL 
                                               | (QData)((IData)(vlSelf->imm_extend_inst__DOT__imm32)));
    vlSelf->i2__DOT__i0__DOT__data_list[0U] = vlSelf->imm_extend_inst__DOT__imm32;
}

VL_INLINE_OPT void Vrv32_rv32___ico_sequent__TOP__rv32__2(Vrv32_rv32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrv32_rv32___ico_sequent__TOP__rv32__2\n"); );
    // Init
    VlWide<3>/*65:0*/ PC_inst__DOT____Vcellinp__i3____pinNumber3;
    VL_ZERO_W(66, PC_inst__DOT____Vcellinp__i3____pinNumber3);
    // Body
    vlSelf->src1 = vlSymsp->TOP__rv32__register_file_inst.src1;
    vlSelf->src2 = vlSymsp->TOP__rv32__register_file_inst.src2;
    vlSelf->i1__DOT__i0__DOT__pair_list[0U] = (0x100000000ULL 
                                               | (QData)((IData)(vlSelf->src1)));
    vlSelf->i1__DOT__lut[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(vlSelf->src1))));
    vlSelf->i1__DOT__lut[1U] = ((vlSelf->PC_inst__DOT__pc 
                                 << 1U) | (IData)((
                                                   (0x100000000ULL 
                                                    | (QData)((IData)(vlSelf->src1))) 
                                                   >> 0x20U)));
    vlSelf->i1__DOT__lut[2U] = (vlSelf->PC_inst__DOT__pc 
                                >> 0x1fU);
    vlSelf->i1__DOT__i0__DOT__data_list[0U] = vlSelf->src1;
    vlSelf->i2__DOT__i0__DOT__pair_list[1U] = (QData)((IData)(vlSelf->src2));
    vlSelf->i2__DOT__i0__DOT__data_list[1U] = vlSelf->src2;
    vlSelf->i2__DOT__lut[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(vlSelf->imm_extend_inst__DOT__imm32))));
    vlSelf->i2__DOT__lut[1U] = ((vlSelf->src2 << 1U) 
                                | (IData)(((0x100000000ULL 
                                            | (QData)((IData)(vlSelf->imm_extend_inst__DOT__imm32))) 
                                           >> 0x20U)));
    vlSelf->i2__DOT__lut[2U] = (vlSelf->src2 >> 0x1fU);
    vlSelf->i1__DOT__i0__DOT__lut[0U] = vlSelf->i1__DOT__lut[0U];
    vlSelf->i1__DOT__i0__DOT__lut[1U] = vlSelf->i1__DOT__lut[1U];
    vlSelf->i1__DOT__i0__DOT__lut[2U] = vlSelf->i1__DOT__lut[2U];
    vlSelf->i1__DOT__i0__DOT__lut_out = 0U;
    vlSelf->i1__DOT__i0__DOT__lut_out = (vlSelf->i1__DOT__i0__DOT__lut_out 
                                         | ((- (IData)(
                                                       ((IData)(vlSelf->m1) 
                                                        == 
                                                        vlSelf->i1__DOT__i0__DOT__key_list
                                                        [0U]))) 
                                            & vlSelf->i1__DOT__i0__DOT__data_list
                                            [0U]));
    vlSelf->i1__DOT__i0__DOT__lut_out = (vlSelf->i1__DOT__i0__DOT__lut_out 
                                         | ((- (IData)(
                                                       ((IData)(vlSelf->m1) 
                                                        == 
                                                        vlSelf->i1__DOT__i0__DOT__key_list
                                                        [1U]))) 
                                            & vlSelf->i1__DOT__i0__DOT__data_list
                                            [1U]));
    vlSelf->i1__DOT__i0__DOT__out = vlSelf->i1__DOT__i0__DOT__lut_out;
    vlSelf->i2__DOT__i0__DOT__lut_out = 0U;
    vlSelf->i2__DOT__i0__DOT__lut_out = (vlSelf->i2__DOT__i0__DOT__lut_out 
                                         | ((- (IData)(
                                                       ((IData)(vlSelf->m2) 
                                                        == 
                                                        vlSelf->i2__DOT__i0__DOT__key_list
                                                        [0U]))) 
                                            & vlSelf->i2__DOT__i0__DOT__data_list
                                            [0U]));
    vlSelf->i2__DOT__i0__DOT__lut_out = (vlSelf->i2__DOT__i0__DOT__lut_out 
                                         | ((- (IData)(
                                                       ((IData)(vlSelf->m2) 
                                                        == 
                                                        vlSelf->i2__DOT__i0__DOT__key_list
                                                        [1U]))) 
                                            & vlSelf->i2__DOT__i0__DOT__data_list
                                            [1U]));
    vlSelf->i2__DOT__i0__DOT__out = vlSelf->i2__DOT__i0__DOT__lut_out;
    vlSelf->i2__DOT__i0__DOT__lut[0U] = vlSelf->i2__DOT__lut[0U];
    vlSelf->i2__DOT__i0__DOT__lut[1U] = vlSelf->i2__DOT__lut[1U];
    vlSelf->i2__DOT__i0__DOT__lut[2U] = vlSelf->i2__DOT__lut[2U];
    vlSelf->i1__DOT__out = vlSelf->i1__DOT__i0__DOT__out;
    vlSelf->i2__DOT__out = vlSelf->i2__DOT__i0__DOT__out;
    vlSelf->alu_inst__DOT__num1 = vlSelf->i1__DOT__out;
    vlSelf->num1 = vlSelf->i1__DOT__out;
    vlSelf->alu_inst__DOT__num2 = vlSelf->i2__DOT__out;
    vlSelf->num2 = vlSelf->i2__DOT__out;
    vlSelf->alu_inst__DOT__result = ((1U == (IData)(vlSelf->aluc))
                                      ? (vlSelf->i1__DOT__out 
                                         + vlSelf->i2__DOT__out)
                                      : ((2U == (IData)(vlSelf->aluc))
                                          ? ((vlSelf->i1__DOT__out 
                                              + vlSelf->i2__DOT__out) 
                                             & vlSelf->alu_inst__DOT__temp)
                                          : (vlSelf->i1__DOT__out 
                                             + vlSelf->i2__DOT__out)));
    vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__pair_list[0U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->alu_inst__DOT__result)));
    vlSelf->i4__DOT__i0__DOT__pair_list[0U] = (0x100000000ULL 
                                               | (QData)((IData)(vlSelf->alu_inst__DOT__result)));
    vlSelf->result = vlSelf->alu_inst__DOT__result;
    PC_inst__DOT____Vcellinp__i3____pinNumber3[0U] 
        = (IData)((0x100000000ULL | (QData)((IData)(vlSelf->alu_inst__DOT__result))));
    PC_inst__DOT____Vcellinp__i3____pinNumber3[1U] 
        = ((vlSelf->PC_inst__DOT__PCadd4 << 1U) | (IData)(
                                                          ((0x100000000ULL 
                                                            | (QData)((IData)(vlSelf->alu_inst__DOT__result))) 
                                                           >> 0x20U)));
    PC_inst__DOT____Vcellinp__i3____pinNumber3[2U] 
        = (vlSelf->PC_inst__DOT__PCadd4 >> 0x1fU);
    vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__data_list[0U] 
        = vlSelf->alu_inst__DOT__result;
    vlSelf->i4__DOT__i0__DOT__data_list[0U] = vlSelf->alu_inst__DOT__result;
    vlSelf->PC_inst__DOT__result = vlSelf->result;
    vlSelf->PC_inst__DOT__i3__DOT__lut[0U] = PC_inst__DOT____Vcellinp__i3____pinNumber3[0U];
    vlSelf->PC_inst__DOT__i3__DOT__lut[1U] = PC_inst__DOT____Vcellinp__i3____pinNumber3[1U];
    vlSelf->PC_inst__DOT__i3__DOT__lut[2U] = PC_inst__DOT____Vcellinp__i3____pinNumber3[2U];
    vlSelf->i4__DOT__lut[0U] = PC_inst__DOT____Vcellinp__i3____pinNumber3[0U];
    vlSelf->i4__DOT__lut[1U] = PC_inst__DOT____Vcellinp__i3____pinNumber3[1U];
    vlSelf->i4__DOT__lut[2U] = PC_inst__DOT____Vcellinp__i3____pinNumber3[2U];
    vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__lut_out = 0U;
    vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__lut_out 
        = (vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->m3) == vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__key_list
                          [0U]))) & vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__data_list
              [0U]));
    vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__lut_out 
        = (vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->m3) == vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__out = vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__lut_out;
    vlSelf->i4__DOT__i0__DOT__lut_out = 0U;
    vlSelf->i4__DOT__i0__DOT__lut_out = (vlSelf->i4__DOT__i0__DOT__lut_out 
                                         | ((- (IData)(
                                                       ((IData)(vlSelf->m4) 
                                                        == 
                                                        vlSelf->i4__DOT__i0__DOT__key_list
                                                        [0U]))) 
                                            & vlSelf->i4__DOT__i0__DOT__data_list
                                            [0U]));
    vlSelf->i4__DOT__i0__DOT__lut_out = (vlSelf->i4__DOT__i0__DOT__lut_out 
                                         | ((- (IData)(
                                                       ((IData)(vlSelf->m4) 
                                                        == 
                                                        vlSelf->i4__DOT__i0__DOT__key_list
                                                        [1U]))) 
                                            & vlSelf->i4__DOT__i0__DOT__data_list
                                            [1U]));
    vlSelf->i4__DOT__i0__DOT__out = vlSelf->i4__DOT__i0__DOT__lut_out;
    vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__lut[0U] 
        = vlSelf->PC_inst__DOT__i3__DOT__lut[0U];
    vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__lut[1U] 
        = vlSelf->PC_inst__DOT__i3__DOT__lut[1U];
    vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__lut[2U] 
        = vlSelf->PC_inst__DOT__i3__DOT__lut[2U];
    vlSelf->i4__DOT__i0__DOT__lut[0U] = vlSelf->i4__DOT__lut[0U];
    vlSelf->i4__DOT__i0__DOT__lut[1U] = vlSelf->i4__DOT__lut[1U];
    vlSelf->i4__DOT__i0__DOT__lut[2U] = vlSelf->i4__DOT__lut[2U];
    vlSelf->PC_inst__DOT__i3__DOT__out = vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__out;
    vlSelf->i4__DOT__out = vlSelf->i4__DOT__i0__DOT__out;
    vlSelf->PC_inst__DOT__pc_temp = vlSelf->PC_inst__DOT__i3__DOT__out;
    vlSymsp->TOP__rv32__register_file_inst.rin = vlSelf->i4__DOT__out;
    vlSelf->rin = vlSelf->i4__DOT__out;
}

VL_INLINE_OPT void Vrv32_rv32___nba_sequent__TOP__rv32__0(Vrv32_rv32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrv32_rv32___nba_sequent__TOP__rv32__0\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->clk_count_inst__DOT__clk_cnt = 0U;
        vlSelf->PC_inst__DOT__pc = 0x80000000U;
    } else {
        vlSelf->clk_count_inst__DOT__clk_cnt = ((2U 
                                                 == (IData)(vlSelf->clk_count_inst__DOT__clk_cnt))
                                                 ? 0U
                                                 : 
                                                (3U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->clk_count_inst__DOT__clk_cnt))));
        if (vlSelf->clk_count_inst__DOT__clk2_flag) {
            vlSelf->PC_inst__DOT__pc = vlSelf->PC_inst__DOT__i3__DOT__out;
        }
    }
    vlSelf->clk_count_inst__DOT__clk2_flag = (2U == (IData)(vlSelf->clk_count_inst__DOT__clk_cnt));
    vlSelf->clk_count_inst__DOT__clk1_flag = (1U == (IData)(vlSelf->clk_count_inst__DOT__clk_cnt));
    vlSelf->i1__DOT__i0__DOT__pair_list[1U] = (QData)((IData)(vlSelf->PC_inst__DOT__pc));
    vlSelf->pc = vlSelf->PC_inst__DOT__pc;
    vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__data_list[1U] 
        = ((IData)(4U) + vlSelf->PC_inst__DOT__pc);
    vlSelf->i4__DOT__i0__DOT__data_list[1U] = ((IData)(4U) 
                                               + vlSelf->PC_inst__DOT__pc);
    vlSelf->PC_inst__DOT__PCadd4 = ((IData)(4U) + vlSelf->PC_inst__DOT__pc);
    vlSelf->i1__DOT__i0__DOT__data_list[1U] = vlSelf->PC_inst__DOT__pc;
    vlSelf->PC_inst__DOT__clk2_flag = vlSelf->clk_count_inst__DOT__clk2_flag;
    vlSelf->clk2_flag = vlSelf->clk_count_inst__DOT__clk2_flag;
    vlSelf->clk1_flag = vlSelf->clk_count_inst__DOT__clk1_flag;
    vlSymsp->TOP__rv32__register_file_inst.clk1_flag 
        = vlSelf->clk_count_inst__DOT__clk1_flag;
    vlSelf->PCadd4 = vlSelf->PC_inst__DOT__PCadd4;
    vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(vlSelf->PC_inst__DOT__PCadd4));
    vlSelf->i4__DOT__i0__DOT__pair_list[1U] = (QData)((IData)(vlSelf->PC_inst__DOT__PCadd4));
}

VL_INLINE_OPT void Vrv32_rv32___nba_sequent__TOP__rv32__1(Vrv32_rv32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrv32_rv32___nba_sequent__TOP__rv32__1\n"); );
    // Body
    vlSelf->src1 = vlSymsp->TOP__rv32__register_file_inst.src1;
    vlSelf->src2 = vlSymsp->TOP__rv32__register_file_inst.src2;
    vlSelf->i1__DOT__i0__DOT__pair_list[0U] = (0x100000000ULL 
                                               | (QData)((IData)(vlSelf->src1)));
    vlSelf->i1__DOT__i0__DOT__data_list[0U] = vlSelf->src1;
    vlSelf->i2__DOT__i0__DOT__pair_list[1U] = (QData)((IData)(vlSelf->src2));
    vlSelf->i2__DOT__i0__DOT__data_list[1U] = vlSelf->src2;
    vlSelf->i2__DOT__lut[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(vlSelf->imm_extend_inst__DOT__imm32))));
    vlSelf->i2__DOT__lut[1U] = ((vlSelf->src2 << 1U) 
                                | (IData)(((0x100000000ULL 
                                            | (QData)((IData)(vlSelf->imm_extend_inst__DOT__imm32))) 
                                           >> 0x20U)));
    vlSelf->i2__DOT__lut[2U] = (vlSelf->src2 >> 0x1fU);
    vlSelf->i2__DOT__i0__DOT__lut_out = 0U;
    vlSelf->i2__DOT__i0__DOT__lut_out = (vlSelf->i2__DOT__i0__DOT__lut_out 
                                         | ((- (IData)(
                                                       ((IData)(vlSelf->m2) 
                                                        == 
                                                        vlSelf->i2__DOT__i0__DOT__key_list
                                                        [0U]))) 
                                            & vlSelf->i2__DOT__i0__DOT__data_list
                                            [0U]));
    vlSelf->i2__DOT__i0__DOT__lut_out = (vlSelf->i2__DOT__i0__DOT__lut_out 
                                         | ((- (IData)(
                                                       ((IData)(vlSelf->m2) 
                                                        == 
                                                        vlSelf->i2__DOT__i0__DOT__key_list
                                                        [1U]))) 
                                            & vlSelf->i2__DOT__i0__DOT__data_list
                                            [1U]));
    vlSelf->i2__DOT__i0__DOT__out = vlSelf->i2__DOT__i0__DOT__lut_out;
    vlSelf->i2__DOT__i0__DOT__lut[0U] = vlSelf->i2__DOT__lut[0U];
    vlSelf->i2__DOT__i0__DOT__lut[1U] = vlSelf->i2__DOT__lut[1U];
    vlSelf->i2__DOT__i0__DOT__lut[2U] = vlSelf->i2__DOT__lut[2U];
    vlSelf->i2__DOT__out = vlSelf->i2__DOT__i0__DOT__out;
    vlSelf->alu_inst__DOT__num2 = vlSelf->i2__DOT__out;
    vlSelf->num2 = vlSelf->i2__DOT__out;
}

VL_INLINE_OPT void Vrv32_rv32___nba_comb__TOP__rv32__0(Vrv32_rv32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrv32_rv32___nba_comb__TOP__rv32__0\n"); );
    // Init
    VlWide<3>/*65:0*/ PC_inst__DOT____Vcellinp__i3____pinNumber3;
    VL_ZERO_W(66, PC_inst__DOT____Vcellinp__i3____pinNumber3);
    // Body
    vlSelf->i1__DOT__lut[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(vlSelf->src1))));
    vlSelf->i1__DOT__lut[1U] = ((vlSelf->PC_inst__DOT__pc 
                                 << 1U) | (IData)((
                                                   (0x100000000ULL 
                                                    | (QData)((IData)(vlSelf->src1))) 
                                                   >> 0x20U)));
    vlSelf->i1__DOT__lut[2U] = (vlSelf->PC_inst__DOT__pc 
                                >> 0x1fU);
    vlSelf->i1__DOT__i0__DOT__lut_out = 0U;
    vlSelf->i1__DOT__i0__DOT__lut_out = (vlSelf->i1__DOT__i0__DOT__lut_out 
                                         | ((- (IData)(
                                                       ((IData)(vlSelf->m1) 
                                                        == 
                                                        vlSelf->i1__DOT__i0__DOT__key_list
                                                        [0U]))) 
                                            & vlSelf->i1__DOT__i0__DOT__data_list
                                            [0U]));
    vlSelf->i1__DOT__i0__DOT__lut_out = (vlSelf->i1__DOT__i0__DOT__lut_out 
                                         | ((- (IData)(
                                                       ((IData)(vlSelf->m1) 
                                                        == 
                                                        vlSelf->i1__DOT__i0__DOT__key_list
                                                        [1U]))) 
                                            & vlSelf->i1__DOT__i0__DOT__data_list
                                            [1U]));
    vlSelf->i1__DOT__i0__DOT__out = vlSelf->i1__DOT__i0__DOT__lut_out;
    vlSelf->i1__DOT__i0__DOT__lut[0U] = vlSelf->i1__DOT__lut[0U];
    vlSelf->i1__DOT__i0__DOT__lut[1U] = vlSelf->i1__DOT__lut[1U];
    vlSelf->i1__DOT__i0__DOT__lut[2U] = vlSelf->i1__DOT__lut[2U];
    vlSelf->i1__DOT__out = vlSelf->i1__DOT__i0__DOT__out;
    vlSelf->alu_inst__DOT__num1 = vlSelf->i1__DOT__out;
    vlSelf->num1 = vlSelf->i1__DOT__out;
    vlSelf->alu_inst__DOT__result = ((1U == (IData)(vlSelf->aluc))
                                      ? (vlSelf->i1__DOT__out 
                                         + vlSelf->i2__DOT__out)
                                      : ((2U == (IData)(vlSelf->aluc))
                                          ? ((vlSelf->i1__DOT__out 
                                              + vlSelf->i2__DOT__out) 
                                             & vlSelf->alu_inst__DOT__temp)
                                          : (vlSelf->i1__DOT__out 
                                             + vlSelf->i2__DOT__out)));
    vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__pair_list[0U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->alu_inst__DOT__result)));
    vlSelf->i4__DOT__i0__DOT__pair_list[0U] = (0x100000000ULL 
                                               | (QData)((IData)(vlSelf->alu_inst__DOT__result)));
    vlSelf->result = vlSelf->alu_inst__DOT__result;
    PC_inst__DOT____Vcellinp__i3____pinNumber3[0U] 
        = (IData)((0x100000000ULL | (QData)((IData)(vlSelf->alu_inst__DOT__result))));
    PC_inst__DOT____Vcellinp__i3____pinNumber3[1U] 
        = ((vlSelf->PC_inst__DOT__PCadd4 << 1U) | (IData)(
                                                          ((0x100000000ULL 
                                                            | (QData)((IData)(vlSelf->alu_inst__DOT__result))) 
                                                           >> 0x20U)));
    PC_inst__DOT____Vcellinp__i3____pinNumber3[2U] 
        = (vlSelf->PC_inst__DOT__PCadd4 >> 0x1fU);
    vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__data_list[0U] 
        = vlSelf->alu_inst__DOT__result;
    vlSelf->i4__DOT__i0__DOT__data_list[0U] = vlSelf->alu_inst__DOT__result;
    vlSelf->PC_inst__DOT__result = vlSelf->result;
    vlSelf->PC_inst__DOT__i3__DOT__lut[0U] = PC_inst__DOT____Vcellinp__i3____pinNumber3[0U];
    vlSelf->PC_inst__DOT__i3__DOT__lut[1U] = PC_inst__DOT____Vcellinp__i3____pinNumber3[1U];
    vlSelf->PC_inst__DOT__i3__DOT__lut[2U] = PC_inst__DOT____Vcellinp__i3____pinNumber3[2U];
    vlSelf->i4__DOT__lut[0U] = PC_inst__DOT____Vcellinp__i3____pinNumber3[0U];
    vlSelf->i4__DOT__lut[1U] = PC_inst__DOT____Vcellinp__i3____pinNumber3[1U];
    vlSelf->i4__DOT__lut[2U] = PC_inst__DOT____Vcellinp__i3____pinNumber3[2U];
    vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__lut_out = 0U;
    vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__lut_out 
        = (vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->m3) == vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__key_list
                          [0U]))) & vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__data_list
              [0U]));
    vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__lut_out 
        = (vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->m3) == vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__out = vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__lut_out;
    vlSelf->i4__DOT__i0__DOT__lut_out = 0U;
    vlSelf->i4__DOT__i0__DOT__lut_out = (vlSelf->i4__DOT__i0__DOT__lut_out 
                                         | ((- (IData)(
                                                       ((IData)(vlSelf->m4) 
                                                        == 
                                                        vlSelf->i4__DOT__i0__DOT__key_list
                                                        [0U]))) 
                                            & vlSelf->i4__DOT__i0__DOT__data_list
                                            [0U]));
    vlSelf->i4__DOT__i0__DOT__lut_out = (vlSelf->i4__DOT__i0__DOT__lut_out 
                                         | ((- (IData)(
                                                       ((IData)(vlSelf->m4) 
                                                        == 
                                                        vlSelf->i4__DOT__i0__DOT__key_list
                                                        [1U]))) 
                                            & vlSelf->i4__DOT__i0__DOT__data_list
                                            [1U]));
    vlSelf->i4__DOT__i0__DOT__out = vlSelf->i4__DOT__i0__DOT__lut_out;
    vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__lut[0U] 
        = vlSelf->PC_inst__DOT__i3__DOT__lut[0U];
    vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__lut[1U] 
        = vlSelf->PC_inst__DOT__i3__DOT__lut[1U];
    vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__lut[2U] 
        = vlSelf->PC_inst__DOT__i3__DOT__lut[2U];
    vlSelf->i4__DOT__i0__DOT__lut[0U] = vlSelf->i4__DOT__lut[0U];
    vlSelf->i4__DOT__i0__DOT__lut[1U] = vlSelf->i4__DOT__lut[1U];
    vlSelf->i4__DOT__i0__DOT__lut[2U] = vlSelf->i4__DOT__lut[2U];
    vlSelf->PC_inst__DOT__i3__DOT__out = vlSelf->PC_inst__DOT__i3__DOT__i0__DOT__out;
    vlSelf->i4__DOT__out = vlSelf->i4__DOT__i0__DOT__out;
    vlSelf->PC_inst__DOT__pc_temp = vlSelf->PC_inst__DOT__i3__DOT__out;
    vlSymsp->TOP__rv32__register_file_inst.rin = vlSelf->i4__DOT__out;
    vlSelf->rin = vlSelf->i4__DOT__out;
}
