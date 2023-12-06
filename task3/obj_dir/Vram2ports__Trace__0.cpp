// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vram2ports__Syms.h"


void Vram2ports___024root__trace_chg_sub_0(Vram2ports___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vram2ports___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram2ports___024root__trace_chg_top_0\n"); );
    // Init
    Vram2ports___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vram2ports___024root*>(voidSelf);
    Vram2ports__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vram2ports___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vram2ports___024root__trace_chg_sub_0(Vram2ports___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vram2ports__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram2ports___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clk));
    bufp->chgBit(oldp+1,(vlSelf->wr));
    bufp->chgBit(oldp+2,(vlSelf->rd));
    bufp->chgSData(oldp+3,(vlSelf->wr_addr),9);
    bufp->chgSData(oldp+4,(vlSelf->rd_addr),9);
    bufp->chgCData(oldp+5,(vlSelf->mic_signal),8);
    bufp->chgCData(oldp+6,(vlSelf->delayed_signal),8);
}

void Vram2ports___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram2ports___024root__trace_cleanup\n"); );
    // Init
    Vram2ports___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vram2ports___024root*>(voidSelf);
    Vram2ports__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
