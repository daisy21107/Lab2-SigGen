// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vram2ports.h for the primary calling header

#ifndef VERILATED_VRAM2PORTS___024ROOT_H_
#define VERILATED_VRAM2PORTS___024ROOT_H_  // guard

#include "verilated.h"


class Vram2ports__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vram2ports___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(wr,0,0);
    VL_IN8(rd,0,0);
    VL_IN8(mic_signal,7,0);
    VL_OUT8(delayed_signal,7,0);
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    VL_IN16(wr_addr,8,0);
    VL_IN16(rd_addr,8,0);
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 512> ram2ports__DOT__ram_array;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vram2ports__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vram2ports___024root(Vram2ports__Syms* symsp, const char* v__name);
    ~Vram2ports___024root();
    VL_UNCOPYABLE(Vram2ports___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
