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
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clk));
    bufp->chgBit(oldp+1,(vlSelf->rst));
    bufp->chgIData(oldp+2,(vlSelf->inst),32);
    bufp->chgIData(oldp+3,(vlSelf->pc),32);
    bufp->chgBit(oldp+4,(vlSymsp->TOP__rv32.clk));
    bufp->chgBit(oldp+5,(vlSymsp->TOP__rv32.rst));
    bufp->chgIData(oldp+6,(vlSymsp->TOP__rv32.inst),32);
    bufp->chgIData(oldp+7,(vlSymsp->TOP__rv32.pc),32);
    bufp->chgBit(oldp+8,(vlSymsp->TOP__rv32.clk1_flag));
    bufp->chgBit(oldp+9,(vlSymsp->TOP__rv32.clk2_flag));
    bufp->chgCData(oldp+10,(vlSymsp->TOP__rv32.rs1),5);
    bufp->chgCData(oldp+11,(vlSymsp->TOP__rv32.rs2),5);
    bufp->chgCData(oldp+12,(vlSymsp->TOP__rv32.rd),5);
    bufp->chgCData(oldp+13,(vlSymsp->TOP__rv32.funct3),3);
    bufp->chgCData(oldp+14,(vlSymsp->TOP__rv32.funct7),7);
    bufp->chgCData(oldp+15,(vlSymsp->TOP__rv32.type4),3);
    bufp->chgBit(oldp+16,(vlSymsp->TOP__rv32.wen));
    bufp->chgBit(oldp+17,(vlSymsp->TOP__rv32.m1));
    bufp->chgBit(oldp+18,(vlSymsp->TOP__rv32.m2));
    bufp->chgBit(oldp+19,(vlSymsp->TOP__rv32.m3));
    bufp->chgBit(oldp+20,(vlSymsp->TOP__rv32.m4));
    bufp->chgCData(oldp+21,(vlSymsp->TOP__rv32.aluc),2);
    bufp->chgIData(oldp+22,(vlSymsp->TOP__rv32.PCadd4),32);
    bufp->chgIData(oldp+23,(vlSymsp->TOP__rv32.result),32);
    bufp->chgIData(oldp+24,(vlSymsp->TOP__rv32.rin),32);
    bufp->chgIData(oldp+25,(vlSymsp->TOP__rv32.src1),32);
    bufp->chgIData(oldp+26,(vlSymsp->TOP__rv32.src2),32);
    bufp->chgIData(oldp+27,(vlSymsp->TOP__rv32.imm),32);
    bufp->chgIData(oldp+28,(vlSymsp->TOP__rv32.num1),32);
    bufp->chgIData(oldp+29,(vlSymsp->TOP__rv32.num2),32);
    bufp->chgBit(oldp+30,(vlSymsp->TOP__rv32.PC_inst__DOT__clk));
    bufp->chgBit(oldp+31,(vlSymsp->TOP__rv32.PC_inst__DOT__rst));
    bufp->chgBit(oldp+32,(vlSymsp->TOP__rv32.PC_inst__DOT__m3));
    bufp->chgBit(oldp+33,(vlSymsp->TOP__rv32.PC_inst__DOT__clk2_flag));
    bufp->chgIData(oldp+34,(vlSymsp->TOP__rv32.PC_inst__DOT__result),32);
    bufp->chgIData(oldp+35,(vlSymsp->TOP__rv32.PC_inst__DOT__PCadd4),32);
    bufp->chgIData(oldp+36,(vlSymsp->TOP__rv32.PC_inst__DOT__pc),32);
    bufp->chgIData(oldp+37,(vlSymsp->TOP__rv32.PC_inst__DOT__pc_temp),32);
    bufp->chgIData(oldp+38,(vlSymsp->TOP__rv32.PC_inst__DOT__i3__DOT__out),32);
    bufp->chgBit(oldp+39,(vlSymsp->TOP__rv32.PC_inst__DOT__i3__DOT__key));
    bufp->chgWData(oldp+40,(vlSymsp->TOP__rv32.PC_inst__DOT__i3__DOT__lut),66);
    bufp->chgIData(oldp+43,(vlSymsp->TOP__rv32.PC_inst__DOT__i3__DOT__i0__DOT__out),32);
    bufp->chgBit(oldp+44,(vlSymsp->TOP__rv32.PC_inst__DOT__i3__DOT__i0__DOT__key));
    bufp->chgIData(oldp+45,(vlSymsp->TOP__rv32.PC_inst__DOT__i3__DOT__i0__DOT__default_out),32);
    bufp->chgWData(oldp+46,(vlSymsp->TOP__rv32.PC_inst__DOT__i3__DOT__i0__DOT__lut),66);
    bufp->chgQData(oldp+49,(vlSymsp->TOP__rv32.PC_inst__DOT__i3__DOT__i0__DOT__pair_list[0]),33);
    bufp->chgQData(oldp+51,(vlSymsp->TOP__rv32.PC_inst__DOT__i3__DOT__i0__DOT__pair_list[1]),33);
    bufp->chgBit(oldp+53,(vlSymsp->TOP__rv32.PC_inst__DOT__i3__DOT__i0__DOT__key_list[0]));
    bufp->chgBit(oldp+54,(vlSymsp->TOP__rv32.PC_inst__DOT__i3__DOT__i0__DOT__key_list[1]));
    bufp->chgIData(oldp+55,(vlSymsp->TOP__rv32.PC_inst__DOT__i3__DOT__i0__DOT__data_list[0]),32);
    bufp->chgIData(oldp+56,(vlSymsp->TOP__rv32.PC_inst__DOT__i3__DOT__i0__DOT__data_list[1]),32);
    bufp->chgIData(oldp+57,(vlSymsp->TOP__rv32.PC_inst__DOT__i3__DOT__i0__DOT__lut_out),32);
    bufp->chgBit(oldp+58,(vlSymsp->TOP__rv32.PC_inst__DOT__i3__DOT__i0__DOT__hit));
    bufp->chgIData(oldp+59,(vlSymsp->TOP__rv32.PC_inst__DOT__i3__DOT__i0__DOT__i),32);
    bufp->chgCData(oldp+60,(vlSymsp->TOP__rv32.alu_inst__DOT__aluc),2);
    bufp->chgIData(oldp+61,(vlSymsp->TOP__rv32.alu_inst__DOT__num1),32);
    bufp->chgIData(oldp+62,(vlSymsp->TOP__rv32.alu_inst__DOT__num2),32);
    bufp->chgIData(oldp+63,(vlSymsp->TOP__rv32.alu_inst__DOT__result),32);
    bufp->chgIData(oldp+64,(vlSymsp->TOP__rv32.alu_inst__DOT__temp),32);
    bufp->chgBit(oldp+65,(vlSymsp->TOP__rv32.clk_count_inst__DOT__clk));
    bufp->chgBit(oldp+66,(vlSymsp->TOP__rv32.clk_count_inst__DOT__rst));
    bufp->chgBit(oldp+67,(vlSymsp->TOP__rv32.clk_count_inst__DOT__clk1_flag));
    bufp->chgBit(oldp+68,(vlSymsp->TOP__rv32.clk_count_inst__DOT__clk2_flag));
    bufp->chgCData(oldp+69,(vlSymsp->TOP__rv32.clk_count_inst__DOT__clk_cnt),2);
    bufp->chgIData(oldp+70,(vlSymsp->TOP__rv32.control_unit_inst__DOT__inst),32);
    bufp->chgCData(oldp+71,(vlSymsp->TOP__rv32.control_unit_inst__DOT__rd_11_7),5);
    bufp->chgCData(oldp+72,(vlSymsp->TOP__rv32.control_unit_inst__DOT__rs1_19_15),5);
    bufp->chgCData(oldp+73,(vlSymsp->TOP__rv32.control_unit_inst__DOT__rs2_24_20),5);
    bufp->chgCData(oldp+74,(vlSymsp->TOP__rv32.control_unit_inst__DOT__fun3_14_12),3);
    bufp->chgCData(oldp+75,(vlSymsp->TOP__rv32.control_unit_inst__DOT__fun7_31_25),7);
    bufp->chgCData(oldp+76,(vlSymsp->TOP__rv32.control_unit_inst__DOT__type1),3);
    bufp->chgCData(oldp+77,(vlSymsp->TOP__rv32.control_unit_inst__DOT__aluc),2);
    bufp->chgBit(oldp+78,(vlSymsp->TOP__rv32.control_unit_inst__DOT__wen));
    bufp->chgBit(oldp+79,(vlSymsp->TOP__rv32.control_unit_inst__DOT__m1));
    bufp->chgBit(oldp+80,(vlSymsp->TOP__rv32.control_unit_inst__DOT__m2));
    bufp->chgBit(oldp+81,(vlSymsp->TOP__rv32.control_unit_inst__DOT__m3));
    bufp->chgBit(oldp+82,(vlSymsp->TOP__rv32.control_unit_inst__DOT__m4));
    bufp->chgCData(oldp+83,(vlSymsp->TOP__rv32.control_unit_inst__DOT__opcode_6_0),7);
    bufp->chgIData(oldp+84,(vlSymsp->TOP__rv32.i1__DOT__out),32);
    bufp->chgBit(oldp+85,(vlSymsp->TOP__rv32.i1__DOT__key));
    bufp->chgWData(oldp+86,(vlSymsp->TOP__rv32.i1__DOT__lut),66);
    bufp->chgIData(oldp+89,(vlSymsp->TOP__rv32.i1__DOT__i0__DOT__out),32);
    bufp->chgBit(oldp+90,(vlSymsp->TOP__rv32.i1__DOT__i0__DOT__key));
    bufp->chgIData(oldp+91,(vlSymsp->TOP__rv32.i1__DOT__i0__DOT__default_out),32);
    bufp->chgWData(oldp+92,(vlSymsp->TOP__rv32.i1__DOT__i0__DOT__lut),66);
    bufp->chgQData(oldp+95,(vlSymsp->TOP__rv32.i1__DOT__i0__DOT__pair_list[0]),33);
    bufp->chgQData(oldp+97,(vlSymsp->TOP__rv32.i1__DOT__i0__DOT__pair_list[1]),33);
    bufp->chgBit(oldp+99,(vlSymsp->TOP__rv32.i1__DOT__i0__DOT__key_list[0]));
    bufp->chgBit(oldp+100,(vlSymsp->TOP__rv32.i1__DOT__i0__DOT__key_list[1]));
    bufp->chgIData(oldp+101,(vlSymsp->TOP__rv32.i1__DOT__i0__DOT__data_list[0]),32);
    bufp->chgIData(oldp+102,(vlSymsp->TOP__rv32.i1__DOT__i0__DOT__data_list[1]),32);
    bufp->chgIData(oldp+103,(vlSymsp->TOP__rv32.i1__DOT__i0__DOT__lut_out),32);
    bufp->chgBit(oldp+104,(vlSymsp->TOP__rv32.i1__DOT__i0__DOT__hit));
    bufp->chgIData(oldp+105,(vlSymsp->TOP__rv32.i1__DOT__i0__DOT__i),32);
    bufp->chgIData(oldp+106,(vlSymsp->TOP__rv32.i2__DOT__out),32);
    bufp->chgBit(oldp+107,(vlSymsp->TOP__rv32.i2__DOT__key));
    bufp->chgWData(oldp+108,(vlSymsp->TOP__rv32.i2__DOT__lut),66);
    bufp->chgIData(oldp+111,(vlSymsp->TOP__rv32.i2__DOT__i0__DOT__out),32);
    bufp->chgBit(oldp+112,(vlSymsp->TOP__rv32.i2__DOT__i0__DOT__key));
    bufp->chgIData(oldp+113,(vlSymsp->TOP__rv32.i2__DOT__i0__DOT__default_out),32);
    bufp->chgWData(oldp+114,(vlSymsp->TOP__rv32.i2__DOT__i0__DOT__lut),66);
    bufp->chgQData(oldp+117,(vlSymsp->TOP__rv32.i2__DOT__i0__DOT__pair_list[0]),33);
    bufp->chgQData(oldp+119,(vlSymsp->TOP__rv32.i2__DOT__i0__DOT__pair_list[1]),33);
    bufp->chgBit(oldp+121,(vlSymsp->TOP__rv32.i2__DOT__i0__DOT__key_list[0]));
    bufp->chgBit(oldp+122,(vlSymsp->TOP__rv32.i2__DOT__i0__DOT__key_list[1]));
    bufp->chgIData(oldp+123,(vlSymsp->TOP__rv32.i2__DOT__i0__DOT__data_list[0]),32);
    bufp->chgIData(oldp+124,(vlSymsp->TOP__rv32.i2__DOT__i0__DOT__data_list[1]),32);
    bufp->chgIData(oldp+125,(vlSymsp->TOP__rv32.i2__DOT__i0__DOT__lut_out),32);
    bufp->chgBit(oldp+126,(vlSymsp->TOP__rv32.i2__DOT__i0__DOT__hit));
    bufp->chgIData(oldp+127,(vlSymsp->TOP__rv32.i2__DOT__i0__DOT__i),32);
    bufp->chgIData(oldp+128,(vlSymsp->TOP__rv32.i4__DOT__out),32);
    bufp->chgBit(oldp+129,(vlSymsp->TOP__rv32.i4__DOT__key));
    bufp->chgWData(oldp+130,(vlSymsp->TOP__rv32.i4__DOT__lut),66);
    bufp->chgIData(oldp+133,(vlSymsp->TOP__rv32.i4__DOT__i0__DOT__out),32);
    bufp->chgBit(oldp+134,(vlSymsp->TOP__rv32.i4__DOT__i0__DOT__key));
    bufp->chgIData(oldp+135,(vlSymsp->TOP__rv32.i4__DOT__i0__DOT__default_out),32);
    bufp->chgWData(oldp+136,(vlSymsp->TOP__rv32.i4__DOT__i0__DOT__lut),66);
    bufp->chgQData(oldp+139,(vlSymsp->TOP__rv32.i4__DOT__i0__DOT__pair_list[0]),33);
    bufp->chgQData(oldp+141,(vlSymsp->TOP__rv32.i4__DOT__i0__DOT__pair_list[1]),33);
    bufp->chgBit(oldp+143,(vlSymsp->TOP__rv32.i4__DOT__i0__DOT__key_list[0]));
    bufp->chgBit(oldp+144,(vlSymsp->TOP__rv32.i4__DOT__i0__DOT__key_list[1]));
    bufp->chgIData(oldp+145,(vlSymsp->TOP__rv32.i4__DOT__i0__DOT__data_list[0]),32);
    bufp->chgIData(oldp+146,(vlSymsp->TOP__rv32.i4__DOT__i0__DOT__data_list[1]),32);
    bufp->chgIData(oldp+147,(vlSymsp->TOP__rv32.i4__DOT__i0__DOT__lut_out),32);
    bufp->chgBit(oldp+148,(vlSymsp->TOP__rv32.i4__DOT__i0__DOT__hit));
    bufp->chgIData(oldp+149,(vlSymsp->TOP__rv32.i4__DOT__i0__DOT__i),32);
    bufp->chgCData(oldp+150,(vlSymsp->TOP__rv32.imm_extend_inst__DOT__rs1),5);
    bufp->chgCData(oldp+151,(vlSymsp->TOP__rv32.imm_extend_inst__DOT__rs2),5);
    bufp->chgCData(oldp+152,(vlSymsp->TOP__rv32.imm_extend_inst__DOT__rd),5);
    bufp->chgCData(oldp+153,(vlSymsp->TOP__rv32.imm_extend_inst__DOT__funct3),3);
    bufp->chgCData(oldp+154,(vlSymsp->TOP__rv32.imm_extend_inst__DOT__funct7),7);
    bufp->chgCData(oldp+155,(vlSymsp->TOP__rv32.imm_extend_inst__DOT__type3),3);
    bufp->chgIData(oldp+156,(vlSymsp->TOP__rv32.imm_extend_inst__DOT__imm32),32);
    bufp->chgSData(oldp+157,(vlSymsp->TOP__rv32.imm_extend_inst__DOT__imm_12),12);
    bufp->chgIData(oldp+158,(vlSymsp->TOP__rv32.imm_extend_inst__DOT__imm_20),20);
    bufp->chgIData(oldp+159,(vlSymsp->TOP__rv32.imm_extend_inst__DOT__imm_12_to_32),32);
    bufp->chgIData(oldp+160,(vlSymsp->TOP__rv32.imm_extend_inst__DOT__imm_20_to_32),32);
    bufp->chgSData(oldp+161,(vlSymsp->TOP__rv32.imm_extend_inst__DOT__Extend_12_inst__DOT__imm_12),12);
    bufp->chgIData(oldp+162,(vlSymsp->TOP__rv32.imm_extend_inst__DOT__Extend_12_inst__DOT__imm_12_to_32),32);
    bufp->chgIData(oldp+163,(vlSymsp->TOP__rv32.imm_extend_inst__DOT__Extend_20_inst__DOT__imm_20),20);
    bufp->chgIData(oldp+164,(vlSymsp->TOP__rv32.imm_extend_inst__DOT__Extend_20_inst__DOT__imm_20_to_32),32);
    bufp->chgCData(oldp+165,(vlSymsp->TOP__rv32.imm_extend_inst__DOT__RISB_type_inst__DOT__rs2),5);
    bufp->chgCData(oldp+166,(vlSymsp->TOP__rv32.imm_extend_inst__DOT__RISB_type_inst__DOT__rd),5);
    bufp->chgCData(oldp+167,(vlSymsp->TOP__rv32.imm_extend_inst__DOT__RISB_type_inst__DOT__funct7),7);
    bufp->chgCData(oldp+168,(vlSymsp->TOP__rv32.imm_extend_inst__DOT__RISB_type_inst__DOT__type2),3);
    bufp->chgSData(oldp+169,(vlSymsp->TOP__rv32.imm_extend_inst__DOT__RISB_type_inst__DOT__imm_12),12);
    bufp->chgCData(oldp+170,(vlSymsp->TOP__rv32.imm_extend_inst__DOT__UJ_type_inst__DOT__rs1),5);
    bufp->chgCData(oldp+171,(vlSymsp->TOP__rv32.imm_extend_inst__DOT__UJ_type_inst__DOT__rs2),5);
    bufp->chgCData(oldp+172,(vlSymsp->TOP__rv32.imm_extend_inst__DOT__UJ_type_inst__DOT__funct3),3);
    bufp->chgCData(oldp+173,(vlSymsp->TOP__rv32.imm_extend_inst__DOT__UJ_type_inst__DOT__funct7),7);
    bufp->chgCData(oldp+174,(vlSymsp->TOP__rv32.imm_extend_inst__DOT__UJ_type_inst__DOT__type2),3);
    bufp->chgIData(oldp+175,(vlSymsp->TOP__rv32.imm_extend_inst__DOT__UJ_type_inst__DOT__imm_20),20);
    bufp->chgBit(oldp+176,(vlSymsp->TOP__rv32__register_file_inst.clk));
    bufp->chgBit(oldp+177,(vlSymsp->TOP__rv32__register_file_inst.rst));
    bufp->chgBit(oldp+178,(vlSymsp->TOP__rv32__register_file_inst.clk1_flag));
    bufp->chgBit(oldp+179,(vlSymsp->TOP__rv32__register_file_inst.wen));
    bufp->chgCData(oldp+180,(vlSymsp->TOP__rv32__register_file_inst.rs1),5);
    bufp->chgCData(oldp+181,(vlSymsp->TOP__rv32__register_file_inst.rs2),5);
    bufp->chgCData(oldp+182,(vlSymsp->TOP__rv32__register_file_inst.rd),5);
    bufp->chgIData(oldp+183,(vlSymsp->TOP__rv32__register_file_inst.rin),32);
    bufp->chgIData(oldp+184,(vlSymsp->TOP__rv32__register_file_inst.src1),32);
    bufp->chgIData(oldp+185,(vlSymsp->TOP__rv32__register_file_inst.src2),32);
    bufp->chgIData(oldp+186,(vlSymsp->TOP__rv32__register_file_inst.i),32);
    bufp->chgIData(oldp+187,(vlSymsp->TOP__rv32__register_file_inst.regs[0]),32);
    bufp->chgIData(oldp+188,(vlSymsp->TOP__rv32__register_file_inst.regs[1]),32);
    bufp->chgIData(oldp+189,(vlSymsp->TOP__rv32__register_file_inst.regs[2]),32);
    bufp->chgIData(oldp+190,(vlSymsp->TOP__rv32__register_file_inst.regs[3]),32);
    bufp->chgIData(oldp+191,(vlSymsp->TOP__rv32__register_file_inst.regs[4]),32);
    bufp->chgIData(oldp+192,(vlSymsp->TOP__rv32__register_file_inst.regs[5]),32);
    bufp->chgIData(oldp+193,(vlSymsp->TOP__rv32__register_file_inst.regs[6]),32);
    bufp->chgIData(oldp+194,(vlSymsp->TOP__rv32__register_file_inst.regs[7]),32);
    bufp->chgIData(oldp+195,(vlSymsp->TOP__rv32__register_file_inst.regs[8]),32);
    bufp->chgIData(oldp+196,(vlSymsp->TOP__rv32__register_file_inst.regs[9]),32);
    bufp->chgIData(oldp+197,(vlSymsp->TOP__rv32__register_file_inst.regs[10]),32);
    bufp->chgIData(oldp+198,(vlSymsp->TOP__rv32__register_file_inst.regs[11]),32);
    bufp->chgIData(oldp+199,(vlSymsp->TOP__rv32__register_file_inst.regs[12]),32);
    bufp->chgIData(oldp+200,(vlSymsp->TOP__rv32__register_file_inst.regs[13]),32);
    bufp->chgIData(oldp+201,(vlSymsp->TOP__rv32__register_file_inst.regs[14]),32);
    bufp->chgIData(oldp+202,(vlSymsp->TOP__rv32__register_file_inst.regs[15]),32);
    bufp->chgIData(oldp+203,(vlSymsp->TOP__rv32__register_file_inst.regs[16]),32);
    bufp->chgIData(oldp+204,(vlSymsp->TOP__rv32__register_file_inst.regs[17]),32);
    bufp->chgIData(oldp+205,(vlSymsp->TOP__rv32__register_file_inst.regs[18]),32);
    bufp->chgIData(oldp+206,(vlSymsp->TOP__rv32__register_file_inst.regs[19]),32);
    bufp->chgIData(oldp+207,(vlSymsp->TOP__rv32__register_file_inst.regs[20]),32);
    bufp->chgIData(oldp+208,(vlSymsp->TOP__rv32__register_file_inst.regs[21]),32);
    bufp->chgIData(oldp+209,(vlSymsp->TOP__rv32__register_file_inst.regs[22]),32);
    bufp->chgIData(oldp+210,(vlSymsp->TOP__rv32__register_file_inst.regs[23]),32);
    bufp->chgIData(oldp+211,(vlSymsp->TOP__rv32__register_file_inst.regs[24]),32);
    bufp->chgIData(oldp+212,(vlSymsp->TOP__rv32__register_file_inst.regs[25]),32);
    bufp->chgIData(oldp+213,(vlSymsp->TOP__rv32__register_file_inst.regs[26]),32);
    bufp->chgIData(oldp+214,(vlSymsp->TOP__rv32__register_file_inst.regs[27]),32);
    bufp->chgIData(oldp+215,(vlSymsp->TOP__rv32__register_file_inst.regs[28]),32);
    bufp->chgIData(oldp+216,(vlSymsp->TOP__rv32__register_file_inst.regs[29]),32);
    bufp->chgIData(oldp+217,(vlSymsp->TOP__rv32__register_file_inst.regs[30]),32);
    bufp->chgIData(oldp+218,(vlSymsp->TOP__rv32__register_file_inst.regs[31]),32);
    bufp->chgBit(oldp+219,(vlSymsp->TOP__rv32__register_file_inst.r_wen));
}

void Vrv32___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32___024root__trace_cleanup\n"); );
    // Init
    Vrv32___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrv32___024root*>(voidSelf);
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
