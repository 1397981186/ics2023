// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VRV32__SYMS_H_
#define VERILATED_VRV32__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vrv32.h"

// INCLUDE MODULE CLASSES
#include "Vrv32___024root.h"
#include "Vrv32_rv32.h"
#include "Vrv32_register_file.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class Vrv32__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vrv32* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vrv32___024root                TOP;
    Vrv32_rv32                     TOP__rv32;
    Vrv32_register_file            TOP__rv32__register_file_inst;

    // SCOPE NAMES
    VerilatedScope __Vscope_TOP;
    VerilatedScope __Vscope_rv32;
    VerilatedScope __Vscope_rv32__PC_inst;
    VerilatedScope __Vscope_rv32__PC_inst__i3;
    VerilatedScope __Vscope_rv32__PC_inst__i3__i0;
    VerilatedScope __Vscope_rv32__alu_inst;
    VerilatedScope __Vscope_rv32__clk_count_inst;
    VerilatedScope __Vscope_rv32__control_unit_inst;
    VerilatedScope __Vscope_rv32__i1;
    VerilatedScope __Vscope_rv32__i1__i0;
    VerilatedScope __Vscope_rv32__i2;
    VerilatedScope __Vscope_rv32__i2__i0;
    VerilatedScope __Vscope_rv32__i4;
    VerilatedScope __Vscope_rv32__i4__i0;
    VerilatedScope __Vscope_rv32__imm_extend_inst;
    VerilatedScope __Vscope_rv32__imm_extend_inst__Extend_12_inst;
    VerilatedScope __Vscope_rv32__imm_extend_inst__Extend_20_inst;
    VerilatedScope __Vscope_rv32__imm_extend_inst__RISB_type_inst;
    VerilatedScope __Vscope_rv32__imm_extend_inst__UJ_type_inst;
    VerilatedScope __Vscope_rv32__register_file_inst;

    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;

    // CONSTRUCTORS
    Vrv32__Syms(VerilatedContext* contextp, const char* namep, Vrv32* modelp);
    ~Vrv32__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
