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
    tracep->declBit(c+75,"clk", false,-1);
    tracep->declBit(c+76,"rst", false,-1);
    tracep->declBus(c+77,"inst", false,-1, 31,0);
    tracep->declBus(c+78,"pc", false,-1, 31,0);
}

VL_ATTR_COLD void Vrv32___024root__trace_init_sub__TOP__rv32__0(Vrv32___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32___024root__trace_init_sub__TOP__rv32__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+75,"clk", false,-1);
    tracep->declBit(c+76,"rst", false,-1);
    tracep->declBus(c+77,"inst", false,-1, 31,0);
    tracep->declBus(c+69,"pc", false,-1, 31,0);
    tracep->declBit(c+70,"clk1_flag", false,-1);
    tracep->declBit(c+71,"clk2_flag", false,-1);
    tracep->declBus(c+79,"rs1", false,-1, 4,0);
    tracep->declBus(c+80,"rs2", false,-1, 4,0);
    tracep->declBus(c+81,"rd", false,-1, 4,0);
    tracep->declBus(c+82,"funct3", false,-1, 2,0);
    tracep->declBus(c+83,"funct7", false,-1, 6,0);
    tracep->declBus(c+84,"type4", false,-1, 2,0);
    tracep->declBit(c+9,"wen", false,-1);
    tracep->declBit(c+10,"m1", false,-1);
    tracep->declBit(c+11,"m2", false,-1);
    tracep->declBit(c+12,"m3", false,-1);
    tracep->declBit(c+13,"m4", false,-1);
    tracep->declBus(c+14,"aluc", false,-1, 1,0);
    tracep->declBus(c+72,"PCadd4", false,-1, 31,0);
    tracep->declBus(c+24,"result", false,-1, 31,0);
    tracep->declBus(c+25,"rin", false,-1, 31,0);
    tracep->declBus(c+26,"src1", false,-1, 31,0);
    tracep->declBus(c+27,"src2", false,-1, 31,0);
    tracep->declBus(c+15,"imm", false,-1, 31,0);
    tracep->declBus(c+28,"num1", false,-1, 31,0);
    tracep->declBus(c+29,"num2", false,-1, 31,0);
    tracep->pushNamePrefix("PC_inst ");
    tracep->declBit(c+75,"clk", false,-1);
    tracep->declBit(c+76,"rst", false,-1);
    tracep->declBit(c+12,"m3", false,-1);
    tracep->declBit(c+71,"clk2_flag", false,-1);
    tracep->declBus(c+24,"result", false,-1, 31,0);
    tracep->declBus(c+72,"PCadd4", false,-1, 31,0);
    tracep->declBus(c+69,"pc", false,-1, 31,0);
    tracep->declBus(c+30,"pc_temp", false,-1, 31,0);
    tracep->pushNamePrefix("i3 ");
    tracep->declBus(c+118,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+119,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+120,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+30,"out", false,-1, 31,0);
    tracep->declBus(c+12,"key", false,-1, 0,0);
    tracep->declArray(c+31,"lut", false,-1, 65,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+118,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+119,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+120,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+121,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+30,"out", false,-1, 31,0);
    tracep->declBus(c+12,"key", false,-1, 0,0);
    tracep->declBus(c+122,"default_out", false,-1, 31,0);
    tracep->declArray(c+31,"lut", false,-1, 65,0);
    tracep->declBus(c+123,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+34+i*2,"pair_list", true,(i+0), 32,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+38+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+40,"lut_out", false,-1, 31,0);
    tracep->declBit(c+16,"hit", false,-1);
    tracep->declBus(c+124,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("alu_inst ");
    tracep->declBus(c+14,"aluc", false,-1, 1,0);
    tracep->declBus(c+28,"num1", false,-1, 31,0);
    tracep->declBus(c+29,"num2", false,-1, 31,0);
    tracep->declBus(c+24,"result", false,-1, 31,0);
    tracep->declBus(c+125,"temp", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clk_count_inst ");
    tracep->declBit(c+75,"clk", false,-1);
    tracep->declBit(c+76,"rst", false,-1);
    tracep->declBit(c+70,"clk1_flag", false,-1);
    tracep->declBit(c+71,"clk2_flag", false,-1);
    tracep->declBus(c+73,"clk_cnt", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("control_unit_inst ");
    tracep->declBus(c+77,"inst", false,-1, 31,0);
    tracep->declBus(c+81,"rd_11_7", false,-1, 4,0);
    tracep->declBus(c+79,"rs1_19_15", false,-1, 4,0);
    tracep->declBus(c+80,"rs2_24_20", false,-1, 4,0);
    tracep->declBus(c+82,"fun3_14_12", false,-1, 2,0);
    tracep->declBus(c+83,"fun7_31_25", false,-1, 6,0);
    tracep->declBus(c+84,"type1", false,-1, 2,0);
    tracep->declBus(c+14,"aluc", false,-1, 1,0);
    tracep->declBit(c+9,"wen", false,-1);
    tracep->declBit(c+10,"m1", false,-1);
    tracep->declBit(c+11,"m2", false,-1);
    tracep->declBit(c+12,"m3", false,-1);
    tracep->declBit(c+13,"m4", false,-1);
    tracep->declBus(c+85,"opcode_6_0", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+118,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+119,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+120,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+28,"out", false,-1, 31,0);
    tracep->declBus(c+10,"key", false,-1, 0,0);
    tracep->declArray(c+41,"lut", false,-1, 65,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+118,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+119,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+120,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+121,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+28,"out", false,-1, 31,0);
    tracep->declBus(c+10,"key", false,-1, 0,0);
    tracep->declBus(c+122,"default_out", false,-1, 31,0);
    tracep->declArray(c+41,"lut", false,-1, 65,0);
    tracep->declBus(c+123,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+44+i*2,"pair_list", true,(i+0), 32,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+3+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+48+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+50,"lut_out", false,-1, 31,0);
    tracep->declBit(c+17,"hit", false,-1);
    tracep->declBus(c+124,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i2 ");
    tracep->declBus(c+118,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+119,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+120,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+29,"out", false,-1, 31,0);
    tracep->declBus(c+11,"key", false,-1, 0,0);
    tracep->declArray(c+51,"lut", false,-1, 65,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+118,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+119,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+120,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+121,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+29,"out", false,-1, 31,0);
    tracep->declBus(c+11,"key", false,-1, 0,0);
    tracep->declBus(c+122,"default_out", false,-1, 31,0);
    tracep->declArray(c+51,"lut", false,-1, 65,0);
    tracep->declBus(c+123,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+54+i*2,"pair_list", true,(i+0), 32,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+5+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+58+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+60,"lut_out", false,-1, 31,0);
    tracep->declBit(c+18,"hit", false,-1);
    tracep->declBus(c+124,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i4 ");
    tracep->declBus(c+118,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+119,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+120,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+25,"out", false,-1, 31,0);
    tracep->declBus(c+13,"key", false,-1, 0,0);
    tracep->declArray(c+31,"lut", false,-1, 65,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+118,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+119,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+120,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+121,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+25,"out", false,-1, 31,0);
    tracep->declBus(c+13,"key", false,-1, 0,0);
    tracep->declBus(c+122,"default_out", false,-1, 31,0);
    tracep->declArray(c+31,"lut", false,-1, 65,0);
    tracep->declBus(c+123,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+61+i*2,"pair_list", true,(i+0), 32,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+7+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+65+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+67,"lut_out", false,-1, 31,0);
    tracep->declBit(c+19,"hit", false,-1);
    tracep->declBus(c+124,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("imm_extend_inst ");
    tracep->declBus(c+79,"rs1", false,-1, 4,0);
    tracep->declBus(c+80,"rs2", false,-1, 4,0);
    tracep->declBus(c+81,"rd", false,-1, 4,0);
    tracep->declBus(c+82,"funct3", false,-1, 2,0);
    tracep->declBus(c+83,"funct7", false,-1, 6,0);
    tracep->declBus(c+84,"type3", false,-1, 2,0);
    tracep->declBus(c+15,"imm32", false,-1, 31,0);
    tracep->declBus(c+20,"imm_12", false,-1, 11,0);
    tracep->declBus(c+21,"imm_20", false,-1, 19,0);
    tracep->declBus(c+22,"imm_12_to_32", false,-1, 31,0);
    tracep->declBus(c+23,"imm_20_to_32", false,-1, 31,0);
    tracep->pushNamePrefix("Extend_12_inst ");
    tracep->declBus(c+20,"imm_12", false,-1, 11,0);
    tracep->declBus(c+22,"imm_12_to_32", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Extend_20_inst ");
    tracep->declBus(c+21,"imm_20", false,-1, 19,0);
    tracep->declBus(c+23,"imm_20_to_32", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RISB_type_inst ");
    tracep->declBus(c+80,"rs2", false,-1, 4,0);
    tracep->declBus(c+81,"rd", false,-1, 4,0);
    tracep->declBus(c+83,"funct7", false,-1, 6,0);
    tracep->declBus(c+84,"type2", false,-1, 2,0);
    tracep->declBus(c+20,"imm_12", false,-1, 11,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("UJ_type_inst ");
    tracep->declBus(c+79,"rs1", false,-1, 4,0);
    tracep->declBus(c+80,"rs2", false,-1, 4,0);
    tracep->declBus(c+82,"funct3", false,-1, 2,0);
    tracep->declBus(c+83,"funct7", false,-1, 6,0);
    tracep->declBus(c+84,"type2", false,-1, 2,0);
    tracep->declBus(c+21,"imm_20", false,-1, 19,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vrv32___024root__trace_init_sub__TOP__rv32__register_file_inst__0(Vrv32___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32___024root__trace_init_sub__TOP__rv32__register_file_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+75,"clk", false,-1);
    tracep->declBit(c+76,"rst", false,-1);
    tracep->declBit(c+70,"clk1_flag", false,-1);
    tracep->declBit(c+9,"wen", false,-1);
    tracep->declBus(c+79,"rs1", false,-1, 4,0);
    tracep->declBus(c+80,"rs2", false,-1, 4,0);
    tracep->declBus(c+81,"rd", false,-1, 4,0);
    tracep->declBus(c+25,"rin", false,-1, 31,0);
    tracep->declBus(c+26,"src1", false,-1, 31,0);
    tracep->declBus(c+27,"src2", false,-1, 31,0);
    tracep->declBus(c+74,"i", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+86+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->declBit(c+68,"r_wen", false,-1);
}

VL_ATTR_COLD void Vrv32___024root__trace_init_top(Vrv32___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32___024root__trace_init_top\n"); );
    // Body
    Vrv32___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("rv32 ");
    Vrv32___024root__trace_init_sub__TOP__rv32__0(vlSelf, tracep);
    tracep->pushNamePrefix("register_file_inst ");
    Vrv32___024root__trace_init_sub__TOP__rv32__register_file_inst__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
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
    VlWide<3>/*95:0*/ __Vtemp_h41db52af__0;
    VlWide<3>/*95:0*/ __Vtemp_ha128a62f__0;
    VlWide<3>/*95:0*/ __Vtemp_h6d3ce832__0;
    // Body
    bufp->fullBit(oldp+1,(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__i3__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+2,(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__i3__DOT__i0__DOT__key_list[1]));
    bufp->fullBit(oldp+3,(vlSymsp->TOP__rv32.__PVT__i1__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+4,(vlSymsp->TOP__rv32.__PVT__i1__DOT__i0__DOT__key_list[1]));
    bufp->fullBit(oldp+5,(vlSymsp->TOP__rv32.__PVT__i2__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+6,(vlSymsp->TOP__rv32.__PVT__i2__DOT__i0__DOT__key_list[1]));
    bufp->fullBit(oldp+7,(vlSymsp->TOP__rv32.__PVT__i4__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+8,(vlSymsp->TOP__rv32.__PVT__i4__DOT__i0__DOT__key_list[1]));
    bufp->fullBit(oldp+9,(vlSymsp->TOP__rv32.__PVT__wen));
    bufp->fullBit(oldp+10,(vlSymsp->TOP__rv32.__PVT__m1));
    bufp->fullBit(oldp+11,(vlSymsp->TOP__rv32.__PVT__m2));
    bufp->fullBit(oldp+12,(vlSymsp->TOP__rv32.__PVT__m3));
    bufp->fullBit(oldp+13,(vlSymsp->TOP__rv32.__PVT__m4));
    bufp->fullCData(oldp+14,(vlSymsp->TOP__rv32.__PVT__aluc),2);
    bufp->fullIData(oldp+15,(vlSymsp->TOP__rv32.__PVT__imm),32);
    bufp->fullBit(oldp+16,(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__i3__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+17,(vlSymsp->TOP__rv32.__PVT__i1__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+18,(vlSymsp->TOP__rv32.__PVT__i2__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+19,(vlSymsp->TOP__rv32.__PVT__i4__DOT__i0__DOT__hit));
    bufp->fullSData(oldp+20,(vlSymsp->TOP__rv32.__PVT__imm_extend_inst__DOT__imm_12),12);
    bufp->fullIData(oldp+21,(vlSymsp->TOP__rv32.__PVT__imm_extend_inst__DOT__imm_20),20);
    bufp->fullIData(oldp+22,(vlSymsp->TOP__rv32.__PVT__imm_extend_inst__DOT__imm_12_to_32),32);
    bufp->fullIData(oldp+23,(vlSymsp->TOP__rv32.__PVT__imm_extend_inst__DOT__imm_20_to_32),32);
    bufp->fullIData(oldp+24,(vlSymsp->TOP__rv32.__PVT__result),32);
    bufp->fullIData(oldp+25,(vlSymsp->TOP__rv32.__PVT__rin),32);
    bufp->fullIData(oldp+26,(vlSymsp->TOP__rv32__register_file_inst.__PVT__src1),32);
    bufp->fullIData(oldp+27,(vlSymsp->TOP__rv32__register_file_inst.__PVT__src2),32);
    bufp->fullIData(oldp+28,(vlSymsp->TOP__rv32.__PVT__num1),32);
    bufp->fullIData(oldp+29,(vlSymsp->TOP__rv32.__PVT__num2),32);
    bufp->fullIData(oldp+30,(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__pc_temp),32);
    __Vtemp_h41db52af__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(vlSymsp->TOP__rv32.__PVT__result))));
    __Vtemp_h41db52af__0[1U] = ((((IData)(4U) + vlSymsp->TOP__rv32.pc) 
                                 << 1U) | (IData)((
                                                   (0x100000000ULL 
                                                    | (QData)((IData)(vlSymsp->TOP__rv32.__PVT__result))) 
                                                   >> 0x20U)));
    __Vtemp_h41db52af__0[2U] = (((IData)(4U) + vlSymsp->TOP__rv32.pc) 
                                >> 0x1fU);
    bufp->fullWData(oldp+31,(__Vtemp_h41db52af__0),66);
    bufp->fullQData(oldp+34,(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__i3__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+36,(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__i3__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullIData(oldp+38,(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__i3__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+39,(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__i3__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+40,(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__i3__DOT__i0__DOT__lut_out),32);
    __Vtemp_ha128a62f__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(vlSymsp->TOP__rv32__register_file_inst.__PVT__src1))));
    __Vtemp_ha128a62f__0[1U] = ((vlSymsp->TOP__rv32.pc 
                                 << 1U) | (IData)((
                                                   (0x100000000ULL 
                                                    | (QData)((IData)(vlSymsp->TOP__rv32__register_file_inst.__PVT__src1))) 
                                                   >> 0x20U)));
    __Vtemp_ha128a62f__0[2U] = (vlSymsp->TOP__rv32.pc 
                                >> 0x1fU);
    bufp->fullWData(oldp+41,(__Vtemp_ha128a62f__0),66);
    bufp->fullQData(oldp+44,(vlSymsp->TOP__rv32.__PVT__i1__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+46,(vlSymsp->TOP__rv32.__PVT__i1__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullIData(oldp+48,(vlSymsp->TOP__rv32.__PVT__i1__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+49,(vlSymsp->TOP__rv32.__PVT__i1__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+50,(vlSymsp->TOP__rv32.__PVT__i1__DOT__i0__DOT__lut_out),32);
    __Vtemp_h6d3ce832__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(vlSymsp->TOP__rv32.__PVT__imm))));
    __Vtemp_h6d3ce832__0[1U] = ((vlSymsp->TOP__rv32__register_file_inst.__PVT__src2 
                                 << 1U) | (IData)((
                                                   (0x100000000ULL 
                                                    | (QData)((IData)(vlSymsp->TOP__rv32.__PVT__imm))) 
                                                   >> 0x20U)));
    __Vtemp_h6d3ce832__0[2U] = (vlSymsp->TOP__rv32__register_file_inst.__PVT__src2 
                                >> 0x1fU);
    bufp->fullWData(oldp+51,(__Vtemp_h6d3ce832__0),66);
    bufp->fullQData(oldp+54,(vlSymsp->TOP__rv32.__PVT__i2__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+56,(vlSymsp->TOP__rv32.__PVT__i2__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullIData(oldp+58,(vlSymsp->TOP__rv32.__PVT__i2__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+59,(vlSymsp->TOP__rv32.__PVT__i2__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+60,(vlSymsp->TOP__rv32.__PVT__i2__DOT__i0__DOT__lut_out),32);
    bufp->fullQData(oldp+61,(vlSymsp->TOP__rv32.__PVT__i4__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+63,(vlSymsp->TOP__rv32.__PVT__i4__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullIData(oldp+65,(vlSymsp->TOP__rv32.__PVT__i4__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+66,(vlSymsp->TOP__rv32.__PVT__i4__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+67,(vlSymsp->TOP__rv32.__PVT__i4__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+68,(((1U == (IData)(vlSymsp->TOP__rv32.__PVT__clk_count_inst__DOT__clk_cnt)) 
                            & (IData)(vlSymsp->TOP__rv32.__PVT__wen))));
    bufp->fullIData(oldp+69,(vlSymsp->TOP__rv32.pc),32);
    bufp->fullBit(oldp+70,((1U == (IData)(vlSymsp->TOP__rv32.__PVT__clk_count_inst__DOT__clk_cnt))));
    bufp->fullBit(oldp+71,((2U == (IData)(vlSymsp->TOP__rv32.__PVT__clk_count_inst__DOT__clk_cnt))));
    bufp->fullIData(oldp+72,(((IData)(4U) + vlSymsp->TOP__rv32.pc)),32);
    bufp->fullCData(oldp+73,(vlSymsp->TOP__rv32.__PVT__clk_count_inst__DOT__clk_cnt),2);
    bufp->fullIData(oldp+74,(vlSymsp->TOP__rv32__register_file_inst.__PVT__i),32);
    bufp->fullBit(oldp+75,(vlSelf->clk));
    bufp->fullBit(oldp+76,(vlSelf->rst));
    bufp->fullIData(oldp+77,(vlSelf->inst),32);
    bufp->fullIData(oldp+78,(vlSelf->pc),32);
    bufp->fullCData(oldp+79,(vlSymsp->TOP__rv32.rs1),5);
    bufp->fullCData(oldp+80,(vlSymsp->TOP__rv32.rs2),5);
    bufp->fullCData(oldp+81,(vlSymsp->TOP__rv32.rd),5);
    bufp->fullCData(oldp+82,(vlSymsp->TOP__rv32.funct3),3);
    bufp->fullCData(oldp+83,(vlSymsp->TOP__rv32.funct7),7);
    bufp->fullCData(oldp+84,(vlSymsp->TOP__rv32.type4),3);
    bufp->fullCData(oldp+85,((0x7fU & vlSelf->inst)),7);
    bufp->fullIData(oldp+86,(vlSymsp->TOP__rv32__register_file_inst.regs[0]),32);
    bufp->fullIData(oldp+87,(vlSymsp->TOP__rv32__register_file_inst.regs[1]),32);
    bufp->fullIData(oldp+88,(vlSymsp->TOP__rv32__register_file_inst.regs[2]),32);
    bufp->fullIData(oldp+89,(vlSymsp->TOP__rv32__register_file_inst.regs[3]),32);
    bufp->fullIData(oldp+90,(vlSymsp->TOP__rv32__register_file_inst.regs[4]),32);
    bufp->fullIData(oldp+91,(vlSymsp->TOP__rv32__register_file_inst.regs[5]),32);
    bufp->fullIData(oldp+92,(vlSymsp->TOP__rv32__register_file_inst.regs[6]),32);
    bufp->fullIData(oldp+93,(vlSymsp->TOP__rv32__register_file_inst.regs[7]),32);
    bufp->fullIData(oldp+94,(vlSymsp->TOP__rv32__register_file_inst.regs[8]),32);
    bufp->fullIData(oldp+95,(vlSymsp->TOP__rv32__register_file_inst.regs[9]),32);
    bufp->fullIData(oldp+96,(vlSymsp->TOP__rv32__register_file_inst.regs[10]),32);
    bufp->fullIData(oldp+97,(vlSymsp->TOP__rv32__register_file_inst.regs[11]),32);
    bufp->fullIData(oldp+98,(vlSymsp->TOP__rv32__register_file_inst.regs[12]),32);
    bufp->fullIData(oldp+99,(vlSymsp->TOP__rv32__register_file_inst.regs[13]),32);
    bufp->fullIData(oldp+100,(vlSymsp->TOP__rv32__register_file_inst.regs[14]),32);
    bufp->fullIData(oldp+101,(vlSymsp->TOP__rv32__register_file_inst.regs[15]),32);
    bufp->fullIData(oldp+102,(vlSymsp->TOP__rv32__register_file_inst.regs[16]),32);
    bufp->fullIData(oldp+103,(vlSymsp->TOP__rv32__register_file_inst.regs[17]),32);
    bufp->fullIData(oldp+104,(vlSymsp->TOP__rv32__register_file_inst.regs[18]),32);
    bufp->fullIData(oldp+105,(vlSymsp->TOP__rv32__register_file_inst.regs[19]),32);
    bufp->fullIData(oldp+106,(vlSymsp->TOP__rv32__register_file_inst.regs[20]),32);
    bufp->fullIData(oldp+107,(vlSymsp->TOP__rv32__register_file_inst.regs[21]),32);
    bufp->fullIData(oldp+108,(vlSymsp->TOP__rv32__register_file_inst.regs[22]),32);
    bufp->fullIData(oldp+109,(vlSymsp->TOP__rv32__register_file_inst.regs[23]),32);
    bufp->fullIData(oldp+110,(vlSymsp->TOP__rv32__register_file_inst.regs[24]),32);
    bufp->fullIData(oldp+111,(vlSymsp->TOP__rv32__register_file_inst.regs[25]),32);
    bufp->fullIData(oldp+112,(vlSymsp->TOP__rv32__register_file_inst.regs[26]),32);
    bufp->fullIData(oldp+113,(vlSymsp->TOP__rv32__register_file_inst.regs[27]),32);
    bufp->fullIData(oldp+114,(vlSymsp->TOP__rv32__register_file_inst.regs[28]),32);
    bufp->fullIData(oldp+115,(vlSymsp->TOP__rv32__register_file_inst.regs[29]),32);
    bufp->fullIData(oldp+116,(vlSymsp->TOP__rv32__register_file_inst.regs[30]),32);
    bufp->fullIData(oldp+117,(vlSymsp->TOP__rv32__register_file_inst.regs[31]),32);
    bufp->fullIData(oldp+118,(2U),32);
    bufp->fullIData(oldp+119,(1U),32);
    bufp->fullIData(oldp+120,(0x20U),32);
    bufp->fullIData(oldp+121,(0U),32);
    bufp->fullIData(oldp+122,(0U),32);
    bufp->fullIData(oldp+123,(0x21U),32);
    bufp->fullIData(oldp+124,(2U),32);
    bufp->fullIData(oldp+125,(0xfffffffeU),32);
}
