# **ImprovedLibft**

**About**

ImprovedLibft is an enhanced version of the first project in the 42 curriculum. This project involves recreating essential C standard library functions from scratch, providing a deeper understanding of low-level programming concepts and memory management.

Features

- Standard C Library Functions: Custom implementations of string manipulation, memory management, and character checking functions with the ft_ prefix
- Additional Utility Functions: Extended functions beyond the standard library for enhanced functionality
- Optimized Performance: Improved algorithms and efficient implementations

## Installation

Prerequisites:
- GCC or Clang compiler
- Make

Compilation Steps:
1. Clone the repository

2. Available Make Commands For Compilation:
   - make / make all: Compiles the library
   - make clean: Removes object files
   - make fclean: Removes object files and the compiled library
   - make re: Performs a clean recompilation
   - make bonus: Compiles the library including bonus functions

## Usage

Including in Your Project:
1. Compile the library to generate improvedlibft.a
2. Include the header file in your source code:

   #include "libft.h"

3. Compile your project with the library:

   gcc your_program.c improvedlibft.a

## Function Categories

Part 1: Libc Functions
Standard C library functions recreated from scratch, including:
Memory functions, string functions, character check functions, conversion functions.

Part 2: Additional Functions
Extended functions for common operations:
Memory allocation functions, string manipulation functions, conversion functions, output functions.

Bonus: Linked List Functions
Operations for managing linked lists:

## Project Goals

- Build a solid foundation in C programming
- Master memory management and pointer manipulation
- Understand how standard library functions work internally
- Develop debugging and problem-solving skills
- Create a reusable library for future 42 projects
