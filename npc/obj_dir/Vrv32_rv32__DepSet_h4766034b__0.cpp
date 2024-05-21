// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv32.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrv32_rv32.h"

void Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__pmem_read_TOP__rv32(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__ebreak_TOP__rv32(IData/*31:0*/ station, IData/*31:0*/ inst, CData/*7:0*/ unit);

VL_INLINE_OPT void Vrv32_rv32___ico_sequent__TOP__rv32__0(Vrv32_rv32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrv32_rv32___ico_sequent__TOP__rv32__0\n"); );
    // Body
    vlSelf->__PVT__PC_inst__DOT__i2__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(((IData)(4U) + vlSelf->pc)));
    vlSelf->__PVT__i4__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(vlSelf->pc));
    vlSelf->__PVT__i5__DOT__i0__DOT__pair_list[3U] 
        = (QData)((IData)(((IData)(4U) + vlSelf->pc)));
    vlSelf->__PVT__i5__DOT__i0__DOT__data_list[3U] 
        = ((IData)(4U) + vlSelf->pc);
    vlSelf->__PVT__PC_inst__DOT__i2__DOT__i0__DOT__data_list[1U] 
        = ((IData)(4U) + vlSelf->pc);
    vlSelf->__PVT__i4__DOT__i0__DOT__data_list[1U] 
        = vlSelf->pc;
    Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__pmem_read_TOP__rv32(vlSelf->pc, vlSelf->__Vfunc_mem_inst__DOT__pmem_read__0__Vfuncout);
    vlSelf->inst = vlSelf->__Vfunc_mem_inst__DOT__pmem_read__0__Vfuncout;
    if ((0x40U & vlSelf->inst)) {
        if ((0x20U & vlSelf->inst)) {
            if ((0x10U & vlSelf->inst)) {
                if ((8U & vlSelf->inst)) {
                    Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst, 0xcU);
                } else if ((4U & vlSelf->inst)) {
                    Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst, 0xcU);
                } else if ((2U & vlSelf->inst)) {
                    if ((1U & vlSelf->inst)) {
                        if ((1U == (vlSelf->inst >> 0x14U))) {
                            Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__ebreak_TOP__rv32(1U, vlSelf->inst, 0xaU);
                        } else {
                            Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst, 0xbU);
                        }
                    } else {
                        Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst, 0xcU);
                    }
                } else {
                    Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst, 0xcU);
                }
            } else if ((8U & vlSelf->inst)) {
                Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst, 0xcU);
            } else if ((4U & vlSelf->inst)) {
                if ((2U & vlSelf->inst)) {
                    if ((1U & vlSelf->inst)) {
                        vlSelf->__PVT__IType = 2U;
                        vlSelf->__PVT__aluc = 0xfU;
                        vlSelf->__PVT__reg_wen = 1U;
                        vlSelf->__PVT__mem_wen = 0U;
                        vlSelf->__PVT__mem_ren = 0U;
                        vlSelf->__PVT__wmask = 0xfU;
                        vlSelf->__PVT__rmask = 0U;
                        vlSelf->__PVT__m1 = 0U;
                        vlSelf->__PVT__m2 = 1U;
                        vlSelf->__PVT__m3 = 1U;
                        vlSelf->__PVT__m4 = 1U;
                        vlSelf->__PVT__m5 = 0U;
                    } else {
                        Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst, 0xcU);
                    }
                } else {
                    Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst, 0xcU);
                }
            } else if ((2U & vlSelf->inst)) {
                if ((1U & vlSelf->inst)) {
                    vlSelf->__PVT__IType = 5U;
                    vlSelf->__PVT__reg_wen = 0U;
                    vlSelf->__PVT__mem_wen = 0U;
                    vlSelf->__PVT__mem_ren = 0U;
                    vlSelf->__PVT__wmask = 0xfU;
                    vlSelf->__PVT__rmask = 0U;
                    vlSelf->__PVT__m1 = 1U;
                    vlSelf->__PVT__m2 = 0U;
                    vlSelf->__PVT__m3 = 0U;
                    vlSelf->__PVT__m4 = 1U;
                    vlSelf->__PVT__m5 = 2U;
                    if ((0x4000U & vlSelf->inst)) {
                        vlSelf->__PVT__aluc = ((0x2000U 
                                                & vlSelf->inst)
                                                ? (
                                                   (0x1000U 
                                                    & vlSelf->inst)
                                                    ? 0xdU
                                                    : 0xcU)
                                                : (
                                                   (0x1000U 
                                                    & vlSelf->inst)
                                                    ? 0xbU
                                                    : 0xaU));
                    } else if ((0x2000U & vlSelf->inst)) {
                        Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst, 9U);
                    } else {
                        vlSelf->__PVT__aluc = ((0x1000U 
                                                & vlSelf->inst)
                                                ? 9U
                                                : 8U);
                    }
                } else {
                    Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst, 0xcU);
                }
            } else {
                Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst, 0xcU);
            }
        } else {
            Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst, 0xcU);
        }
    } else if ((0x20U & vlSelf->inst)) {
        if ((0x10U & vlSelf->inst)) {
            if ((8U & vlSelf->inst)) {
                Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst, 0xcU);
            } else if ((4U & vlSelf->inst)) {
                if ((2U & vlSelf->inst)) {
                    if ((1U & vlSelf->inst)) {
                        vlSelf->__PVT__IType = 4U;
                        vlSelf->__PVT__aluc = 0xeU;
                        vlSelf->__PVT__reg_wen = 1U;
                        vlSelf->__PVT__mem_wen = 0U;
                        vlSelf->__PVT__mem_ren = 0U;
                        vlSelf->__PVT__wmask = 0xfU;
                        vlSelf->__PVT__rmask = 0U;
                        vlSelf->__PVT__m1 = 0U;
                        vlSelf->__PVT__m2 = 0U;
                        vlSelf->__PVT__m3 = 1U;
                        vlSelf->__PVT__m4 = 1U;
                        vlSelf->__PVT__m5 = 2U;
                    } else {
                        Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst, 0xcU);
                    }
                } else {
                    Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst, 0xcU);
                }
            } else if ((2U & vlSelf->inst)) {
                if ((1U & vlSelf->inst)) {
                    vlSelf->__PVT__IType = 1U;
                    vlSelf->__PVT__reg_wen = 1U;
                    vlSelf->__PVT__mem_wen = 0U;
                    vlSelf->__PVT__mem_ren = 0U;
                    vlSelf->__PVT__wmask = 0xfU;
                    vlSelf->__PVT__rmask = 0U;
                    vlSelf->__PVT__m1 = 0U;
                    vlSelf->__PVT__m2 = 0U;
                    vlSelf->__PVT__m3 = 0U;
                    vlSelf->__PVT__m4 = 1U;
                    vlSelf->__PVT__m5 = 2U;
                    if ((0U == (vlSelf->inst >> 0x19U))) {
                        if ((0x4000U & vlSelf->inst)) {
                            vlSelf->__PVT__aluc = (
                                                   (0x2000U 
                                                    & vlSelf->inst)
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSelf->inst)
                                                     ? 7U
                                                     : 6U)
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelf->inst)
                                                     ? 4U
                                                     : 3U));
                        } else if ((0x2000U & vlSelf->inst)) {
                            if ((0x1000U & vlSelf->inst)) {
                                vlSelf->__PVT__aluc = 0xcU;
                            } else {
                                Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst, 2U);
                            }
                        } else {
                            vlSelf->__PVT__aluc = (
                                                   (0x1000U 
                                                    & vlSelf->inst)
                                                    ? 2U
                                                    : 0U);
                        }
                    } else if ((0x20U == (vlSelf->inst 
                                          >> 0x19U))) {
                        if ((0U == (7U & (vlSelf->inst 
                                          >> 0xcU)))) {
                            vlSelf->__PVT__aluc = 1U;
                        } else if ((5U == (7U & (vlSelf->inst 
                                                 >> 0xcU)))) {
                            vlSelf->__PVT__aluc = 5U;
                        } else {
                            Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst, 3U);
                        }
                    } else {
                        Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst, 4U);
                    }
                } else {
                    Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst, 0xcU);
                }
            } else {
                Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst, 0xcU);
            }
        } else if ((8U & vlSelf->inst)) {
            Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst, 0xcU);
        } else if ((4U & vlSelf->inst)) {
            Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst, 0xcU);
        } else if ((2U & vlSelf->inst)) {
            if ((1U & vlSelf->inst)) {
                vlSelf->__PVT__IType = 3U;
                vlSelf->__PVT__aluc = 0U;
                vlSelf->__PVT__reg_wen = 0U;
                vlSelf->__PVT__mem_wen = 1U;
                vlSelf->__PVT__mem_ren = 0U;
                vlSelf->__PVT__rmask = 0U;
                vlSelf->__PVT__m1 = 0U;
                vlSelf->__PVT__m2 = 0U;
                vlSelf->__PVT__m3 = 1U;
                vlSelf->__PVT__m4 = 1U;
                vlSelf->__PVT__m5 = 1U;
                if ((0U == (7U & (vlSelf->inst >> 0xcU)))) {
                    vlSelf->__PVT__wmask = 1U;
                } else if ((1U == (7U & (vlSelf->inst 
                                         >> 0xcU)))) {
                    vlSelf->__PVT__wmask = 3U;
                } else if ((2U == (7U & (vlSelf->inst 
                                         >> 0xcU)))) {
                    vlSelf->__PVT__wmask = 0xfU;
                } else {
                    Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst, 8U);
                }
            } else {
                Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst, 0xcU);
            }
        } else {
            Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst, 0xcU);
        }
    } else if ((0x10U & vlSelf->inst)) {
        if ((8U & vlSelf->inst)) {
            Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst, 0xcU);
        } else if ((4U & vlSelf->inst)) {
            if ((2U & vlSelf->inst)) {
                if ((1U & vlSelf->inst)) {
                    vlSelf->__PVT__IType = 4U;
                    vlSelf->__PVT__aluc = 0U;
                    vlSelf->__PVT__reg_wen = 1U;
                    vlSelf->__PVT__mem_wen = 0U;
                    vlSelf->__PVT__mem_ren = 0U;
                    vlSelf->__PVT__wmask = 0xfU;
                    vlSelf->__PVT__rmask = 0U;
                    vlSelf->__PVT__m1 = 0U;
                    vlSelf->__PVT__m2 = 0U;
                    vlSelf->__PVT__m3 = 1U;
                    vlSelf->__PVT__m4 = 0U;
                    vlSelf->__PVT__m5 = 2U;
                } else {
                    Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst, 0xcU);
                }
            } else {
                Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst, 0xcU);
            }
        } else if ((2U & vlSelf->inst)) {
            if ((1U & vlSelf->inst)) {
                vlSelf->__PVT__IType = 2U;
                vlSelf->__PVT__reg_wen = 1U;
                vlSelf->__PVT__mem_wen = 0U;
                vlSelf->__PVT__mem_ren = 0U;
                vlSelf->__PVT__wmask = 0xfU;
                vlSelf->__PVT__rmask = 0U;
                vlSelf->__PVT__m1 = 0U;
                vlSelf->__PVT__m2 = 0U;
                vlSelf->__PVT__m3 = 1U;
                vlSelf->__PVT__m4 = 1U;
                vlSelf->__PVT__m5 = 2U;
                if ((0x4000U & vlSelf->inst)) {
                    if ((0x2000U & vlSelf->inst)) {
                        if ((0x1000U & vlSelf->inst)) {
                            vlSelf->__PVT__aluc = 7U;
                        } else {
                            Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst, 6U);
                        }
                    } else if ((0x1000U & vlSelf->inst)) {
                        if ((0U == (vlSelf->inst >> 0x19U))) {
                            vlSelf->__PVT__aluc = 4U;
                        } else if ((0x20U == (vlSelf->inst 
                                              >> 0x19U))) {
                            vlSelf->__PVT__aluc = 5U;
                        } else {
                            Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst, 5U);
                        }
                    } else {
                        vlSelf->__PVT__aluc = 3U;
                    }
                } else if ((0x2000U & vlSelf->inst)) {
                    if ((0x1000U & vlSelf->inst)) {
                        vlSelf->__PVT__aluc = 0xcU;
                    } else {
                        Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst, 6U);
                    }
                } else {
                    vlSelf->__PVT__aluc = ((0x1000U 
                                            & vlSelf->inst)
                                            ? 2U : 0U);
                }
            } else {
                Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst, 0xcU);
            }
        } else {
            Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst, 0xcU);
        }
    } else if ((8U & vlSelf->inst)) {
        Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst, 0xcU);
    } else if ((4U & vlSelf->inst)) {
        Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst, 0xcU);
    } else if ((2U & vlSelf->inst)) {
        if ((1U & vlSelf->inst)) {
            vlSelf->__PVT__IType = 2U;
            vlSelf->__PVT__aluc = 0U;
            vlSelf->__PVT__reg_wen = 1U;
            vlSelf->__PVT__mem_wen = 0U;
            vlSelf->__PVT__mem_ren = 1U;
            vlSelf->__PVT__wmask = 0xfU;
            vlSelf->__PVT__m1 = 0U;
            vlSelf->__PVT__m2 = 0U;
            vlSelf->__PVT__m3 = 1U;
            vlSelf->__PVT__m4 = 1U;
            vlSelf->__PVT__m5 = 1U;
            if ((0x4000U & vlSelf->inst)) {
                if ((0x2000U & vlSelf->inst)) {
                    Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst, 7U);
                } else {
                    vlSelf->__PVT__rmask = ((0x1000U 
                                             & vlSelf->inst)
                                             ? 2U : 1U);
                }
            } else if ((0x2000U & vlSelf->inst)) {
                if ((0x1000U & vlSelf->inst)) {
                    Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst, 7U);
                } else {
                    vlSelf->__PVT__rmask = 0U;
                }
            } else if ((0x1000U & vlSelf->inst)) {
                vlSelf->__PVT__rmask = 4U;
            } else {
                Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst, 7U);
            }
        } else {
            Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst, 0xcU);
        }
    } else {
        Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst, 0xcU);
    }
    vlSelf->__PVT__i5__DOT__i0__DOT__hit = ((IData)(vlSelf->__PVT__m5) 
                                            == vlSelf->__PVT__i5__DOT__i0__DOT__key_list
                                            [0U]);
    vlSelf->__PVT__i5__DOT__i0__DOT__hit = ((IData)(vlSelf->__PVT__i5__DOT__i0__DOT__hit) 
                                            | ((IData)(vlSelf->__PVT__m5) 
                                               == vlSelf->__PVT__i5__DOT__i0__DOT__key_list
                                               [1U]));
    vlSelf->__PVT__i5__DOT__i0__DOT__hit = ((IData)(vlSelf->__PVT__i5__DOT__i0__DOT__hit) 
                                            | ((IData)(vlSelf->__PVT__m5) 
                                               == vlSelf->__PVT__i5__DOT__i0__DOT__key_list
                                               [2U]));
    vlSelf->__PVT__i5__DOT__i0__DOT__hit = ((IData)(vlSelf->__PVT__i5__DOT__i0__DOT__hit) 
                                            | ((IData)(vlSelf->__PVT__m5) 
                                               == vlSelf->__PVT__i5__DOT__i0__DOT__key_list
                                               [3U]));
    vlSelf->__PVT__PC_inst__DOT__i2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->__PVT__m2) == vlSelf->__PVT__PC_inst__DOT__i2__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->__PVT__PC_inst__DOT__i2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->__PVT__PC_inst__DOT__i2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->__PVT__m2) == vlSelf->__PVT__PC_inst__DOT__i2__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->__PVT__i3__DOT__i0__DOT__hit = ((IData)(vlSelf->__PVT__m3) 
                                            == vlSelf->__PVT__i3__DOT__i0__DOT__key_list
                                            [0U]);
    vlSelf->__PVT__i3__DOT__i0__DOT__hit = ((IData)(vlSelf->__PVT__i3__DOT__i0__DOT__hit) 
                                            | ((IData)(vlSelf->__PVT__m3) 
                                               == vlSelf->__PVT__i3__DOT__i0__DOT__key_list
                                               [1U]));
    vlSelf->__PVT__i4__DOT__i0__DOT__hit = ((IData)(vlSelf->__PVT__m4) 
                                            == vlSelf->__PVT__i4__DOT__i0__DOT__key_list
                                            [0U]);
    vlSelf->__PVT__i4__DOT__i0__DOT__hit = ((IData)(vlSelf->__PVT__i4__DOT__i0__DOT__hit) 
                                            | ((IData)(vlSelf->__PVT__m4) 
                                               == vlSelf->__PVT__i4__DOT__i0__DOT__key_list
                                               [1U]));
    if ((4U & (IData)(vlSelf->__PVT__IType))) {
        if ((2U & (IData)(vlSelf->__PVT__IType))) {
            if ((1U & (IData)(vlSelf->__PVT__IType))) {
                vlSelf->__PVT__imm_extend_inst__DOT__imm_12 = 0U;
                Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__ebreak_TOP__rv32(2U, 0xdeafbeafU, 0xdU);
            } else {
                vlSelf->__PVT__imm_extend_inst__DOT__imm_12 = 0U;
            }
        } else {
            vlSelf->__PVT__imm_extend_inst__DOT__imm_12 
                = ((1U & (IData)(vlSelf->__PVT__IType))
                    ? ((0x800U & (vlSelf->inst >> 0x14U)) 
                       | ((0x400U & (vlSelf->inst << 3U)) 
                          | ((0x3f0U & (vlSelf->inst 
                                        >> 0x15U)) 
                             | (0xfU & (vlSelf->inst 
                                        >> 8U))))) : 0U);
        }
    } else if ((2U & (IData)(vlSelf->__PVT__IType))) {
        vlSelf->__PVT__imm_extend_inst__DOT__imm_12 
            = (0xfffU & ((1U & (IData)(vlSelf->__PVT__IType))
                          ? ((0xfe0U & (vlSelf->inst 
                                        >> 0x14U)) 
                             | (0x1fU & (vlSelf->inst 
                                         >> 7U))) : 
                         (vlSelf->inst >> 0x14U)));
    } else if ((1U & (IData)(vlSelf->__PVT__IType))) {
        vlSelf->__PVT__imm_extend_inst__DOT__imm_12 = 0U;
    } else {
        Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__ebreak_TOP__rv32(2U, 0xdeafbeafU, 0xdU);
        vlSelf->__PVT__imm_extend_inst__DOT__imm_12 = 0U;
    }
    if ((4U & (IData)(vlSelf->__PVT__IType))) {
        if ((2U & (IData)(vlSelf->__PVT__IType))) {
            if ((1U & (IData)(vlSelf->__PVT__IType))) {
                vlSelf->__PVT__imm_extend_inst__DOT__imm_20 = 0U;
                Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__ebreak_TOP__rv32(2U, 0xdeafbeafU, 0xeU);
            } else {
                vlSelf->__PVT__imm_extend_inst__DOT__imm_20 
                    = ((0x80000U & (vlSelf->inst >> 0xcU)) 
                       | ((0x7c000U & (vlSelf->inst 
                                       >> 1U)) | ((0x3800U 
                                                   & (vlSelf->inst 
                                                      >> 1U)) 
                                                  | ((0x400U 
                                                      & (vlSelf->inst 
                                                         >> 0xaU)) 
                                                     | (0x3ffU 
                                                        & (vlSelf->inst 
                                                           >> 0x15U))))));
            }
        } else {
            vlSelf->__PVT__imm_extend_inst__DOT__imm_20 
                = ((1U & (IData)(vlSelf->__PVT__IType))
                    ? 0U : (vlSelf->inst >> 0xcU));
        }
    } else if ((2U & (IData)(vlSelf->__PVT__IType))) {
        vlSelf->__PVT__imm_extend_inst__DOT__imm_20 = 0U;
    } else if ((1U & (IData)(vlSelf->__PVT__IType))) {
        vlSelf->__PVT__imm_extend_inst__DOT__imm_20 = 0U;
    } else {
        Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__ebreak_TOP__rv32(2U, 0xdeafbeafU, 0xeU);
        vlSelf->__PVT__imm_extend_inst__DOT__imm_20 = 0U;
    }
    vlSelf->__PVT__imm_extend_inst__DOT__imm_12_to_32 
        = (((- (IData)((1U & ((IData)(vlSelf->__PVT__imm_extend_inst__DOT__imm_12) 
                              >> 0xbU)))) << 0xcU) 
           | (IData)(vlSelf->__PVT__imm_extend_inst__DOT__imm_12));
    vlSelf->__PVT__imm_extend_inst__DOT__imm_20_to_32 
        = (((- (IData)((1U & (vlSelf->__PVT__imm_extend_inst__DOT__imm_20 
                              >> 0x13U)))) << 0x14U) 
           | vlSelf->__PVT__imm_extend_inst__DOT__imm_20);
    if ((4U & (IData)(vlSelf->__PVT__IType))) {
        if ((2U & (IData)(vlSelf->__PVT__IType))) {
            if ((1U & (IData)(vlSelf->__PVT__IType))) {
                vlSelf->__PVT__imm32 = 0xdeafbeafU;
                Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__ebreak_TOP__rv32(2U, 0xdeafbeafU, 0xfU);
            } else {
                vlSelf->__PVT__imm32 = (vlSelf->__PVT__imm_extend_inst__DOT__imm_20_to_32 
                                        << 1U);
            }
        } else {
            vlSelf->__PVT__imm32 = ((1U & (IData)(vlSelf->__PVT__IType))
                                     ? (vlSelf->__PVT__imm_extend_inst__DOT__imm_12_to_32 
                                        << 1U) : (vlSelf->__PVT__imm_extend_inst__DOT__imm_20_to_32 
                                                  << 0xcU));
        }
    } else if ((2U & (IData)(vlSelf->__PVT__IType))) {
        vlSelf->__PVT__imm32 = vlSelf->__PVT__imm_extend_inst__DOT__imm_12_to_32;
    } else if ((1U & (IData)(vlSelf->__PVT__IType))) {
        vlSelf->__PVT__imm32 = vlSelf->__PVT__imm_extend_inst__DOT__imm_12_to_32;
    } else {
        Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__ebreak_TOP__rv32(2U, 0xdeafbeafU, 0xfU);
        vlSelf->__PVT__imm32 = 0xdeafbeafU;
    }
    vlSelf->__PVT__i3__DOT__i0__DOT__pair_list[0U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->__PVT__imm32)));
    vlSelf->__PVT__PC_inst__DOT__PCaddIMM32 = (vlSelf->__PVT__imm32 
                                               + vlSelf->pc);
    vlSelf->__PVT__PC_inst__DOT__i1__DOT__i0__DOT__data_list[0U] 
        = (vlSelf->__PVT__imm32 + vlSelf->pc);
    vlSelf->__PVT__i3__DOT__i0__DOT__data_list[0U] 
        = vlSelf->__PVT__imm32;
    vlSelf->__PVT__PC_inst__DOT__i1__DOT__i0__DOT__pair_list[0U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->__PVT__PC_inst__DOT__PCaddIMM32)));
}
