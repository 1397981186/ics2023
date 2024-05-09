// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv32.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrv32__Syms.h"
#include "Vrv32_rv32.h"

extern "C" int pmem_read(int raddr);

VL_INLINE_OPT void Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__pmem_read_TOP__rv32(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__pmem_read_TOP__rv32\n"); );
    // Body
    int raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    int pmem_read__Vfuncrtn__Vcvt;
    pmem_read__Vfuncrtn__Vcvt = pmem_read(raddr__Vcvt);
    pmem_read__Vfuncrtn = pmem_read__Vfuncrtn__Vcvt;
}

extern "C" void pmem_write(int waddr, int wdata, char wmask);

VL_INLINE_OPT void Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__pmem_write_TOP__rv32(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__pmem_write_TOP__rv32\n"); );
    // Body
    int waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    int wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    pmem_write(waddr__Vcvt, wdata__Vcvt, wmask__Vcvt);
}

extern "C" void ebreak(int station, int inst, char unit);

VL_INLINE_OPT void Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__ebreak_TOP__rv32(IData/*31:0*/ station, IData/*31:0*/ inst, CData/*7:0*/ unit) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__ebreak_TOP__rv32\n"); );
    // Body
    int station__Vcvt;
    for (size_t station__Vidx = 0; station__Vidx < 1; ++station__Vidx) station__Vcvt = station;
    int inst__Vcvt;
    for (size_t inst__Vidx = 0; inst__Vidx < 1; ++inst__Vidx) inst__Vcvt = inst;
    char unit__Vcvt;
    for (size_t unit__Vidx = 0; unit__Vidx < 1; ++unit__Vidx) unit__Vcvt = unit;
    ebreak(station__Vcvt, inst__Vcvt, unit__Vcvt);
}

VL_INLINE_OPT void Vrv32_rv32___ico_sequent__TOP__rv32__1(Vrv32_rv32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrv32_rv32___ico_sequent__TOP__rv32__1\n"); );
    // Body
    vlSelf->__PVT__i4__DOT__i0__DOT__pair_list[0U] 
        = (0x100000000ULL | (QData)((IData)(vlSymsp->TOP__rv32__register_file_inst.__PVT__src1)));
    vlSelf->__PVT__i4__DOT__i0__DOT__data_list[0U] 
        = vlSymsp->TOP__rv32__register_file_inst.__PVT__src1;
    vlSelf->__PVT__i3__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(vlSymsp->TOP__rv32__register_file_inst.__PVT__src2));
    vlSelf->__PVT__i3__DOT__i0__DOT__data_list[1U] 
        = vlSymsp->TOP__rv32__register_file_inst.__PVT__src2;
    vlSelf->__PVT__i4__DOT__i0__DOT__lut_out = ((- (IData)(
                                                           ((IData)(vlSelf->__PVT__m4) 
                                                            == 
                                                            vlSelf->__PVT__i4__DOT__i0__DOT__key_list
                                                            [0U]))) 
                                                & vlSelf->__PVT__i4__DOT__i0__DOT__data_list
                                                [0U]);
    vlSelf->__PVT__i4__DOT__i0__DOT__lut_out = (vlSelf->__PVT__i4__DOT__i0__DOT__lut_out 
                                                | ((- (IData)(
                                                              ((IData)(vlSelf->__PVT__m4) 
                                                               == 
                                                               vlSelf->__PVT__i4__DOT__i0__DOT__key_list
                                                               [1U]))) 
                                                   & vlSelf->__PVT__i4__DOT__i0__DOT__data_list
                                                   [1U]));
    vlSelf->__PVT__num1 = vlSelf->__PVT__i4__DOT__i0__DOT__lut_out;
    vlSelf->__PVT__i3__DOT__i0__DOT__lut_out = ((- (IData)(
                                                           ((IData)(vlSelf->__PVT__m3) 
                                                            == 
                                                            vlSelf->__PVT__i3__DOT__i0__DOT__key_list
                                                            [0U]))) 
                                                & vlSelf->__PVT__i3__DOT__i0__DOT__data_list
                                                [0U]);
    vlSelf->__PVT__i3__DOT__i0__DOT__lut_out = (vlSelf->__PVT__i3__DOT__i0__DOT__lut_out 
                                                | ((- (IData)(
                                                              ((IData)(vlSelf->__PVT__m3) 
                                                               == 
                                                               vlSelf->__PVT__i3__DOT__i0__DOT__key_list
                                                               [1U]))) 
                                                   & vlSelf->__PVT__i3__DOT__i0__DOT__data_list
                                                   [1U]));
    vlSelf->__PVT__num2 = vlSelf->__PVT__i3__DOT__i0__DOT__lut_out;
    if ((0x10U & (IData)(vlSelf->__PVT__aluc))) {
        Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__ebreak_TOP__rv32(2U, 0xdeafbeafU, 0U);
        vlSelf->__PVT__result = 0U;
    } else {
        vlSelf->__PVT__result = ((8U & (IData)(vlSelf->__PVT__aluc))
                                  ? ((4U & (IData)(vlSelf->__PVT__aluc))
                                      ? ((2U & (IData)(vlSelf->__PVT__aluc))
                                          ? ((1U & (IData)(vlSelf->__PVT__aluc))
                                              ? (0xfffffffeU 
                                                 & (vlSelf->__PVT__num1 
                                                    + vlSelf->__PVT__num2))
                                              : vlSelf->__PVT__num2)
                                          : ((1U & (IData)(vlSelf->__PVT__aluc))
                                              ? (vlSelf->__PVT__num1 
                                                 >= vlSelf->__PVT__num2)
                                              : (vlSelf->__PVT__num1 
                                                 < vlSelf->__PVT__num2)))
                                      : ((2U & (IData)(vlSelf->__PVT__aluc))
                                          ? ((1U & (IData)(vlSelf->__PVT__aluc))
                                              ? VL_GTES_III(32, vlSelf->__PVT__num1, vlSelf->__PVT__num2)
                                              : VL_LTS_III(32, vlSelf->__PVT__num1, vlSelf->__PVT__num2))
                                          : ((1U & (IData)(vlSelf->__PVT__aluc))
                                              ? (vlSelf->__PVT__num1 
                                                 != vlSelf->__PVT__num2)
                                              : (vlSelf->__PVT__num1 
                                                 == vlSelf->__PVT__num2))))
                                  : ((4U & (IData)(vlSelf->__PVT__aluc))
                                      ? ((2U & (IData)(vlSelf->__PVT__aluc))
                                          ? ((1U & (IData)(vlSelf->__PVT__aluc))
                                              ? (vlSelf->__PVT__num1 
                                                 & vlSelf->__PVT__num2)
                                              : (vlSelf->__PVT__num1 
                                                 | vlSelf->__PVT__num2))
                                          : ((1U & (IData)(vlSelf->__PVT__aluc))
                                              ? ((0x1fU 
                                                  >= 
                                                  (0x1fU 
                                                   & vlSelf->__PVT__num2))
                                                  ? 
                                                 VL_SHIFTRS_III(32,32,32, vlSelf->__PVT__num1, 
                                                                (0x1fU 
                                                                 & vlSelf->__PVT__num2))
                                                  : 
                                                 (- 
                                                  (vlSelf->__PVT__num1 
                                                   >> 0x1fU)))
                                              : ((0x1fU 
                                                  >= 
                                                  (0x1fU 
                                                   & vlSelf->__PVT__num2))
                                                  ? 
                                                 (vlSelf->__PVT__num1 
                                                  >> 
                                                  (0x1fU 
                                                   & vlSelf->__PVT__num2))
                                                  : 0U)))
                                      : ((2U & (IData)(vlSelf->__PVT__aluc))
                                          ? ((1U & (IData)(vlSelf->__PVT__aluc))
                                              ? (vlSelf->__PVT__num1 
                                                 ^ vlSelf->__PVT__num2)
                                              : ((0x1fU 
                                                  >= vlSelf->__PVT__num2)
                                                  ? 
                                                 (vlSelf->__PVT__num1 
                                                  << vlSelf->__PVT__num2)
                                                  : 0U))
                                          : ((1U & (IData)(vlSelf->__PVT__aluc))
                                              ? ((IData)(1U) 
                                                 + 
                                                 (vlSelf->__PVT__num1 
                                                  + 
                                                  (~ vlSelf->__PVT__num2)))
                                              : (vlSelf->__PVT__num1 
                                                 + vlSelf->__PVT__num2)))));
    }
    if (vlSelf->__PVT__mem_wen) {
        Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__pmem_write_TOP__rv32(vlSelf->__PVT__result, vlSymsp->TOP__rv32__register_file_inst.__PVT__src2, (IData)(vlSelf->__PVT__wmask));
    }
    vlSelf->__PVT__PC_inst__DOT__i2__DOT__i0__DOT__pair_list[0U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->__PVT__result)));
    vlSelf->__PVT__i5__DOT__i0__DOT__pair_list[1U] 
        = (0x200000000ULL | (QData)((IData)(vlSelf->__PVT__result)));
    vlSelf->__PVT__i5__DOT__i0__DOT__data_list[1U] 
        = vlSelf->__PVT__result;
    vlSelf->PC_inst__DOT____Vcellinp__i1____pinNumber2 
        = ((IData)(vlSelf->__PVT__m1) & vlSelf->__PVT__result);
    vlSelf->__PVT__PC_inst__DOT__i2__DOT__i0__DOT__data_list[0U] 
        = vlSelf->__PVT__result;
    if (vlSelf->__PVT__mem_ren) {
        Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__pmem_read_TOP__rv32(vlSelf->__PVT__result, vlSelf->__Vfunc_mem_inst__DOT__pmem_read__2__Vfuncout);
        vlSelf->__PVT__mem_inst__DOT__rdata_temp = vlSelf->__Vfunc_mem_inst__DOT__pmem_read__2__Vfuncout;
    } else {
        vlSelf->__PVT__mem_inst__DOT__rdata_temp = 0xeaeU;
    }
    vlSelf->__PVT__PC_inst__DOT__i1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->PC_inst__DOT____Vcellinp__i1____pinNumber2) 
           == vlSelf->__PVT__PC_inst__DOT__i1__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->__PVT__PC_inst__DOT__i1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->__PVT__PC_inst__DOT__i1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->PC_inst__DOT____Vcellinp__i1____pinNumber2) 
              == vlSelf->__PVT__PC_inst__DOT__i1__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->__PVT__PC_inst__DOT__i2__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->__PVT__m2) == 
                       vlSelf->__PVT__PC_inst__DOT__i2__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->__PVT__PC_inst__DOT__i2__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->__PVT__PC_inst__DOT__i2__DOT__i0__DOT__lut_out 
        = (vlSelf->__PVT__PC_inst__DOT__i2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->__PVT__m2) 
                          == vlSelf->__PVT__PC_inst__DOT__i2__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->__PVT__PC_inst__DOT__i2__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->__PVT__PC_inst__DOT__npc_temp = vlSelf->__PVT__PC_inst__DOT__i2__DOT__i0__DOT__lut_out;
    if ((4U & (IData)(vlSelf->__PVT__rmask))) {
        if ((2U & (IData)(vlSelf->__PVT__rmask))) {
            vlSelf->__PVT__mem_rdata = 0xdeadbeafU;
            Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__ebreak_TOP__rv32(2U, 0xdeafbeafU, 1U);
        } else if ((1U & (IData)(vlSelf->__PVT__rmask))) {
            Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__ebreak_TOP__rv32(2U, 0xdeafbeafU, 1U);
            vlSelf->__PVT__mem_rdata = 0xdeadbeafU;
        } else {
            vlSelf->__PVT__mem_rdata = (((- (IData)(
                                                    (1U 
                                                     & (vlSelf->__PVT__mem_inst__DOT__rdata_temp 
                                                        >> 0xfU)))) 
                                         << 0x10U) 
                                        | (0xffffU 
                                           & vlSelf->__PVT__mem_inst__DOT__rdata_temp));
        }
    } else if ((2U & (IData)(vlSelf->__PVT__rmask))) {
        if ((1U & (IData)(vlSelf->__PVT__rmask))) {
            Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__ebreak_TOP__rv32(2U, 0xdeafbeafU, 1U);
            vlSelf->__PVT__mem_rdata = 0xdeadbeafU;
        } else {
            vlSelf->__PVT__mem_rdata = (0xffffU & vlSelf->__PVT__mem_inst__DOT__rdata_temp);
        }
    } else {
        vlSelf->__PVT__mem_rdata = ((1U & (IData)(vlSelf->__PVT__rmask))
                                     ? (0xffU & vlSelf->__PVT__mem_inst__DOT__rdata_temp)
                                     : vlSelf->__PVT__mem_inst__DOT__rdata_temp);
    }
    vlSelf->__PVT__PC_inst__DOT__i1__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(vlSelf->__PVT__PC_inst__DOT__npc_temp));
    vlSelf->__PVT__PC_inst__DOT__i1__DOT__i0__DOT__data_list[1U] 
        = vlSelf->__PVT__PC_inst__DOT__npc_temp;
    vlSelf->__PVT__i5__DOT__i0__DOT__pair_list[2U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->__PVT__mem_rdata)));
    vlSelf->__PVT__i5__DOT__i0__DOT__data_list[2U] 
        = vlSelf->__PVT__mem_rdata;
    vlSelf->__PVT__PC_inst__DOT__i1__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->PC_inst__DOT____Vcellinp__i1____pinNumber2) 
                       == vlSelf->__PVT__PC_inst__DOT__i1__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->__PVT__PC_inst__DOT__i1__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->__PVT__PC_inst__DOT__i1__DOT__i0__DOT__lut_out 
        = (vlSelf->__PVT__PC_inst__DOT__i1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->PC_inst__DOT____Vcellinp__i1____pinNumber2) 
                          == vlSelf->__PVT__PC_inst__DOT__i1__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->__PVT__PC_inst__DOT__i1__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->__PVT__PC_inst__DOT__npc = vlSelf->__PVT__PC_inst__DOT__i1__DOT__i0__DOT__lut_out;
    vlSelf->__PVT__i5__DOT__i0__DOT__lut_out = ((- (IData)(
                                                           ((IData)(vlSelf->__PVT__m5) 
                                                            == 
                                                            vlSelf->__PVT__i5__DOT__i0__DOT__key_list
                                                            [0U]))) 
                                                & vlSelf->__PVT__i5__DOT__i0__DOT__data_list
                                                [0U]);
    vlSelf->__PVT__i5__DOT__i0__DOT__lut_out = (vlSelf->__PVT__i5__DOT__i0__DOT__lut_out 
                                                | ((- (IData)(
                                                              ((IData)(vlSelf->__PVT__m5) 
                                                               == 
                                                               vlSelf->__PVT__i5__DOT__i0__DOT__key_list
                                                               [1U]))) 
                                                   & vlSelf->__PVT__i5__DOT__i0__DOT__data_list
                                                   [1U]));
    vlSelf->__PVT__i5__DOT__i0__DOT__lut_out = (vlSelf->__PVT__i5__DOT__i0__DOT__lut_out 
                                                | ((- (IData)(
                                                              ((IData)(vlSelf->__PVT__m5) 
                                                               == 
                                                               vlSelf->__PVT__i5__DOT__i0__DOT__key_list
                                                               [2U]))) 
                                                   & vlSelf->__PVT__i5__DOT__i0__DOT__data_list
                                                   [2U]));
    vlSelf->__PVT__i5__DOT__i0__DOT__lut_out = (vlSelf->__PVT__i5__DOT__i0__DOT__lut_out 
                                                | ((- (IData)(
                                                              ((IData)(vlSelf->__PVT__m5) 
                                                               == 
                                                               vlSelf->__PVT__i5__DOT__i0__DOT__key_list
                                                               [3U]))) 
                                                   & vlSelf->__PVT__i5__DOT__i0__DOT__data_list
                                                   [3U]));
    vlSelf->__PVT__reg_in = vlSelf->__PVT__i5__DOT__i0__DOT__lut_out;
}

VL_INLINE_OPT void Vrv32_rv32___nba_sequent__TOP__rv32__0(Vrv32_rv32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vrv32_rv32___nba_sequent__TOP__rv32__0\n"); );
    // Body
    vlSelf->pc = ((IData)(vlSymsp->TOP.rst) ? 0x80000000U
                   : vlSelf->__PVT__PC_inst__DOT__npc);
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
                if ((4U & vlSelf->inst)) {
                    if ((2U & vlSelf->inst)) {
                        if ((1U & vlSelf->inst)) {
                            vlSelf->__PVT__IType = 6U;
                            vlSelf->__PVT__aluc = 0U;
                            vlSelf->__PVT__reg_wen = 1U;
                            vlSelf->__PVT__mem_wen = 0U;
                            vlSelf->__PVT__mem_ren = 0U;
                            vlSelf->__PVT__wmask = 0xfU;
                            vlSelf->__PVT__rmask = 0U;
                            vlSelf->__PVT__m1 = 0U;
                            vlSelf->__PVT__m2 = 1U;
                            vlSelf->__PVT__m3 = 1U;
                            vlSelf->__PVT__m4 = 0U;
                            vlSelf->__PVT__m5 = 0U;
                        } else {
                            Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst, 0xcU);
                        }
                    } else {
                        Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst, 0xcU);
                    }
                } else {
                    Vrv32_rv32____Vdpiimwrap_mem_inst__DOT__ebreak_TOP__rv32(2U, vlSelf->inst, 0xcU);
                }
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
