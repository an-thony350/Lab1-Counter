// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vcounterpt2__pch.h"
#include "Vcounterpt2.h"
#include "Vcounterpt2___024root.h"

// FUNCTIONS
Vcounterpt2__Syms::~Vcounterpt2__Syms()
{
}

Vcounterpt2__Syms::Vcounterpt2__Syms(VerilatedContext* contextp, const char* namep, Vcounterpt2* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(11);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
