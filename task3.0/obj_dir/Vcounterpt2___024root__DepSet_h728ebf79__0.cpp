// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcounterpt2.h for the primary calling header

#include "Vcounterpt2__pch.h"
#include "Vcounterpt2___024root.h"

void Vcounterpt2___024root___eval_act(Vcounterpt2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounterpt2___024root___eval_act\n"); );
    Vcounterpt2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vcounterpt2___024root___nba_sequent__TOP__0(Vcounterpt2___024root* vlSelf);

void Vcounterpt2___024root___eval_nba(Vcounterpt2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounterpt2___024root___eval_nba\n"); );
    Vcounterpt2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcounterpt2___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vcounterpt2___024root___nba_sequent__TOP__0(Vcounterpt2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounterpt2___024root___nba_sequent__TOP__0\n"); );
    Vcounterpt2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.count = ((IData)(vlSelfRef.rst) ? 0U : 
                       (0xffU & ((IData)(vlSelfRef.ld)
                                  ? ((IData)(1U) + 
                                     ((IData)(vlSelfRef.count) 
                                      + (IData)(vlSelfRef.v)))
                                  : (IData)(vlSelfRef.count))));
}

void Vcounterpt2___024root___eval_triggers__act(Vcounterpt2___024root* vlSelf);

bool Vcounterpt2___024root___eval_phase__act(Vcounterpt2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounterpt2___024root___eval_phase__act\n"); );
    Vcounterpt2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vcounterpt2___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vcounterpt2___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vcounterpt2___024root___eval_phase__nba(Vcounterpt2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounterpt2___024root___eval_phase__nba\n"); );
    Vcounterpt2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vcounterpt2___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcounterpt2___024root___dump_triggers__nba(Vcounterpt2___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcounterpt2___024root___dump_triggers__act(Vcounterpt2___024root* vlSelf);
#endif  // VL_DEBUG

void Vcounterpt2___024root___eval(Vcounterpt2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounterpt2___024root___eval\n"); );
    Vcounterpt2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vcounterpt2___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("counterpt2.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vcounterpt2___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("counterpt2.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vcounterpt2___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vcounterpt2___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vcounterpt2___024root___eval_debug_assertions(Vcounterpt2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounterpt2___024root___eval_debug_assertions\n"); );
    Vcounterpt2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY(((vlSelfRef.ld & 0xfeU)))) {
        Verilated::overWidthError("ld");}
}
#endif  // VL_DEBUG
