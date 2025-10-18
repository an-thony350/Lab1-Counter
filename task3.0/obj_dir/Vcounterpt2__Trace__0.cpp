// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcounterpt2__Syms.h"


void Vcounterpt2___024root__trace_chg_0_sub_0(Vcounterpt2___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcounterpt2___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounterpt2___024root__trace_chg_0\n"); );
    // Init
    Vcounterpt2___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcounterpt2___024root*>(voidSelf);
    Vcounterpt2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcounterpt2___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vcounterpt2___024root__trace_chg_0_sub_0(Vcounterpt2___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounterpt2___024root__trace_chg_0_sub_0\n"); );
    Vcounterpt2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.clk));
    bufp->chgBit(oldp+1,(vlSelfRef.rst));
    bufp->chgBit(oldp+2,(vlSelfRef.ld));
    bufp->chgCData(oldp+3,(vlSelfRef.v),8);
    bufp->chgCData(oldp+4,(vlSelfRef.count),8);
}

void Vcounterpt2___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounterpt2___024root__trace_cleanup\n"); );
    // Init
    Vcounterpt2___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcounterpt2___024root*>(voidSelf);
    Vcounterpt2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
