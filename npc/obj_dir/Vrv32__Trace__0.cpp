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
    bufp->chgBit(oldp+4,(vlSelf->rv32__DOT__clk));
    bufp->chgBit(oldp+5,(vlSelf->rv32__DOT__rst));
    bufp->chgIData(oldp+6,(vlSelf->rv32__DOT__inst),32);
    bufp->chgIData(oldp+7,(vlSelf->rv32__DOT__pc),32);
    bufp->chgBit(oldp+8,(vlSelf->rv32__DOT__clk1_flag));
    bufp->chgBit(oldp+9,(vlSelf->rv32__DOT__clk2_flag));
    bufp->chgCData(oldp+10,(vlSelf->rv32__DOT__rs1),5);
    bufp->chgCData(oldp+11,(vlSelf->rv32__DOT__rs2),5);
    bufp->chgCData(oldp+12,(vlSelf->rv32__DOT__rd),5);
    bufp->chgCData(oldp+13,(vlSelf->rv32__DOT__funct3),3);
    bufp->chgCData(oldp+14,(vlSelf->rv32__DOT__funct7),7);
    bufp->chgCData(oldp+15,(vlSelf->rv32__DOT__type4),3);
    bufp->chgBit(oldp+16,(vlSelf->rv32__DOT__wen));
    bufp->chgBit(oldp+17,(vlSelf->rv32__DOT__m1));
    bufp->chgBit(oldp+18,(vlSelf->rv32__DOT__m2));
    bufp->chgBit(oldp+19,(vlSelf->rv32__DOT__m3));
    bufp->chgBit(oldp+20,(vlSelf->rv32__DOT__m4));
    bufp->chgCData(oldp+21,(vlSelf->rv32__DOT__aluc),2);
    bufp->chgIData(oldp+22,(vlSelf->rv32__DOT__PCadd4),32);
    bufp->chgIData(oldp+23,(vlSelf->rv32__DOT__result),32);
    bufp->chgIData(oldp+24,(vlSelf->rv32__DOT__rin),32);
    bufp->chgIData(oldp+25,(vlSelf->rv32__DOT__src1),32);
    bufp->chgIData(oldp+26,(vlSelf->rv32__DOT__src2),32);
    bufp->chgIData(oldp+27,(vlSelf->rv32__DOT__imm),32);
    bufp->chgIData(oldp+28,(vlSelf->rv32__DOT__num1),32);
    bufp->chgIData(oldp+29,(vlSelf->rv32__DOT__num2),32);
    bufp->chgBit(oldp+30,(vlSelf->rv32__DOT__PC_inst__DOT__clk));
    bufp->chgBit(oldp+31,(vlSelf->rv32__DOT__PC_inst__DOT__rst));
    bufp->chgBit(oldp+32,(vlSelf->rv32__DOT__PC_inst__DOT__m3));
    bufp->chgBit(oldp+33,(vlSelf->rv32__DOT__PC_inst__DOT__clk2_flag));
    bufp->chgIData(oldp+34,(vlSelf->rv32__DOT__PC_inst__DOT__result),32);
    bufp->chgIData(oldp+35,(vlSelf->rv32__DOT__PC_inst__DOT__PCadd4),32);
    bufp->chgIData(oldp+36,(vlSelf->rv32__DOT__PC_inst__DOT__pc),32);
    bufp->chgIData(oldp+37,(vlSelf->rv32__DOT__PC_inst__DOT__pc_temp),32);
    bufp->chgIData(oldp+38,(vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__out),32);
    bufp->chgBit(oldp+39,(vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__key));
    bufp->chgWData(oldp+40,(vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__lut),66);
    bufp->chgIData(oldp+43,(vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__out),32);
    bufp->chgBit(oldp+44,(vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__key));
    bufp->chgIData(oldp+45,(vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__default_out),32);
    bufp->chgWData(oldp+46,(vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__lut),66);
    bufp->chgQData(oldp+49,(vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__pair_list[0]),33);
    bufp->chgQData(oldp+51,(vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__pair_list[1]),33);
    bufp->chgBit(oldp+53,(vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__key_list[0]));
    bufp->chgBit(oldp+54,(vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__key_list[1]));
    bufp->chgIData(oldp+55,(vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__data_list[0]),32);
    bufp->chgIData(oldp+56,(vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__data_list[1]),32);
    bufp->chgIData(oldp+57,(vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__lut_out),32);
    bufp->chgBit(oldp+58,(vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__hit));
    bufp->chgIData(oldp+59,(vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__i),32);
    bufp->chgCData(oldp+60,(vlSelf->rv32__DOT__alu_inst__DOT__aluc),2);
    bufp->chgIData(oldp+61,(vlSelf->rv32__DOT__alu_inst__DOT__num1),32);
    bufp->chgIData(oldp+62,(vlSelf->rv32__DOT__alu_inst__DOT__num2),32);
    bufp->chgIData(oldp+63,(vlSelf->rv32__DOT__alu_inst__DOT__result),32);
    bufp->chgIData(oldp+64,(vlSelf->rv32__DOT__alu_inst__DOT__temp),32);
    bufp->chgBit(oldp+65,(vlSelf->rv32__DOT__clk_count_inst__DOT__clk));
    bufp->chgBit(oldp+66,(vlSelf->rv32__DOT__clk_count_inst__DOT__rst));
    bufp->chgBit(oldp+67,(vlSelf->rv32__DOT__clk_count_inst__DOT__clk1_flag));
    bufp->chgBit(oldp+68,(vlSelf->rv32__DOT__clk_count_inst__DOT__clk2_flag));
    bufp->chgCData(oldp+69,(vlSelf->rv32__DOT__clk_count_inst__DOT__clk_cnt),2);
    bufp->chgIData(oldp+70,(vlSelf->rv32__DOT__control_unit_inst__DOT__inst),32);
    bufp->chgCData(oldp+71,(vlSelf->rv32__DOT__control_unit_inst__DOT__rd_11_7),5);
    bufp->chgCData(oldp+72,(vlSelf->rv32__DOT__control_unit_inst__DOT__rs1_19_15),5);
    bufp->chgCData(oldp+73,(vlSelf->rv32__DOT__control_unit_inst__DOT__rs2_24_20),5);
    bufp->chgCData(oldp+74,(vlSelf->rv32__DOT__control_unit_inst__DOT__fun3_14_12),3);
    bufp->chgCData(oldp+75,(vlSelf->rv32__DOT__control_unit_inst__DOT__fun7_31_25),7);
    bufp->chgCData(oldp+76,(vlSelf->rv32__DOT__control_unit_inst__DOT__type1),3);
    bufp->chgCData(oldp+77,(vlSelf->rv32__DOT__control_unit_inst__DOT__aluc),2);
    bufp->chgBit(oldp+78,(vlSelf->rv32__DOT__control_unit_inst__DOT__wen));
    bufp->chgBit(oldp+79,(vlSelf->rv32__DOT__control_unit_inst__DOT__m1));
    bufp->chgBit(oldp+80,(vlSelf->rv32__DOT__control_unit_inst__DOT__m2));
    bufp->chgBit(oldp+81,(vlSelf->rv32__DOT__control_unit_inst__DOT__m3));
    bufp->chgBit(oldp+82,(vlSelf->rv32__DOT__control_unit_inst__DOT__m4));
    bufp->chgCData(oldp+83,(vlSelf->rv32__DOT__control_unit_inst__DOT__opcode_6_0),7);
    bufp->chgIData(oldp+84,(vlSelf->rv32__DOT__i1__DOT__out),32);
    bufp->chgBit(oldp+85,(vlSelf->rv32__DOT__i1__DOT__key));
    bufp->chgWData(oldp+86,(vlSelf->rv32__DOT__i1__DOT__lut),66);
    bufp->chgIData(oldp+89,(vlSelf->rv32__DOT__i1__DOT__i0__DOT__out),32);
    bufp->chgBit(oldp+90,(vlSelf->rv32__DOT__i1__DOT__i0__DOT__key));
    bufp->chgIData(oldp+91,(vlSelf->rv32__DOT__i1__DOT__i0__DOT__default_out),32);
    bufp->chgWData(oldp+92,(vlSelf->rv32__DOT__i1__DOT__i0__DOT__lut),66);
    bufp->chgQData(oldp+95,(vlSelf->rv32__DOT__i1__DOT__i0__DOT__pair_list[0]),33);
    bufp->chgQData(oldp+97,(vlSelf->rv32__DOT__i1__DOT__i0__DOT__pair_list[1]),33);
    bufp->chgBit(oldp+99,(vlSelf->rv32__DOT__i1__DOT__i0__DOT__key_list[0]));
    bufp->chgBit(oldp+100,(vlSelf->rv32__DOT__i1__DOT__i0__DOT__key_list[1]));
    bufp->chgIData(oldp+101,(vlSelf->rv32__DOT__i1__DOT__i0__DOT__data_list[0]),32);
    bufp->chgIData(oldp+102,(vlSelf->rv32__DOT__i1__DOT__i0__DOT__data_list[1]),32);
    bufp->chgIData(oldp+103,(vlSelf->rv32__DOT__i1__DOT__i0__DOT__lut_out),32);
    bufp->chgBit(oldp+104,(vlSelf->rv32__DOT__i1__DOT__i0__DOT__hit));
    bufp->chgIData(oldp+105,(vlSelf->rv32__DOT__i1__DOT__i0__DOT__i),32);
    bufp->chgIData(oldp+106,(vlSelf->rv32__DOT__i2__DOT__out),32);
    bufp->chgBit(oldp+107,(vlSelf->rv32__DOT__i2__DOT__key));
    bufp->chgWData(oldp+108,(vlSelf->rv32__DOT__i2__DOT__lut),66);
    bufp->chgIData(oldp+111,(vlSelf->rv32__DOT__i2__DOT__i0__DOT__out),32);
    bufp->chgBit(oldp+112,(vlSelf->rv32__DOT__i2__DOT__i0__DOT__key));
    bufp->chgIData(oldp+113,(vlSelf->rv32__DOT__i2__DOT__i0__DOT__default_out),32);
    bufp->chgWData(oldp+114,(vlSelf->rv32__DOT__i2__DOT__i0__DOT__lut),66);
    bufp->chgQData(oldp+117,(vlSelf->rv32__DOT__i2__DOT__i0__DOT__pair_list[0]),33);
    bufp->chgQData(oldp+119,(vlSelf->rv32__DOT__i2__DOT__i0__DOT__pair_list[1]),33);
    bufp->chgBit(oldp+121,(vlSelf->rv32__DOT__i2__DOT__i0__DOT__key_list[0]));
    bufp->chgBit(oldp+122,(vlSelf->rv32__DOT__i2__DOT__i0__DOT__key_list[1]));
    bufp->chgIData(oldp+123,(vlSelf->rv32__DOT__i2__DOT__i0__DOT__data_list[0]),32);
    bufp->chgIData(oldp+124,(vlSelf->rv32__DOT__i2__DOT__i0__DOT__data_list[1]),32);
    bufp->chgIData(oldp+125,(vlSelf->rv32__DOT__i2__DOT__i0__DOT__lut_out),32);
    bufp->chgBit(oldp+126,(vlSelf->rv32__DOT__i2__DOT__i0__DOT__hit));
    bufp->chgIData(oldp+127,(vlSelf->rv32__DOT__i2__DOT__i0__DOT__i),32);
    bufp->chgIData(oldp+128,(vlSelf->rv32__DOT__i4__DOT__out),32);
    bufp->chgBit(oldp+129,(vlSelf->rv32__DOT__i4__DOT__key));
    bufp->chgWData(oldp+130,(vlSelf->rv32__DOT__i4__DOT__lut),66);
    bufp->chgIData(oldp+133,(vlSelf->rv32__DOT__i4__DOT__i0__DOT__out),32);
    bufp->chgBit(oldp+134,(vlSelf->rv32__DOT__i4__DOT__i0__DOT__key));
    bufp->chgIData(oldp+135,(vlSelf->rv32__DOT__i4__DOT__i0__DOT__default_out),32);
    bufp->chgWData(oldp+136,(vlSelf->rv32__DOT__i4__DOT__i0__DOT__lut),66);
    bufp->chgQData(oldp+139,(vlSelf->rv32__DOT__i4__DOT__i0__DOT__pair_list[0]),33);
    bufp->chgQData(oldp+141,(vlSelf->rv32__DOT__i4__DOT__i0__DOT__pair_list[1]),33);
    bufp->chgBit(oldp+143,(vlSelf->rv32__DOT__i4__DOT__i0__DOT__key_list[0]));
    bufp->chgBit(oldp+144,(vlSelf->rv32__DOT__i4__DOT__i0__DOT__key_list[1]));
    bufp->chgIData(oldp+145,(vlSelf->rv32__DOT__i4__DOT__i0__DOT__data_list[0]),32);
    bufp->chgIData(oldp+146,(vlSelf->rv32__DOT__i4__DOT__i0__DOT__data_list[1]),32);
    bufp->chgIData(oldp+147,(vlSelf->rv32__DOT__i4__DOT__i0__DOT__lut_out),32);
    bufp->chgBit(oldp+148,(vlSelf->rv32__DOT__i4__DOT__i0__DOT__hit));
    bufp->chgIData(oldp+149,(vlSelf->rv32__DOT__i4__DOT__i0__DOT__i),32);
    bufp->chgCData(oldp+150,(vlSelf->rv32__DOT__imm_extend_inst__DOT__rs1),5);
    bufp->chgCData(oldp+151,(vlSelf->rv32__DOT__imm_extend_inst__DOT__rs2),5);
    bufp->chgCData(oldp+152,(vlSelf->rv32__DOT__imm_extend_inst__DOT__rd),5);
    bufp->chgCData(oldp+153,(vlSelf->rv32__DOT__imm_extend_inst__DOT__funct3),3);
    bufp->chgCData(oldp+154,(vlSelf->rv32__DOT__imm_extend_inst__DOT__funct7),7);
    bufp->chgCData(oldp+155,(vlSelf->rv32__DOT__imm_extend_inst__DOT__type3),3);
    bufp->chgIData(oldp+156,(vlSelf->rv32__DOT__imm_extend_inst__DOT__imm32),32);
    bufp->chgSData(oldp+157,(vlSelf->rv32__DOT__imm_extend_inst__DOT__imm_12),12);
    bufp->chgIData(oldp+158,(vlSelf->rv32__DOT__imm_extend_inst__DOT__imm_20),20);
    bufp->chgIData(oldp+159,(vlSelf->rv32__DOT__imm_extend_inst__DOT__imm_12_to_32),32);
    bufp->chgIData(oldp+160,(vlSelf->rv32__DOT__imm_extend_inst__DOT__imm_20_to_32),32);
    bufp->chgSData(oldp+161,(vlSelf->rv32__DOT__imm_extend_inst__DOT__Extend_12_inst__DOT__imm_12),12);
    bufp->chgIData(oldp+162,(vlSelf->rv32__DOT__imm_extend_inst__DOT__Extend_12_inst__DOT__imm_12_to_32),32);
    bufp->chgIData(oldp+163,(vlSelf->rv32__DOT__imm_extend_inst__DOT__Extend_20_inst__DOT__imm_20),20);
    bufp->chgIData(oldp+164,(vlSelf->rv32__DOT__imm_extend_inst__DOT__Extend_20_inst__DOT__imm_20_to_32),32);
    bufp->chgCData(oldp+165,(vlSelf->rv32__DOT__imm_extend_inst__DOT__RISB_type_inst__DOT__rs2),5);
    bufp->chgCData(oldp+166,(vlSelf->rv32__DOT__imm_extend_inst__DOT__RISB_type_inst__DOT__rd),5);
    bufp->chgCData(oldp+167,(vlSelf->rv32__DOT__imm_extend_inst__DOT__RISB_type_inst__DOT__funct7),7);
    bufp->chgCData(oldp+168,(vlSelf->rv32__DOT__imm_extend_inst__DOT__RISB_type_inst__DOT__type2),3);
    bufp->chgSData(oldp+169,(vlSelf->rv32__DOT__imm_extend_inst__DOT__RISB_type_inst__DOT__imm_12),12);
    bufp->chgCData(oldp+170,(vlSelf->rv32__DOT__imm_extend_inst__DOT__UJ_type_inst__DOT__rs1),5);
    bufp->chgCData(oldp+171,(vlSelf->rv32__DOT__imm_extend_inst__DOT__UJ_type_inst__DOT__rs2),5);
    bufp->chgCData(oldp+172,(vlSelf->rv32__DOT__imm_extend_inst__DOT__UJ_type_inst__DOT__funct3),3);
    bufp->chgCData(oldp+173,(vlSelf->rv32__DOT__imm_extend_inst__DOT__UJ_type_inst__DOT__funct7),7);
    bufp->chgCData(oldp+174,(vlSelf->rv32__DOT__imm_extend_inst__DOT__UJ_type_inst__DOT__type2),3);
    bufp->chgIData(oldp+175,(vlSelf->rv32__DOT__imm_extend_inst__DOT__UJ_type_inst__DOT__imm_20),20);
    bufp->chgBit(oldp+176,(vlSelf->rv32__DOT__register_file_inst__DOT__clk));
    bufp->chgBit(oldp+177,(vlSelf->rv32__DOT__register_file_inst__DOT__rst));
    bufp->chgBit(oldp+178,(vlSelf->rv32__DOT__register_file_inst__DOT__clk1_flag));
    bufp->chgBit(oldp+179,(vlSelf->rv32__DOT__register_file_inst__DOT__wen));
    bufp->chgCData(oldp+180,(vlSelf->rv32__DOT__register_file_inst__DOT__rs1),5);
    bufp->chgCData(oldp+181,(vlSelf->rv32__DOT__register_file_inst__DOT__rs2),5);
    bufp->chgCData(oldp+182,(vlSelf->rv32__DOT__register_file_inst__DOT__rd),5);
    bufp->chgIData(oldp+183,(vlSelf->rv32__DOT__register_file_inst__DOT__rin),32);
    bufp->chgIData(oldp+184,(vlSelf->rv32__DOT__register_file_inst__DOT__src1),32);
    bufp->chgIData(oldp+185,(vlSelf->rv32__DOT__register_file_inst__DOT__src2),32);
    bufp->chgIData(oldp+186,(vlSelf->rv32__DOT__register_file_inst__DOT__i),32);
    bufp->chgIData(oldp+187,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[0]),32);
    bufp->chgIData(oldp+188,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[1]),32);
    bufp->chgIData(oldp+189,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[2]),32);
    bufp->chgIData(oldp+190,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[3]),32);
    bufp->chgIData(oldp+191,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[4]),32);
    bufp->chgIData(oldp+192,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[5]),32);
    bufp->chgIData(oldp+193,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[6]),32);
    bufp->chgIData(oldp+194,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[7]),32);
    bufp->chgIData(oldp+195,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[8]),32);
    bufp->chgIData(oldp+196,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[9]),32);
    bufp->chgIData(oldp+197,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[10]),32);
    bufp->chgIData(oldp+198,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[11]),32);
    bufp->chgIData(oldp+199,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[12]),32);
    bufp->chgIData(oldp+200,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[13]),32);
    bufp->chgIData(oldp+201,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[14]),32);
    bufp->chgIData(oldp+202,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[15]),32);
    bufp->chgIData(oldp+203,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[16]),32);
    bufp->chgIData(oldp+204,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[17]),32);
    bufp->chgIData(oldp+205,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[18]),32);
    bufp->chgIData(oldp+206,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[19]),32);
    bufp->chgIData(oldp+207,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[20]),32);
    bufp->chgIData(oldp+208,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[21]),32);
    bufp->chgIData(oldp+209,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[22]),32);
    bufp->chgIData(oldp+210,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[23]),32);
    bufp->chgIData(oldp+211,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[24]),32);
    bufp->chgIData(oldp+212,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[25]),32);
    bufp->chgIData(oldp+213,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[26]),32);
    bufp->chgIData(oldp+214,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[27]),32);
    bufp->chgIData(oldp+215,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[28]),32);
    bufp->chgIData(oldp+216,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[29]),32);
    bufp->chgIData(oldp+217,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[30]),32);
    bufp->chgIData(oldp+218,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[31]),32);
    bufp->chgBit(oldp+219,(vlSelf->rv32__DOT__register_file_inst__DOT__r_wen));
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
