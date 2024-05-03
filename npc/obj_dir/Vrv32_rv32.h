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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        CData/*0:0*/ clk1_flag;
        CData/*0:0*/ clk2_flag;
        CData/*4:0*/ rs1;
        CData/*4:0*/ rs2;
        CData/*4:0*/ rd;
        CData/*2:0*/ funct3;
        CData/*6:0*/ funct7;
        CData/*2:0*/ type4;
        CData/*0:0*/ wen;
        CData/*0:0*/ m1;
        CData/*0:0*/ m2;
        CData/*0:0*/ m3;
        CData/*0:0*/ m4;
        CData/*1:0*/ aluc;
        CData/*0:0*/ clk_count_inst__DOT__clk;
        CData/*0:0*/ clk_count_inst__DOT__rst;
        CData/*0:0*/ clk_count_inst__DOT__clk1_flag;
        CData/*0:0*/ clk_count_inst__DOT__clk2_flag;
        CData/*1:0*/ clk_count_inst__DOT__clk_cnt;
        CData/*0:0*/ PC_inst__DOT__clk;
        CData/*0:0*/ PC_inst__DOT__rst;
        CData/*0:0*/ PC_inst__DOT__m3;
        CData/*0:0*/ PC_inst__DOT__clk2_flag;
        CData/*0:0*/ PC_inst__DOT__i3__DOT__key;
        CData/*0:0*/ PC_inst__DOT__i3__DOT__i0__DOT__key;
        CData/*0:0*/ PC_inst__DOT__i3__DOT__i0__DOT__hit;
        CData/*4:0*/ control_unit_inst__DOT__rd_11_7;
        CData/*4:0*/ control_unit_inst__DOT__rs1_19_15;
        CData/*4:0*/ control_unit_inst__DOT__rs2_24_20;
        CData/*2:0*/ control_unit_inst__DOT__fun3_14_12;
        CData/*6:0*/ control_unit_inst__DOT__fun7_31_25;
        CData/*2:0*/ control_unit_inst__DOT__type1;
        CData/*1:0*/ control_unit_inst__DOT__aluc;
        CData/*0:0*/ control_unit_inst__DOT__wen;
        CData/*0:0*/ control_unit_inst__DOT__m1;
        CData/*0:0*/ control_unit_inst__DOT__m2;
        CData/*0:0*/ control_unit_inst__DOT__m3;
        CData/*0:0*/ control_unit_inst__DOT__m4;
        CData/*6:0*/ control_unit_inst__DOT__opcode_6_0;
        CData/*4:0*/ imm_extend_inst__DOT__rs1;
        CData/*4:0*/ imm_extend_inst__DOT__rs2;
        CData/*4:0*/ imm_extend_inst__DOT__rd;
        CData/*2:0*/ imm_extend_inst__DOT__funct3;
        CData/*6:0*/ imm_extend_inst__DOT__funct7;
        CData/*2:0*/ imm_extend_inst__DOT__type3;
        CData/*4:0*/ imm_extend_inst__DOT__RISB_type_inst__DOT__rs2;
        CData/*4:0*/ imm_extend_inst__DOT__RISB_type_inst__DOT__rd;
        CData/*6:0*/ imm_extend_inst__DOT__RISB_type_inst__DOT__funct7;
        CData/*2:0*/ imm_extend_inst__DOT__RISB_type_inst__DOT__type2;
        CData/*4:0*/ imm_extend_inst__DOT__UJ_type_inst__DOT__rs1;
        CData/*4:0*/ imm_extend_inst__DOT__UJ_type_inst__DOT__rs2;
        CData/*2:0*/ imm_extend_inst__DOT__UJ_type_inst__DOT__funct3;
        CData/*6:0*/ imm_extend_inst__DOT__UJ_type_inst__DOT__funct7;
        CData/*2:0*/ imm_extend_inst__DOT__UJ_type_inst__DOT__type2;
        CData/*0:0*/ i1__DOT__key;
        CData/*0:0*/ i1__DOT__i0__DOT__key;
        CData/*0:0*/ i1__DOT__i0__DOT__hit;
        CData/*0:0*/ i2__DOT__key;
        CData/*0:0*/ i2__DOT__i0__DOT__key;
        CData/*0:0*/ i2__DOT__i0__DOT__hit;
        CData/*0:0*/ i4__DOT__key;
        CData/*0:0*/ i4__DOT__i0__DOT__key;
    };
    struct {
        CData/*0:0*/ i4__DOT__i0__DOT__hit;
        CData/*1:0*/ alu_inst__DOT__aluc;
        SData/*11:0*/ imm_extend_inst__DOT__imm_12;
        SData/*11:0*/ imm_extend_inst__DOT__RISB_type_inst__DOT__imm_12;
        SData/*11:0*/ imm_extend_inst__DOT__Extend_12_inst__DOT__imm_12;
        VL_IN(inst,31,0);
        VL_OUT(pc,31,0);
        IData/*31:0*/ PCadd4;
        IData/*31:0*/ result;
        IData/*31:0*/ rin;
        IData/*31:0*/ src1;
        IData/*31:0*/ src2;
        IData/*31:0*/ imm;
        IData/*31:0*/ num1;
        IData/*31:0*/ num2;
        IData/*31:0*/ PC_inst__DOT__result;
        IData/*31:0*/ PC_inst__DOT__PCadd4;
        IData/*31:0*/ PC_inst__DOT__pc;
        IData/*31:0*/ PC_inst__DOT__pc_temp;
        IData/*31:0*/ PC_inst__DOT__i3__DOT__out;
        VlWide<3>/*65:0*/ PC_inst__DOT__i3__DOT__lut;
        IData/*31:0*/ PC_inst__DOT__i3__DOT__i0__DOT__out;
        IData/*31:0*/ PC_inst__DOT__i3__DOT__i0__DOT__default_out;
        VlWide<3>/*65:0*/ PC_inst__DOT__i3__DOT__i0__DOT__lut;
        IData/*31:0*/ PC_inst__DOT__i3__DOT__i0__DOT__lut_out;
        IData/*31:0*/ PC_inst__DOT__i3__DOT__i0__DOT__i;
        IData/*31:0*/ control_unit_inst__DOT__inst;
        IData/*31:0*/ imm_extend_inst__DOT__imm32;
        IData/*19:0*/ imm_extend_inst__DOT__imm_20;
        IData/*31:0*/ imm_extend_inst__DOT__imm_12_to_32;
        IData/*31:0*/ imm_extend_inst__DOT__imm_20_to_32;
        IData/*19:0*/ imm_extend_inst__DOT__UJ_type_inst__DOT__imm_20;
        IData/*31:0*/ imm_extend_inst__DOT__Extend_12_inst__DOT__imm_12_to_32;
        IData/*19:0*/ imm_extend_inst__DOT__Extend_20_inst__DOT__imm_20;
        IData/*31:0*/ imm_extend_inst__DOT__Extend_20_inst__DOT__imm_20_to_32;
        IData/*31:0*/ i1__DOT__out;
        VlWide<3>/*65:0*/ i1__DOT__lut;
        IData/*31:0*/ i1__DOT__i0__DOT__out;
        IData/*31:0*/ i1__DOT__i0__DOT__default_out;
        VlWide<3>/*65:0*/ i1__DOT__i0__DOT__lut;
        IData/*31:0*/ i1__DOT__i0__DOT__lut_out;
        IData/*31:0*/ i1__DOT__i0__DOT__i;
        IData/*31:0*/ i2__DOT__out;
        VlWide<3>/*65:0*/ i2__DOT__lut;
        IData/*31:0*/ i2__DOT__i0__DOT__out;
        IData/*31:0*/ i2__DOT__i0__DOT__default_out;
        VlWide<3>/*65:0*/ i2__DOT__i0__DOT__lut;
        IData/*31:0*/ i2__DOT__i0__DOT__lut_out;
        IData/*31:0*/ i2__DOT__i0__DOT__i;
        IData/*31:0*/ i4__DOT__out;
        VlWide<3>/*65:0*/ i4__DOT__lut;
        IData/*31:0*/ i4__DOT__i0__DOT__out;
        IData/*31:0*/ i4__DOT__i0__DOT__default_out;
        VlWide<3>/*65:0*/ i4__DOT__i0__DOT__lut;
        IData/*31:0*/ i4__DOT__i0__DOT__lut_out;
        IData/*31:0*/ i4__DOT__i0__DOT__i;
        IData/*31:0*/ alu_inst__DOT__num1;
        IData/*31:0*/ alu_inst__DOT__num2;
        IData/*31:0*/ alu_inst__DOT__result;
        IData/*31:0*/ alu_inst__DOT__temp;
        VlUnpacked<QData/*32:0*/, 2> PC_inst__DOT__i3__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*0:0*/, 2> PC_inst__DOT__i3__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 2> PC_inst__DOT__i3__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*32:0*/, 2> i1__DOT__i0__DOT__pair_list;
    };
    struct {
        VlUnpacked<CData/*0:0*/, 2> i1__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 2> i1__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*32:0*/, 2> i2__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*0:0*/, 2> i2__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 2> i2__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*32:0*/, 2> i4__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*0:0*/, 2> i4__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 2> i4__DOT__i0__DOT__data_list;
    };

    // INTERNAL VARIABLES
    Vrv32__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ PC_inst__DOT__i3__DOT__NR_KEY = 2U;
    static constexpr IData/*31:0*/ PC_inst__DOT__i3__DOT__KEY_LEN = 1U;
    static constexpr IData/*31:0*/ PC_inst__DOT__i3__DOT__DATA_LEN = 0x00000020U;
    static constexpr IData/*31:0*/ PC_inst__DOT__i3__DOT__i0__DOT__NR_KEY = 2U;
    static constexpr IData/*31:0*/ PC_inst__DOT__i3__DOT__i0__DOT__KEY_LEN = 1U;
    static constexpr IData/*31:0*/ PC_inst__DOT__i3__DOT__i0__DOT__DATA_LEN = 0x00000020U;
    static constexpr IData/*31:0*/ PC_inst__DOT__i3__DOT__i0__DOT__HAS_DEFAULT = 0U;
    static constexpr IData/*31:0*/ PC_inst__DOT__i3__DOT__i0__DOT__PAIR_LEN = 0x00000021U;
    static constexpr IData/*31:0*/ i1__DOT__NR_KEY = 2U;
    static constexpr IData/*31:0*/ i1__DOT__KEY_LEN = 1U;
    static constexpr IData/*31:0*/ i1__DOT__DATA_LEN = 0x00000020U;
    static constexpr IData/*31:0*/ i1__DOT__i0__DOT__NR_KEY = 2U;
    static constexpr IData/*31:0*/ i1__DOT__i0__DOT__KEY_LEN = 1U;
    static constexpr IData/*31:0*/ i1__DOT__i0__DOT__DATA_LEN = 0x00000020U;
    static constexpr IData/*31:0*/ i1__DOT__i0__DOT__HAS_DEFAULT = 0U;
    static constexpr IData/*31:0*/ i1__DOT__i0__DOT__PAIR_LEN = 0x00000021U;
    static constexpr IData/*31:0*/ i2__DOT__NR_KEY = 2U;
    static constexpr IData/*31:0*/ i2__DOT__KEY_LEN = 1U;
    static constexpr IData/*31:0*/ i2__DOT__DATA_LEN = 0x00000020U;
    static constexpr IData/*31:0*/ i2__DOT__i0__DOT__NR_KEY = 2U;
    static constexpr IData/*31:0*/ i2__DOT__i0__DOT__KEY_LEN = 1U;
    static constexpr IData/*31:0*/ i2__DOT__i0__DOT__DATA_LEN = 0x00000020U;
    static constexpr IData/*31:0*/ i2__DOT__i0__DOT__HAS_DEFAULT = 0U;
    static constexpr IData/*31:0*/ i2__DOT__i0__DOT__PAIR_LEN = 0x00000021U;
    static constexpr IData/*31:0*/ i4__DOT__NR_KEY = 2U;
    static constexpr IData/*31:0*/ i4__DOT__KEY_LEN = 1U;
    static constexpr IData/*31:0*/ i4__DOT__DATA_LEN = 0x00000020U;
    static constexpr IData/*31:0*/ i4__DOT__i0__DOT__NR_KEY = 2U;
    static constexpr IData/*31:0*/ i4__DOT__i0__DOT__KEY_LEN = 1U;
    static constexpr IData/*31:0*/ i4__DOT__i0__DOT__DATA_LEN = 0x00000020U;
    static constexpr IData/*31:0*/ i4__DOT__i0__DOT__HAS_DEFAULT = 0U;
    static constexpr IData/*31:0*/ i4__DOT__i0__DOT__PAIR_LEN = 0x00000021U;

    // CONSTRUCTORS
    Vrv32_rv32(Vrv32__Syms* symsp, const char* v__name);
    ~Vrv32_rv32();
    VL_UNCOPYABLE(Vrv32_rv32);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
