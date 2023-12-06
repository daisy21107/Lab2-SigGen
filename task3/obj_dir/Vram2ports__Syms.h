// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VRAM2PORTS__SYMS_H_
#define VERILATED_VRAM2PORTS__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vram2ports.h"

// INCLUDE MODULE CLASSES
#include "Vram2ports___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vram2ports__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vram2ports* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vram2ports___024root           TOP;

    // CONSTRUCTORS
    Vram2ports__Syms(VerilatedContext* contextp, const char* namep, Vram2ports* modelp);
    ~Vram2ports__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
