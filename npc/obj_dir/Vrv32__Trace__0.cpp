// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vrv32__Syms.h"


void Vrv32___024root__trace_chg_sub_0(Vrv32___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vrv32___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32___024root__trace_chg_top_0\n"); );
    // Init
    Vrv32___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrv32___024root*>(voidSelf);
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vrv32___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vrv32___024root__trace_chg_sub_0(Vrv32___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<3>/*95:0*/ __Vtemp_h03a154e0__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgBit(oldp+0,(vlSelf->rv32__DOT__i1__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+1,(vlSelf->rv32__DOT__i1__DOT__i0__DOT__key_list[1]));
        bufp->chgBit(oldp+2,(vlSelf->rv32__DOT__i1__DOT__i0__DOT__hit));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+3,(vlSelf->rv32__DOT__src2),32);
        bufp->chgIData(oldp+4,(vlSelf->rv32__DOT__num2),32);
        __Vtemp_h03a154e0__0[0U] = (IData)((0x100000000ULL 
                                            | (QData)((IData)(vlSelf->rv32__DOT__imm))));
        __Vtemp_h03a154e0__0[1U] = ((vlSelf->rv32__DOT__src2 
                                     << 1U) | (IData)(
                                                      ((0x100000000ULL 
                                                        | (QData)((IData)(vlSelf->rv32__DOT__imm))) 
                                                       >> 0x20U)));
        __Vtemp_h03a154e0__0[2U] = (vlSelf->rv32__DOT__src2 
                                    >> 0x1fU);
        bufp->chgWData(oldp+5,(__Vtemp_h03a154e0__0),66);
        bufp->chgQData(oldp+8,(vlSelf->rv32__DOT__i1__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgQData(oldp+10,(vlSelf->rv32__DOT__i1__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgIData(oldp+12,(vlSelf->rv32__DOT__i1__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+13,(vlSelf->rv32__DOT__i1__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+14,(vlSelf->rv32__DOT__i1__DOT__i0__DOT__lut_out),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgCData(oldp+15,(vlSelf->rv32__DOT__PC_inst__DOT__clk_div4),2);
        bufp->chgIData(oldp+16,(vlSelf->rv32__DOT__register_file_inst__DOT__i),32);
        bufp->chgIData(oldp+17,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[0]),32);
        bufp->chgIData(oldp+18,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[1]),32);
        bufp->chgIData(oldp+19,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[2]),32);
        bufp->chgIData(oldp+20,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[3]),32);
        bufp->chgIData(oldp+21,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[4]),32);
        bufp->chgIData(oldp+22,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[5]),32);
        bufp->chgIData(oldp+23,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[6]),32);
        bufp->chgIData(oldp+24,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[7]),32);
        bufp->chgIData(oldp+25,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[8]),32);
        bufp->chgIData(oldp+26,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[9]),32);
        bufp->chgIData(oldp+27,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[10]),32);
        bufp->chgIData(oldp+28,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[11]),32);
        bufp->chgIData(oldp+29,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[12]),32);
        bufp->chgIData(oldp+30,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[13]),32);
        bufp->chgIData(oldp+31,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[14]),32);
        bufp->chgIData(oldp+32,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[15]),32);
        bufp->chgIData(oldp+33,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[16]),32);
        bufp->chgIData(oldp+34,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[17]),32);
        bufp->chgIData(oldp+35,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[18]),32);
        bufp->chgIData(oldp+36,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[19]),32);
        bufp->chgIData(oldp+37,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[20]),32);
        bufp->chgIData(oldp+38,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[21]),32);
        bufp->chgIData(oldp+39,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[22]),32);
        bufp->chgIData(oldp+40,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[23]),32);
        bufp->chgIData(oldp+41,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[24]),32);
        bufp->chgIData(oldp+42,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[25]),32);
        bufp->chgIData(oldp+43,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[26]),32);
        bufp->chgIData(oldp+44,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[27]),32);
        bufp->chgIData(oldp+45,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[28]),32);
        bufp->chgIData(oldp+46,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[29]),32);
        bufp->chgIData(oldp+47,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[30]),32);
        bufp->chgIData(oldp+48,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[31]),32);
    }
    bufp->chgBit(oldp+49,(vlSelf->clk));
    bufp->chgBit(oldp+50,(vlSelf->rst));
    bufp->chgIData(oldp+51,(vlSelf->inst),32);
    bufp->chgIData(oldp+52,(vlSelf->pc),32);
    bufp->chgCData(oldp+53,((0x1fU & (vlSelf->inst 
                                      >> 0xfU))),5);
    bufp->chgCData(oldp+54,((0x1fU & (vlSelf->inst 
                                      >> 0x14U))),5);
    bufp->chgCData(oldp+55,((0x1fU & (vlSelf->inst 
                                      >> 7U))),5);
    bufp->chgCData(oldp+56,((vlSelf->inst >> 0x19U)),7);
    bufp->chgCData(oldp+57,(((0x13U == (0x7fU & vlSelf->inst))
                              ? 2U : 0U)),3);
    bufp->chgIData(oldp+58,((((0U == (0x1fU & (vlSelf->inst 
                                               >> 0xfU)))
                               ? 0U : vlSelf->rv32__DOT__register_file_inst__DOT__regs
                              [(0x1fU & (vlSelf->inst 
                                         >> 0xfU))]) 
                             + vlSelf->rv32__DOT__num2)),32);
    bufp->chgIData(oldp+59,(((0U == (0x1fU & (vlSelf->inst 
                                              >> 0xfU)))
                              ? 0U : vlSelf->rv32__DOT__register_file_inst__DOT__regs
                             [(0x1fU & (vlSelf->inst 
                                        >> 0xfU))])),32);
    bufp->chgIData(oldp+60,(vlSelf->rv32__DOT__imm),32);
    bufp->chgCData(oldp+61,((0x7fU & vlSelf->inst)),7);
    bufp->chgCData(oldp+62,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->chgSData(oldp+63,(vlSelf->rv32__DOT__imm_extend_inst__DOT__imm_12),12);
}

void Vrv32___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32___024root__trace_cleanup\n"); );
    // Init
    Vrv32___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrv32___024root*>(voidSelf);
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
