Lab 1 — Counter

Coursework by Peter Cheung

Authors:
- Josh Hirschkorn
- Anthony Bartlett

Repository layout
- task1/: Counter implementation and basic testbench
- task2/: Extended tests and Vbuddy integration
- task3/: Additional exercises
- task3.1/: Supplemental files
- task4/: Top-level integration and bin-to-BCD converter

Quick start

This repository contains SystemVerilog exercises for a lab course. To build and run a simulation locally using Verilator (common workflow used in the labs):

1. Install Verilator and a C++ toolchain (on Ubuntu):

```bash
sudo apt update
sudo apt install verilator build-essential git -y
```

2. Run the provided helper script in the task directory you want to simulate. For example, to run the task1 simulation:

```bash
cd task1
./doit.sh
```

Notes
- Some tasks require `vbuddy.cpp` or other helper code; ensure those files are present in the task directory.
- The `doit.sh` helper scripts invoke Verilator to generate C++ from the SystemVerilog sources, compile the resulting C++ testbench, and run the simulation producing a `vcd` trace.

License
- Use for coursework and learning. Attribution: Peter Cheung's lab materials.
