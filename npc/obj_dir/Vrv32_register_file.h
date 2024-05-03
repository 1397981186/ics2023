// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrv32.h for the primary calling header

#ifndef VERILATED_VRV32_REGISTER_FILE_H_
#define VERILATED_VRV32_REGISTER_FILE_H_  // guard

#include "verilated.h"

class Vrv32__Syms;

class Vrv32_register_file final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_IN8(__PVT__clk1_flag,0,0);
    VL_IN8(__PVT__wen,0,0);
    VL_IN8(__PVT__rs1,4,0);
    VL_IN8(__PVT__rs2,4,0);
    VL_IN8(__PVT__rd,4,0);
    VL_IN(__PVT__rin,31,0);
    VL_OUT(__PVT__src1,31,0);
    VL_OUT(__PVT__src2,31,0);
    IData/*31:0*/ __PVT__i;
    VlUnpacked<IData/*31:0*/, 32> regs;

    // INTERNAL VARIABLES
    Vrv32__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrv32_register_file(Vrv32__Syms* symsp, const char* v__name);
    ~Vrv32_register_file();
    VL_UNCOPYABLE(Vrv32_register_file);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
