// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vram2ports.h for the primary calling header

#include "verilated.h"

#include "Vram2ports__Syms.h"
#include "Vram2ports___024root.h"

VL_ATTR_COLD void Vram2ports___024root___eval_static(Vram2ports___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram2ports__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram2ports___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vram2ports___024root___eval_initial(Vram2ports___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram2ports__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram2ports___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_ATTR_COLD void Vram2ports___024root___eval_final(Vram2ports___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram2ports__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram2ports___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vram2ports___024root___eval_settle(Vram2ports___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram2ports__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram2ports___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vram2ports___024root___dump_triggers__act(Vram2ports___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram2ports__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram2ports___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vram2ports___024root___dump_triggers__nba(Vram2ports___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram2ports__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram2ports___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vram2ports___024root___ctor_var_reset(Vram2ports___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram2ports__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram2ports___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->wr = VL_RAND_RESET_I(1);
    vlSelf->rd = VL_RAND_RESET_I(1);
    vlSelf->wr_addr = VL_RAND_RESET_I(9);
    vlSelf->rd_addr = VL_RAND_RESET_I(9);
    vlSelf->mic_signal = VL_RAND_RESET_I(8);
    vlSelf->delayed_signal = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->ram2ports__DOT__ram_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}
