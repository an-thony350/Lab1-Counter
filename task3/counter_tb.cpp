#include "Vcounter.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "vbuddy.cpp"

int main(int argc, char **argv, char **env) {
    int i;
    int clk;
    int en;
    Verilated::commandArgs(argc, argv);
    // init top verilog instance
    Vcounter* top = new Vcounter;
    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top -> trace(tfp, 99);
    tfp -> open("counter.vcd");

    // init Vbuddy
    if (vbdOpen() != 1) return (-1);
    vbdHeader("Lab 1: Counter");

    // set button to ONE-SHOT
    vbdSetMode(1);

    // initialize simulation inputs
    top -> clk = 1;
    top -> rst = 1;


    //run simulation for many clock cycles
    for (i = 0; i < 1000; i++) {
        // dump variables into VCD file and toggle clock
        for (clk = 0; clk < 2; clk++) {
            tfp -> dump(2 * i + clk);
            top -> clk = !top -> clk;
            top -> eval();
        }

/*
        // send count value to Vbuddy
        vbdHex(4, (int(top -> count) >> 16) & 0xF);
        vbdHex(3, (int(top -> count) >> 8) & 0xF);
        vbdHex(2, (int(top -> count) >> 4) & 0xF);
        vbdHex(1, int(top -> count) & 0xF);
        vbdCycle(i + 1);
        // end of Vbuddy output section

*/
        vbdPlot(int(top->count), 0, 256);
        // button enables counter:
        en = vbdFlag();

        // change input signals
        top -> rst = (i < 2) | (i == 15);  
        if (Verilated::gotFinish()) exit(0);
    }
    // final model cleanup
    vbdClose();
    tfp -> close();
    exit(0);
}