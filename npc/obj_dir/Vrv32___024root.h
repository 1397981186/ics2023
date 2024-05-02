// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrv32.h for the primary calling header

#ifndef VERILATED_VRV32___024ROOT_H_
#define VERILATED_VRV32___024ROOT_H_  // guard

#include "verilated.h"

class Vrv32__Syms;

class Vrv32___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        CData/*0:0*/ rv32__DOT__clk;
        CData/*0:0*/ rv32__DOT__rst;
        CData/*0:0*/ rv32__DOT__clk1_flag;
        CData/*0:0*/ rv32__DOT__clk2_flag;
        CData/*4:0*/ rv32__DOT__rs1;
        CData/*4:0*/ rv32__DOT__rs2;
        CData/*4:0*/ rv32__DOT__rd;
        CData/*2:0*/ rv32__DOT__funct3;
        CData/*6:0*/ rv32__DOT__funct7;
        CData/*2:0*/ rv32__DOT__type4;
        CData/*0:0*/ rv32__DOT__wen;
        CData/*0:0*/ rv32__DOT__m1;
        CData/*0:0*/ rv32__DOT__m2;
        CData/*0:0*/ rv32__DOT__m3;
        CData/*0:0*/ rv32__DOT__m4;
        CData/*1:0*/ rv32__DOT__aluc;
        CData/*0:0*/ rv32__DOT__clk_count_inst__DOT__clk;
        CData/*0:0*/ rv32__DOT__clk_count_inst__DOT__rst;
        CData/*0:0*/ rv32__DOT__clk_count_inst__DOT__clk1_flag;
        CData/*0:0*/ rv32__DOT__clk_count_inst__DOT__clk2_flag;
        CData/*1:0*/ rv32__DOT__clk_count_inst__DOT__clk_cnt;
        CData/*0:0*/ rv32__DOT__PC_inst__DOT__clk;
        CData/*0:0*/ rv32__DOT__PC_inst__DOT__rst;
        CData/*0:0*/ rv32__DOT__PC_inst__DOT__m3;
        CData/*0:0*/ rv32__DOT__PC_inst__DOT__clk2_flag;
        CData/*0:0*/ rv32__DOT__PC_inst__DOT__i3__DOT__key;
        CData/*0:0*/ rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__key;
        CData/*0:0*/ rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__hit;
        CData/*4:0*/ rv32__DOT__control_unit_inst__DOT__rd_11_7;
        CData/*4:0*/ rv32__DOT__control_unit_inst__DOT__rs1_19_15;
        CData/*4:0*/ rv32__DOT__control_unit_inst__DOT__rs2_24_20;
        CData/*2:0*/ rv32__DOT__control_unit_inst__DOT__fun3_14_12;
        CData/*6:0*/ rv32__DOT__control_unit_inst__DOT__fun7_31_25;
        CData/*2:0*/ rv32__DOT__control_unit_inst__DOT__type1;
        CData/*1:0*/ rv32__DOT__control_unit_inst__DOT__aluc;
        CData/*0:0*/ rv32__DOT__control_unit_inst__DOT__wen;
        CData/*0:0*/ rv32__DOT__control_unit_inst__DOT__m1;
        CData/*0:0*/ rv32__DOT__control_unit_inst__DOT__m2;
        CData/*0:0*/ rv32__DOT__control_unit_inst__DOT__m3;
        CData/*0:0*/ rv32__DOT__control_unit_inst__DOT__m4;
        CData/*6:0*/ rv32__DOT__control_unit_inst__DOT__opcode_6_0;
        CData/*0:0*/ rv32__DOT__register_file_inst__DOT__clk;
        CData/*0:0*/ rv32__DOT__register_file_inst__DOT__rst;
        CData/*0:0*/ rv32__DOT__register_file_inst__DOT__clk1_flag;
        CData/*0:0*/ rv32__DOT__register_file_inst__DOT__wen;
        CData/*4:0*/ rv32__DOT__register_file_inst__DOT__rs1;
        CData/*4:0*/ rv32__DOT__register_file_inst__DOT__rs2;
        CData/*4:0*/ rv32__DOT__register_file_inst__DOT__rd;
        CData/*0:0*/ rv32__DOT__register_file_inst__DOT__r_wen;
        CData/*4:0*/ rv32__DOT__imm_extend_inst__DOT__rs1;
        CData/*4:0*/ rv32__DOT__imm_extend_inst__DOT__rs2;
        CData/*4:0*/ rv32__DOT__imm_extend_inst__DOT__rd;
        CData/*2:0*/ rv32__DOT__imm_extend_inst__DOT__funct3;
        CData/*6:0*/ rv32__DOT__imm_extend_inst__DOT__funct7;
        CData/*2:0*/ rv32__DOT__imm_extend_inst__DOT__type3;
        CData/*4:0*/ rv32__DOT__imm_extend_inst__DOT__RISB_type_inst__DOT__rs2;
        CData/*4:0*/ rv32__DOT__imm_extend_inst__DOT__RISB_type_inst__DOT__rd;
        CData/*6:0*/ rv32__DOT__imm_extend_inst__DOT__RISB_type_inst__DOT__funct7;
        CData/*2:0*/ rv32__DOT__imm_extend_inst__DOT__RISB_type_inst__DOT__type2;
        CData/*4:0*/ rv32__DOT__imm_extend_inst__DOT__UJ_type_inst__DOT__rs1;
        CData/*4:0*/ rv32__DOT__imm_extend_inst__DOT__UJ_type_inst__DOT__rs2;
        CData/*2:0*/ rv32__DOT__imm_extend_inst__DOT__UJ_type_inst__DOT__funct3;
    };
    struct {
        CData/*6:0*/ rv32__DOT__imm_extend_inst__DOT__UJ_type_inst__DOT__funct7;
        CData/*2:0*/ rv32__DOT__imm_extend_inst__DOT__UJ_type_inst__DOT__type2;
        CData/*0:0*/ rv32__DOT__i1__DOT__key;
        CData/*0:0*/ rv32__DOT__i1__DOT__i0__DOT__key;
        CData/*0:0*/ rv32__DOT__i1__DOT__i0__DOT__hit;
        CData/*0:0*/ rv32__DOT__i2__DOT__key;
        CData/*0:0*/ rv32__DOT__i2__DOT__i0__DOT__key;
        CData/*0:0*/ rv32__DOT__i2__DOT__i0__DOT__hit;
        CData/*0:0*/ rv32__DOT__i4__DOT__key;
        CData/*0:0*/ rv32__DOT__i4__DOT__i0__DOT__key;
        CData/*0:0*/ rv32__DOT__i4__DOT__i0__DOT__hit;
        CData/*1:0*/ rv32__DOT__alu_inst__DOT__aluc;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __VactContinue;
        SData/*11:0*/ rv32__DOT__imm_extend_inst__DOT__imm_12;
        SData/*11:0*/ rv32__DOT__imm_extend_inst__DOT__RISB_type_inst__DOT__imm_12;
        SData/*11:0*/ rv32__DOT__imm_extend_inst__DOT__Extend_12_inst__DOT__imm_12;
        VL_IN(inst,31,0);
        VL_OUT(pc,31,0);
        IData/*31:0*/ rv32__DOT__inst;
        IData/*31:0*/ rv32__DOT__pc;
        IData/*31:0*/ rv32__DOT__PCadd4;
        IData/*31:0*/ rv32__DOT__result;
        IData/*31:0*/ rv32__DOT__rin;
        IData/*31:0*/ rv32__DOT__src1;
        IData/*31:0*/ rv32__DOT__src2;
        IData/*31:0*/ rv32__DOT__imm;
        IData/*31:0*/ rv32__DOT__num1;
        IData/*31:0*/ rv32__DOT__num2;
        IData/*31:0*/ rv32__DOT__PC_inst__DOT__result;
        IData/*31:0*/ rv32__DOT__PC_inst__DOT__PCadd4;
        IData/*31:0*/ rv32__DOT__PC_inst__DOT__pc;
        IData/*31:0*/ rv32__DOT__PC_inst__DOT__pc_temp;
        VlWide<3>/*65:0*/ rv32__DOT__PC_inst__DOT____Vcellinp__i3____pinNumber3;
        IData/*31:0*/ rv32__DOT__PC_inst__DOT__i3__DOT__out;
        VlWide<3>/*65:0*/ rv32__DOT__PC_inst__DOT__i3__DOT__lut;
        IData/*31:0*/ rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__out;
        IData/*31:0*/ rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__default_out;
        VlWide<3>/*65:0*/ rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__lut;
        IData/*31:0*/ rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__lut_out;
        IData/*31:0*/ rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__i;
        IData/*31:0*/ rv32__DOT__control_unit_inst__DOT__inst;
        IData/*31:0*/ rv32__DOT__register_file_inst__DOT__rin;
        IData/*31:0*/ rv32__DOT__register_file_inst__DOT__src1;
        IData/*31:0*/ rv32__DOT__register_file_inst__DOT__src2;
        IData/*31:0*/ rv32__DOT__register_file_inst__DOT__i;
        IData/*31:0*/ rv32__DOT__imm_extend_inst__DOT__imm32;
        IData/*19:0*/ rv32__DOT__imm_extend_inst__DOT__imm_20;
        IData/*31:0*/ rv32__DOT__imm_extend_inst__DOT__imm_12_to_32;
        IData/*31:0*/ rv32__DOT__imm_extend_inst__DOT__imm_20_to_32;
        IData/*19:0*/ rv32__DOT__imm_extend_inst__DOT__UJ_type_inst__DOT__imm_20;
        IData/*31:0*/ rv32__DOT__imm_extend_inst__DOT__Extend_12_inst__DOT__imm_12_to_32;
        IData/*19:0*/ rv32__DOT__imm_extend_inst__DOT__Extend_20_inst__DOT__imm_20;
        IData/*31:0*/ rv32__DOT__imm_extend_inst__DOT__Extend_20_inst__DOT__imm_20_to_32;
        IData/*31:0*/ rv32__DOT__i1__DOT__out;
        VlWide<3>/*65:0*/ rv32__DOT__i1__DOT__lut;
        IData/*31:0*/ rv32__DOT__i1__DOT__i0__DOT__out;
        IData/*31:0*/ rv32__DOT__i1__DOT__i0__DOT__default_out;
        VlWide<3>/*65:0*/ rv32__DOT__i1__DOT__i0__DOT__lut;
        IData/*31:0*/ rv32__DOT__i1__DOT__i0__DOT__lut_out;
        IData/*31:0*/ rv32__DOT__i1__DOT__i0__DOT__i;
        IData/*31:0*/ rv32__DOT__i2__DOT__out;
        VlWide<3>/*65:0*/ rv32__DOT__i2__DOT__lut;
        IData/*31:0*/ rv32__DOT__i2__DOT__i0__DOT__out;
    };
    struct {
        IData/*31:0*/ rv32__DOT__i2__DOT__i0__DOT__default_out;
        VlWide<3>/*65:0*/ rv32__DOT__i2__DOT__i0__DOT__lut;
        IData/*31:0*/ rv32__DOT__i2__DOT__i0__DOT__lut_out;
        IData/*31:0*/ rv32__DOT__i2__DOT__i0__DOT__i;
        IData/*31:0*/ rv32__DOT__i4__DOT__out;
        VlWide<3>/*65:0*/ rv32__DOT__i4__DOT__lut;
        IData/*31:0*/ rv32__DOT__i4__DOT__i0__DOT__out;
        IData/*31:0*/ rv32__DOT__i4__DOT__i0__DOT__default_out;
        VlWide<3>/*65:0*/ rv32__DOT__i4__DOT__i0__DOT__lut;
        IData/*31:0*/ rv32__DOT__i4__DOT__i0__DOT__lut_out;
        IData/*31:0*/ rv32__DOT__i4__DOT__i0__DOT__i;
        IData/*31:0*/ rv32__DOT__alu_inst__DOT__num1;
        IData/*31:0*/ rv32__DOT__alu_inst__DOT__num2;
        IData/*31:0*/ rv32__DOT__alu_inst__DOT__result;
        IData/*31:0*/ rv32__DOT__alu_inst__DOT__temp;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<QData/*32:0*/, 2> rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*0:0*/, 2> rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 2> rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__data_list;
        VlUnpacked<IData/*31:0*/, 32> rv32__DOT__register_file_inst__DOT__regs;
        VlUnpacked<QData/*32:0*/, 2> rv32__DOT__i1__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*0:0*/, 2> rv32__DOT__i1__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 2> rv32__DOT__i1__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*32:0*/, 2> rv32__DOT__i2__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*0:0*/, 2> rv32__DOT__i2__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 2> rv32__DOT__i2__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*32:0*/, 2> rv32__DOT__i4__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*0:0*/, 2> rv32__DOT__i4__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 2> rv32__DOT__i4__DOT__i0__DOT__data_list;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vrv32__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ rv32__DOT__PC_inst__DOT__i3__DOT__NR_KEY = 2U;
    static constexpr IData/*31:0*/ rv32__DOT__PC_inst__DOT__i3__DOT__KEY_LEN = 1U;
    static constexpr IData/*31:0*/ rv32__DOT__PC_inst__DOT__i3__DOT__DATA_LEN = 0x00000020U;
    static constexpr IData/*31:0*/ rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__NR_KEY = 2U;
    static constexpr IData/*31:0*/ rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__KEY_LEN = 1U;
    static constexpr IData/*31:0*/ rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__DATA_LEN = 0x00000020U;
    static constexpr IData/*31:0*/ rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__HAS_DEFAULT = 0U;
    static constexpr IData/*31:0*/ rv32__DOT__PC_inst__DOT__i3__DOT__i0__DOT__PAIR_LEN = 0x00000021U;
    static constexpr IData/*31:0*/ rv32__DOT__i1__DOT__NR_KEY = 2U;
    static constexpr IData/*31:0*/ rv32__DOT__i1__DOT__KEY_LEN = 1U;
    static constexpr IData/*31:0*/ rv32__DOT__i1__DOT__DATA_LEN = 0x00000020U;
    static constexpr IData/*31:0*/ rv32__DOT__i1__DOT__i0__DOT__NR_KEY = 2U;
    static constexpr IData/*31:0*/ rv32__DOT__i1__DOT__i0__DOT__KEY_LEN = 1U;
    static constexpr IData/*31:0*/ rv32__DOT__i1__DOT__i0__DOT__DATA_LEN = 0x00000020U;
    static constexpr IData/*31:0*/ rv32__DOT__i1__DOT__i0__DOT__HAS_DEFAULT = 0U;
    static constexpr IData/*31:0*/ rv32__DOT__i1__DOT__i0__DOT__PAIR_LEN = 0x00000021U;
    static constexpr IData/*31:0*/ rv32__DOT__i2__DOT__NR_KEY = 2U;
    static constexpr IData/*31:0*/ rv32__DOT__i2__DOT__KEY_LEN = 1U;
    static constexpr IData/*31:0*/ rv32__DOT__i2__DOT__DATA_LEN = 0x00000020U;
    static constexpr IData/*31:0*/ rv32__DOT__i2__DOT__i0__DOT__NR_KEY = 2U;
    static constexpr IData/*31:0*/ rv32__DOT__i2__DOT__i0__DOT__KEY_LEN = 1U;
    static constexpr IData/*31:0*/ rv32__DOT__i2__DOT__i0__DOT__DATA_LEN = 0x00000020U;
    static constexpr IData/*31:0*/ rv32__DOT__i2__DOT__i0__DOT__HAS_DEFAULT = 0U;
    static constexpr IData/*31:0*/ rv32__DOT__i2__DOT__i0__DOT__PAIR_LEN = 0x00000021U;
    static constexpr IData/*31:0*/ rv32__DOT__i4__DOT__NR_KEY = 2U;
    static constexpr IData/*31:0*/ rv32__DOT__i4__DOT__KEY_LEN = 1U;
    static constexpr IData/*31:0*/ rv32__DOT__i4__DOT__DATA_LEN = 0x00000020U;
    static constexpr IData/*31:0*/ rv32__DOT__i4__DOT__i0__DOT__NR_KEY = 2U;
    static constexpr IData/*31:0*/ rv32__DOT__i4__DOT__i0__DOT__KEY_LEN = 1U;
    static constexpr IData/*31:0*/ rv32__DOT__i4__DOT__i0__DOT__DATA_LEN = 0x00000020U;
    static constexpr IData/*31:0*/ rv32__DOT__i4__DOT__i0__DOT__HAS_DEFAULT = 0U;
    static constexpr IData/*31:0*/ rv32__DOT__i4__DOT__i0__DOT__PAIR_LEN = 0x00000021U;

    // CONSTRUCTORS
    Vrv32___024root(Vrv32__Syms* symsp, const char* v__name);
    ~Vrv32___024root();
    VL_UNCOPYABLE(Vrv32___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
