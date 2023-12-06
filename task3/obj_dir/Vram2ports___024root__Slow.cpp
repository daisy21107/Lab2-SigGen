// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vram2ports.h for the primary calling header

#include "verilated.h"

#include "Vram2ports__Syms.h"
#include "Vram2ports__Syms.h"
#include "Vram2ports___024root.h"

void Vram2ports___024root___ctor_var_reset(Vram2ports___024root* vlSelf);

Vram2ports___024root::Vram2ports___024root(Vram2ports__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vram2ports___024root___ctor_var_reset(this);
}

void Vram2ports___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vram2ports___024root::~Vram2ports___024root() {
}
