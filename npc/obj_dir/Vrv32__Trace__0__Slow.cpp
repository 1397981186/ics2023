// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vrv32__Syms.h"


VL_ATTR_COLD void Vrv32___024root__trace_init_sub__TOP__0(Vrv32___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+100,"clk", false,-1);
    tracep->declBit(c+101,"rst", false,-1);
    tracep->declBus(c+102,"inst", false,-1, 31,0);
    tracep->declBus(c+103,"pc", false,-1, 31,0);
    tracep->pushNamePrefix("rv32 ");
    tracep->declBit(c+100,"clk", false,-1);
    tracep->declBit(c+101,"rst", false,-1);
    tracep->declBus(c+102,"inst", false,-1, 31,0);
    tracep->declBus(c+103,"pc", false,-1, 31,0);
    tracep->declBit(c+64,"clk1_flag", false,-1);
    tracep->declBit(c+65,"clk2_flag", false,-1);
    tracep->declBus(c+104,"rs1", false,-1, 4,0);
    tracep->declBus(c+105,"rs2", false,-1, 4,0);
    tracep->declBus(c+106,"rd", false,-1, 4,0);
    tracep->declBus(c+107,"funct3", false,-1, 2,0);
    tracep->declBus(c+108,"funct7", false,-1, 6,0);
    tracep->declBus(c+9,"type4", false,-1, 2,0);
    tracep->declBit(c+10,"wen", false,-1);
    tracep->declBit(c+11,"m1", false,-1);
    tracep->declBit(c+12,"m2", false,-1);
    tracep->declBit(c+13,"m3", false,-1);
    tracep->declBit(c+14,"m4", false,-1);
    tracep->declBus(c+15,"aluc", false,-1, 1,0);
    tracep->declBus(c+109,"PCadd4", false,-1, 31,0);
    tracep->declBus(c+25,"result", false,-1, 31,0);
    tracep->declBus(c+26,"rin", false,-1, 31,0);
    tracep->declBus(c+27,"src1", false,-1, 31,0);
    tracep->declBus(c+28,"src2", false,-1, 31,0);
    tracep->declBus(c+16,"imm", false,-1, 31,0);
    tracep->declBus(c+29,"num1", false,-1, 31,0);
    tracep->declBus(c+30,"num2", false,-1, 31,0);
    tracep->pushNamePrefix("PC_inst ");
    tracep->declBit(c+100,"clk", false,-1);
    tracep->declBit(c+101,"rst", false,-1);
    tracep->declBit(c+13,"m3", false,-1);
    tracep->declBit(c+65,"clk2_flag", false,-1);
    tracep->declBus(c+25,"result", false,-1, 31,0);
    tracep->declBus(c+109,"PCadd4", false,-1, 31,0);
    tracep->declBus(c+103,"pc", false,-1, 31,0);
    tracep->declBus(c+31,"pc_temp", false,-1, 31,0);
    tracep->pushNamePrefix("i3 ");
    tracep->declBus(c+117,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+118,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+119,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+31,"out", false,-1, 31,0);
    tracep->declBus(c+13,"key", false,-1, 0,0);
    tracep->declArray(c+110,"lut", false,-1, 65,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+117,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+118,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+119,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+120,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+31,"out", false,-1, 31,0);
    tracep->declBus(c+13,"key", false,-1, 0,0);
    tracep->declBus(c+121,"default_out", false,-1, 31,0);
    tracep->declArray(c+110,"lut", false,-1, 65,0);
    tracep->declBus(c+122,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+32+i*2,"pair_list", true,(i+0), 32,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+36+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+38,"lut_out", false,-1, 31,0);
    tracep->declBit(c+17,"hit", false,-1);
    tracep->declBus(c+123,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("alu_inst ");
    tracep->declBus(c+15,"aluc", false,-1, 1,0);
    tracep->declBus(c+29,"num1", false,-1, 31,0);
    tracep->declBus(c+30,"num2", false,-1, 31,0);
    tracep->declBus(c+25,"result", false,-1, 31,0);
    tracep->declBus(c+124,"temp", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clk_count_inst ");
    tracep->declBit(c+100,"clk", false,-1);
    tracep->declBit(c+101,"rst", false,-1);
    tracep->declBit(c+64,"clk1_flag", false,-1);
    tracep->declBit(c+65,"clk2_flag", false,-1);
    tracep->declBus(c+66,"clk_cnt", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("control_unit_inst ");
    tracep->declBus(c+102,"inst", false,-1, 31,0);
    tracep->declBus(c+106,"rd_11_7", false,-1, 4,0);
    tracep->declBus(c+104,"rs1_19_15", false,-1, 4,0);
    tracep->declBus(c+105,"rs2_24_20", false,-1, 4,0);
    tracep->declBus(c+107,"fun3_14_12", false,-1, 2,0);
    tracep->declBus(c+108,"fun7_31_25", false,-1, 6,0);
    tracep->declBus(c+9,"type1", false,-1, 2,0);
    tracep->declBus(c+15,"aluc", false,-1, 1,0);
    tracep->declBit(c+10,"wen", false,-1);
    tracep->declBit(c+11,"m1", false,-1);
    tracep->declBit(c+12,"m2", false,-1);
    tracep->declBit(c+13,"m3", false,-1);
    tracep->declBit(c+14,"m4", false,-1);
    tracep->declBus(c+113,"opcode_6_0", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+117,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+118,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+119,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+29,"out", false,-1, 31,0);
    tracep->declBus(c+11,"key", false,-1, 0,0);
    tracep->declArray(c+114,"lut", false,-1, 65,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+117,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+118,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+119,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+120,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+29,"out", false,-1, 31,0);
    tracep->declBus(c+11,"key", false,-1, 0,0);
    tracep->declBus(c+121,"default_out", false,-1, 31,0);
    tracep->declArray(c+114,"lut", false,-1, 65,0);
    tracep->declBus(c+122,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+39+i*2,"pair_list", true,(i+0), 32,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+3+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+43+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+45,"lut_out", false,-1, 31,0);
    tracep->declBit(c+18,"hit", false,-1);
    tracep->declBus(c+123,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i2 ");
    tracep->declBus(c+117,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+118,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+119,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+30,"out", false,-1, 31,0);
    tracep->declBus(c+12,"key", false,-1, 0,0);
    tracep->declArray(c+46,"lut", false,-1, 65,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+117,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+118,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+119,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+120,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+30,"out", false,-1, 31,0);
    tracep->declBus(c+12,"key", false,-1, 0,0);
    tracep->declBus(c+121,"default_out", false,-1, 31,0);
    tracep->declArray(c+46,"lut", false,-1, 65,0);
    tracep->declBus(c+122,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+49+i*2,"pair_list", true,(i+0), 32,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+5+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+53+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+55,"lut_out", false,-1, 31,0);
    tracep->declBit(c+19,"hit", false,-1);
    tracep->declBus(c+123,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i4 ");
    tracep->declBus(c+117,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+118,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+119,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+26,"out", false,-1, 31,0);
    tracep->declBus(c+14,"key", false,-1, 0,0);
    tracep->declArray(c+110,"lut", false,-1, 65,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+117,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+118,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+119,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+120,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+26,"out", false,-1, 31,0);
    tracep->declBus(c+14,"key", false,-1, 0,0);
    tracep->declBus(c+121,"default_out", false,-1, 31,0);
    tracep->declArray(c+110,"lut", false,-1, 65,0);
    tracep->declBus(c+122,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+56+i*2,"pair_list", true,(i+0), 32,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+7+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+60+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+62,"lut_out", false,-1, 31,0);
    tracep->declBit(c+20,"hit", false,-1);
    tracep->declBus(c+123,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("imm_extend_inst ");
    tracep->declBus(c+104,"rs1", false,-1, 4,0);
    tracep->declBus(c+105,"rs2", false,-1, 4,0);
    tracep->declBus(c+106,"rd", false,-1, 4,0);
    tracep->declBus(c+107,"funct3", false,-1, 2,0);
    tracep->declBus(c+108,"funct7", false,-1, 6,0);
    tracep->declBus(c+9,"type3", false,-1, 2,0);
    tracep->declBus(c+16,"imm32", false,-1, 31,0);
    tracep->declBus(c+21,"imm_12", false,-1, 11,0);
    tracep->declBus(c+22,"imm_20", false,-1, 19,0);
    tracep->declBus(c+23,"imm_12_to_32", false,-1, 31,0);
    tracep->declBus(c+24,"imm_20_to_32", false,-1, 31,0);
    tracep->pushNamePrefix("Extend_12_inst ");
    tracep->declBus(c+21,"imm_12", false,-1, 11,0);
    tracep->declBus(c+23,"imm_12_to_32", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Extend_20_inst ");
    tracep->declBus(c+22,"imm_20", false,-1, 19,0);
    tracep->declBus(c+24,"imm_20_to_32", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RISB_type_inst ");
    tracep->declBus(c+105,"rs2", false,-1, 4,0);
    tracep->declBus(c+106,"rd", false,-1, 4,0);
    tracep->declBus(c+108,"funct7", false,-1, 6,0);
    tracep->declBus(c+9,"type2", false,-1, 2,0);
    tracep->declBus(c+21,"imm_12", false,-1, 11,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("UJ_type_inst ");
    tracep->declBus(c+104,"rs1", false,-1, 4,0);
    tracep->declBus(c+105,"rs2", false,-1, 4,0);
    tracep->declBus(c+107,"funct3", false,-1, 2,0);
    tracep->declBus(c+108,"funct7", false,-1, 6,0);
    tracep->declBus(c+9,"type2", false,-1, 2,0);
    tracep->declBus(c+22,"imm_20", false,-1, 19,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("register_file_inst ");
    tracep->declBit(c+100,"clk", false,-1);
    tracep->declBit(c+101,"rst", false,-1);
    tracep->declBit(c+64,"clk1_flag", false,-1);
    tracep->declBit(c+10,"wen", false,-1);
    tracep->declBus(c+104,"rs1", false,-1, 4,0);
    tracep->declBus(c+105,"rs2", false,-1, 4,0);
    tracep->declBus(c+106,"rd", false,-1, 4,0);
    tracep->declBus(c+26,"rin", false,-1, 31,0);
    tracep->declBus(c+27,"src1", false,-1, 31,0);
    tracep->declBus(c+28,"src2", false,-1, 31,0);
    tracep->declBus(c+67,"i", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+68+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->declBit(c+63,"r_wen", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vrv32___024root__trace_init_top(Vrv32___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32___024root__trace_init_top\n"); );
    // Body
    Vrv32___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vrv32___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vrv32___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vrv32___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vrv32___024root__trace_register(Vrv32___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vrv32___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vrv32___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vrv32___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vrv32___024root__trace_full_sub_0(Vrv32___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vrv32___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32___024root__trace_full_top_0\n"); );
    // Init
    Vrv32___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrv32___024root*>(voidSelf);
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vrv32___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vrv32___024root__trace_full_sub_0(Vrv32___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_h03a154e0__0;
    VlWide<3>/*95:0*/ __Vtemp_hd76e9101__0;
    VlWide<3>/*95:0*/ __Vtemp_he1edb7f3__0;
    // Body
    bufp->fullBit(oldp+1,(vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+2,(vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__key_list[1]));
    bufp->fullBit(oldp+3,(vlSelf->rv32__DOT__i1__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+4,(vlSelf->rv32__DOT__i1__DOT__i0__DOT__key_list[1]));
    bufp->fullBit(oldp+5,(vlSelf->rv32__DOT__i2__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+6,(vlSelf->rv32__DOT__i2__DOT__i0__DOT__key_list[1]));
    bufp->fullBit(oldp+7,(vlSelf->rv32__DOT__i4__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+8,(vlSelf->rv32__DOT__i4__DOT__i0__DOT__key_list[1]));
    bufp->fullCData(oldp+9,(vlSelf->rv32__DOT__type4),3);
    bufp->fullBit(oldp+10,(vlSelf->rv32__DOT__wen));
    bufp->fullBit(oldp+11,(vlSelf->rv32__DOT__m1));
    bufp->fullBit(oldp+12,(vlSelf->rv32__DOT__m2));
    bufp->fullBit(oldp+13,(vlSelf->rv32__DOT__m3));
    bufp->fullBit(oldp+14,(vlSelf->rv32__DOT__m4));
    bufp->fullCData(oldp+15,(vlSelf->rv32__DOT__aluc),2);
    bufp->fullIData(oldp+16,(vlSelf->rv32__DOT__imm),32);
    bufp->fullBit(oldp+17,(vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+18,(vlSelf->rv32__DOT__i1__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+19,(vlSelf->rv32__DOT__i2__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+20,(vlSelf->rv32__DOT__i4__DOT__i0__DOT__hit));
    bufp->fullSData(oldp+21,(vlSelf->rv32__DOT__imm_extend_inst__DOT__imm_12),12);
    bufp->fullIData(oldp+22,(vlSelf->rv32__DOT__imm_extend_inst__DOT__imm_20),20);
    bufp->fullIData(oldp+23,(vlSelf->rv32__DOT__imm_extend_inst__DOT__imm_12_to_32),32);
    bufp->fullIData(oldp+24,(vlSelf->rv32__DOT__imm_extend_inst__DOT__imm_20_to_32),32);
    bufp->fullIData(oldp+25,(vlSelf->rv32__DOT__result),32);
    bufp->fullIData(oldp+26,(vlSelf->rv32__DOT__rin),32);
    bufp->fullIData(oldp+27,(vlSelf->rv32__DOT__src1),32);
    bufp->fullIData(oldp+28,(vlSelf->rv32__DOT__src2),32);
    bufp->fullIData(oldp+29,(vlSelf->rv32__DOT__num1),32);
    bufp->fullIData(oldp+30,(vlSelf->rv32__DOT__num2),32);
    bufp->fullIData(oldp+31,(vlSelf->rv32__DOT__PC_inst__DOT__pc_temp),32);
    bufp->fullQData(oldp+32,(vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+34,(vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullIData(oldp+36,(vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+37,(vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+38,(vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__lut_out),32);
    bufp->fullQData(oldp+39,(vlSelf->rv32__DOT__i1__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+41,(vlSelf->rv32__DOT__i1__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullIData(oldp+43,(vlSelf->rv32__DOT__i1__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+44,(vlSelf->rv32__DOT__i1__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+45,(vlSelf->rv32__DOT__i1__DOT__i0__DOT__lut_out),32);
    __Vtemp_h03a154e0__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(vlSelf->rv32__DOT__imm))));
    __Vtemp_h03a154e0__0[1U] = ((vlSelf->rv32__DOT__src2 
                                 << 1U) | (IData)((
                                                   (0x100000000ULL 
                                                    | (QData)((IData)(vlSelf->rv32__DOT__imm))) 
                                                   >> 0x20U)));
    __Vtemp_h03a154e0__0[2U] = (vlSelf->rv32__DOT__src2 
                                >> 0x1fU);
    bufp->fullWData(oldp+46,(__Vtemp_h03a154e0__0),66);
    bufp->fullQData(oldp+49,(vlSelf->rv32__DOT__i2__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+51,(vlSelf->rv32__DOT__i2__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullIData(oldp+53,(vlSelf->rv32__DOT__i2__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+54,(vlSelf->rv32__DOT__i2__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+55,(vlSelf->rv32__DOT__i2__DOT__i0__DOT__lut_out),32);
    bufp->fullQData(oldp+56,(vlSelf->rv32__DOT__i4__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+58,(vlSelf->rv32__DOT__i4__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullIData(oldp+60,(vlSelf->rv32__DOT__i4__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+61,(vlSelf->rv32__DOT__i4__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+62,(vlSelf->rv32__DOT__i4__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+63,(((1U == (IData)(vlSelf->rv32__DOT__clk_count_inst__DOT__clk_cnt)) 
                            & (IData)(vlSelf->rv32__DOT__wen))));
    bufp->fullBit(oldp+64,((1U == (IData)(vlSelf->rv32__DOT__clk_count_inst__DOT__clk_cnt))));
    bufp->fullBit(oldp+65,((2U == (IData)(vlSelf->rv32__DOT__clk_count_inst__DOT__clk_cnt))));
    bufp->fullCData(oldp+66,(vlSelf->rv32__DOT__clk_count_inst__DOT__clk_cnt),2);
    bufp->fullIData(oldp+67,(vlSelf->rv32__DOT__register_file_inst__DOT__i),32);
    bufp->fullIData(oldp+68,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[0]),32);
    bufp->fullIData(oldp+69,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[1]),32);
    bufp->fullIData(oldp+70,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[2]),32);
    bufp->fullIData(oldp+71,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[3]),32);
    bufp->fullIData(oldp+72,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[4]),32);
    bufp->fullIData(oldp+73,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[5]),32);
    bufp->fullIData(oldp+74,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[6]),32);
    bufp->fullIData(oldp+75,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[7]),32);
    bufp->fullIData(oldp+76,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[8]),32);
    bufp->fullIData(oldp+77,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[9]),32);
    bufp->fullIData(oldp+78,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[10]),32);
    bufp->fullIData(oldp+79,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[11]),32);
    bufp->fullIData(oldp+80,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[12]),32);
    bufp->fullIData(oldp+81,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[13]),32);
    bufp->fullIData(oldp+82,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[14]),32);
    bufp->fullIData(oldp+83,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[15]),32);
    bufp->fullIData(oldp+84,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[16]),32);
    bufp->fullIData(oldp+85,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[17]),32);
    bufp->fullIData(oldp+86,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[18]),32);
    bufp->fullIData(oldp+87,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[19]),32);
    bufp->fullIData(oldp+88,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[20]),32);
    bufp->fullIData(oldp+89,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[21]),32);
    bufp->fullIData(oldp+90,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[22]),32);
    bufp->fullIData(oldp+91,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[23]),32);
    bufp->fullIData(oldp+92,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[24]),32);
    bufp->fullIData(oldp+93,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[25]),32);
    bufp->fullIData(oldp+94,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[26]),32);
    bufp->fullIData(oldp+95,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[27]),32);
    bufp->fullIData(oldp+96,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[28]),32);
    bufp->fullIData(oldp+97,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[29]),32);
    bufp->fullIData(oldp+98,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[30]),32);
    bufp->fullIData(oldp+99,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[31]),32);
    bufp->fullBit(oldp+100,(vlSelf->clk));
    bufp->fullBit(oldp+101,(vlSelf->rst));
    bufp->fullIData(oldp+102,(vlSelf->inst),32);
    bufp->fullIData(oldp+103,(vlSelf->pc),32);
    bufp->fullCData(oldp+104,((0x1fU & (vlSelf->inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+105,((0x1fU & (vlSelf->inst 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+106,((0x1fU & (vlSelf->inst 
                                        >> 7U))),5);
    bufp->fullCData(oldp+107,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->fullCData(oldp+108,((vlSelf->inst >> 0x19U)),7);
    bufp->fullIData(oldp+109,(((IData)(4U) + vlSelf->pc)),32);
    __Vtemp_hd76e9101__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(vlSelf->rv32__DOT__result))));
    __Vtemp_hd76e9101__0[1U] = ((((IData)(4U) + vlSelf->pc) 
                                 << 1U) | (IData)((
                                                   (0x100000000ULL 
                                                    | (QData)((IData)(vlSelf->rv32__DOT__result))) 
                                                   >> 0x20U)));
    __Vtemp_hd76e9101__0[2U] = (((IData)(4U) + vlSelf->pc) 
                                >> 0x1fU);
    bufp->fullWData(oldp+110,(__Vtemp_hd76e9101__0),66);
    bufp->fullCData(oldp+113,((0x7fU & vlSelf->inst)),7);
    __Vtemp_he1edb7f3__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(vlSelf->rv32__DOT__src1))));
    __Vtemp_he1edb7f3__0[1U] = ((vlSelf->pc << 1U) 
                                | (IData)(((0x100000000ULL 
                                            | (QData)((IData)(vlSelf->rv32__DOT__src1))) 
                                           >> 0x20U)));
    __Vtemp_he1edb7f3__0[2U] = (vlSelf->pc >> 0x1fU);
    bufp->fullWData(oldp+114,(__Vtemp_he1edb7f3__0),66);
    bufp->fullIData(oldp+117,(2U),32);
    bufp->fullIData(oldp+118,(1U),32);
    bufp->fullIData(oldp+119,(0x20U),32);
    bufp->fullIData(oldp+120,(0U),32);
    bufp->fullIData(oldp+121,(0U),32);
    bufp->fullIData(oldp+122,(0x21U),32);
    bufp->fullIData(oldp+123,(2U),32);
    bufp->fullIData(oldp+124,(0xfffffffeU),32);
}
