// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv32.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrv32___024root.h"

VL_ATTR_COLD void Vrv32___024root___eval_static(Vrv32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vrv32___024root___eval_initial__TOP(Vrv32___024root* vlSelf);

VL_ATTR_COLD void Vrv32___024root___eval_initial(Vrv32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32___024root___eval_initial\n"); );
    // Body
    Vrv32___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vrv32___024root___eval_initial__TOP(Vrv32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelf->rv32__DOT__i1__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->rv32__DOT__i1__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelf->rv32__DOT__i2__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->rv32__DOT__i2__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelf->rv32__DOT__i4__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->rv32__DOT__i4__DOT__i0__DOT__key_list[1U] = 0U;
}

VL_ATTR_COLD void Vrv32___024root___eval_final(Vrv32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vrv32___024root___eval_triggers__stl(Vrv32___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv32___024root___dump_triggers__stl(Vrv32___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vrv32___024root___eval_stl(Vrv32___024root* vlSelf);

VL_ATTR_COLD void Vrv32___024root___eval_settle(Vrv32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vrv32___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vrv32___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/alemin/Desktop/ics2023/npc/vsrc/rv32.v", 57, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vrv32___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv32___024root___dump_triggers__stl(Vrv32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vrv32___024root____Vdpiimwrap_rv32__DOT__control_unit_inst__DOT__ebreak_TOP(IData/*31:0*/ station, IData/*31:0*/ inst);

VL_ATTR_COLD void Vrv32___024root___stl_sequent__TOP__0(Vrv32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(((IData)(4U) + vlSelf->pc)));
    vlSelf->rv32__DOT__i1__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(vlSelf->pc));
    vlSelf->rv32__DOT__i4__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(((IData)(4U) + vlSelf->pc)));
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
    vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__data_list[1U] 
        = ((IData)(4U) + vlSelf->pc);
    vlSelf->rv32__DOT__i4__DOT__i0__DOT__data_list[1U] 
        = ((IData)(4U) + vlSelf->pc);
    vlSelf->rv32__DOT__i1__DOT__i0__DOT__data_list[1U] 
        = vlSelf->pc;
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

VL_ATTR_COLD void Vrv32___024root___eval_stl(Vrv32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vrv32___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv32___024root___dump_triggers__ico(Vrv32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv32___024root___dump_triggers__act(Vrv32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv32___024root___dump_triggers__nba(Vrv32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vrv32___024root___ctor_var_reset(Vrv32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->inst = VL_RAND_RESET_I(32);
    vlSelf->pc = VL_RAND_RESET_I(32);
    vlSelf->rv32__DOT__type4 = VL_RAND_RESET_I(3);
    vlSelf->rv32__DOT__wen = VL_RAND_RESET_I(1);
    vlSelf->rv32__DOT__m1 = VL_RAND_RESET_I(1);
    vlSelf->rv32__DOT__m2 = VL_RAND_RESET_I(1);
    vlSelf->rv32__DOT__m3 = VL_RAND_RESET_I(1);
    vlSelf->rv32__DOT__m4 = VL_RAND_RESET_I(1);
    vlSelf->rv32__DOT__aluc = VL_RAND_RESET_I(2);
    vlSelf->rv32__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->rv32__DOT__rin = VL_RAND_RESET_I(32);
    vlSelf->rv32__DOT__src1 = VL_RAND_RESET_I(32);
    vlSelf->rv32__DOT__src2 = VL_RAND_RESET_I(32);
    vlSelf->rv32__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->rv32__DOT__num1 = VL_RAND_RESET_I(32);
    vlSelf->rv32__DOT__num2 = VL_RAND_RESET_I(32);
    vlSelf->rv32__DOT__clk_count_inst__DOT__clk_cnt = VL_RAND_RESET_I(2);
    vlSelf->rv32__DOT__PC_inst__DOT__pc_temp = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(33);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->rv32__DOT__register_file_inst__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->rv32__DOT__register_file_inst__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->rv32__DOT__imm_extend_inst__DOT__imm_12 = VL_RAND_RESET_I(12);
    vlSelf->rv32__DOT__imm_extend_inst__DOT__imm_20 = VL_RAND_RESET_I(20);
    vlSelf->rv32__DOT__imm_extend_inst__DOT__imm_12_to_32 = VL_RAND_RESET_I(32);
    vlSelf->rv32__DOT__imm_extend_inst__DOT__imm_20_to_32 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->rv32__DOT__i1__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(33);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->rv32__DOT__i1__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->rv32__DOT__i1__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->rv32__DOT__i1__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->rv32__DOT__i1__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->rv32__DOT__i2__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(33);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->rv32__DOT__i2__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->rv32__DOT__i2__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->rv32__DOT__i2__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->rv32__DOT__i2__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->rv32__DOT__i4__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(33);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->rv32__DOT__i4__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->rv32__DOT__i4__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->rv32__DOT__i4__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->rv32__DOT__i4__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
