// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vrv32__Syms.h"
#include "Vrv32.h"
#include "Vrv32___024root.h"

// FUNCTIONS
Vrv32__Syms::~Vrv32__Syms()
{

    // Tear down scope hierarchy
    __Vhier.remove(0, &__Vscope_rv32);
    __Vhier.remove(&__Vscope_rv32, &__Vscope_rv32__PC_inst);
    __Vhier.remove(&__Vscope_rv32, &__Vscope_rv32__alu_inst);
    __Vhier.remove(&__Vscope_rv32, &__Vscope_rv32__clk_count_inst);
    __Vhier.remove(&__Vscope_rv32, &__Vscope_rv32__control_unit_inst);
    __Vhier.remove(&__Vscope_rv32, &__Vscope_rv32__i1);
    __Vhier.remove(&__Vscope_rv32, &__Vscope_rv32__i2);
    __Vhier.remove(&__Vscope_rv32, &__Vscope_rv32__i4);
    __Vhier.remove(&__Vscope_rv32, &__Vscope_rv32__imm_extend_inst);
    __Vhier.remove(&__Vscope_rv32, &__Vscope_rv32__register_file_inst);
    __Vhier.remove(&__Vscope_rv32__PC_inst, &__Vscope_rv32__PC_inst__i3);
    __Vhier.remove(&__Vscope_rv32__PC_inst__i3, &__Vscope_rv32__PC_inst__i3__i0);
    __Vhier.remove(&__Vscope_rv32__i1, &__Vscope_rv32__i1__i0);
    __Vhier.remove(&__Vscope_rv32__i2, &__Vscope_rv32__i2__i0);
    __Vhier.remove(&__Vscope_rv32__i4, &__Vscope_rv32__i4__i0);
    __Vhier.remove(&__Vscope_rv32__imm_extend_inst, &__Vscope_rv32__imm_extend_inst__Extend_12_inst);
    __Vhier.remove(&__Vscope_rv32__imm_extend_inst, &__Vscope_rv32__imm_extend_inst__Extend_20_inst);
    __Vhier.remove(&__Vscope_rv32__imm_extend_inst, &__Vscope_rv32__imm_extend_inst__RISB_type_inst);
    __Vhier.remove(&__Vscope_rv32__imm_extend_inst, &__Vscope_rv32__imm_extend_inst__UJ_type_inst);

}

Vrv32__Syms::Vrv32__Syms(VerilatedContext* contextp, const char* namep, Vrv32* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_rv32.configure(this, name(), "rv32", "rv32", -12, VerilatedScope::SCOPE_MODULE);
    __Vscope_rv32__PC_inst.configure(this, name(), "rv32.PC_inst", "PC_inst", -12, VerilatedScope::SCOPE_MODULE);
    __Vscope_rv32__PC_inst__i3.configure(this, name(), "rv32.PC_inst.i3", "i3", -12, VerilatedScope::SCOPE_MODULE);
    __Vscope_rv32__PC_inst__i3__i0.configure(this, name(), "rv32.PC_inst.i3.i0", "i0", -12, VerilatedScope::SCOPE_MODULE);
    __Vscope_rv32__alu_inst.configure(this, name(), "rv32.alu_inst", "alu_inst", -12, VerilatedScope::SCOPE_MODULE);
    __Vscope_rv32__clk_count_inst.configure(this, name(), "rv32.clk_count_inst", "clk_count_inst", -12, VerilatedScope::SCOPE_MODULE);
    __Vscope_rv32__control_unit_inst.configure(this, name(), "rv32.control_unit_inst", "control_unit_inst", -12, VerilatedScope::SCOPE_MODULE);
    __Vscope_rv32__i1.configure(this, name(), "rv32.i1", "i1", -12, VerilatedScope::SCOPE_MODULE);
    __Vscope_rv32__i1__i0.configure(this, name(), "rv32.i1.i0", "i0", -12, VerilatedScope::SCOPE_MODULE);
    __Vscope_rv32__i2.configure(this, name(), "rv32.i2", "i2", -12, VerilatedScope::SCOPE_MODULE);
    __Vscope_rv32__i2__i0.configure(this, name(), "rv32.i2.i0", "i0", -12, VerilatedScope::SCOPE_MODULE);
    __Vscope_rv32__i4.configure(this, name(), "rv32.i4", "i4", -12, VerilatedScope::SCOPE_MODULE);
    __Vscope_rv32__i4__i0.configure(this, name(), "rv32.i4.i0", "i0", -12, VerilatedScope::SCOPE_MODULE);
    __Vscope_rv32__imm_extend_inst.configure(this, name(), "rv32.imm_extend_inst", "imm_extend_inst", -12, VerilatedScope::SCOPE_MODULE);
    __Vscope_rv32__imm_extend_inst__Extend_12_inst.configure(this, name(), "rv32.imm_extend_inst.Extend_12_inst", "Extend_12_inst", -12, VerilatedScope::SCOPE_MODULE);
    __Vscope_rv32__imm_extend_inst__Extend_20_inst.configure(this, name(), "rv32.imm_extend_inst.Extend_20_inst", "Extend_20_inst", -12, VerilatedScope::SCOPE_MODULE);
    __Vscope_rv32__imm_extend_inst__RISB_type_inst.configure(this, name(), "rv32.imm_extend_inst.RISB_type_inst", "RISB_type_inst", -12, VerilatedScope::SCOPE_MODULE);
    __Vscope_rv32__imm_extend_inst__UJ_type_inst.configure(this, name(), "rv32.imm_extend_inst.UJ_type_inst", "UJ_type_inst", -12, VerilatedScope::SCOPE_MODULE);
    __Vscope_rv32__register_file_inst.configure(this, name(), "rv32.register_file_inst", "register_file_inst", -12, VerilatedScope::SCOPE_MODULE);

    // Set up scope hierarchy
    __Vhier.add(0, &__Vscope_rv32);
    __Vhier.add(&__Vscope_rv32, &__Vscope_rv32__PC_inst);
    __Vhier.add(&__Vscope_rv32, &__Vscope_rv32__alu_inst);
    __Vhier.add(&__Vscope_rv32, &__Vscope_rv32__clk_count_inst);
    __Vhier.add(&__Vscope_rv32, &__Vscope_rv32__control_unit_inst);
    __Vhier.add(&__Vscope_rv32, &__Vscope_rv32__i1);
    __Vhier.add(&__Vscope_rv32, &__Vscope_rv32__i2);
    __Vhier.add(&__Vscope_rv32, &__Vscope_rv32__i4);
    __Vhier.add(&__Vscope_rv32, &__Vscope_rv32__imm_extend_inst);
    __Vhier.add(&__Vscope_rv32, &__Vscope_rv32__register_file_inst);
    __Vhier.add(&__Vscope_rv32__PC_inst, &__Vscope_rv32__PC_inst__i3);
    __Vhier.add(&__Vscope_rv32__PC_inst__i3, &__Vscope_rv32__PC_inst__i3__i0);
    __Vhier.add(&__Vscope_rv32__i1, &__Vscope_rv32__i1__i0);
    __Vhier.add(&__Vscope_rv32__i2, &__Vscope_rv32__i2__i0);
    __Vhier.add(&__Vscope_rv32__i4, &__Vscope_rv32__i4__i0);
    __Vhier.add(&__Vscope_rv32__imm_extend_inst, &__Vscope_rv32__imm_extend_inst__Extend_12_inst);
    __Vhier.add(&__Vscope_rv32__imm_extend_inst, &__Vscope_rv32__imm_extend_inst__Extend_20_inst);
    __Vhier.add(&__Vscope_rv32__imm_extend_inst, &__Vscope_rv32__imm_extend_inst__RISB_type_inst);
    __Vhier.add(&__Vscope_rv32__imm_extend_inst, &__Vscope_rv32__imm_extend_inst__UJ_type_inst);

    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_TOP.varInsert(__Vfinal,"clk", &(TOP.clk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"inst", &(TOP.inst), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"pc", &(TOP.pc), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"rst", &(TOP.rst), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_rv32.varInsert(__Vfinal,"PCadd4", &(TOP.rv32__DOT__PCadd4), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32.varInsert(__Vfinal,"aluc", &(TOP.rv32__DOT__aluc), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_rv32.varInsert(__Vfinal,"clk", &(TOP.rv32__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_rv32.varInsert(__Vfinal,"clk1_flag", &(TOP.rv32__DOT__clk1_flag), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_rv32.varInsert(__Vfinal,"clk2_flag", &(TOP.rv32__DOT__clk2_flag), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_rv32.varInsert(__Vfinal,"funct3", &(TOP.rv32__DOT__funct3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_rv32.varInsert(__Vfinal,"funct7", &(TOP.rv32__DOT__funct7), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,6,0);
        __Vscope_rv32.varInsert(__Vfinal,"imm", &(TOP.rv32__DOT__imm), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32.varInsert(__Vfinal,"inst", &(TOP.rv32__DOT__inst), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32.varInsert(__Vfinal,"m1", &(TOP.rv32__DOT__m1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_rv32.varInsert(__Vfinal,"m2", &(TOP.rv32__DOT__m2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_rv32.varInsert(__Vfinal,"m3", &(TOP.rv32__DOT__m3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_rv32.varInsert(__Vfinal,"m4", &(TOP.rv32__DOT__m4), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_rv32.varInsert(__Vfinal,"num1", &(TOP.rv32__DOT__num1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32.varInsert(__Vfinal,"num2", &(TOP.rv32__DOT__num2), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32.varInsert(__Vfinal,"pc", &(TOP.rv32__DOT__pc), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32.varInsert(__Vfinal,"rd", &(TOP.rv32__DOT__rd), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_rv32.varInsert(__Vfinal,"result", &(TOP.rv32__DOT__result), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32.varInsert(__Vfinal,"rin", &(TOP.rv32__DOT__rin), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32.varInsert(__Vfinal,"rs1", &(TOP.rv32__DOT__rs1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_rv32.varInsert(__Vfinal,"rs2", &(TOP.rv32__DOT__rs2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_rv32.varInsert(__Vfinal,"rst", &(TOP.rv32__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_rv32.varInsert(__Vfinal,"src1", &(TOP.rv32__DOT__src1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32.varInsert(__Vfinal,"src2", &(TOP.rv32__DOT__src2), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32.varInsert(__Vfinal,"type4", &(TOP.rv32__DOT__type4), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_rv32.varInsert(__Vfinal,"wen", &(TOP.rv32__DOT__wen), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_rv32__PC_inst.varInsert(__Vfinal,"PCadd4", &(TOP.rv32__DOT__PC_inst__DOT__PCadd4), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__PC_inst.varInsert(__Vfinal,"clk", &(TOP.rv32__DOT__PC_inst__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_rv32__PC_inst.varInsert(__Vfinal,"clk2_flag", &(TOP.rv32__DOT__PC_inst__DOT__clk2_flag), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_rv32__PC_inst.varInsert(__Vfinal,"m3", &(TOP.rv32__DOT__PC_inst__DOT__m3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_rv32__PC_inst.varInsert(__Vfinal,"pc", &(TOP.rv32__DOT__PC_inst__DOT__pc), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__PC_inst.varInsert(__Vfinal,"pc_temp", &(TOP.rv32__DOT__PC_inst__DOT__pc_temp), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__PC_inst.varInsert(__Vfinal,"result", &(TOP.rv32__DOT__PC_inst__DOT__result), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__PC_inst.varInsert(__Vfinal,"rst", &(TOP.rv32__DOT__PC_inst__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_rv32__PC_inst__i3.varInsert(__Vfinal,"DATA_LEN", const_cast<void*>(static_cast<const void*>(&(TOP.rv32__DOT__PC_inst__DOT__i3__DOT__DATA_LEN))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__PC_inst__i3.varInsert(__Vfinal,"KEY_LEN", const_cast<void*>(static_cast<const void*>(&(TOP.rv32__DOT__PC_inst__DOT__i3__DOT__KEY_LEN))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__PC_inst__i3.varInsert(__Vfinal,"NR_KEY", const_cast<void*>(static_cast<const void*>(&(TOP.rv32__DOT__PC_inst__DOT__i3__DOT__NR_KEY))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__PC_inst__i3.varInsert(__Vfinal,"key", &(TOP.rv32__DOT__PC_inst__DOT__i3__DOT__key), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,0,0);
        __Vscope_rv32__PC_inst__i3.varInsert(__Vfinal,"lut", &(TOP.rv32__DOT__PC_inst__DOT__i3__DOT__lut), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,65,0);
        __Vscope_rv32__PC_inst__i3.varInsert(__Vfinal,"out", &(TOP.rv32__DOT__PC_inst__DOT__i3__DOT__out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__PC_inst__i3__i0.varInsert(__Vfinal,"DATA_LEN", const_cast<void*>(static_cast<const void*>(&(TOP.rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__DATA_LEN))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__PC_inst__i3__i0.varInsert(__Vfinal,"HAS_DEFAULT", const_cast<void*>(static_cast<const void*>(&(TOP.rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__HAS_DEFAULT))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__PC_inst__i3__i0.varInsert(__Vfinal,"KEY_LEN", const_cast<void*>(static_cast<const void*>(&(TOP.rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__KEY_LEN))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__PC_inst__i3__i0.varInsert(__Vfinal,"NR_KEY", const_cast<void*>(static_cast<const void*>(&(TOP.rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__NR_KEY))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__PC_inst__i3__i0.varInsert(__Vfinal,"PAIR_LEN", const_cast<void*>(static_cast<const void*>(&(TOP.rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__PAIR_LEN))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__PC_inst__i3__i0.varInsert(__Vfinal,"data_list", &(TOP.rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__data_list), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,1,0);
        __Vscope_rv32__PC_inst__i3__i0.varInsert(__Vfinal,"default_out", &(TOP.rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__default_out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__PC_inst__i3__i0.varInsert(__Vfinal,"hit", &(TOP.rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__hit), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_rv32__PC_inst__i3__i0.varInsert(__Vfinal,"i", &(TOP.rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__PC_inst__i3__i0.varInsert(__Vfinal,"key", &(TOP.rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__key), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,0,0);
        __Vscope_rv32__PC_inst__i3__i0.varInsert(__Vfinal,"key_list", &(TOP.rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__key_list), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,2 ,0,0 ,1,0);
        __Vscope_rv32__PC_inst__i3__i0.varInsert(__Vfinal,"lut", &(TOP.rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__lut), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,65,0);
        __Vscope_rv32__PC_inst__i3__i0.varInsert(__Vfinal,"lut_out", &(TOP.rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__lut_out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__PC_inst__i3__i0.varInsert(__Vfinal,"out", &(TOP.rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__PC_inst__i3__i0.varInsert(__Vfinal,"pair_list", &(TOP.rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__pair_list), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,2 ,32,0 ,1,0);
        __Vscope_rv32__alu_inst.varInsert(__Vfinal,"aluc", &(TOP.rv32__DOT__alu_inst__DOT__aluc), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_rv32__alu_inst.varInsert(__Vfinal,"num1", &(TOP.rv32__DOT__alu_inst__DOT__num1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__alu_inst.varInsert(__Vfinal,"num2", &(TOP.rv32__DOT__alu_inst__DOT__num2), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__alu_inst.varInsert(__Vfinal,"result", &(TOP.rv32__DOT__alu_inst__DOT__result), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__alu_inst.varInsert(__Vfinal,"temp", &(TOP.rv32__DOT__alu_inst__DOT__temp), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__clk_count_inst.varInsert(__Vfinal,"clk", &(TOP.rv32__DOT__clk_count_inst__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_rv32__clk_count_inst.varInsert(__Vfinal,"clk1_flag", &(TOP.rv32__DOT__clk_count_inst__DOT__clk1_flag), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_rv32__clk_count_inst.varInsert(__Vfinal,"clk2_flag", &(TOP.rv32__DOT__clk_count_inst__DOT__clk2_flag), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_rv32__clk_count_inst.varInsert(__Vfinal,"clk_cnt", &(TOP.rv32__DOT__clk_count_inst__DOT__clk_cnt), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_rv32__clk_count_inst.varInsert(__Vfinal,"rst", &(TOP.rv32__DOT__clk_count_inst__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_rv32__control_unit_inst.varInsert(__Vfinal,"aluc", &(TOP.rv32__DOT__control_unit_inst__DOT__aluc), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_rv32__control_unit_inst.varInsert(__Vfinal,"fun3_14_12", &(TOP.rv32__DOT__control_unit_inst__DOT__fun3_14_12), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_rv32__control_unit_inst.varInsert(__Vfinal,"fun7_31_25", &(TOP.rv32__DOT__control_unit_inst__DOT__fun7_31_25), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,6,0);
        __Vscope_rv32__control_unit_inst.varInsert(__Vfinal,"inst", &(TOP.rv32__DOT__control_unit_inst__DOT__inst), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__control_unit_inst.varInsert(__Vfinal,"m1", &(TOP.rv32__DOT__control_unit_inst__DOT__m1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_rv32__control_unit_inst.varInsert(__Vfinal,"m2", &(TOP.rv32__DOT__control_unit_inst__DOT__m2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_rv32__control_unit_inst.varInsert(__Vfinal,"m3", &(TOP.rv32__DOT__control_unit_inst__DOT__m3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_rv32__control_unit_inst.varInsert(__Vfinal,"m4", &(TOP.rv32__DOT__control_unit_inst__DOT__m4), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_rv32__control_unit_inst.varInsert(__Vfinal,"opcode_6_0", &(TOP.rv32__DOT__control_unit_inst__DOT__opcode_6_0), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,6,0);
        __Vscope_rv32__control_unit_inst.varInsert(__Vfinal,"rd_11_7", &(TOP.rv32__DOT__control_unit_inst__DOT__rd_11_7), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_rv32__control_unit_inst.varInsert(__Vfinal,"rs1_19_15", &(TOP.rv32__DOT__control_unit_inst__DOT__rs1_19_15), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_rv32__control_unit_inst.varInsert(__Vfinal,"rs2_24_20", &(TOP.rv32__DOT__control_unit_inst__DOT__rs2_24_20), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_rv32__control_unit_inst.varInsert(__Vfinal,"type1", &(TOP.rv32__DOT__control_unit_inst__DOT__type1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_rv32__control_unit_inst.varInsert(__Vfinal,"wen", &(TOP.rv32__DOT__control_unit_inst__DOT__wen), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_rv32__i1.varInsert(__Vfinal,"DATA_LEN", const_cast<void*>(static_cast<const void*>(&(TOP.rv32__DOT__i1__DOT__DATA_LEN))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__i1.varInsert(__Vfinal,"KEY_LEN", const_cast<void*>(static_cast<const void*>(&(TOP.rv32__DOT__i1__DOT__KEY_LEN))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__i1.varInsert(__Vfinal,"NR_KEY", const_cast<void*>(static_cast<const void*>(&(TOP.rv32__DOT__i1__DOT__NR_KEY))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__i1.varInsert(__Vfinal,"key", &(TOP.rv32__DOT__i1__DOT__key), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,0,0);
        __Vscope_rv32__i1.varInsert(__Vfinal,"lut", &(TOP.rv32__DOT__i1__DOT__lut), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,65,0);
        __Vscope_rv32__i1.varInsert(__Vfinal,"out", &(TOP.rv32__DOT__i1__DOT__out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__i1__i0.varInsert(__Vfinal,"DATA_LEN", const_cast<void*>(static_cast<const void*>(&(TOP.rv32__DOT__i1__DOT__i0__DOT__DATA_LEN))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__i1__i0.varInsert(__Vfinal,"HAS_DEFAULT", const_cast<void*>(static_cast<const void*>(&(TOP.rv32__DOT__i1__DOT__i0__DOT__HAS_DEFAULT))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__i1__i0.varInsert(__Vfinal,"KEY_LEN", const_cast<void*>(static_cast<const void*>(&(TOP.rv32__DOT__i1__DOT__i0__DOT__KEY_LEN))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__i1__i0.varInsert(__Vfinal,"NR_KEY", const_cast<void*>(static_cast<const void*>(&(TOP.rv32__DOT__i1__DOT__i0__DOT__NR_KEY))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__i1__i0.varInsert(__Vfinal,"PAIR_LEN", const_cast<void*>(static_cast<const void*>(&(TOP.rv32__DOT__i1__DOT__i0__DOT__PAIR_LEN))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__i1__i0.varInsert(__Vfinal,"data_list", &(TOP.rv32__DOT__i1__DOT__i0__DOT__data_list), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,1,0);
        __Vscope_rv32__i1__i0.varInsert(__Vfinal,"default_out", &(TOP.rv32__DOT__i1__DOT__i0__DOT__default_out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__i1__i0.varInsert(__Vfinal,"hit", &(TOP.rv32__DOT__i1__DOT__i0__DOT__hit), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_rv32__i1__i0.varInsert(__Vfinal,"i", &(TOP.rv32__DOT__i1__DOT__i0__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__i1__i0.varInsert(__Vfinal,"key", &(TOP.rv32__DOT__i1__DOT__i0__DOT__key), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,0,0);
        __Vscope_rv32__i1__i0.varInsert(__Vfinal,"key_list", &(TOP.rv32__DOT__i1__DOT__i0__DOT__key_list), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,2 ,0,0 ,1,0);
        __Vscope_rv32__i1__i0.varInsert(__Vfinal,"lut", &(TOP.rv32__DOT__i1__DOT__i0__DOT__lut), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,65,0);
        __Vscope_rv32__i1__i0.varInsert(__Vfinal,"lut_out", &(TOP.rv32__DOT__i1__DOT__i0__DOT__lut_out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__i1__i0.varInsert(__Vfinal,"out", &(TOP.rv32__DOT__i1__DOT__i0__DOT__out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__i1__i0.varInsert(__Vfinal,"pair_list", &(TOP.rv32__DOT__i1__DOT__i0__DOT__pair_list), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,2 ,32,0 ,1,0);
        __Vscope_rv32__i2.varInsert(__Vfinal,"DATA_LEN", const_cast<void*>(static_cast<const void*>(&(TOP.rv32__DOT__i2__DOT__DATA_LEN))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__i2.varInsert(__Vfinal,"KEY_LEN", const_cast<void*>(static_cast<const void*>(&(TOP.rv32__DOT__i2__DOT__KEY_LEN))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__i2.varInsert(__Vfinal,"NR_KEY", const_cast<void*>(static_cast<const void*>(&(TOP.rv32__DOT__i2__DOT__NR_KEY))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__i2.varInsert(__Vfinal,"key", &(TOP.rv32__DOT__i2__DOT__key), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,0,0);
        __Vscope_rv32__i2.varInsert(__Vfinal,"lut", &(TOP.rv32__DOT__i2__DOT__lut), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,65,0);
        __Vscope_rv32__i2.varInsert(__Vfinal,"out", &(TOP.rv32__DOT__i2__DOT__out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__i2__i0.varInsert(__Vfinal,"DATA_LEN", const_cast<void*>(static_cast<const void*>(&(TOP.rv32__DOT__i2__DOT__i0__DOT__DATA_LEN))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__i2__i0.varInsert(__Vfinal,"HAS_DEFAULT", const_cast<void*>(static_cast<const void*>(&(TOP.rv32__DOT__i2__DOT__i0__DOT__HAS_DEFAULT))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__i2__i0.varInsert(__Vfinal,"KEY_LEN", const_cast<void*>(static_cast<const void*>(&(TOP.rv32__DOT__i2__DOT__i0__DOT__KEY_LEN))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__i2__i0.varInsert(__Vfinal,"NR_KEY", const_cast<void*>(static_cast<const void*>(&(TOP.rv32__DOT__i2__DOT__i0__DOT__NR_KEY))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__i2__i0.varInsert(__Vfinal,"PAIR_LEN", const_cast<void*>(static_cast<const void*>(&(TOP.rv32__DOT__i2__DOT__i0__DOT__PAIR_LEN))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__i2__i0.varInsert(__Vfinal,"data_list", &(TOP.rv32__DOT__i2__DOT__i0__DOT__data_list), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,1,0);
        __Vscope_rv32__i2__i0.varInsert(__Vfinal,"default_out", &(TOP.rv32__DOT__i2__DOT__i0__DOT__default_out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__i2__i0.varInsert(__Vfinal,"hit", &(TOP.rv32__DOT__i2__DOT__i0__DOT__hit), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_rv32__i2__i0.varInsert(__Vfinal,"i", &(TOP.rv32__DOT__i2__DOT__i0__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__i2__i0.varInsert(__Vfinal,"key", &(TOP.rv32__DOT__i2__DOT__i0__DOT__key), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,0,0);
        __Vscope_rv32__i2__i0.varInsert(__Vfinal,"key_list", &(TOP.rv32__DOT__i2__DOT__i0__DOT__key_list), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,2 ,0,0 ,1,0);
        __Vscope_rv32__i2__i0.varInsert(__Vfinal,"lut", &(TOP.rv32__DOT__i2__DOT__i0__DOT__lut), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,65,0);
        __Vscope_rv32__i2__i0.varInsert(__Vfinal,"lut_out", &(TOP.rv32__DOT__i2__DOT__i0__DOT__lut_out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__i2__i0.varInsert(__Vfinal,"out", &(TOP.rv32__DOT__i2__DOT__i0__DOT__out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__i2__i0.varInsert(__Vfinal,"pair_list", &(TOP.rv32__DOT__i2__DOT__i0__DOT__pair_list), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,2 ,32,0 ,1,0);
        __Vscope_rv32__i4.varInsert(__Vfinal,"DATA_LEN", const_cast<void*>(static_cast<const void*>(&(TOP.rv32__DOT__i4__DOT__DATA_LEN))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__i4.varInsert(__Vfinal,"KEY_LEN", const_cast<void*>(static_cast<const void*>(&(TOP.rv32__DOT__i4__DOT__KEY_LEN))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__i4.varInsert(__Vfinal,"NR_KEY", const_cast<void*>(static_cast<const void*>(&(TOP.rv32__DOT__i4__DOT__NR_KEY))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__i4.varInsert(__Vfinal,"key", &(TOP.rv32__DOT__i4__DOT__key), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,0,0);
        __Vscope_rv32__i4.varInsert(__Vfinal,"lut", &(TOP.rv32__DOT__i4__DOT__lut), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,65,0);
        __Vscope_rv32__i4.varInsert(__Vfinal,"out", &(TOP.rv32__DOT__i4__DOT__out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__i4__i0.varInsert(__Vfinal,"DATA_LEN", const_cast<void*>(static_cast<const void*>(&(TOP.rv32__DOT__i4__DOT__i0__DOT__DATA_LEN))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__i4__i0.varInsert(__Vfinal,"HAS_DEFAULT", const_cast<void*>(static_cast<const void*>(&(TOP.rv32__DOT__i4__DOT__i0__DOT__HAS_DEFAULT))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__i4__i0.varInsert(__Vfinal,"KEY_LEN", const_cast<void*>(static_cast<const void*>(&(TOP.rv32__DOT__i4__DOT__i0__DOT__KEY_LEN))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__i4__i0.varInsert(__Vfinal,"NR_KEY", const_cast<void*>(static_cast<const void*>(&(TOP.rv32__DOT__i4__DOT__i0__DOT__NR_KEY))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__i4__i0.varInsert(__Vfinal,"PAIR_LEN", const_cast<void*>(static_cast<const void*>(&(TOP.rv32__DOT__i4__DOT__i0__DOT__PAIR_LEN))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__i4__i0.varInsert(__Vfinal,"data_list", &(TOP.rv32__DOT__i4__DOT__i0__DOT__data_list), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,1,0);
        __Vscope_rv32__i4__i0.varInsert(__Vfinal,"default_out", &(TOP.rv32__DOT__i4__DOT__i0__DOT__default_out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__i4__i0.varInsert(__Vfinal,"hit", &(TOP.rv32__DOT__i4__DOT__i0__DOT__hit), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_rv32__i4__i0.varInsert(__Vfinal,"i", &(TOP.rv32__DOT__i4__DOT__i0__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__i4__i0.varInsert(__Vfinal,"key", &(TOP.rv32__DOT__i4__DOT__i0__DOT__key), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,0,0);
        __Vscope_rv32__i4__i0.varInsert(__Vfinal,"key_list", &(TOP.rv32__DOT__i4__DOT__i0__DOT__key_list), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,2 ,0,0 ,1,0);
        __Vscope_rv32__i4__i0.varInsert(__Vfinal,"lut", &(TOP.rv32__DOT__i4__DOT__i0__DOT__lut), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,65,0);
        __Vscope_rv32__i4__i0.varInsert(__Vfinal,"lut_out", &(TOP.rv32__DOT__i4__DOT__i0__DOT__lut_out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__i4__i0.varInsert(__Vfinal,"out", &(TOP.rv32__DOT__i4__DOT__i0__DOT__out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__i4__i0.varInsert(__Vfinal,"pair_list", &(TOP.rv32__DOT__i4__DOT__i0__DOT__pair_list), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,2 ,32,0 ,1,0);
        __Vscope_rv32__imm_extend_inst.varInsert(__Vfinal,"funct3", &(TOP.rv32__DOT__imm_extend_inst__DOT__funct3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_rv32__imm_extend_inst.varInsert(__Vfinal,"funct7", &(TOP.rv32__DOT__imm_extend_inst__DOT__funct7), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,6,0);
        __Vscope_rv32__imm_extend_inst.varInsert(__Vfinal,"imm32", &(TOP.rv32__DOT__imm_extend_inst__DOT__imm32), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__imm_extend_inst.varInsert(__Vfinal,"imm_12", &(TOP.rv32__DOT__imm_extend_inst__DOT__imm_12), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,11,0);
        __Vscope_rv32__imm_extend_inst.varInsert(__Vfinal,"imm_12_to_32", &(TOP.rv32__DOT__imm_extend_inst__DOT__imm_12_to_32), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__imm_extend_inst.varInsert(__Vfinal,"imm_20", &(TOP.rv32__DOT__imm_extend_inst__DOT__imm_20), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,19,0);
        __Vscope_rv32__imm_extend_inst.varInsert(__Vfinal,"imm_20_to_32", &(TOP.rv32__DOT__imm_extend_inst__DOT__imm_20_to_32), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__imm_extend_inst.varInsert(__Vfinal,"rd", &(TOP.rv32__DOT__imm_extend_inst__DOT__rd), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_rv32__imm_extend_inst.varInsert(__Vfinal,"rs1", &(TOP.rv32__DOT__imm_extend_inst__DOT__rs1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_rv32__imm_extend_inst.varInsert(__Vfinal,"rs2", &(TOP.rv32__DOT__imm_extend_inst__DOT__rs2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_rv32__imm_extend_inst.varInsert(__Vfinal,"type3", &(TOP.rv32__DOT__imm_extend_inst__DOT__type3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_rv32__imm_extend_inst__Extend_12_inst.varInsert(__Vfinal,"imm_12", &(TOP.rv32__DOT__imm_extend_inst__DOT__Extend_12_inst__DOT__imm_12), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,11,0);
        __Vscope_rv32__imm_extend_inst__Extend_12_inst.varInsert(__Vfinal,"imm_12_to_32", &(TOP.rv32__DOT__imm_extend_inst__DOT__Extend_12_inst__DOT__imm_12_to_32), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__imm_extend_inst__Extend_20_inst.varInsert(__Vfinal,"imm_20", &(TOP.rv32__DOT__imm_extend_inst__DOT__Extend_20_inst__DOT__imm_20), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,19,0);
        __Vscope_rv32__imm_extend_inst__Extend_20_inst.varInsert(__Vfinal,"imm_20_to_32", &(TOP.rv32__DOT__imm_extend_inst__DOT__Extend_20_inst__DOT__imm_20_to_32), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__imm_extend_inst__RISB_type_inst.varInsert(__Vfinal,"funct7", &(TOP.rv32__DOT__imm_extend_inst__DOT__RISB_type_inst__DOT__funct7), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,6,0);
        __Vscope_rv32__imm_extend_inst__RISB_type_inst.varInsert(__Vfinal,"imm_12", &(TOP.rv32__DOT__imm_extend_inst__DOT__RISB_type_inst__DOT__imm_12), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,11,0);
        __Vscope_rv32__imm_extend_inst__RISB_type_inst.varInsert(__Vfinal,"rd", &(TOP.rv32__DOT__imm_extend_inst__DOT__RISB_type_inst__DOT__rd), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_rv32__imm_extend_inst__RISB_type_inst.varInsert(__Vfinal,"rs2", &(TOP.rv32__DOT__imm_extend_inst__DOT__RISB_type_inst__DOT__rs2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_rv32__imm_extend_inst__RISB_type_inst.varInsert(__Vfinal,"type2", &(TOP.rv32__DOT__imm_extend_inst__DOT__RISB_type_inst__DOT__type2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_rv32__imm_extend_inst__UJ_type_inst.varInsert(__Vfinal,"funct3", &(TOP.rv32__DOT__imm_extend_inst__DOT__UJ_type_inst__DOT__funct3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_rv32__imm_extend_inst__UJ_type_inst.varInsert(__Vfinal,"funct7", &(TOP.rv32__DOT__imm_extend_inst__DOT__UJ_type_inst__DOT__funct7), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,6,0);
        __Vscope_rv32__imm_extend_inst__UJ_type_inst.varInsert(__Vfinal,"imm_20", &(TOP.rv32__DOT__imm_extend_inst__DOT__UJ_type_inst__DOT__imm_20), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,19,0);
        __Vscope_rv32__imm_extend_inst__UJ_type_inst.varInsert(__Vfinal,"rs1", &(TOP.rv32__DOT__imm_extend_inst__DOT__UJ_type_inst__DOT__rs1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_rv32__imm_extend_inst__UJ_type_inst.varInsert(__Vfinal,"rs2", &(TOP.rv32__DOT__imm_extend_inst__DOT__UJ_type_inst__DOT__rs2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_rv32__imm_extend_inst__UJ_type_inst.varInsert(__Vfinal,"type2", &(TOP.rv32__DOT__imm_extend_inst__DOT__UJ_type_inst__DOT__type2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_rv32__register_file_inst.varInsert(__Vfinal,"clk", &(TOP.rv32__DOT__register_file_inst__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_rv32__register_file_inst.varInsert(__Vfinal,"clk1_flag", &(TOP.rv32__DOT__register_file_inst__DOT__clk1_flag), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_rv32__register_file_inst.varInsert(__Vfinal,"i", &(TOP.rv32__DOT__register_file_inst__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__register_file_inst.varInsert(__Vfinal,"r_wen", &(TOP.rv32__DOT__register_file_inst__DOT__r_wen), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_rv32__register_file_inst.varInsert(__Vfinal,"rd", &(TOP.rv32__DOT__register_file_inst__DOT__rd), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_rv32__register_file_inst.varInsert(__Vfinal,"regs", &(TOP.rv32__DOT__register_file_inst__DOT__regs), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,31,0);
        __Vscope_rv32__register_file_inst.varInsert(__Vfinal,"rin", &(TOP.rv32__DOT__register_file_inst__DOT__rin), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__register_file_inst.varInsert(__Vfinal,"rs1", &(TOP.rv32__DOT__register_file_inst__DOT__rs1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_rv32__register_file_inst.varInsert(__Vfinal,"rs2", &(TOP.rv32__DOT__register_file_inst__DOT__rs2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_rv32__register_file_inst.varInsert(__Vfinal,"rst", &(TOP.rv32__DOT__register_file_inst__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_rv32__register_file_inst.varInsert(__Vfinal,"src1", &(TOP.rv32__DOT__register_file_inst__DOT__src1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__register_file_inst.varInsert(__Vfinal,"src2", &(TOP.rv32__DOT__register_file_inst__DOT__src2), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_rv32__register_file_inst.varInsert(__Vfinal,"wen", &(TOP.rv32__DOT__register_file_inst__DOT__wen), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
    }
}
