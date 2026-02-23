# OS Exercise 1 - Processes & Signals

## Overview
This folder contains Operating Systems Exercise 1 solutions, organized by question (`Q1` to `Q7`).
The focus is on core Unix/Linux system programming topics such as processes, signals, and low-level performance/algorithm exercises.

## Folder Structure
- `Q1/` - Question 1 solution files.
- `Q2/` - Question 2 (`q2.cpp`) + local `makefile`.
- `Q3/` - Mandelbrot-related implementation (`mandelbrot.cpp`, `mandelbrot.h`, `q3.cpp`) + local `makefile`.
- `Q4/` - Dijkstra implementation (`dijkstra.cpp`) + local `makefile`.
- `Q5/` - Max subarray task (`max_subarray.cpp`) + reports (`report100.txt`, `report1000.txt`, `report10000.txt`) + local `makefile`.
- `Q6/` - Signal sender/receiver (`signal_sender.cpp`, `signal_receiver.cpp`) + `Makefile`.
- `Q7/` - Phone lookup/add tasks (`findPhone.cpp`, `add2PB.cpp`) + local `makefile`.
- `makefile` - Top-level makefile for this exercise.

## Build and Run
From this directory:

```bash
make
```

If specific targets are defined in the top-level or per-question makefiles, use:

```bash
make <target>
```

For question-specific builds, enter the relevant `Qx` folder and run:

```bash
make
```

## Requirements
- C++ compiler with C++11+ support (or as required by each question's makefile).
- Unix-like environment for signal/process-related parts (recommended: Linux).

## Notes
- Some questions include their own `makefile`; prefer running them inside each question folder.
- Keep generated binaries and temporary files out of version control if needed.
