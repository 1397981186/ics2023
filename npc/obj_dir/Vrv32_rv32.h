// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrv32.h for the primary calling header

#ifndef VERILATED_VRV32_RV32_H_
#define VERILATED_VRV32_RV32_H_  // guard

#include "verilated.h"

class Vrv32__Syms;
class Vrv32_register_file;


class Vrv32_rv32 final : public VerilatedModule {
  public:
    // CELLS
    Vrv32_register_file* register_file_inst;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*4:0*/ rs1;
    CData/*4:0*/ rs2;
    CData/*4:0*/ rd;
    CData/*2:0*/ funct3;
    CData/*6:0*/ funct7;
    CData/*2:0*/ type4;
    CData/*0:0*/ __PVT__wen;
    CData/*0:0*/ __PVT__m1;
    CData/*0:0*/ __PVT__m2;
    CData/*0:0*/ __PVT__m3;
    CData/*0:0*/ __PVT__m4;
    CData/*1:0*/ __PVT__aluc;
    CData/*1:0*/ __PVT__clk_count_inst__DOT__clk_cnt;
    CData/*0:0*/ __PVT__PC_inst__DOT__i3__DOT__i0__DOT__hit;
    CData/*0:0*/ __PVT__i1__DOT__i0__DOT__hit;
    CData/*0:0*/ __PVT__i2__DOT__i0__DOT__hit;
    CData/*0:0*/ __PVT__i4__DOT__i0__DOT__hit;
    CData/*1:0*/ __Vdly__clk_count_inst__DOT__clk_cnt;
    SData/*11:0*/ __PVT__imm_extend_inst__DOT__imm_12;
    VL_IN(inst,31,0);
    VL_OUT(pc,31,0);
    IData/*31:0*/ __PVT__result;
    IData/*31:0*/ __PVT__rin;
    IData/*31:0*/ __PVT__imm;
    IData/*31:0*/ __PVT__num1;
    IData/*31:0*/ __PVT__num2;
    IData/*31:0*/ __PVT__PC_inst__DOT__pc_temp;
    IData/*31:0*/ __PVT__PC_inst__DOT__i3__DOT__i0__DOT__lut_out;
    IData/*19:0*/ __PVT__imm_extend_inst__DOT__imm_20;
    IData/*31:0*/ __PVT__imm_extend_inst__DOT__imm_12_to_32;
    IData/*31:0*/ __PVT__imm_extend_inst__DOT__imm_20_to_32;
    IData/*31:0*/ __PVT__i1__DOT__i0__DOT__lut_out;
    IData/*31:0*/ __PVT__i2__DOT__i0__DOT__lut_out;
    IData/*31:0*/ __PVT__i4__DOT__i0__DOT__lut_out;
    VlUnpacked<QData/*32:0*/, 2> __PVT__PC_inst__DOT__i3__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*0:0*/, 2> __PVT__PC_inst__DOT__i3__DOT__i0__DOT__key_list;
    VlUnpacked<IData/*31:0*/, 2> __PVT__PC_inst__DOT__i3__DOT__i0__DOT__data_list;
    VlUnpacked<QData/*32:0*/, 2> __PVT__i1__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*0:0*/, 2> __PVT__i1__DOT__i0__DOT__key_list;
    VlUnpacked<IData/*31:0*/, 2> __PVT__i1__DOT__i0__DOT__data_list;
    VlUnpacked<QData/*32:0*/, 2> __PVT__i2__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*0:0*/, 2> __PVT__i2__DOT__i0__DOT__key_list;
    VlUnpacked<IData/*31:0*/, 2> __PVT__i2__DOT__i0__DOT__data_list;
    VlUnpacked<QData/*32:0*/, 2> __PVT__i4__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*0:0*/, 2> __PVT__i4__DOT__i0__DOT__key_list;
    VlUnpacked<IData/*31:0*/, 2> __PVT__i4__DOT__i0__DOT__data_list;

    // INTERNAL VARIABLES
    Vrv32__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrv32_rv32(Vrv32__Syms* symsp, const char* v__name);
    ~Vrv32_rv32();
    VL_UNCOPYABLE(Vrv32_rv32);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
