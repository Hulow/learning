# Compilation Pipeline

## PreProcessor

### Overview

- read the .cpp files from disk.
- look at the imports:
    - copies all data from the location of #include.
    - replaces all macro #define by their value.
    - includes/excludes conditional compilation.
    - Removes comments.
- Keeps everything in memory

### command examples

- g++ -E main.cpp 
- g++ -E main.cpp -o main.i


## Compiler

### Overview

#### main things:
- Parses the code:
- Build a Abstract Syntax Tree (AST).

#### second things:
- Check types, variables, function
- Optimize the code
- Generate assembly language into the CPU-specific assembly instructions.
- Write it into a .o file
    - Machine instructions
    - Symbol table for functions and variables
    - Relocation info for linking

### In g++ -S mode:
    - produces a .s file only (human readable file)

### In g++ -S mode:
    - directly produce a .o file(object code, machine instruction)

### command examples

#### command to just run the assembly file (.s)
- g++ -S main.cpp

#### command to just run the assembly file (.s)
- g++ -c main.cpp

### notes

 generate the graphs to a directory
  - mkdir -p graphs
  - g++-15 -fdump-tree-all-graph -fgraph-dump-dir=graphs -g main.cpp source.cpp


## Compiler + Assembler

- Produce the object code.
- Generate assembly language into the CPU-specific assembly instructions.


## Linker

- Combine all -o files into a single executable files

### overview
- Link all symbols
- Link the memory addresses
- Link static and dynamic librairies
- produces executable file

### static library

- the .a files
- running at compiling process time

### dynamic library
- iostream for instance
- running at run time.

### commands

- g++ main.io -o prog
- ./prog


## how to inspect object files

- nm main.o source.o ....

### legend

T	Symbol is in text section (i.e., a function defined in this file)
U	Symbol is undefined in this file (needs to be resolved by linker)
D	Symbol is in data section (initialized global variable)
B	Symbol is in bss section (uninitialized global variable)
C	Common symbol (uninitialized global)
R	Read-only data

0000000000000000 T _main
0000000000000000 t ltmp0
0000000000000018 s ltmp1

memory address - symbol type - symbol name

nice tool to debug linking problem