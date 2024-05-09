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
    tracep->declBit(c+96,"clk", false,-1);
    tracep->declBit(c+97,"rst", false,-1);
}

VL_ATTR_COLD void Vrv32___024root__trace_init_sub__TOP__rv32__0(Vrv32___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32___024root__trace_init_sub__TOP__rv32__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+96,"clk", false,-1);
    tracep->declBit(c+97,"rst", false,-1);
    tracep->declBus(c+98,"rs1", false,-1, 4,0);
    tracep->declBus(c+99,"rs2", false,-1, 4,0);
    tracep->declBus(c+100,"rd", false,-1, 4,0);
    tracep->declBus(c+101,"funct3", false,-1, 2,0);
    tracep->declBus(c+102,"funct7", false,-1, 6,0);
    tracep->declBus(c+103,"inst", false,-1, 31,0);
    tracep->declBus(c+104,"pc", false,-1, 31,0);
    tracep->declBus(c+13,"IType", false,-1, 2,0);
    tracep->declBit(c+14,"reg_wen", false,-1);
    tracep->declBit(c+15,"mem_wen", false,-1);
    tracep->declBit(c+16,"mem_ren", false,-1);
    tracep->declBus(c+17,"wmask", false,-1, 7,0);
    tracep->declBus(c+18,"rmask", false,-1, 2,0);
    tracep->declBit(c+19,"m1", false,-1);
    tracep->declBit(c+20,"m2", false,-1);
    tracep->declBit(c+21,"m3", false,-1);
    tracep->declBit(c+22,"m4", false,-1);
    tracep->declBus(c+23,"m5", false,-1, 1,0);
    tracep->declBus(c+24,"aluc", false,-1, 4,0);
    tracep->declBus(c+105,"PCadd4", false,-1, 31,0);
    tracep->declBus(c+25,"result", false,-1, 31,0);
    tracep->declBus(c+26,"reg_in", false,-1, 31,0);
    tracep->declBus(c+27,"src1", false,-1, 31,0);
    tracep->declBus(c+28,"src2", false,-1, 31,0);
    tracep->declBus(c+29,"imm32", false,-1, 31,0);
    tracep->declBus(c+30,"num1", false,-1, 31,0);
    tracep->declBus(c+31,"num2", false,-1, 31,0);
    tracep->declBus(c+32,"mem_rdata", false,-1, 31,0);
    tracep->pushNamePrefix("PC_inst ");
    tracep->declBit(c+96,"clk", false,-1);
    tracep->declBit(c+97,"rst", false,-1);
    tracep->declBit(c+19,"m1", false,-1);
    tracep->declBit(c+20,"m2", false,-1);
    tracep->declBus(c+25,"result", false,-1, 31,0);
    tracep->declBus(c+29,"imm32", false,-1, 31,0);
    tracep->declBus(c+105,"PCadd4", false,-1, 31,0);
    tracep->declBus(c+104,"pc", false,-1, 31,0);
    tracep->declBus(c+33,"npc", false,-1, 31,0);
    tracep->declBus(c+34,"npc_temp", false,-1, 31,0);
    tracep->declBus(c+35,"PCaddIMM32", false,-1, 31,0);
    tracep->pushNamePrefix("i1 ");
    tracep->declBus(c+151,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+152,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+153,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+33,"out", false,-1, 31,0);
    tracep->declBus(c+36,"key", false,-1, 0,0);
    tracep->declArray(c+37,"lut", false,-1, 65,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+151,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+152,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+153,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+154,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+33,"out", false,-1, 31,0);
    tracep->declBus(c+36,"key", false,-1, 0,0);
    tracep->declBus(c+155,"default_out", false,-1, 31,0);
    tracep->declArray(c+37,"lut", false,-1, 65,0);
    tracep->declBus(c+156,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+40+i*2,"pair_list", true,(i+0), 32,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+44+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+46,"lut_out", false,-1, 31,0);
    tracep->declBit(c+47,"hit", false,-1);
    tracep->declBus(c+157,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i2 ");
    tracep->declBus(c+151,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+152,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+153,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+34,"out", false,-1, 31,0);
    tracep->declBus(c+20,"key", false,-1, 0,0);
    tracep->declArray(c+106,"lut", false,-1, 65,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+151,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+152,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+153,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+154,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+34,"out", false,-1, 31,0);
    tracep->declBus(c+20,"key", false,-1, 0,0);
    tracep->declBus(c+155,"default_out", false,-1, 31,0);
    tracep->declArray(c+106,"lut", false,-1, 65,0);
    tracep->declBus(c+156,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+48+i*2,"pair_list", true,(i+0), 32,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+3+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+52+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+54,"lut_out", false,-1, 31,0);
    tracep->declBit(c+55,"hit", false,-1);
    tracep->declBus(c+157,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("alu_inst ");
    tracep->declBus(c+24,"aluc", false,-1, 4,0);
    tracep->declBus(c+30,"num1", false,-1, 31,0);
    tracep->declBus(c+31,"num2", false,-1, 31,0);
    tracep->declBus(c+25,"result", false,-1, 31,0);
    tracep->declBus(c+158,"temp", false,-1, 31,0);
    tracep->declBus(c+56,"num2_cplm", false,-1, 31,0);
    tracep->declBus(c+57,"num2_temp", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("control_unit_inst ");
    tracep->declBus(c+103,"inst", false,-1, 31,0);
    tracep->declBus(c+100,"rd_11_7", false,-1, 4,0);
    tracep->declBus(c+98,"rs1_19_15", false,-1, 4,0);
    tracep->declBus(c+99,"rs2_24_20", false,-1, 4,0);
    tracep->declBus(c+101,"fun3_14_12", false,-1, 2,0);
    tracep->declBus(c+102,"fun7_31_25", false,-1, 6,0);
    tracep->declBus(c+13,"IType", false,-1, 2,0);
    tracep->declBus(c+24,"aluc", false,-1, 4,0);
    tracep->declBit(c+14,"reg_wen", false,-1);
    tracep->declBit(c+15,"mem_wen", false,-1);
    tracep->declBit(c+16,"mem_ren", false,-1);
    tracep->declBus(c+17,"wmask", false,-1, 7,0);
    tracep->declBus(c+18,"rmask", false,-1, 2,0);
    tracep->declBit(c+19,"m1", false,-1);
    tracep->declBit(c+20,"m2", false,-1);
    tracep->declBit(c+21,"m3", false,-1);
    tracep->declBit(c+22,"m4", false,-1);
    tracep->declBus(c+23,"m5", false,-1, 1,0);
    tracep->declBus(c+109,"opcode_6_0", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i3 ");
    tracep->declBus(c+151,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+152,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+153,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+31,"out", false,-1, 31,0);
    tracep->declBus(c+21,"key", false,-1, 0,0);
    tracep->declArray(c+58,"lut", false,-1, 65,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+151,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+152,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+153,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+154,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+31,"out", false,-1, 31,0);
    tracep->declBus(c+21,"key", false,-1, 0,0);
    tracep->declBus(c+155,"default_out", false,-1, 31,0);
    tracep->declArray(c+58,"lut", false,-1, 65,0);
    tracep->declBus(c+156,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+61+i*2,"pair_list", true,(i+0), 32,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+5+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+65+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+67,"lut_out", false,-1, 31,0);
    tracep->declBit(c+68,"hit", false,-1);
    tracep->declBus(c+157,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i4 ");
    tracep->declBus(c+151,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+152,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+153,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+30,"out", false,-1, 31,0);
    tracep->declBus(c+22,"key", false,-1, 0,0);
    tracep->declArray(c+110,"lut", false,-1, 65,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+151,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+152,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+153,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+154,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+30,"out", false,-1, 31,0);
    tracep->declBus(c+22,"key", false,-1, 0,0);
    tracep->declBus(c+155,"default_out", false,-1, 31,0);
    tracep->declArray(c+110,"lut", false,-1, 65,0);
    tracep->declBus(c+156,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+69+i*2,"pair_list", true,(i+0), 32,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+7+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+73+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+75,"lut_out", false,-1, 31,0);
    tracep->declBit(c+76,"hit", false,-1);
    tracep->declBus(c+157,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i5 ");
    tracep->declBus(c+159,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+151,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+153,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+26,"out", false,-1, 31,0);
    tracep->declBus(c+23,"key", false,-1, 1,0);
    tracep->declArray(c+113,"lut", false,-1, 135,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+159,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+151,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+153,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+154,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+26,"out", false,-1, 31,0);
    tracep->declBus(c+23,"key", false,-1, 1,0);
    tracep->declBus(c+155,"default_out", false,-1, 31,0);
    tracep->declArray(c+113,"lut", false,-1, 135,0);
    tracep->declBus(c+160,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+77+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+9+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+85+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+89,"lut_out", false,-1, 31,0);
    tracep->declBit(c+90,"hit", false,-1);
    tracep->declBus(c+161,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("imm_extend_inst ");
    tracep->declBus(c+98,"rs1", false,-1, 4,0);
    tracep->declBus(c+99,"rs2", false,-1, 4,0);
    tracep->declBus(c+100,"rd", false,-1, 4,0);
    tracep->declBus(c+101,"funct3", false,-1, 2,0);
    tracep->declBus(c+102,"funct7", false,-1, 6,0);
    tracep->declBus(c+13,"IType", false,-1, 2,0);
    tracep->declBus(c+29,"imm32", false,-1, 31,0);
    tracep->declBus(c+91,"imm_12", false,-1, 11,0);
    tracep->declBus(c+92,"imm_20", false,-1, 19,0);
    tracep->declBus(c+93,"imm_12_to_32", false,-1, 31,0);
    tracep->declBus(c+94,"imm_20_to_32", false,-1, 31,0);
    tracep->pushNamePrefix("Extend_12_inst ");
    tracep->declBus(c+91,"imm_12", false,-1, 11,0);
    tracep->declBus(c+93,"imm_12_to_32", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Extend_20_inst ");
    tracep->declBus(c+92,"imm_20", false,-1, 19,0);
    tracep->declBus(c+94,"imm_20_to_32", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RISB_type_inst ");
    tracep->declBus(c+99,"rs2", false,-1, 4,0);
    tracep->declBus(c+100,"rd", false,-1, 4,0);
    tracep->declBus(c+102,"funct7", false,-1, 6,0);
    tracep->declBus(c+13,"IType", false,-1, 2,0);
    tracep->declBus(c+91,"imm_12", false,-1, 11,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("UJ_type_inst ");
    tracep->declBus(c+98,"rs1", false,-1, 4,0);
    tracep->declBus(c+99,"rs2", false,-1, 4,0);
    tracep->declBus(c+101,"funct3", false,-1, 2,0);
    tracep->declBus(c+102,"funct7", false,-1, 6,0);
    tracep->declBus(c+13,"IType", false,-1, 2,0);
    tracep->declBus(c+92,"imm_20", false,-1, 19,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mem_inst ");
    tracep->declBit(c+96,"clk", false,-1);
    tracep->declBit(c+15,"mem_wen", false,-1);
    tracep->declBus(c+17,"wmask", false,-1, 7,0);
    tracep->declBus(c+25,"waddr", false,-1, 31,0);
    tracep->declBus(c+28,"wdata", false,-1, 31,0);
    tracep->declBit(c+16,"mem_ren", false,-1);
    tracep->declBus(c+18,"rmask", false,-1, 2,0);
    tracep->declBus(c+25,"raddr", false,-1, 31,0);
    tracep->declBus(c+104,"inst_addr", false,-1, 31,0);
    tracep->declBus(c+32,"rdata", false,-1, 31,0);
    tracep->declBus(c+103,"inst_data", false,-1, 31,0);
    tracep->declBus(c+95,"rdata_temp", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vrv32___024root__trace_init_sub__TOP__rv32__register_file_inst__0(Vrv32___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32___024root__trace_init_sub__TOP__rv32__register_file_inst__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+96,"clk", false,-1);
    tracep->declBit(c+97,"rst", false,-1);
    tracep->declBit(c+14,"reg_wen", false,-1);
    tracep->declBus(c+98,"rs1", false,-1, 4,0);
    tracep->declBus(c+99,"rs2", false,-1, 4,0);
    tracep->declBus(c+100,"rd", false,-1, 4,0);
    tracep->declBus(c+26,"reg_in", false,-1, 31,0);
    tracep->declBus(c+27,"src1", false,-1, 31,0);
    tracep->declBus(c+28,"src2", false,-1, 31,0);
    tracep->declBus(c+118,"i", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+119+i*1,"regs", true,(i+0), 31,0);
    }
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
    VlWide<3>/*95:0*/ __Vtemp_hb867cd23__0;
    VlWide<3>/*95:0*/ __Vtemp_hb3d6a269__0;
    VlWide<3>/*95:0*/ __Vtemp_h41db52af__0;
    VlWide<3>/*95:0*/ __Vtemp_ha128a62f__0;
    VlWide<5>/*159:0*/ __Vtemp_hea64b420__0;
    // Body
    bufp->fullBit(oldp+1,(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__i1__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+2,(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__i1__DOT__i0__DOT__key_list[1]));
    bufp->fullBit(oldp+3,(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__i2__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+4,(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__i2__DOT__i0__DOT__key_list[1]));
    bufp->fullBit(oldp+5,(vlSymsp->TOP__rv32.__PVT__i3__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+6,(vlSymsp->TOP__rv32.__PVT__i3__DOT__i0__DOT__key_list[1]));
    bufp->fullBit(oldp+7,(vlSymsp->TOP__rv32.__PVT__i4__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+8,(vlSymsp->TOP__rv32.__PVT__i4__DOT__i0__DOT__key_list[1]));
    bufp->fullCData(oldp+9,(vlSymsp->TOP__rv32.__PVT__i5__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+10,(vlSymsp->TOP__rv32.__PVT__i5__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+11,(vlSymsp->TOP__rv32.__PVT__i5__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+12,(vlSymsp->TOP__rv32.__PVT__i5__DOT__i0__DOT__key_list[3]),2);
    bufp->fullCData(oldp+13,(vlSymsp->TOP__rv32.__PVT__IType),3);
    bufp->fullBit(oldp+14,(vlSymsp->TOP__rv32.__PVT__reg_wen));
    bufp->fullBit(oldp+15,(vlSymsp->TOP__rv32.__PVT__mem_wen));
    bufp->fullBit(oldp+16,(vlSymsp->TOP__rv32.__PVT__mem_ren));
    bufp->fullCData(oldp+17,(vlSymsp->TOP__rv32.__PVT__wmask),8);
    bufp->fullCData(oldp+18,(vlSymsp->TOP__rv32.__PVT__rmask),3);
    bufp->fullBit(oldp+19,(vlSymsp->TOP__rv32.__PVT__m1));
    bufp->fullBit(oldp+20,(vlSymsp->TOP__rv32.__PVT__m2));
    bufp->fullBit(oldp+21,(vlSymsp->TOP__rv32.__PVT__m3));
    bufp->fullBit(oldp+22,(vlSymsp->TOP__rv32.__PVT__m4));
    bufp->fullCData(oldp+23,(vlSymsp->TOP__rv32.__PVT__m5),2);
    bufp->fullCData(oldp+24,(vlSymsp->TOP__rv32.__PVT__aluc),5);
    bufp->fullIData(oldp+25,(vlSymsp->TOP__rv32.__PVT__result),32);
    bufp->fullIData(oldp+26,(vlSymsp->TOP__rv32.__PVT__reg_in),32);
    bufp->fullIData(oldp+27,(vlSymsp->TOP__rv32__register_file_inst.__PVT__src1),32);
    bufp->fullIData(oldp+28,(vlSymsp->TOP__rv32__register_file_inst.__PVT__src2),32);
    bufp->fullIData(oldp+29,(vlSymsp->TOP__rv32.__PVT__imm32),32);
    bufp->fullIData(oldp+30,(vlSymsp->TOP__rv32.__PVT__num1),32);
    bufp->fullIData(oldp+31,(vlSymsp->TOP__rv32.__PVT__num2),32);
    bufp->fullIData(oldp+32,(vlSymsp->TOP__rv32.__PVT__mem_rdata),32);
    bufp->fullIData(oldp+33,(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__npc),32);
    bufp->fullIData(oldp+34,(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__npc_temp),32);
    bufp->fullIData(oldp+35,(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__PCaddIMM32),32);
    bufp->fullBit(oldp+36,(vlSymsp->TOP__rv32.PC_inst__DOT____Vcellinp__i1____pinNumber2));
    __Vtemp_hb867cd23__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__PCaddIMM32))));
    __Vtemp_hb867cd23__0[1U] = ((vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__npc_temp 
                                 << 1U) | (IData)((
                                                   (0x100000000ULL 
                                                    | (QData)((IData)(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__PCaddIMM32))) 
                                                   >> 0x20U)));
    __Vtemp_hb867cd23__0[2U] = (vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__npc_temp 
                                >> 0x1fU);
    bufp->fullWData(oldp+37,(__Vtemp_hb867cd23__0),66);
    bufp->fullQData(oldp+40,(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__i1__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+42,(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__i1__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullIData(oldp+44,(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__i1__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+45,(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__i1__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+46,(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__i1__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+47,(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__i1__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+48,(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__i2__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+50,(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__i2__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullIData(oldp+52,(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__i2__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+53,(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__i2__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+54,(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__i2__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+55,(vlSymsp->TOP__rv32.__PVT__PC_inst__DOT__i2__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+56,(((IData)(1U) + (~ vlSymsp->TOP__rv32.__PVT__num2))),32);
    bufp->fullIData(oldp+57,((0x1fU & vlSymsp->TOP__rv32.__PVT__num2)),32);
    __Vtemp_hb3d6a269__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(vlSymsp->TOP__rv32.__PVT__imm32))));
    __Vtemp_hb3d6a269__0[1U] = ((vlSymsp->TOP__rv32__register_file_inst.__PVT__src2 
                                 << 1U) | (IData)((
                                                   (0x100000000ULL 
                                                    | (QData)((IData)(vlSymsp->TOP__rv32.__PVT__imm32))) 
                                                   >> 0x20U)));
    __Vtemp_hb3d6a269__0[2U] = (vlSymsp->TOP__rv32__register_file_inst.__PVT__src2 
                                >> 0x1fU);
    bufp->fullWData(oldp+58,(__Vtemp_hb3d6a269__0),66);
    bufp->fullQData(oldp+61,(vlSymsp->TOP__rv32.__PVT__i3__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+63,(vlSymsp->TOP__rv32.__PVT__i3__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullIData(oldp+65,(vlSymsp->TOP__rv32.__PVT__i3__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+66,(vlSymsp->TOP__rv32.__PVT__i3__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+67,(vlSymsp->TOP__rv32.__PVT__i3__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+68,(vlSymsp->TOP__rv32.__PVT__i3__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+69,(vlSymsp->TOP__rv32.__PVT__i4__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+71,(vlSymsp->TOP__rv32.__PVT__i4__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullIData(oldp+73,(vlSymsp->TOP__rv32.__PVT__i4__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+74,(vlSymsp->TOP__rv32.__PVT__i4__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+75,(vlSymsp->TOP__rv32.__PVT__i4__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+76,(vlSymsp->TOP__rv32.__PVT__i4__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+77,(vlSymsp->TOP__rv32.__PVT__i5__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+79,(vlSymsp->TOP__rv32.__PVT__i5__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+81,(vlSymsp->TOP__rv32.__PVT__i5__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullQData(oldp+83,(vlSymsp->TOP__rv32.__PVT__i5__DOT__i0__DOT__pair_list[3]),34);
    bufp->fullIData(oldp+85,(vlSymsp->TOP__rv32.__PVT__i5__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+86,(vlSymsp->TOP__rv32.__PVT__i5__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+87,(vlSymsp->TOP__rv32.__PVT__i5__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+88,(vlSymsp->TOP__rv32.__PVT__i5__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+89,(vlSymsp->TOP__rv32.__PVT__i5__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+90,(vlSymsp->TOP__rv32.__PVT__i5__DOT__i0__DOT__hit));
    bufp->fullSData(oldp+91,(vlSymsp->TOP__rv32.__PVT__imm_extend_inst__DOT__imm_12),12);
    bufp->fullIData(oldp+92,(vlSymsp->TOP__rv32.__PVT__imm_extend_inst__DOT__imm_20),20);
    bufp->fullIData(oldp+93,(vlSymsp->TOP__rv32.__PVT__imm_extend_inst__DOT__imm_12_to_32),32);
    bufp->fullIData(oldp+94,(vlSymsp->TOP__rv32.__PVT__imm_extend_inst__DOT__imm_20_to_32),32);
    bufp->fullIData(oldp+95,(vlSymsp->TOP__rv32.__PVT__mem_inst__DOT__rdata_temp),32);
    bufp->fullBit(oldp+96,(vlSelf->clk));
    bufp->fullBit(oldp+97,(vlSelf->rst));
    bufp->fullCData(oldp+98,((0x1fU & (vlSymsp->TOP__rv32.inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+99,((0x1fU & (vlSymsp->TOP__rv32.inst 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+100,((0x1fU & (vlSymsp->TOP__rv32.inst 
                                        >> 7U))),5);
    bufp->fullCData(oldp+101,((7U & (vlSymsp->TOP__rv32.inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+102,((vlSymsp->TOP__rv32.inst 
                               >> 0x19U)),7);
    bufp->fullIData(oldp+103,(vlSymsp->TOP__rv32.inst),32);
    bufp->fullIData(oldp+104,(vlSymsp->TOP__rv32.pc),32);
    bufp->fullIData(oldp+105,(((IData)(4U) + vlSymsp->TOP__rv32.pc)),32);
    __Vtemp_h41db52af__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(vlSymsp->TOP__rv32.__PVT__result))));
    __Vtemp_h41db52af__0[1U] = ((((IData)(4U) + vlSymsp->TOP__rv32.pc) 
                                 << 1U) | (IData)((
                                                   (0x100000000ULL 
                                                    | (QData)((IData)(vlSymsp->TOP__rv32.__PVT__result))) 
                                                   >> 0x20U)));
    __Vtemp_h41db52af__0[2U] = (((IData)(4U) + vlSymsp->TOP__rv32.pc) 
                                >> 0x1fU);
    bufp->fullWData(oldp+106,(__Vtemp_h41db52af__0),66);
    bufp->fullCData(oldp+109,((0x7fU & vlSymsp->TOP__rv32.inst)),7);
    __Vtemp_ha128a62f__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(vlSymsp->TOP__rv32__register_file_inst.__PVT__src1))));
    __Vtemp_ha128a62f__0[1U] = ((vlSymsp->TOP__rv32.pc 
                                 << 1U) | (IData)((
                                                   (0x100000000ULL 
                                                    | (QData)((IData)(vlSymsp->TOP__rv32__register_file_inst.__PVT__src1))) 
                                                   >> 0x20U)));
    __Vtemp_ha128a62f__0[2U] = (vlSymsp->TOP__rv32.pc 
                                >> 0x1fU);
    bufp->fullWData(oldp+110,(__Vtemp_ha128a62f__0),66);
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
    bufp->fullWData(oldp+113,(__Vtemp_hea64b420__0),136);
    bufp->fullIData(oldp+118,(vlSymsp->TOP__rv32__register_file_inst.__PVT__i),32);
    bufp->fullIData(oldp+119,(vlSymsp->TOP__rv32__register_file_inst.regs[0]),32);
    bufp->fullIData(oldp+120,(vlSymsp->TOP__rv32__register_file_inst.regs[1]),32);
    bufp->fullIData(oldp+121,(vlSymsp->TOP__rv32__register_file_inst.regs[2]),32);
    bufp->fullIData(oldp+122,(vlSymsp->TOP__rv32__register_file_inst.regs[3]),32);
    bufp->fullIData(oldp+123,(vlSymsp->TOP__rv32__register_file_inst.regs[4]),32);
    bufp->fullIData(oldp+124,(vlSymsp->TOP__rv32__register_file_inst.regs[5]),32);
    bufp->fullIData(oldp+125,(vlSymsp->TOP__rv32__register_file_inst.regs[6]),32);
    bufp->fullIData(oldp+126,(vlSymsp->TOP__rv32__register_file_inst.regs[7]),32);
    bufp->fullIData(oldp+127,(vlSymsp->TOP__rv32__register_file_inst.regs[8]),32);
    bufp->fullIData(oldp+128,(vlSymsp->TOP__rv32__register_file_inst.regs[9]),32);
    bufp->fullIData(oldp+129,(vlSymsp->TOP__rv32__register_file_inst.regs[10]),32);
    bufp->fullIData(oldp+130,(vlSymsp->TOP__rv32__register_file_inst.regs[11]),32);
    bufp->fullIData(oldp+131,(vlSymsp->TOP__rv32__register_file_inst.regs[12]),32);
    bufp->fullIData(oldp+132,(vlSymsp->TOP__rv32__register_file_inst.regs[13]),32);
    bufp->fullIData(oldp+133,(vlSymsp->TOP__rv32__register_file_inst.regs[14]),32);
    bufp->fullIData(oldp+134,(vlSymsp->TOP__rv32__register_file_inst.regs[15]),32);
    bufp->fullIData(oldp+135,(vlSymsp->TOP__rv32__register_file_inst.regs[16]),32);
    bufp->fullIData(oldp+136,(vlSymsp->TOP__rv32__register_file_inst.regs[17]),32);
    bufp->fullIData(oldp+137,(vlSymsp->TOP__rv32__register_file_inst.regs[18]),32);
    bufp->fullIData(oldp+138,(vlSymsp->TOP__rv32__register_file_inst.regs[19]),32);
    bufp->fullIData(oldp+139,(vlSymsp->TOP__rv32__register_file_inst.regs[20]),32);
    bufp->fullIData(oldp+140,(vlSymsp->TOP__rv32__register_file_inst.regs[21]),32);
    bufp->fullIData(oldp+141,(vlSymsp->TOP__rv32__register_file_inst.regs[22]),32);
    bufp->fullIData(oldp+142,(vlSymsp->TOP__rv32__register_file_inst.regs[23]),32);
    bufp->fullIData(oldp+143,(vlSymsp->TOP__rv32__register_file_inst.regs[24]),32);
    bufp->fullIData(oldp+144,(vlSymsp->TOP__rv32__register_file_inst.regs[25]),32);
    bufp->fullIData(oldp+145,(vlSymsp->TOP__rv32__register_file_inst.regs[26]),32);
    bufp->fullIData(oldp+146,(vlSymsp->TOP__rv32__register_file_inst.regs[27]),32);
    bufp->fullIData(oldp+147,(vlSymsp->TOP__rv32__register_file_inst.regs[28]),32);
    bufp->fullIData(oldp+148,(vlSymsp->TOP__rv32__register_file_inst.regs[29]),32);
    bufp->fullIData(oldp+149,(vlSymsp->TOP__rv32__register_file_inst.regs[30]),32);
    bufp->fullIData(oldp+150,(vlSymsp->TOP__rv32__register_file_inst.regs[31]),32);
    bufp->fullIData(oldp+151,(2U),32);
    bufp->fullIData(oldp+152,(1U),32);
    bufp->fullIData(oldp+153,(0x20U),32);
    bufp->fullIData(oldp+154,(0U),32);
    bufp->fullIData(oldp+155,(0U),32);
    bufp->fullIData(oldp+156,(0x21U),32);
    bufp->fullIData(oldp+157,(2U),32);
    bufp->fullIData(oldp+158,(0xfffffffeU),32);
    bufp->fullIData(oldp+159,(4U),32);
    bufp->fullIData(oldp+160,(0x22U),32);
    bufp->fullIData(oldp+161,(4U),32);
}
