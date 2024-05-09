// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv32.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrv32__Syms.h"
#include "Vrv32_register_file.h"

void Vrv32_register_file___ctor_var_reset(Vrv32_register_file* vlSelf);

Vrv32_register_file::Vrv32_register_file(Vrv32__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vrv32_register_file___ctor_var_reset(this);
}

void Vrv32_register_file::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vrv32_register_file::~Vrv32_register_file() {
}
