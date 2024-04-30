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
    VlWide<3>/*95:0*/ __Vtemp_hd76e9101__0;
    VlWide<3>/*95:0*/ __Vtemp_he1edb7f3__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgBit(oldp+0,(vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+1,(vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__key_list[1]));
        bufp->chgBit(oldp+2,(vlSelf->rv32__DOT__i1__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+3,(vlSelf->rv32__DOT__i1__DOT__i0__DOT__key_list[1]));
        bufp->chgBit(oldp+4,(vlSelf->rv32__DOT__i2__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+5,(vlSelf->rv32__DOT__i2__DOT__i0__DOT__key_list[1]));
        bufp->chgBit(oldp+6,(vlSelf->rv32__DOT__i4__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+7,(vlSelf->rv32__DOT__i4__DOT__i0__DOT__key_list[1]));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+8,(vlSelf->rv32__DOT__type4),3);
        bufp->chgBit(oldp+9,(vlSelf->rv32__DOT__wen));
        bufp->chgBit(oldp+10,(vlSelf->rv32__DOT__m1));
        bufp->chgBit(oldp+11,(vlSelf->rv32__DOT__m2));
        bufp->chgBit(oldp+12,(vlSelf->rv32__DOT__m3));
        bufp->chgBit(oldp+13,(vlSelf->rv32__DOT__m4));
        bufp->chgCData(oldp+14,(vlSelf->rv32__DOT__aluc),2);
        bufp->chgIData(oldp+15,(vlSelf->rv32__DOT__imm),32);
        bufp->chgBit(oldp+16,(vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+17,(vlSelf->rv32__DOT__i1__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+18,(vlSelf->rv32__DOT__i2__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+19,(vlSelf->rv32__DOT__i4__DOT__i0__DOT__hit));
        bufp->chgSData(oldp+20,(vlSelf->rv32__DOT__imm_extend_inst__DOT__imm_12),12);
        bufp->chgIData(oldp+21,(vlSelf->rv32__DOT__imm_extend_inst__DOT__imm_20),20);
        bufp->chgIData(oldp+22,(vlSelf->rv32__DOT__imm_extend_inst__DOT__imm_12_to_32),32);
        bufp->chgIData(oldp+23,(vlSelf->rv32__DOT__imm_extend_inst__DOT__imm_20_to_32),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+24,(vlSelf->rv32__DOT__result),32);
        bufp->chgIData(oldp+25,(vlSelf->rv32__DOT__rin),32);
        bufp->chgIData(oldp+26,(vlSelf->rv32__DOT__src1),32);
        bufp->chgIData(oldp+27,(vlSelf->rv32__DOT__src2),32);
        bufp->chgIData(oldp+28,(vlSelf->rv32__DOT__num1),32);
        bufp->chgIData(oldp+29,(vlSelf->rv32__DOT__num2),32);
        bufp->chgIData(oldp+30,(vlSelf->rv32__DOT__PC_inst__DOT__pc_temp),32);
        bufp->chgQData(oldp+31,(vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgQData(oldp+33,(vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgIData(oldp+35,(vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+36,(vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+37,(vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__lut_out),32);
        bufp->chgQData(oldp+38,(vlSelf->rv32__DOT__i1__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgQData(oldp+40,(vlSelf->rv32__DOT__i1__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgIData(oldp+42,(vlSelf->rv32__DOT__i1__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+43,(vlSelf->rv32__DOT__i1__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+44,(vlSelf->rv32__DOT__i1__DOT__i0__DOT__lut_out),32);
        __Vtemp_h03a154e0__0[0U] = (IData)((0x100000000ULL 
                                            | (QData)((IData)(vlSelf->rv32__DOT__imm))));
        __Vtemp_h03a154e0__0[1U] = ((vlSelf->rv32__DOT__src2 
                                     << 1U) | (IData)(
                                                      ((0x100000000ULL 
                                                        | (QData)((IData)(vlSelf->rv32__DOT__imm))) 
                                                       >> 0x20U)));
        __Vtemp_h03a154e0__0[2U] = (vlSelf->rv32__DOT__src2 
                                    >> 0x1fU);
        bufp->chgWData(oldp+45,(__Vtemp_h03a154e0__0),66);
        bufp->chgQData(oldp+48,(vlSelf->rv32__DOT__i2__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgQData(oldp+50,(vlSelf->rv32__DOT__i2__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgIData(oldp+52,(vlSelf->rv32__DOT__i2__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+53,(vlSelf->rv32__DOT__i2__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+54,(vlSelf->rv32__DOT__i2__DOT__i0__DOT__lut_out),32);
        bufp->chgQData(oldp+55,(vlSelf->rv32__DOT__i4__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgQData(oldp+57,(vlSelf->rv32__DOT__i4__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgIData(oldp+59,(vlSelf->rv32__DOT__i4__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+60,(vlSelf->rv32__DOT__i4__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+61,(vlSelf->rv32__DOT__i4__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+62,(((1U == (IData)(vlSelf->rv32__DOT__clk_count_inst__DOT__clk_cnt)) 
                               & (IData)(vlSelf->rv32__DOT__wen))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+63,((1U == (IData)(vlSelf->rv32__DOT__clk_count_inst__DOT__clk_cnt))));
        bufp->chgBit(oldp+64,((2U == (IData)(vlSelf->rv32__DOT__clk_count_inst__DOT__clk_cnt))));
        bufp->chgCData(oldp+65,(vlSelf->rv32__DOT__clk_count_inst__DOT__clk_cnt),2);
        bufp->chgIData(oldp+66,(vlSelf->rv32__DOT__register_file_inst__DOT__i),32);
        bufp->chgIData(oldp+67,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[0]),32);
        bufp->chgIData(oldp+68,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[1]),32);
        bufp->chgIData(oldp+69,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[2]),32);
        bufp->chgIData(oldp+70,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[3]),32);
        bufp->chgIData(oldp+71,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[4]),32);
        bufp->chgIData(oldp+72,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[5]),32);
        bufp->chgIData(oldp+73,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[6]),32);
        bufp->chgIData(oldp+74,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[7]),32);
        bufp->chgIData(oldp+75,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[8]),32);
        bufp->chgIData(oldp+76,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[9]),32);
        bufp->chgIData(oldp+77,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[10]),32);
        bufp->chgIData(oldp+78,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[11]),32);
        bufp->chgIData(oldp+79,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[12]),32);
        bufp->chgIData(oldp+80,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[13]),32);
        bufp->chgIData(oldp+81,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[14]),32);
        bufp->chgIData(oldp+82,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[15]),32);
        bufp->chgIData(oldp+83,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[16]),32);
        bufp->chgIData(oldp+84,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[17]),32);
        bufp->chgIData(oldp+85,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[18]),32);
        bufp->chgIData(oldp+86,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[19]),32);
        bufp->chgIData(oldp+87,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[20]),32);
        bufp->chgIData(oldp+88,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[21]),32);
        bufp->chgIData(oldp+89,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[22]),32);
        bufp->chgIData(oldp+90,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[23]),32);
        bufp->chgIData(oldp+91,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[24]),32);
        bufp->chgIData(oldp+92,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[25]),32);
        bufp->chgIData(oldp+93,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[26]),32);
        bufp->chgIData(oldp+94,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[27]),32);
        bufp->chgIData(oldp+95,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[28]),32);
        bufp->chgIData(oldp+96,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[29]),32);
        bufp->chgIData(oldp+97,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[30]),32);
        bufp->chgIData(oldp+98,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[31]),32);
    }
    bufp->chgBit(oldp+99,(vlSelf->clk));
    bufp->chgBit(oldp+100,(vlSelf->rst));
    bufp->chgIData(oldp+101,(vlSelf->inst),32);
    bufp->chgIData(oldp+102,(vlSelf->pc),32);
    bufp->chgCData(oldp+103,((0x1fU & (vlSelf->inst 
                                       >> 0xfU))),5);
    bufp->chgCData(oldp+104,((0x1fU & (vlSelf->inst 
                                       >> 0x14U))),5);
    bufp->chgCData(oldp+105,((0x1fU & (vlSelf->inst 
                                       >> 7U))),5);
    bufp->chgCData(oldp+106,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->chgCData(oldp+107,((vlSelf->inst >> 0x19U)),7);
    bufp->chgIData(oldp+108,(((IData)(4U) + vlSelf->pc)),32);
    __Vtemp_hd76e9101__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(vlSelf->rv32__DOT__result))));
    __Vtemp_hd76e9101__0[1U] = ((((IData)(4U) + vlSelf->pc) 
                                 << 1U) | (IData)((
                                                   (0x100000000ULL 
                                                    | (QData)((IData)(vlSelf->rv32__DOT__result))) 
                                                   >> 0x20U)));
    __Vtemp_hd76e9101__0[2U] = (((IData)(4U) + vlSelf->pc) 
                                >> 0x1fU);
    bufp->chgWData(oldp+109,(__Vtemp_hd76e9101__0),66);
    bufp->chgCData(oldp+112,((0x7fU & vlSelf->inst)),7);
    __Vtemp_he1edb7f3__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(vlSelf->rv32__DOT__src1))));
    __Vtemp_he1edb7f3__0[1U] = ((vlSelf->pc << 1U) 
                                | (IData)(((0x100000000ULL 
                                            | (QData)((IData)(vlSelf->rv32__DOT__src1))) 
                                           >> 0x20U)));
    __Vtemp_he1edb7f3__0[2U] = (vlSelf->pc >> 0x1fU);
    bufp->chgWData(oldp+113,(__Vtemp_he1edb7f3__0),66);
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
