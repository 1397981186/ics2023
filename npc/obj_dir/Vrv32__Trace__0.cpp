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
    VlWide<3>/*95:0*/ __Vtemp_h41db52af__0;
    VlWide<3>/*95:0*/ __Vtemp_ha128a62f__0;
    VlWide<3>/*95:0*/ __Vtemp_h6d3ce832__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgBit(oldp+0,(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__i3__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+1,(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__i3__DOT__i0__DOT__key_list[1]));
        bufp->chgBit(oldp+2,(vlSymsp->TOP__rv32.__PVT__i1__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+3,(vlSymsp->TOP__rv32.__PVT__i1__DOT__i0__DOT__key_list[1]));
        bufp->chgBit(oldp+4,(vlSymsp->TOP__rv32.__PVT__i2__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+5,(vlSymsp->TOP__rv32.__PVT__i2__DOT__i0__DOT__key_list[1]));
        bufp->chgBit(oldp+6,(vlSymsp->TOP__rv32.__PVT__i4__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+7,(vlSymsp->TOP__rv32.__PVT__i4__DOT__i0__DOT__key_list[1]));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+8,(vlSymsp->TOP__rv32.__PVT__wen));
        bufp->chgBit(oldp+9,(vlSymsp->TOP__rv32.__PVT__m1));
        bufp->chgBit(oldp+10,(vlSymsp->TOP__rv32.__PVT__m2));
        bufp->chgBit(oldp+11,(vlSymsp->TOP__rv32.__PVT__m3));
        bufp->chgBit(oldp+12,(vlSymsp->TOP__rv32.__PVT__m4));
        bufp->chgCData(oldp+13,(vlSymsp->TOP__rv32.__PVT__aluc),2);
        bufp->chgIData(oldp+14,(vlSymsp->TOP__rv32.__PVT__imm),32);
        bufp->chgBit(oldp+15,(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__i3__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+16,(vlSymsp->TOP__rv32.__PVT__i1__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+17,(vlSymsp->TOP__rv32.__PVT__i2__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+18,(vlSymsp->TOP__rv32.__PVT__i4__DOT__i0__DOT__hit));
        bufp->chgSData(oldp+19,(vlSymsp->TOP__rv32.__PVT__imm_extend_inst__DOT__imm_12),12);
        bufp->chgIData(oldp+20,(vlSymsp->TOP__rv32.__PVT__imm_extend_inst__DOT__imm_20),20);
        bufp->chgIData(oldp+21,(vlSymsp->TOP__rv32.__PVT__imm_extend_inst__DOT__imm_12_to_32),32);
        bufp->chgIData(oldp+22,(vlSymsp->TOP__rv32.__PVT__imm_extend_inst__DOT__imm_20_to_32),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+23,(vlSymsp->TOP__rv32.__PVT__result),32);
        bufp->chgIData(oldp+24,(vlSymsp->TOP__rv32.__PVT__rin),32);
        bufp->chgIData(oldp+25,(vlSymsp->TOP__rv32__register_file_inst.__PVT__src1),32);
        bufp->chgIData(oldp+26,(vlSymsp->TOP__rv32__register_file_inst.__PVT__src2),32);
        bufp->chgIData(oldp+27,(vlSymsp->TOP__rv32.__PVT__num1),32);
        bufp->chgIData(oldp+28,(vlSymsp->TOP__rv32.__PVT__num2),32);
        bufp->chgIData(oldp+29,(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__pc_temp),32);
        __Vtemp_h41db52af__0[0U] = (IData)((0x100000000ULL 
                                            | (QData)((IData)(vlSymsp->TOP__rv32.__PVT__result))));
        __Vtemp_h41db52af__0[1U] = ((((IData)(4U) + vlSymsp->TOP__rv32.pc) 
                                     << 1U) | (IData)(
                                                      ((0x100000000ULL 
                                                        | (QData)((IData)(vlSymsp->TOP__rv32.__PVT__result))) 
                                                       >> 0x20U)));
        __Vtemp_h41db52af__0[2U] = (((IData)(4U) + vlSymsp->TOP__rv32.pc) 
                                    >> 0x1fU);
        bufp->chgWData(oldp+30,(__Vtemp_h41db52af__0),66);
        bufp->chgQData(oldp+33,(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__i3__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgQData(oldp+35,(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__i3__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgIData(oldp+37,(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__i3__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+38,(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__i3__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+39,(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__i3__DOT__i0__DOT__lut_out),32);
        __Vtemp_ha128a62f__0[0U] = (IData)((0x100000000ULL 
                                            | (QData)((IData)(vlSymsp->TOP__rv32__register_file_inst.__PVT__src1))));
        __Vtemp_ha128a62f__0[1U] = ((vlSymsp->TOP__rv32.pc 
                                     << 1U) | (IData)(
                                                      ((0x100000000ULL 
                                                        | (QData)((IData)(vlSymsp->TOP__rv32__register_file_inst.__PVT__src1))) 
                                                       >> 0x20U)));
        __Vtemp_ha128a62f__0[2U] = (vlSymsp->TOP__rv32.pc 
                                    >> 0x1fU);
        bufp->chgWData(oldp+40,(__Vtemp_ha128a62f__0),66);
        bufp->chgQData(oldp+43,(vlSymsp->TOP__rv32.__PVT__i1__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgQData(oldp+45,(vlSymsp->TOP__rv32.__PVT__i1__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgIData(oldp+47,(vlSymsp->TOP__rv32.__PVT__i1__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+48,(vlSymsp->TOP__rv32.__PVT__i1__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+49,(vlSymsp->TOP__rv32.__PVT__i1__DOT__i0__DOT__lut_out),32);
        __Vtemp_h6d3ce832__0[0U] = (IData)((0x100000000ULL 
                                            | (QData)((IData)(vlSymsp->TOP__rv32.__PVT__imm))));
        __Vtemp_h6d3ce832__0[1U] = ((vlSymsp->TOP__rv32__register_file_inst.__PVT__src2 
                                     << 1U) | (IData)(
                                                      ((0x100000000ULL 
                                                        | (QData)((IData)(vlSymsp->TOP__rv32.__PVT__imm))) 
                                                       >> 0x20U)));
        __Vtemp_h6d3ce832__0[2U] = (vlSymsp->TOP__rv32__register_file_inst.__PVT__src2 
                                    >> 0x1fU);
        bufp->chgWData(oldp+50,(__Vtemp_h6d3ce832__0),66);
        bufp->chgQData(oldp+53,(vlSymsp->TOP__rv32.__PVT__i2__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgQData(oldp+55,(vlSymsp->TOP__rv32.__PVT__i2__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgIData(oldp+57,(vlSymsp->TOP__rv32.__PVT__i2__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+58,(vlSymsp->TOP__rv32.__PVT__i2__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+59,(vlSymsp->TOP__rv32.__PVT__i2__DOT__i0__DOT__lut_out),32);
        bufp->chgQData(oldp+60,(vlSymsp->TOP__rv32.__PVT__i4__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgQData(oldp+62,(vlSymsp->TOP__rv32.__PVT__i4__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgIData(oldp+64,(vlSymsp->TOP__rv32.__PVT__i4__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+65,(vlSymsp->TOP__rv32.__PVT__i4__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+66,(vlSymsp->TOP__rv32.__PVT__i4__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+67,(((1U == (IData)(vlSymsp->TOP__rv32.__PVT__clk_count_inst__DOT__clk_cnt)) 
                               & (IData)(vlSymsp->TOP__rv32.__PVT__wen))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+68,(vlSymsp->TOP__rv32.pc),32);
        bufp->chgBit(oldp+69,((1U == (IData)(vlSymsp->TOP__rv32.__PVT__clk_count_inst__DOT__clk_cnt))));
        bufp->chgBit(oldp+70,((2U == (IData)(vlSymsp->TOP__rv32.__PVT__clk_count_inst__DOT__clk_cnt))));
        bufp->chgIData(oldp+71,(((IData)(4U) + vlSymsp->TOP__rv32.pc)),32);
        bufp->chgCData(oldp+72,(vlSymsp->TOP__rv32.__PVT__clk_count_inst__DOT__clk_cnt),2);
        bufp->chgIData(oldp+73,(vlSymsp->TOP__rv32__register_file_inst.__PVT__i),32);
    }
    bufp->chgBit(oldp+74,(vlSelf->clk));
    bufp->chgBit(oldp+75,(vlSelf->rst));
    bufp->chgIData(oldp+76,(vlSelf->inst),32);
    bufp->chgIData(oldp+77,(vlSelf->pc),32);
    bufp->chgCData(oldp+78,(vlSymsp->TOP__rv32.rs1),5);
    bufp->chgCData(oldp+79,(vlSymsp->TOP__rv32.rs2),5);
    bufp->chgCData(oldp+80,(vlSymsp->TOP__rv32.rd),5);
    bufp->chgCData(oldp+81,(vlSymsp->TOP__rv32.funct3),3);
    bufp->chgCData(oldp+82,(vlSymsp->TOP__rv32.funct7),7);
    bufp->chgCData(oldp+83,(vlSymsp->TOP__rv32.type4),3);
    bufp->chgCData(oldp+84,((0x7fU & vlSelf->inst)),7);
    bufp->chgIData(oldp+85,(vlSymsp->TOP__rv32__register_file_inst.regs[0]),32);
    bufp->chgIData(oldp+86,(vlSymsp->TOP__rv32__register_file_inst.regs[1]),32);
    bufp->chgIData(oldp+87,(vlSymsp->TOP__rv32__register_file_inst.regs[2]),32);
    bufp->chgIData(oldp+88,(vlSymsp->TOP__rv32__register_file_inst.regs[3]),32);
    bufp->chgIData(oldp+89,(vlSymsp->TOP__rv32__register_file_inst.regs[4]),32);
    bufp->chgIData(oldp+90,(vlSymsp->TOP__rv32__register_file_inst.regs[5]),32);
    bufp->chgIData(oldp+91,(vlSymsp->TOP__rv32__register_file_inst.regs[6]),32);
    bufp->chgIData(oldp+92,(vlSymsp->TOP__rv32__register_file_inst.regs[7]),32);
    bufp->chgIData(oldp+93,(vlSymsp->TOP__rv32__register_file_inst.regs[8]),32);
    bufp->chgIData(oldp+94,(vlSymsp->TOP__rv32__register_file_inst.regs[9]),32);
    bufp->chgIData(oldp+95,(vlSymsp->TOP__rv32__register_file_inst.regs[10]),32);
    bufp->chgIData(oldp+96,(vlSymsp->TOP__rv32__register_file_inst.regs[11]),32);
    bufp->chgIData(oldp+97,(vlSymsp->TOP__rv32__register_file_inst.regs[12]),32);
    bufp->chgIData(oldp+98,(vlSymsp->TOP__rv32__register_file_inst.regs[13]),32);
    bufp->chgIData(oldp+99,(vlSymsp->TOP__rv32__register_file_inst.regs[14]),32);
    bufp->chgIData(oldp+100,(vlSymsp->TOP__rv32__register_file_inst.regs[15]),32);
    bufp->chgIData(oldp+101,(vlSymsp->TOP__rv32__register_file_inst.regs[16]),32);
    bufp->chgIData(oldp+102,(vlSymsp->TOP__rv32__register_file_inst.regs[17]),32);
    bufp->chgIData(oldp+103,(vlSymsp->TOP__rv32__register_file_inst.regs[18]),32);
    bufp->chgIData(oldp+104,(vlSymsp->TOP__rv32__register_file_inst.regs[19]),32);
    bufp->chgIData(oldp+105,(vlSymsp->TOP__rv32__register_file_inst.regs[20]),32);
    bufp->chgIData(oldp+106,(vlSymsp->TOP__rv32__register_file_inst.regs[21]),32);
    bufp->chgIData(oldp+107,(vlSymsp->TOP__rv32__register_file_inst.regs[22]),32);
    bufp->chgIData(oldp+108,(vlSymsp->TOP__rv32__register_file_inst.regs[23]),32);
    bufp->chgIData(oldp+109,(vlSymsp->TOP__rv32__register_file_inst.regs[24]),32);
    bufp->chgIData(oldp+110,(vlSymsp->TOP__rv32__register_file_inst.regs[25]),32);
    bufp->chgIData(oldp+111,(vlSymsp->TOP__rv32__register_file_inst.regs[26]),32);
    bufp->chgIData(oldp+112,(vlSymsp->TOP__rv32__register_file_inst.regs[27]),32);
    bufp->chgIData(oldp+113,(vlSymsp->TOP__rv32__register_file_inst.regs[28]),32);
    bufp->chgIData(oldp+114,(vlSymsp->TOP__rv32__register_file_inst.regs[29]),32);
    bufp->chgIData(oldp+115,(vlSymsp->TOP__rv32__register_file_inst.regs[30]),32);
    bufp->chgIData(oldp+116,(vlSymsp->TOP__rv32__register_file_inst.regs[31]),32);
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
