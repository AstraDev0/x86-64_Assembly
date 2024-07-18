# MinilibC Project

## Overview
MinilibC is a dynamic ELF library written in x86-64 Assembly language. The purpose of this project is to provide implementations of several standard C library functions, allowing them to be dynamically linked and used in place of their standard counterparts.

## Project Details
- **Binary Name:** libasm.so
- **Language:** x86-64 Assembly
- **Compilation:** Managed via Makefile, including rules for cleaning and rebuilding.

## Implemented Functions
The MinilibC project aims to implement the following functions:
- strlen
- strchr
- strrchr
- memset
- memcpy
- strcmp
- memmove
- strncmp
- strcasecmp
- strstr
- strpbrk
- strcspn

Each function adheres strictly to the behavior specifications outlined in their respective man pages.

## Usage
To use MinilibC functions, you can preload the library using `LD_PRELOAD` environment variable. Example:
```bash
LD_PRELOAD=./libasm.so ./your_program
```

## Folder Structure
Your project directory should include:
- Source files: All assembly source files (*.S) required for compilation.
- Makefile: To compile, clean, and manage the project.

## Compilation
To compile the project, run:
```bash
make
```

To clean generated files, run:
```bash
make clean
```

To completely remove all generated files, including object files, run:
```bash
make fclean
```
