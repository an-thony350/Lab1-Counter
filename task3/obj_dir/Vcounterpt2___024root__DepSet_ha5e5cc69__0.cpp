// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcounterpt2.h for the primary calling header

#include "Vcounterpt2__pch.h"
#include "Vcounterpt2__Syms.h"
#include "Vcounterpt2___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcounterpt2___024root___dump_triggers__act(Vcounterpt2___024root* vlSelf);
#endif  // VL_DEBUG

void Vcounterpt2___024root___eval_triggers__act(Vcounterpt2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounterpt2___024root___eval_triggers__act\n"); );
    Vcounterpt2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((IData)(vlSelfRef.ld) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ld__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__ld__0 = vlSelfRef.ld;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcounterpt2___024root___dump_triggers__act(vlSelf);
    }
#endif
}
