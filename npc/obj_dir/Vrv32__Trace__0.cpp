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
    VlWide<3>/*95:0*/ __Vtemp_hb867cd23__0;
    VlWide<3>/*95:0*/ __Vtemp_hb3d6a269__0;
    VlWide<3>/*95:0*/ __Vtemp_h41db52af__0;
    VlWide<3>/*95:0*/ __Vtemp_ha128a62f__0;
    VlWide<5>/*159:0*/ __Vtemp_hea64b420__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgBit(oldp+0,(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__i1__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+1,(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__i1__DOT__i0__DOT__key_list[1]));
        bufp->chgBit(oldp+2,(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__i2__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+3,(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__i2__DOT__i0__DOT__key_list[1]));
        bufp->chgBit(oldp+4,(vlSymsp->TOP__rv32.__PVT__i3__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+5,(vlSymsp->TOP__rv32.__PVT__i3__DOT__i0__DOT__key_list[1]));
        bufp->chgBit(oldp+6,(vlSymsp->TOP__rv32.__PVT__i4__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+7,(vlSymsp->TOP__rv32.__PVT__i4__DOT__i0__DOT__key_list[1]));
        bufp->chgCData(oldp+8,(vlSymsp->TOP__rv32.__PVT__i5__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+9,(vlSymsp->TOP__rv32.__PVT__i5__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+10,(vlSymsp->TOP__rv32.__PVT__i5__DOT__i0__DOT__key_list[2]),2);
        bufp->chgCData(oldp+11,(vlSymsp->TOP__rv32.__PVT__i5__DOT__i0__DOT__key_list[3]),2);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+12,(vlSymsp->TOP__rv32.__PVT__IType),3);
        bufp->chgBit(oldp+13,(vlSymsp->TOP__rv32.__PVT__reg_wen));
        bufp->chgBit(oldp+14,(vlSymsp->TOP__rv32.__PVT__mem_wen));
        bufp->chgBit(oldp+15,(vlSymsp->TOP__rv32.__PVT__mem_ren));
        bufp->chgCData(oldp+16,(vlSymsp->TOP__rv32.__PVT__wmask),8);
        bufp->chgCData(oldp+17,(vlSymsp->TOP__rv32.__PVT__rmask),3);
        bufp->chgBit(oldp+18,(vlSymsp->TOP__rv32.__PVT__m1));
        bufp->chgBit(oldp+19,(vlSymsp->TOP__rv32.__PVT__m2));
        bufp->chgBit(oldp+20,(vlSymsp->TOP__rv32.__PVT__m3));
        bufp->chgBit(oldp+21,(vlSymsp->TOP__rv32.__PVT__m4));
        bufp->chgCData(oldp+22,(vlSymsp->TOP__rv32.__PVT__m5),2);
        bufp->chgCData(oldp+23,(vlSymsp->TOP__rv32.__PVT__aluc),5);
        bufp->chgIData(oldp+24,(vlSymsp->TOP__rv32.__PVT__result),32);
        bufp->chgIData(oldp+25,(vlSymsp->TOP__rv32.__PVT__reg_in),32);
        bufp->chgIData(oldp+26,(vlSymsp->TOP__rv32__register_file_inst.__PVT__src1),32);
        bufp->chgIData(oldp+27,(vlSymsp->TOP__rv32__register_file_inst.__PVT__src2),32);
        bufp->chgIData(oldp+28,(vlSymsp->TOP__rv32.__PVT__imm32),32);
        bufp->chgIData(oldp+29,(vlSymsp->TOP__rv32.__PVT__num1),32);
        bufp->chgIData(oldp+30,(vlSymsp->TOP__rv32.__PVT__num2),32);
        bufp->chgIData(oldp+31,(vlSymsp->TOP__rv32.__PVT__mem_rdata),32);
        bufp->chgIData(oldp+32,(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__npc),32);
        bufp->chgIData(oldp+33,(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__npc_temp),32);
        bufp->chgIData(oldp+34,(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__PCaddIMM32),32);
        bufp->chgBit(oldp+35,(vlSymsp->TOP__rv32.PC_inst__DOT____Vcellinp__i1____pinNumber2));
        __Vtemp_hb867cd23__0[0U] = (IData)((0x100000000ULL 
                                            | (QData)((IData)(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__PCaddIMM32))));
        __Vtemp_hb867cd23__0[1U] = ((vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__npc_temp 
                                     << 1U) | (IData)(
                                                      ((0x100000000ULL 
                                                        | (QData)((IData)(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__PCaddIMM32))) 
                                                       >> 0x20U)));
        __Vtemp_hb867cd23__0[2U] = (vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__npc_temp 
                                    >> 0x1fU);
        bufp->chgWData(oldp+36,(__Vtemp_hb867cd23__0),66);
        bufp->chgQData(oldp+39,(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__i1__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgQData(oldp+41,(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__i1__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgIData(oldp+43,(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__i1__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+44,(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__i1__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+45,(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__i1__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+46,(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__i1__DOT__i0__DOT__hit));
        bufp->chgQData(oldp+47,(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__i2__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgQData(oldp+49,(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__i2__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgIData(oldp+51,(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__i2__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+52,(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__i2__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+53,(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__i2__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+54,(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__i2__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+55,(((IData)(1U) + (~ vlSymsp->TOP__rv32.__PVT__num2))),32);
        bufp->chgIData(oldp+56,((0x1fU & vlSymsp->TOP__rv32.__PVT__num2)),32);
        __Vtemp_hb3d6a269__0[0U] = (IData)((0x100000000ULL 
                                            | (QData)((IData)(vlSymsp->TOP__rv32.__PVT__imm32))));
        __Vtemp_hb3d6a269__0[1U] = ((vlSymsp->TOP__rv32__register_file_inst.__PVT__src2 
                                     << 1U) | (IData)(
                                                      ((0x100000000ULL 
                                                        | (QData)((IData)(vlSymsp->TOP__rv32.__PVT__imm32))) 
                                                       >> 0x20U)));
        __Vtemp_hb3d6a269__0[2U] = (vlSymsp->TOP__rv32__register_file_inst.__PVT__src2 
                                    >> 0x1fU);
        bufp->chgWData(oldp+57,(__Vtemp_hb3d6a269__0),66);
        bufp->chgQData(oldp+60,(vlSymsp->TOP__rv32.__PVT__i3__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgQData(oldp+62,(vlSymsp->TOP__rv32.__PVT__i3__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgIData(oldp+64,(vlSymsp->TOP__rv32.__PVT__i3__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+65,(vlSymsp->TOP__rv32.__PVT__i3__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+66,(vlSymsp->TOP__rv32.__PVT__i3__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+67,(vlSymsp->TOP__rv32.__PVT__i3__DOT__i0__DOT__hit));
        bufp->chgQData(oldp+68,(vlSymsp->TOP__rv32.__PVT__i4__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgQData(oldp+70,(vlSymsp->TOP__rv32.__PVT__i4__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgIData(oldp+72,(vlSymsp->TOP__rv32.__PVT__i4__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+73,(vlSymsp->TOP__rv32.__PVT__i4__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+74,(vlSymsp->TOP__rv32.__PVT__i4__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+75,(vlSymsp->TOP__rv32.__PVT__i4__DOT__i0__DOT__hit));
        bufp->chgQData(oldp+76,(vlSymsp->TOP__rv32.__PVT__i5__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgQData(oldp+78,(vlSymsp->TOP__rv32.__PVT__i5__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+80,(vlSymsp->TOP__rv32.__PVT__i5__DOT__i0__DOT__pair_list[2]),34);
        bufp->chgQData(oldp+82,(vlSymsp->TOP__rv32.__PVT__i5__DOT__i0__DOT__pair_list[3]),34);
        bufp->chgIData(oldp+84,(vlSymsp->TOP__rv32.__PVT__i5__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+85,(vlSymsp->TOP__rv32.__PVT__i5__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+86,(vlSymsp->TOP__rv32.__PVT__i5__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+87,(vlSymsp->TOP__rv32.__PVT__i5__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+88,(vlSymsp->TOP__rv32.__PVT__i5__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+89,(vlSymsp->TOP__rv32.__PVT__i5__DOT__i0__DOT__hit));
        bufp->chgSData(oldp+90,(vlSymsp->TOP__rv32.__PVT__imm_extend_inst__DOT__imm_12),12);
        bufp->chgIData(oldp+91,(vlSymsp->TOP__rv32.__PVT__imm_extend_inst__DOT__imm_20),20);
        bufp->chgIData(oldp+92,(vlSymsp->TOP__rv32.__PVT__imm_extend_inst__DOT__imm_12_to_32),32);
        bufp->chgIData(oldp+93,(vlSymsp->TOP__rv32.__PVT__imm_extend_inst__DOT__imm_20_to_32),32);
        bufp->chgIData(oldp+94,(vlSymsp->TOP__rv32.__PVT__mem_inst__DOT__rdata_temp),32);
    }
    bufp->chgBit(oldp+95,(vlSelf->clk));
    bufp->chgBit(oldp+96,(vlSelf->rst));
    bufp->chgCData(oldp+97,((0x1fU & (vlSymsp->TOP__rv32.inst 
                                      >> 0xfU))),5);
    bufp->chgCData(oldp+98,((0x1fU & (vlSymsp->TOP__rv32.inst 
                                      >> 0x14U))),5);
    bufp->chgCData(oldp+99,((0x1fU & (vlSymsp->TOP__rv32.inst 
                                      >> 7U))),5);
    bufp->chgCData(oldp+100,((7U & (vlSymsp->TOP__rv32.inst 
                                    >> 0xcU))),3);
    bufp->chgCData(oldp+101,((vlSymsp->TOP__rv32.inst 
                              >> 0x19U)),7);
    bufp->chgIData(oldp+102,(vlSymsp->TOP__rv32.inst),32);
    bufp->chgIData(oldp+103,(vlSymsp->TOP__rv32.pc),32);
    bufp->chgIData(oldp+104,(((IData)(4U) + vlSymsp->TOP__rv32.pc)),32);
    __Vtemp_h41db52af__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(vlSymsp->TOP__rv32.__PVT__result))));
    __Vtemp_h41db52af__0[1U] = ((((IData)(4U) + vlSymsp->TOP__rv32.pc) 
                                 << 1U) | (IData)((
                                                   (0x100000000ULL 
                                                    | (QData)((IData)(vlSymsp->TOP__rv32.__PVT__result))) 
                                                   >> 0x20U)));
    __Vtemp_h41db52af__0[2U] = (((IData)(4U) + vlSymsp->TOP__rv32.pc) 
                                >> 0x1fU);
    bufp->chgWData(oldp+105,(__Vtemp_h41db52af__0),66);
    bufp->chgCData(oldp+108,((0x7fU & vlSymsp->TOP__rv32.inst)),7);
    __Vtemp_ha128a62f__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(vlSymsp->TOP__rv32__register_file_inst.__PVT__src1))));
    __Vtemp_ha128a62f__0[1U] = ((vlSymsp->TOP__rv32.pc 
                                 << 1U) | (IData)((
                                                   (0x100000000ULL 
                                                    | (QData)((IData)(vlSymsp->TOP__rv32__register_file_inst.__PVT__src1))) 
                                                   >> 0x20U)));
    __Vtemp_ha128a62f__0[2U] = (vlSymsp->TOP__rv32.pc 
                                >> 0x1fU);
    bufp->chgWData(oldp+109,(__Vtemp_ha128a62f__0),66);
    __Vtemp_hea64b420__0[0U] = 0xdeadbeafU;
    __Vtemp_hea64b420__0[1U] = (3U | (vlSymsp->TOP__rv32.__PVT__result 
                                      << 2U));
    __Vtemp_hea64b420__0[2U] = (8U | ((vlSymsp->TOP__rv32.__PVT__mem_rdata 
                                       << 4U) | (vlSymsp->TOP__rv32.__PVT__result 
                                                 >> 0x1eU)));
    __Vtemp_hea64b420__0[3U] = (0x10U | ((((IData)(4U) 
                                           + vlSymsp->TOP__rv32.pc) 
                                          << 6U) | 
                                         (vlSymsp->TOP__rv32.__PVT__mem_rdata 
                                          >> 0x1cU)));
    __Vtemp_hea64b420__0[4U] = (((IData)(4U) + vlSymsp->TOP__rv32.pc) 
                                >> 0x1aU);
    bufp->chgWData(oldp+112,(__Vtemp_hea64b420__0),136);
    bufp->chgIData(oldp+117,(vlSymsp->TOP__rv32__register_file_inst.__PVT__i),32);
    bufp->chgIData(oldp+118,(vlSymsp->TOP__rv32__register_file_inst.regs[0]),32);
    bufp->chgIData(oldp+119,(vlSymsp->TOP__rv32__register_file_inst.regs[1]),32);
    bufp->chgIData(oldp+120,(vlSymsp->TOP__rv32__register_file_inst.regs[2]),32);
    bufp->chgIData(oldp+121,(vlSymsp->TOP__rv32__register_file_inst.regs[3]),32);
    bufp->chgIData(oldp+122,(vlSymsp->TOP__rv32__register_file_inst.regs[4]),32);
    bufp->chgIData(oldp+123,(vlSymsp->TOP__rv32__register_file_inst.regs[5]),32);
    bufp->chgIData(oldp+124,(vlSymsp->TOP__rv32__register_file_inst.regs[6]),32);
    bufp->chgIData(oldp+125,(vlSymsp->TOP__rv32__register_file_inst.regs[7]),32);
    bufp->chgIData(oldp+126,(vlSymsp->TOP__rv32__register_file_inst.regs[8]),32);
    bufp->chgIData(oldp+127,(vlSymsp->TOP__rv32__register_file_inst.regs[9]),32);
    bufp->chgIData(oldp+128,(vlSymsp->TOP__rv32__register_file_inst.regs[10]),32);
    bufp->chgIData(oldp+129,(vlSymsp->TOP__rv32__register_file_inst.regs[11]),32);
    bufp->chgIData(oldp+130,(vlSymsp->TOP__rv32__register_file_inst.regs[12]),32);
    bufp->chgIData(oldp+131,(vlSymsp->TOP__rv32__register_file_inst.regs[13]),32);
    bufp->chgIData(oldp+132,(vlSymsp->TOP__rv32__register_file_inst.regs[14]),32);
    bufp->chgIData(oldp+133,(vlSymsp->TOP__rv32__register_file_inst.regs[15]),32);
    bufp->chgIData(oldp+134,(vlSymsp->TOP__rv32__register_file_inst.regs[16]),32);
    bufp->chgIData(oldp+135,(vlSymsp->TOP__rv32__register_file_inst.regs[17]),32);
    bufp->chgIData(oldp+136,(vlSymsp->TOP__rv32__register_file_inst.regs[18]),32);
    bufp->chgIData(oldp+137,(vlSymsp->TOP__rv32__register_file_inst.regs[19]),32);
    bufp->chgIData(oldp+138,(vlSymsp->TOP__rv32__register_file_inst.regs[20]),32);
    bufp->chgIData(oldp+139,(vlSymsp->TOP__rv32__register_file_inst.regs[21]),32);
    bufp->chgIData(oldp+140,(vlSymsp->TOP__rv32__register_file_inst.regs[22]),32);
    bufp->chgIData(oldp+141,(vlSymsp->TOP__rv32__register_file_inst.regs[23]),32);
    bufp->chgIData(oldp+142,(vlSymsp->TOP__rv32__register_file_inst.regs[24]),32);
    bufp->chgIData(oldp+143,(vlSymsp->TOP__rv32__register_file_inst.regs[25]),32);
    bufp->chgIData(oldp+144,(vlSymsp->TOP__rv32__register_file_inst.regs[26]),32);
    bufp->chgIData(oldp+145,(vlSymsp->TOP__rv32__register_file_inst.regs[27]),32);
    bufp->chgIData(oldp+146,(vlSymsp->TOP__rv32__register_file_inst.regs[28]),32);
    bufp->chgIData(oldp+147,(vlSymsp->TOP__rv32__register_file_inst.regs[29]),32);
    bufp->chgIData(oldp+148,(vlSymsp->TOP__rv32__register_file_inst.regs[30]),32);
    bufp->chgIData(oldp+149,(vlSymsp->TOP__rv32__register_file_inst.regs[31]),32);
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
