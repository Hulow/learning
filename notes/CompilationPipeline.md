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

- Parses the code:
    - Build a Abstract Syntax Tree (AST).
- Check types, variables, function
- Optimize the code
- Generate assembly language into the CPU-specific assembly instructions.
- Write it into a .o file
    - Machine instructions
    - Symbol table for functions and variables
    - Relocation info for linking

### command examples

- g++ -S main.cpp

