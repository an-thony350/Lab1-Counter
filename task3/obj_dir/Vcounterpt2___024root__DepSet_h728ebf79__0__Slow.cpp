// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcounterpt2.h for the primary calling header

#include "Vcounterpt2__pch.h"
#include "Vcounterpt2___024root.h"

VL_ATTR_COLD void Vcounterpt2___024root___eval_static(Vcounterpt2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounterpt2___024root___eval_static\n"); );
    Vcounterpt2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__ld__0 = vlSelfRef.ld;
}

VL_ATTR_COLD void Vcounterpt2___024root___eval_initial(Vcounterpt2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounterpt2___024root___eval_initial\n"); );
    Vcounterpt2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vcounterpt2___024root___eval_final(Vcounterpt2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounterpt2___024root___eval_final\n"); );
    Vcounterpt2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vcounterpt2___024root___eval_settle(Vcounterpt2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounterpt2___024root___eval_settle\n"); );
    Vcounterpt2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcounterpt2___024root___dump_triggers__act(Vcounterpt2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounterpt2___024root___dump_triggers__act\n"); );
    Vcounterpt2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge ld)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcounterpt2___024root___dump_triggers__nba(Vcounterpt2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounterpt2___024root___dump_triggers__nba\n"); );
    Vcounterpt2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge ld)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcounterpt2___024root___ctor_var_reset(Vcounterpt2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounterpt2___024root___ctor_var_reset\n"); );
    Vcounterpt2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->ld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8704649721107697142ull);
    vlSelf->v = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 260667111241363922ull);
    vlSelf->count = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10730142128712957955ull);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9526919608049418986ull);
    vlSelf->__Vtrigprevexpr___TOP__ld__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12907287637166993720ull);
}
