// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vram2ports.h for the primary calling header

#include "verilated.h"

#include "Vram2ports__Syms.h"
#include "Vram2ports___024root.h"

void Vram2ports___024root___eval_act(Vram2ports___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram2ports__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram2ports___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vram2ports___024root___nba_sequent__TOP__0(Vram2ports___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram2ports__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram2ports___024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*8:0*/ __Vdlyvdim0__ram2ports__DOT__ram_array__v0;
    __Vdlyvdim0__ram2ports__DOT__ram_array__v0 = 0;
    CData/*7:0*/ __Vdlyvval__ram2ports__DOT__ram_array__v0;
    __Vdlyvval__ram2ports__DOT__ram_array__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ram2ports__DOT__ram_array__v0;
    __Vdlyvset__ram2ports__DOT__ram_array__v0 = 0;
    // Body
    __Vdlyvset__ram2ports__DOT__ram_array__v0 = 0U;
    if (vlSelf->wr) {
        __Vdlyvval__ram2ports__DOT__ram_array__v0 = vlSelf->mic_signal;
        __Vdlyvset__ram2ports__DOT__ram_array__v0 = 1U;
        __Vdlyvdim0__ram2ports__DOT__ram_array__v0 
            = vlSelf->wr_addr;
    }
    if (vlSelf->rd) {
        vlSelf->delayed_signal = vlSelf->ram2ports__DOT__ram_array
            [vlSelf->rd_addr];
    }
    if (__Vdlyvset__ram2ports__DOT__ram_array__v0) {
        vlSelf->ram2ports__DOT__ram_array[__Vdlyvdim0__ram2ports__DOT__ram_array__v0] 
            = __Vdlyvval__ram2ports__DOT__ram_array__v0;
    }
}

void Vram2ports___024root___eval_nba(Vram2ports___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram2ports__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram2ports___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vram2ports___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vram2ports___024root___eval_triggers__act(Vram2ports___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vram2ports___024root___dump_triggers__act(Vram2ports___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vram2ports___024root___dump_triggers__nba(Vram2ports___024root* vlSelf);
#endif  // VL_DEBUG

void Vram2ports___024root___eval(Vram2ports___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram2ports__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram2ports___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vram2ports___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vram2ports___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("ram2ports.sv", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vram2ports___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vram2ports___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("ram2ports.sv", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vram2ports___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vram2ports___024root___eval_debug_assertions(Vram2ports___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vram2ports__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram2ports___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->wr & 0xfeU))) {
        Verilated::overWidthError("wr");}
    if (VL_UNLIKELY((vlSelf->rd & 0xfeU))) {
        Verilated::overWidthError("rd");}
    if (VL_UNLIKELY((vlSelf->wr_addr & 0xfe00U))) {
        Verilated::overWidthError("wr_addr");}
    if (VL_UNLIKELY((vlSelf->rd_addr & 0xfe00U))) {
        Verilated::overWidthError("rd_addr");}
}
#endif  // VL_DEBUG
