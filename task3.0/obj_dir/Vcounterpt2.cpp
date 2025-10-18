// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcounterpt2__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vcounterpt2::Vcounterpt2(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcounterpt2__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , ld{vlSymsp->TOP.ld}
    , rst{vlSymsp->TOP.rst}
    , v{vlSymsp->TOP.v}
    , count{vlSymsp->TOP.count}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vcounterpt2::Vcounterpt2(const char* _vcname__)
    : Vcounterpt2(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcounterpt2::~Vcounterpt2() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcounterpt2___024root___eval_debug_assertions(Vcounterpt2___024root* vlSelf);
#endif  // VL_DEBUG
void Vcounterpt2___024root___eval_static(Vcounterpt2___024root* vlSelf);
void Vcounterpt2___024root___eval_initial(Vcounterpt2___024root* vlSelf);
void Vcounterpt2___024root___eval_settle(Vcounterpt2___024root* vlSelf);
void Vcounterpt2___024root___eval(Vcounterpt2___024root* vlSelf);

void Vcounterpt2::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcounterpt2::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcounterpt2___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vcounterpt2___024root___eval_static(&(vlSymsp->TOP));
        Vcounterpt2___024root___eval_initial(&(vlSymsp->TOP));
        Vcounterpt2___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vcounterpt2___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vcounterpt2::eventsPending() { return false; }

uint64_t Vcounterpt2::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vcounterpt2::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vcounterpt2___024root___eval_final(Vcounterpt2___024root* vlSelf);

VL_ATTR_COLD void Vcounterpt2::final() {
    Vcounterpt2___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcounterpt2::hierName() const { return vlSymsp->name(); }
const char* Vcounterpt2::modelName() const { return "Vcounterpt2"; }
unsigned Vcounterpt2::threads() const { return 1; }
void Vcounterpt2::prepareClone() const { contextp()->prepareClone(); }
void Vcounterpt2::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vcounterpt2::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vcounterpt2___024root__trace_decl_types(VerilatedVcd* tracep);

void Vcounterpt2___024root__trace_init_top(Vcounterpt2___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vcounterpt2___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcounterpt2___024root*>(voidSelf);
    Vcounterpt2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vcounterpt2___024root__trace_decl_types(tracep);
    Vcounterpt2___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcounterpt2___024root__trace_register(Vcounterpt2___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vcounterpt2::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vcounterpt2::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vcounterpt2___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
