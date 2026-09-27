# Lab 2: Linux Programming and GCC Compilation

## Module

ST5003CMD Operating Systems, Security, And Networks

## Lab Overview

This lab introduces basic C programming and Linux system concepts. It focuses on the GCC compilation process, user input and output, and how programs return exit status information to the operating system.

## Tasks

- Task 1: GCC Compilation Stages and Hello World
- Task 2: User Input and Output
- Task 3: Program Exit Status

## Source Files

- hello.c
- hello.s
- input.c
- return.c

## Main Concepts

- GCC compilation stages
- Preprocessing and compilation
- Assembly and object files
- Linking
- User input and output
- Program exit status

## Compilation

```bash
gcc -E hello.c -o hello.i
gcc -S hello.i -o hello.s
gcc -c hello.s -o hello.o
gcc hello.o -o hello

gcc input.c -o input

gcc return.c -o return
