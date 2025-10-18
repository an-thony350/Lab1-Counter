// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcounterpt2.h for the primary calling header

#ifndef VERILATED_VCOUNTERPT2___024ROOT_H_
#define VERILATED_VCOUNTERPT2___024ROOT_H_  // guard

#include "verilated.h"


class Vcounterpt2__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcounterpt2___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(ld,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(v,7,0);
    VL_OUT8(count,7,0);
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ld__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcounterpt2__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcounterpt2___024root(Vcounterpt2__Syms* symsp, const char* v__name);
    ~Vcounterpt2___024root();
    VL_UNCOPYABLE(Vcounterpt2___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
