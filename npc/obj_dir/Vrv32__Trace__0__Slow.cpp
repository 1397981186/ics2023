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
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBus(c+3,"inst", false,-1, 31,0);
    tracep->declBus(c+4,"pc", false,-1, 31,0);
    tracep->pushNamePrefix("rv32 ");
    tracep->declBit(c+5,"clk", false,-1);
    tracep->declBit(c+6,"rst", false,-1);
    tracep->declBus(c+7,"inst", false,-1, 31,0);
    tracep->declBus(c+8,"pc", false,-1, 31,0);
    tracep->declBit(c+9,"clk1_flag", false,-1);
    tracep->declBit(c+10,"clk2_flag", false,-1);
    tracep->declBus(c+11,"rs1", false,-1, 4,0);
    tracep->declBus(c+12,"rs2", false,-1, 4,0);
    tracep->declBus(c+13,"rd", false,-1, 4,0);
    tracep->declBus(c+14,"funct3", false,-1, 2,0);
    tracep->declBus(c+15,"funct7", false,-1, 6,0);
    tracep->declBus(c+16,"type4", false,-1, 2,0);
    tracep->declBit(c+17,"wen", false,-1);
    tracep->declBit(c+18,"m1", false,-1);
    tracep->declBit(c+19,"m2", false,-1);
    tracep->declBit(c+20,"m3", false,-1);
    tracep->declBit(c+21,"m4", false,-1);
    tracep->declBus(c+22,"aluc", false,-1, 1,0);
    tracep->declBus(c+23,"PCadd4", false,-1, 31,0);
    tracep->declBus(c+24,"result", false,-1, 31,0);
    tracep->declBus(c+25,"rin", false,-1, 31,0);
    tracep->declBus(c+26,"src1", false,-1, 31,0);
    tracep->declBus(c+27,"src2", false,-1, 31,0);
    tracep->declBus(c+28,"imm", false,-1, 31,0);
    tracep->declBus(c+29,"num1", false,-1, 31,0);
    tracep->declBus(c+30,"num2", false,-1, 31,0);
    tracep->pushNamePrefix("PC_inst ");
    tracep->declBit(c+31,"clk", false,-1);
    tracep->declBit(c+32,"rst", false,-1);
    tracep->declBit(c+33,"m3", false,-1);
    tracep->declBit(c+34,"clk2_flag", false,-1);
    tracep->declBus(c+35,"result", false,-1, 31,0);
    tracep->declBus(c+36,"PCadd4", false,-1, 31,0);
    tracep->declBus(c+37,"pc", false,-1, 31,0);
    tracep->declBus(c+38,"pc_temp", false,-1, 31,0);
    tracep->pushNamePrefix("i3 ");
    tracep->declBus(c+221,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+222,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+223,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+39,"out", false,-1, 31,0);
    tracep->declBus(c+40,"key", false,-1, 0,0);
    tracep->declArray(c+41,"lut", false,-1, 65,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+221,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+222,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+223,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+224,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+44,"out", false,-1, 31,0);
    tracep->declBus(c+45,"key", false,-1, 0,0);
    tracep->declBus(c+46,"default_out", false,-1, 31,0);
    tracep->declArray(c+47,"lut", false,-1, 65,0);
    tracep->declBus(c+225,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+50+i*2,"pair_list", true,(i+0), 32,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+54+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+56+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+58,"lut_out", false,-1, 31,0);
    tracep->declBit(c+59,"hit", false,-1);
    tracep->declBus(c+60,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("alu_inst ");
    tracep->declBus(c+61,"aluc", false,-1, 1,0);
    tracep->declBus(c+62,"num1", false,-1, 31,0);
    tracep->declBus(c+63,"num2", false,-1, 31,0);
    tracep->declBus(c+64,"result", false,-1, 31,0);
    tracep->declBus(c+65,"temp", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clk_count_inst ");
    tracep->declBit(c+66,"clk", false,-1);
    tracep->declBit(c+67,"rst", false,-1);
    tracep->declBit(c+68,"clk1_flag", false,-1);
    tracep->declBit(c+69,"clk2_flag", false,-1);
    tracep->declBus(c+70,"clk_cnt", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("control_unit_inst ");
    tracep->declBus(c+71,"inst", false,-1, 31,0);
    tracep->declBus(c+72,"rd_11_7", false,-1, 4,0);
    tracep->declBus(c+73,"rs1_19_15", false,-1, 4,0);
    tracep->declBus(c+74,"rs2_24_20", false,-1, 4,0);
    tracep->declBus(c+75,"fun3_14_12", false,-1, 2,0);
    tracep->declBus(c+76,"fun7_31_25", false,-1, 6,0);
    tracep->declBus(c+77,"type1", false,-1, 2,0);
    tracep->declBus(c+78,"aluc", false,-1, 1,0);
    tracep->declBit(c+79,"wen", false,-1);
    tracep->declBit(c+80,"m1", false,-1);
    tracep->declBit(c+81,"m2", false,-1);
    tracep->declBit(c+82,"m3", false,-1);
    tracep->declBit(c+83,"m4", false,-1);
    tracep->declBus(c+84,"opcode_6_0", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+221,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+222,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+223,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+85,"out", false,-1, 31,0);
    tracep->declBus(c+86,"key", false,-1, 0,0);
    tracep->declArray(c+87,"lut", false,-1, 65,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+221,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+222,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+223,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+224,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+90,"out", false,-1, 31,0);
    tracep->declBus(c+91,"key", false,-1, 0,0);
    tracep->declBus(c+92,"default_out", false,-1, 31,0);
    tracep->declArray(c+93,"lut", false,-1, 65,0);
    tracep->declBus(c+225,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+96+i*2,"pair_list", true,(i+0), 32,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+100+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+102+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+104,"lut_out", false,-1, 31,0);
    tracep->declBit(c+105,"hit", false,-1);
    tracep->declBus(c+106,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i2 ");
    tracep->declBus(c+221,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+222,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+223,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+107,"out", false,-1, 31,0);
    tracep->declBus(c+108,"key", false,-1, 0,0);
    tracep->declArray(c+109,"lut", false,-1, 65,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+221,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+222,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+223,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+224,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+112,"out", false,-1, 31,0);
    tracep->declBus(c+113,"key", false,-1, 0,0);
    tracep->declBus(c+114,"default_out", false,-1, 31,0);
    tracep->declArray(c+115,"lut", false,-1, 65,0);
    tracep->declBus(c+225,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+118+i*2,"pair_list", true,(i+0), 32,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+122+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+124+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+126,"lut_out", false,-1, 31,0);
    tracep->declBit(c+127,"hit", false,-1);
    tracep->declBus(c+128,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i4 ");
    tracep->declBus(c+221,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+222,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+223,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+129,"out", false,-1, 31,0);
    tracep->declBus(c+130,"key", false,-1, 0,0);
    tracep->declArray(c+131,"lut", false,-1, 65,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+221,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+222,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+223,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+224,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+134,"out", false,-1, 31,0);
    tracep->declBus(c+135,"key", false,-1, 0,0);
    tracep->declBus(c+136,"default_out", false,-1, 31,0);
    tracep->declArray(c+137,"lut", false,-1, 65,0);
    tracep->declBus(c+225,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+140+i*2,"pair_list", true,(i+0), 32,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+144+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+146+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+148,"lut_out", false,-1, 31,0);
    tracep->declBit(c+149,"hit", false,-1);
    tracep->declBus(c+150,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("imm_extend_inst ");
    tracep->declBus(c+151,"rs1", false,-1, 4,0);
    tracep->declBus(c+152,"rs2", false,-1, 4,0);
    tracep->declBus(c+153,"rd", false,-1, 4,0);
    tracep->declBus(c+154,"funct3", false,-1, 2,0);
    tracep->declBus(c+155,"funct7", false,-1, 6,0);
    tracep->declBus(c+156,"type3", false,-1, 2,0);
    tracep->declBus(c+157,"imm32", false,-1, 31,0);
    tracep->declBus(c+158,"imm_12", false,-1, 11,0);
    tracep->declBus(c+159,"imm_20", false,-1, 19,0);
    tracep->declBus(c+160,"imm_12_to_32", false,-1, 31,0);
    tracep->declBus(c+161,"imm_20_to_32", false,-1, 31,0);
    tracep->pushNamePrefix("Extend_12_inst ");
    tracep->declBus(c+162,"imm_12", false,-1, 11,0);
    tracep->declBus(c+163,"imm_12_to_32", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Extend_20_inst ");
    tracep->declBus(c+164,"imm_20", false,-1, 19,0);
    tracep->declBus(c+165,"imm_20_to_32", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RISB_type_inst ");
    tracep->declBus(c+166,"rs2", false,-1, 4,0);
    tracep->declBus(c+167,"rd", false,-1, 4,0);
    tracep->declBus(c+168,"funct7", false,-1, 6,0);
    tracep->declBus(c+169,"type2", false,-1, 2,0);
    tracep->declBus(c+170,"imm_12", false,-1, 11,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("UJ_type_inst ");
    tracep->declBus(c+171,"rs1", false,-1, 4,0);
    tracep->declBus(c+172,"rs2", false,-1, 4,0);
    tracep->declBus(c+173,"funct3", false,-1, 2,0);
    tracep->declBus(c+174,"funct7", false,-1, 6,0);
    tracep->declBus(c+175,"type2", false,-1, 2,0);
    tracep->declBus(c+176,"imm_20", false,-1, 19,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("register_file_inst ");
    tracep->declBit(c+177,"clk", false,-1);
    tracep->declBit(c+178,"rst", false,-1);
    tracep->declBit(c+179,"clk1_flag", false,-1);
    tracep->declBit(c+180,"wen", false,-1);
    tracep->declBus(c+181,"rs1", false,-1, 4,0);
    tracep->declBus(c+182,"rs2", false,-1, 4,0);
    tracep->declBus(c+183,"rd", false,-1, 4,0);
    tracep->declBus(c+184,"rin", false,-1, 31,0);
    tracep->declBus(c+185,"src1", false,-1, 31,0);
    tracep->declBus(c+186,"src2", false,-1, 31,0);
    tracep->declBus(c+187,"i", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+188+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->declBit(c+220,"r_wen", false,-1);
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
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullBit(oldp+2,(vlSelf->rst));
    bufp->fullIData(oldp+3,(vlSelf->inst),32);
    bufp->fullIData(oldp+4,(vlSelf->pc),32);
    bufp->fullBit(oldp+5,(vlSelf->rv32__DOT__clk));
    bufp->fullBit(oldp+6,(vlSelf->rv32__DOT__rst));
    bufp->fullIData(oldp+7,(vlSelf->rv32__DOT__inst),32);
    bufp->fullIData(oldp+8,(vlSelf->rv32__DOT__pc),32);
    bufp->fullBit(oldp+9,(vlSelf->rv32__DOT__clk1_flag));
    bufp->fullBit(oldp+10,(vlSelf->rv32__DOT__clk2_flag));
    bufp->fullCData(oldp+11,(vlSelf->rv32__DOT__rs1),5);
    bufp->fullCData(oldp+12,(vlSelf->rv32__DOT__rs2),5);
    bufp->fullCData(oldp+13,(vlSelf->rv32__DOT__rd),5);
    bufp->fullCData(oldp+14,(vlSelf->rv32__DOT__funct3),3);
    bufp->fullCData(oldp+15,(vlSelf->rv32__DOT__funct7),7);
    bufp->fullCData(oldp+16,(vlSelf->rv32__DOT__type4),3);
    bufp->fullBit(oldp+17,(vlSelf->rv32__DOT__wen));
    bufp->fullBit(oldp+18,(vlSelf->rv32__DOT__m1));
    bufp->fullBit(oldp+19,(vlSelf->rv32__DOT__m2));
    bufp->fullBit(oldp+20,(vlSelf->rv32__DOT__m3));
    bufp->fullBit(oldp+21,(vlSelf->rv32__DOT__m4));
    bufp->fullCData(oldp+22,(vlSelf->rv32__DOT__aluc),2);
    bufp->fullIData(oldp+23,(vlSelf->rv32__DOT__PCadd4),32);
    bufp->fullIData(oldp+24,(vlSelf->rv32__DOT__result),32);
    bufp->fullIData(oldp+25,(vlSelf->rv32__DOT__rin),32);
    bufp->fullIData(oldp+26,(vlSelf->rv32__DOT__src1),32);
    bufp->fullIData(oldp+27,(vlSelf->rv32__DOT__src2),32);
    bufp->fullIData(oldp+28,(vlSelf->rv32__DOT__imm),32);
    bufp->fullIData(oldp+29,(vlSelf->rv32__DOT__num1),32);
    bufp->fullIData(oldp+30,(vlSelf->rv32__DOT__num2),32);
    bufp->fullBit(oldp+31,(vlSelf->rv32__DOT__PC_inst__DOT__clk));
    bufp->fullBit(oldp+32,(vlSelf->rv32__DOT__PC_inst__DOT__rst));
    bufp->fullBit(oldp+33,(vlSelf->rv32__DOT__PC_inst__DOT__m3));
    bufp->fullBit(oldp+34,(vlSelf->rv32__DOT__PC_inst__DOT__clk2_flag));
    bufp->fullIData(oldp+35,(vlSelf->rv32__DOT__PC_inst__DOT__result),32);
    bufp->fullIData(oldp+36,(vlSelf->rv32__DOT__PC_inst__DOT__PCadd4),32);
    bufp->fullIData(oldp+37,(vlSelf->rv32__DOT__PC_inst__DOT__pc),32);
    bufp->fullIData(oldp+38,(vlSelf->rv32__DOT__PC_inst__DOT__pc_temp),32);
    bufp->fullIData(oldp+39,(vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__out),32);
    bufp->fullBit(oldp+40,(vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__key));
    bufp->fullWData(oldp+41,(vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__lut),66);
    bufp->fullIData(oldp+44,(vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__out),32);
    bufp->fullBit(oldp+45,(vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__key));
    bufp->fullIData(oldp+46,(vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__default_out),32);
    bufp->fullWData(oldp+47,(vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__lut),66);
    bufp->fullQData(oldp+50,(vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+52,(vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullBit(oldp+54,(vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+55,(vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__key_list[1]));
    bufp->fullIData(oldp+56,(vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+57,(vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+58,(vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+59,(vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+60,(vlSelf->rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__i),32);
    bufp->fullCData(oldp+61,(vlSelf->rv32__DOT__alu_inst__DOT__aluc),2);
    bufp->fullIData(oldp+62,(vlSelf->rv32__DOT__alu_inst__DOT__num1),32);
    bufp->fullIData(oldp+63,(vlSelf->rv32__DOT__alu_inst__DOT__num2),32);
    bufp->fullIData(oldp+64,(vlSelf->rv32__DOT__alu_inst__DOT__result),32);
    bufp->fullIData(oldp+65,(vlSelf->rv32__DOT__alu_inst__DOT__temp),32);
    bufp->fullBit(oldp+66,(vlSelf->rv32__DOT__clk_count_inst__DOT__clk));
    bufp->fullBit(oldp+67,(vlSelf->rv32__DOT__clk_count_inst__DOT__rst));
    bufp->fullBit(oldp+68,(vlSelf->rv32__DOT__clk_count_inst__DOT__clk1_flag));
    bufp->fullBit(oldp+69,(vlSelf->rv32__DOT__clk_count_inst__DOT__clk2_flag));
    bufp->fullCData(oldp+70,(vlSelf->rv32__DOT__clk_count_inst__DOT__clk_cnt),2);
    bufp->fullIData(oldp+71,(vlSelf->rv32__DOT__control_unit_inst__DOT__inst),32);
    bufp->fullCData(oldp+72,(vlSelf->rv32__DOT__control_unit_inst__DOT__rd_11_7),5);
    bufp->fullCData(oldp+73,(vlSelf->rv32__DOT__control_unit_inst__DOT__rs1_19_15),5);
    bufp->fullCData(oldp+74,(vlSelf->rv32__DOT__control_unit_inst__DOT__rs2_24_20),5);
    bufp->fullCData(oldp+75,(vlSelf->rv32__DOT__control_unit_inst__DOT__fun3_14_12),3);
    bufp->fullCData(oldp+76,(vlSelf->rv32__DOT__control_unit_inst__DOT__fun7_31_25),7);
    bufp->fullCData(oldp+77,(vlSelf->rv32__DOT__control_unit_inst__DOT__type1),3);
    bufp->fullCData(oldp+78,(vlSelf->rv32__DOT__control_unit_inst__DOT__aluc),2);
    bufp->fullBit(oldp+79,(vlSelf->rv32__DOT__control_unit_inst__DOT__wen));
    bufp->fullBit(oldp+80,(vlSelf->rv32__DOT__control_unit_inst__DOT__m1));
    bufp->fullBit(oldp+81,(vlSelf->rv32__DOT__control_unit_inst__DOT__m2));
    bufp->fullBit(oldp+82,(vlSelf->rv32__DOT__control_unit_inst__DOT__m3));
    bufp->fullBit(oldp+83,(vlSelf->rv32__DOT__control_unit_inst__DOT__m4));
    bufp->fullCData(oldp+84,(vlSelf->rv32__DOT__control_unit_inst__DOT__opcode_6_0),7);
    bufp->fullIData(oldp+85,(vlSelf->rv32__DOT__i1__DOT__out),32);
    bufp->fullBit(oldp+86,(vlSelf->rv32__DOT__i1__DOT__key));
    bufp->fullWData(oldp+87,(vlSelf->rv32__DOT__i1__DOT__lut),66);
    bufp->fullIData(oldp+90,(vlSelf->rv32__DOT__i1__DOT__i0__DOT__out),32);
    bufp->fullBit(oldp+91,(vlSelf->rv32__DOT__i1__DOT__i0__DOT__key));
    bufp->fullIData(oldp+92,(vlSelf->rv32__DOT__i1__DOT__i0__DOT__default_out),32);
    bufp->fullWData(oldp+93,(vlSelf->rv32__DOT__i1__DOT__i0__DOT__lut),66);
    bufp->fullQData(oldp+96,(vlSelf->rv32__DOT__i1__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+98,(vlSelf->rv32__DOT__i1__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullBit(oldp+100,(vlSelf->rv32__DOT__i1__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+101,(vlSelf->rv32__DOT__i1__DOT__i0__DOT__key_list[1]));
    bufp->fullIData(oldp+102,(vlSelf->rv32__DOT__i1__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+103,(vlSelf->rv32__DOT__i1__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+104,(vlSelf->rv32__DOT__i1__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+105,(vlSelf->rv32__DOT__i1__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+106,(vlSelf->rv32__DOT__i1__DOT__i0__DOT__i),32);
    bufp->fullIData(oldp+107,(vlSelf->rv32__DOT__i2__DOT__out),32);
    bufp->fullBit(oldp+108,(vlSelf->rv32__DOT__i2__DOT__key));
    bufp->fullWData(oldp+109,(vlSelf->rv32__DOT__i2__DOT__lut),66);
    bufp->fullIData(oldp+112,(vlSelf->rv32__DOT__i2__DOT__i0__DOT__out),32);
    bufp->fullBit(oldp+113,(vlSelf->rv32__DOT__i2__DOT__i0__DOT__key));
    bufp->fullIData(oldp+114,(vlSelf->rv32__DOT__i2__DOT__i0__DOT__default_out),32);
    bufp->fullWData(oldp+115,(vlSelf->rv32__DOT__i2__DOT__i0__DOT__lut),66);
    bufp->fullQData(oldp+118,(vlSelf->rv32__DOT__i2__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+120,(vlSelf->rv32__DOT__i2__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullBit(oldp+122,(vlSelf->rv32__DOT__i2__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+123,(vlSelf->rv32__DOT__i2__DOT__i0__DOT__key_list[1]));
    bufp->fullIData(oldp+124,(vlSelf->rv32__DOT__i2__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+125,(vlSelf->rv32__DOT__i2__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+126,(vlSelf->rv32__DOT__i2__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+127,(vlSelf->rv32__DOT__i2__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+128,(vlSelf->rv32__DOT__i2__DOT__i0__DOT__i),32);
    bufp->fullIData(oldp+129,(vlSelf->rv32__DOT__i4__DOT__out),32);
    bufp->fullBit(oldp+130,(vlSelf->rv32__DOT__i4__DOT__key));
    bufp->fullWData(oldp+131,(vlSelf->rv32__DOT__i4__DOT__lut),66);
    bufp->fullIData(oldp+134,(vlSelf->rv32__DOT__i4__DOT__i0__DOT__out),32);
    bufp->fullBit(oldp+135,(vlSelf->rv32__DOT__i4__DOT__i0__DOT__key));
    bufp->fullIData(oldp+136,(vlSelf->rv32__DOT__i4__DOT__i0__DOT__default_out),32);
    bufp->fullWData(oldp+137,(vlSelf->rv32__DOT__i4__DOT__i0__DOT__lut),66);
    bufp->fullQData(oldp+140,(vlSelf->rv32__DOT__i4__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+142,(vlSelf->rv32__DOT__i4__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullBit(oldp+144,(vlSelf->rv32__DOT__i4__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+145,(vlSelf->rv32__DOT__i4__DOT__i0__DOT__key_list[1]));
    bufp->fullIData(oldp+146,(vlSelf->rv32__DOT__i4__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+147,(vlSelf->rv32__DOT__i4__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+148,(vlSelf->rv32__DOT__i4__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+149,(vlSelf->rv32__DOT__i4__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+150,(vlSelf->rv32__DOT__i4__DOT__i0__DOT__i),32);
    bufp->fullCData(oldp+151,(vlSelf->rv32__DOT__imm_extend_inst__DOT__rs1),5);
    bufp->fullCData(oldp+152,(vlSelf->rv32__DOT__imm_extend_inst__DOT__rs2),5);
    bufp->fullCData(oldp+153,(vlSelf->rv32__DOT__imm_extend_inst__DOT__rd),5);
    bufp->fullCData(oldp+154,(vlSelf->rv32__DOT__imm_extend_inst__DOT__funct3),3);
    bufp->fullCData(oldp+155,(vlSelf->rv32__DOT__imm_extend_inst__DOT__funct7),7);
    bufp->fullCData(oldp+156,(vlSelf->rv32__DOT__imm_extend_inst__DOT__type3),3);
    bufp->fullIData(oldp+157,(vlSelf->rv32__DOT__imm_extend_inst__DOT__imm32),32);
    bufp->fullSData(oldp+158,(vlSelf->rv32__DOT__imm_extend_inst__DOT__imm_12),12);
    bufp->fullIData(oldp+159,(vlSelf->rv32__DOT__imm_extend_inst__DOT__imm_20),20);
    bufp->fullIData(oldp+160,(vlSelf->rv32__DOT__imm_extend_inst__DOT__imm_12_to_32),32);
    bufp->fullIData(oldp+161,(vlSelf->rv32__DOT__imm_extend_inst__DOT__imm_20_to_32),32);
    bufp->fullSData(oldp+162,(vlSelf->rv32__DOT__imm_extend_inst__DOT__Extend_12_inst__DOT__imm_12),12);
    bufp->fullIData(oldp+163,(vlSelf->rv32__DOT__imm_extend_inst__DOT__Extend_12_inst__DOT__imm_12_to_32),32);
    bufp->fullIData(oldp+164,(vlSelf->rv32__DOT__imm_extend_inst__DOT__Extend_20_inst__DOT__imm_20),20);
    bufp->fullIData(oldp+165,(vlSelf->rv32__DOT__imm_extend_inst__DOT__Extend_20_inst__DOT__imm_20_to_32),32);
    bufp->fullCData(oldp+166,(vlSelf->rv32__DOT__imm_extend_inst__DOT__RISB_type_inst__DOT__rs2),5);
    bufp->fullCData(oldp+167,(vlSelf->rv32__DOT__imm_extend_inst__DOT__RISB_type_inst__DOT__rd),5);
    bufp->fullCData(oldp+168,(vlSelf->rv32__DOT__imm_extend_inst__DOT__RISB_type_inst__DOT__funct7),7);
    bufp->fullCData(oldp+169,(vlSelf->rv32__DOT__imm_extend_inst__DOT__RISB_type_inst__DOT__type2),3);
    bufp->fullSData(oldp+170,(vlSelf->rv32__DOT__imm_extend_inst__DOT__RISB_type_inst__DOT__imm_12),12);
    bufp->fullCData(oldp+171,(vlSelf->rv32__DOT__imm_extend_inst__DOT__UJ_type_inst__DOT__rs1),5);
    bufp->fullCData(oldp+172,(vlSelf->rv32__DOT__imm_extend_inst__DOT__UJ_type_inst__DOT__rs2),5);
    bufp->fullCData(oldp+173,(vlSelf->rv32__DOT__imm_extend_inst__DOT__UJ_type_inst__DOT__funct3),3);
    bufp->fullCData(oldp+174,(vlSelf->rv32__DOT__imm_extend_inst__DOT__UJ_type_inst__DOT__funct7),7);
    bufp->fullCData(oldp+175,(vlSelf->rv32__DOT__imm_extend_inst__DOT__UJ_type_inst__DOT__type2),3);
    bufp->fullIData(oldp+176,(vlSelf->rv32__DOT__imm_extend_inst__DOT__UJ_type_inst__DOT__imm_20),20);
    bufp->fullBit(oldp+177,(vlSelf->rv32__DOT__register_file_inst__DOT__clk));
    bufp->fullBit(oldp+178,(vlSelf->rv32__DOT__register_file_inst__DOT__rst));
    bufp->fullBit(oldp+179,(vlSelf->rv32__DOT__register_file_inst__DOT__clk1_flag));
    bufp->fullBit(oldp+180,(vlSelf->rv32__DOT__register_file_inst__DOT__wen));
    bufp->fullCData(oldp+181,(vlSelf->rv32__DOT__register_file_inst__DOT__rs1),5);
    bufp->fullCData(oldp+182,(vlSelf->rv32__DOT__register_file_inst__DOT__rs2),5);
    bufp->fullCData(oldp+183,(vlSelf->rv32__DOT__register_file_inst__DOT__rd),5);
    bufp->fullIData(oldp+184,(vlSelf->rv32__DOT__register_file_inst__DOT__rin),32);
    bufp->fullIData(oldp+185,(vlSelf->rv32__DOT__register_file_inst__DOT__src1),32);
    bufp->fullIData(oldp+186,(vlSelf->rv32__DOT__register_file_inst__DOT__src2),32);
    bufp->fullIData(oldp+187,(vlSelf->rv32__DOT__register_file_inst__DOT__i),32);
    bufp->fullIData(oldp+188,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[0]),32);
    bufp->fullIData(oldp+189,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[1]),32);
    bufp->fullIData(oldp+190,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[2]),32);
    bufp->fullIData(oldp+191,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[3]),32);
    bufp->fullIData(oldp+192,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[4]),32);
    bufp->fullIData(oldp+193,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[5]),32);
    bufp->fullIData(oldp+194,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[6]),32);
    bufp->fullIData(oldp+195,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[7]),32);
    bufp->fullIData(oldp+196,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[8]),32);
    bufp->fullIData(oldp+197,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[9]),32);
    bufp->fullIData(oldp+198,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[10]),32);
    bufp->fullIData(oldp+199,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[11]),32);
    bufp->fullIData(oldp+200,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[12]),32);
    bufp->fullIData(oldp+201,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[13]),32);
    bufp->fullIData(oldp+202,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[14]),32);
    bufp->fullIData(oldp+203,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[15]),32);
    bufp->fullIData(oldp+204,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[16]),32);
    bufp->fullIData(oldp+205,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[17]),32);
    bufp->fullIData(oldp+206,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[18]),32);
    bufp->fullIData(oldp+207,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[19]),32);
    bufp->fullIData(oldp+208,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[20]),32);
    bufp->fullIData(oldp+209,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[21]),32);
    bufp->fullIData(oldp+210,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[22]),32);
    bufp->fullIData(oldp+211,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[23]),32);
    bufp->fullIData(oldp+212,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[24]),32);
    bufp->fullIData(oldp+213,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[25]),32);
    bufp->fullIData(oldp+214,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[26]),32);
    bufp->fullIData(oldp+215,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[27]),32);
    bufp->fullIData(oldp+216,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[28]),32);
    bufp->fullIData(oldp+217,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[29]),32);
    bufp->fullIData(oldp+218,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[30]),32);
    bufp->fullIData(oldp+219,(vlSelf->rv32__DOT__register_file_inst__DOT__regs[31]),32);
    bufp->fullBit(oldp+220,(vlSelf->rv32__DOT__register_file_inst__DOT__r_wen));
    bufp->fullIData(oldp+221,(2U),32);
    bufp->fullIData(oldp+222,(1U),32);
    bufp->fullIData(oldp+223,(0x20U),32);
    bufp->fullIData(oldp+224,(0U),32);
    bufp->fullIData(oldp+225,(0x21U),32);
}
