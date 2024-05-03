// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv32.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrv32__Syms.h"
#include "Vrv32___024root.h"

VL_ATTR_COLD void Vrv32_rv32___eval_initial__TOP__rv32(Vrv32_rv32* vlSelf);

VL_ATTR_COLD void Vrv32___024root___eval_initial(Vrv32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32___024root___eval_initial\n"); );
    // Body
    Vrv32_rv32___eval_initial__TOP__rv32((&vlSymsp->TOP__rv32));
    vlSelf->__Vtrigrprev__TOP__rv32__clk = vlSymsp->TOP__rv32.clk;
    vlSelf->__Vtrigrprev__TOP__rv32__register_file_inst__clk 
        = vlSymsp->TOP__rv32__register_file_inst.clk;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv32___024root___dump_triggers__stl(Vrv32___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vrv32___024root___eval_triggers__stl(Vrv32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vrv32___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vrv32___024root___stl_sequent__TOP__0(Vrv32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSymsp->TOP__rv32.rst = vlSelf->rst;
    vlSymsp->TOP__rv32.clk = vlSelf->clk;
    vlSymsp->TOP__rv32.inst = vlSelf->inst;
    vlSelf->pc = vlSymsp->TOP__rv32.pc;
}

void Vrv32_rv32___ico_sequent__TOP__rv32__0(Vrv32_rv32* vlSelf);
VL_ATTR_COLD void Vrv32_rv32___stl_sequent__TOP__rv32__1(Vrv32_rv32* vlSelf);
void Vrv32_register_file___ico_sequent__TOP__rv32__register_file_inst__0(Vrv32_register_file* vlSelf);
void Vrv32_rv32___ico_sequent__TOP__rv32__2(Vrv32_rv32* vlSelf);

VL_ATTR_COLD void Vrv32___024root___eval_stl(Vrv32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vrv32_rv32___ico_sequent__TOP__rv32__0((&vlSymsp->TOP__rv32));
        Vrv32___024root___stl_sequent__TOP__0(vlSelf);
        Vrv32_rv32___stl_sequent__TOP__rv32__1((&vlSymsp->TOP__rv32));
        Vrv32_register_file___ico_sequent__TOP__rv32__register_file_inst__0((&vlSymsp->TOP__rv32__register_file_inst));
        Vrv32_rv32___ico_sequent__TOP__rv32__2((&vlSymsp->TOP__rv32));
    }
}
