# Push_swap

## About

`push_swap` is a project focused on sorting integers with two stacks and a restricted set of operations. Given a list of integers, the program prints an instruction sequence that sorts the values in ascending order in stack A while leaving stack B empty.

## Features

- Input parsing from separate arguments or a single quoted, space-separated string
- Validation of integer format, integer range, and duplicate values
- Specialized sorting routines for small inputs and binary radix sorting for larger inputs
- Output of stack operations, one instruction per line
- Uses the included `ImprovedLibft` library for supporting C utilities

## Installation

Prerequisites:

- GCC or Clang
- GNU Make

Build from the project directory:

```sh
make
```

Available Make commands:

- `make` or `make all`: builds the `push_swap` executable and included library
- `make clean`: removes object files
- `make fclean`: removes object files, the executable, and the library archive
- `make re`: performs a clean rebuild

## Usage

Pass the integers as separate arguments or as one quoted, space-separated argument:

```sh
./push_swap 4 2 5 1 3
./push_swap "4 2 5 1 3"
```

The program prints operations to standard output. Already sorted input produces no operations. Invalid input, including non-integers, duplicates, or values outside the `int` range, prints `Error` to standard error and exits with a non-zero status.

For example:

```sh
./push_swap 2 1 3
```

The exact valid instruction sequence can vary. If a checker is available in your 42 environment, validate the output by piping it to that checker with the original input.

## Operations

| Operation | Effect |
| --- | --- |
| `sa`, `sb`, `ss` | Swap the top elements of stack A, stack B, or both. |
| `pa`, `pb` | Push the top element from B to A, or from A to B. |
| `ra`, `rb`, `rr` | Rotate A, B, or both upwards. |
| `rra`, `rrb`, `rrr` | Reverse-rotate A, B, or both. |

## Project Goals

- Strengthen understanding of algorithms and data structures
- Practice linked-list and stack manipulation in C
- Validate and handle command-line input safely
- Produce correct sorting sequences while keeping operation counts efficient
- Build on reusable functions from `ImprovedLibft`
