// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv32.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrv32__Syms.h"
#include "Vrv32_rv32.h"

// Parameter definitions for Vrv32_rv32
constexpr IData/*31:0*/ Vrv32_rv32::PC_inst__DOT__i3__DOT__NR_KEY;
constexpr IData/*31:0*/ Vrv32_rv32::PC_inst__DOT__i3__DOT__KEY_LEN;
constexpr IData/*31:0*/ Vrv32_rv32::PC_inst__DOT__i3__DOT__DATA_LEN;
constexpr IData/*31:0*/ Vrv32_rv32::PC_inst__DOT__i3__DOT__i0__DOT__NR_KEY;
constexpr IData/*31:0*/ Vrv32_rv32::PC_inst__DOT__i3__DOT__i0__DOT__KEY_LEN;
constexpr IData/*31:0*/ Vrv32_rv32::PC_inst__DOT__i3__DOT__i0__DOT__DATA_LEN;
constexpr IData/*31:0*/ Vrv32_rv32::PC_inst__DOT__i3__DOT__i0__DOT__HAS_DEFAULT;
constexpr IData/*31:0*/ Vrv32_rv32::PC_inst__DOT__i3__DOT__i0__DOT__PAIR_LEN;
constexpr IData/*31:0*/ Vrv32_rv32::i1__DOT__NR_KEY;
constexpr IData/*31:0*/ Vrv32_rv32::i1__DOT__KEY_LEN;
constexpr IData/*31:0*/ Vrv32_rv32::i1__DOT__DATA_LEN;
constexpr IData/*31:0*/ Vrv32_rv32::i1__DOT__i0__DOT__NR_KEY;
constexpr IData/*31:0*/ Vrv32_rv32::i1__DOT__i0__DOT__KEY_LEN;
constexpr IData/*31:0*/ Vrv32_rv32::i1__DOT__i0__DOT__DATA_LEN;
constexpr IData/*31:0*/ Vrv32_rv32::i1__DOT__i0__DOT__HAS_DEFAULT;
constexpr IData/*31:0*/ Vrv32_rv32::i1__DOT__i0__DOT__PAIR_LEN;
constexpr IData/*31:0*/ Vrv32_rv32::i2__DOT__NR_KEY;
constexpr IData/*31:0*/ Vrv32_rv32::i2__DOT__KEY_LEN;
constexpr IData/*31:0*/ Vrv32_rv32::i2__DOT__DATA_LEN;
constexpr IData/*31:0*/ Vrv32_rv32::i2__DOT__i0__DOT__NR_KEY;
constexpr IData/*31:0*/ Vrv32_rv32::i2__DOT__i0__DOT__KEY_LEN;
constexpr IData/*31:0*/ Vrv32_rv32::i2__DOT__i0__DOT__DATA_LEN;
constexpr IData/*31:0*/ Vrv32_rv32::i2__DOT__i0__DOT__HAS_DEFAULT;
constexpr IData/*31:0*/ Vrv32_rv32::i2__DOT__i0__DOT__PAIR_LEN;
constexpr IData/*31:0*/ Vrv32_rv32::i4__DOT__NR_KEY;
constexpr IData/*31:0*/ Vrv32_rv32::i4__DOT__KEY_LEN;
constexpr IData/*31:0*/ Vrv32_rv32::i4__DOT__DATA_LEN;
constexpr IData/*31:0*/ Vrv32_rv32::i4__DOT__i0__DOT__NR_KEY;
constexpr IData/*31:0*/ Vrv32_rv32::i4__DOT__i0__DOT__KEY_LEN;
constexpr IData/*31:0*/ Vrv32_rv32::i4__DOT__i0__DOT__DATA_LEN;
constexpr IData/*31:0*/ Vrv32_rv32::i4__DOT__i0__DOT__HAS_DEFAULT;
constexpr IData/*31:0*/ Vrv32_rv32::i4__DOT__i0__DOT__PAIR_LEN;


void Vrv32_rv32___ctor_var_reset(Vrv32_rv32* vlSelf);

Vrv32_rv32::Vrv32_rv32(Vrv32__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vrv32_rv32___ctor_var_reset(this);
}

void Vrv32_rv32::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vrv32_rv32::~Vrv32_rv32() {
}
