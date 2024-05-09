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
    CData/*2:0*/ __PVT__IType;
    CData/*0:0*/ __PVT__reg_wen;
    CData/*0:0*/ __PVT__mem_wen;
    CData/*0:0*/ __PVT__mem_ren;
    CData/*7:0*/ __PVT__wmask;
    CData/*2:0*/ __PVT__rmask;
    CData/*0:0*/ __PVT__m1;
    CData/*0:0*/ __PVT__m2;
    CData/*0:0*/ __PVT__m3;
    CData/*0:0*/ __PVT__m4;
    CData/*1:0*/ __PVT__m5;
    CData/*4:0*/ __PVT__aluc;
    CData/*0:0*/ PC_inst__DOT____Vcellinp__i1____pinNumber2;
    CData/*0:0*/ __PVT__PC_inst__DOT__i1__DOT__i0__DOT__hit;
    CData/*0:0*/ __PVT__PC_inst__DOT__i2__DOT__i0__DOT__hit;
    CData/*0:0*/ __PVT__i3__DOT__i0__DOT__hit;
    CData/*0:0*/ __PVT__i4__DOT__i0__DOT__hit;
    CData/*0:0*/ __PVT__i5__DOT__i0__DOT__hit;
    SData/*11:0*/ __PVT__imm_extend_inst__DOT__imm_12;
    IData/*31:0*/ inst;
    IData/*31:0*/ pc;
    IData/*31:0*/ __PVT__result;
    IData/*31:0*/ __PVT__reg_in;
    IData/*31:0*/ __PVT__imm32;
    IData/*31:0*/ __PVT__num1;
    IData/*31:0*/ __PVT__num2;
    IData/*31:0*/ __PVT__mem_rdata;
    IData/*31:0*/ __PVT__PC_inst__DOT__npc;
    IData/*31:0*/ __PVT__PC_inst__DOT__npc_temp;
    IData/*31:0*/ __PVT__PC_inst__DOT__PCaddIMM32;
    IData/*31:0*/ __PVT__PC_inst__DOT__i1__DOT__i0__DOT__lut_out;
    IData/*31:0*/ __PVT__PC_inst__DOT__i2__DOT__i0__DOT__lut_out;
    IData/*31:0*/ __PVT__mem_inst__DOT__rdata_temp;
    IData/*19:0*/ __PVT__imm_extend_inst__DOT__imm_20;
    IData/*31:0*/ __PVT__imm_extend_inst__DOT__imm_12_to_32;
    IData/*31:0*/ __PVT__imm_extend_inst__DOT__imm_20_to_32;
    IData/*31:0*/ __PVT__i3__DOT__i0__DOT__lut_out;
    IData/*31:0*/ __PVT__i4__DOT__i0__DOT__lut_out;
    IData/*31:0*/ __PVT__i5__DOT__i0__DOT__lut_out;
    IData/*31:0*/ __Vfunc_mem_inst__DOT__pmem_read__0__Vfuncout;
    IData/*31:0*/ __Vfunc_mem_inst__DOT__pmem_read__2__Vfuncout;
    VlUnpacked<QData/*32:0*/, 2> __PVT__PC_inst__DOT__i1__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*0:0*/, 2> __PVT__PC_inst__DOT__i1__DOT__i0__DOT__key_list;
    VlUnpacked<IData/*31:0*/, 2> __PVT__PC_inst__DOT__i1__DOT__i0__DOT__data_list;
    VlUnpacked<QData/*32:0*/, 2> __PVT__PC_inst__DOT__i2__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*0:0*/, 2> __PVT__PC_inst__DOT__i2__DOT__i0__DOT__key_list;
    VlUnpacked<IData/*31:0*/, 2> __PVT__PC_inst__DOT__i2__DOT__i0__DOT__data_list;
    VlUnpacked<QData/*32:0*/, 2> __PVT__i3__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*0:0*/, 2> __PVT__i3__DOT__i0__DOT__key_list;
    VlUnpacked<IData/*31:0*/, 2> __PVT__i3__DOT__i0__DOT__data_list;
    VlUnpacked<QData/*32:0*/, 2> __PVT__i4__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*0:0*/, 2> __PVT__i4__DOT__i0__DOT__key_list;
    VlUnpacked<IData/*31:0*/, 2> __PVT__i4__DOT__i0__DOT__data_list;
    VlUnpacked<QData/*33:0*/, 4> __PVT__i5__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*1:0*/, 4> __PVT__i5__DOT__i0__DOT__key_list;
    VlUnpacked<IData/*31:0*/, 4> __PVT__i5__DOT__i0__DOT__data_list;

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
