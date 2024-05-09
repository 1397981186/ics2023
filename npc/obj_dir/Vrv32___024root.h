// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrv32.h for the primary calling header

#ifndef VERILATED_VRV32___024ROOT_H_
#define VERILATED_VRV32___024ROOT_H_  // guard

#include "verilated.h"

class Vrv32__Syms;
class Vrv32_rv32;


class Vrv32___024root final : public VerilatedModule {
  public:
    // CELLS
    Vrv32_rv32* rv32;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vrv32__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrv32___024root(Vrv32__Syms* symsp, const char* v__name);
    ~Vrv32___024root();
    VL_UNCOPYABLE(Vrv32___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
