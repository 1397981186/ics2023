// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vrv32__Syms.h"
#include "Vrv32.h"
#include "Vrv32___024root.h"
#include "Vrv32_rv32.h"
#include "Vrv32_register_file.h"

// FUNCTIONS
Vrv32__Syms::~Vrv32__Syms()
{
}

Vrv32__Syms::Vrv32__Syms(VerilatedContext* contextp, const char* namep, Vrv32* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__rv32{this, Verilated::catName(namep, "rv32")}
    , TOP__rv32__register_file_inst{this, Verilated::catName(namep, "rv32.register_file_inst")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.rv32 = &TOP__rv32;
    TOP__rv32.register_file_inst = &TOP__rv32__register_file_inst;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__rv32.__Vconfigure(true);
    TOP__rv32__register_file_inst.__Vconfigure(true);
    // Setup scopes
    __Vscope_rv32.configure(this, name(), "rv32", "rv32", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_rv32__register_file_inst.configure(this, name(), "rv32.register_file_inst", "register_file_inst", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_rv32.varInsert(__Vfinal,"funct3", &(TOP__rv32.funct3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RD,1 ,2,0);
        __Vscope_rv32.varInsert(__Vfinal,"funct7", &(TOP__rv32.funct7), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RD,1 ,6,0);
        __Vscope_rv32.varInsert(__Vfinal,"rd", &(TOP__rv32.rd), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RD,1 ,4,0);
        __Vscope_rv32.varInsert(__Vfinal,"rs1", &(TOP__rv32.rs1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RD,1 ,4,0);
        __Vscope_rv32.varInsert(__Vfinal,"rs2", &(TOP__rv32.rs2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RD,1 ,4,0);
        __Vscope_rv32.varInsert(__Vfinal,"type4", &(TOP__rv32.type4), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RD,1 ,2,0);
        __Vscope_rv32__register_file_inst.varInsert(__Vfinal,"regs", &(TOP__rv32__register_file_inst.regs), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,31,0);
    }
}
