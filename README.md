# Overview

This is a repository for a program that serves to benchmark the differing times taken by different operations on multidimensional arrays versus multilevel arrays. It contains benchmarks ran with differing amounts of elements, amounts of function calls, and kinds of data types.

## Code Folder

This folder contains two programs. __*benchmark2d.c*__ performs
operations on user given csv data put into a multidimensional array. __*benchmark2l.c*__ performs
operations on user given csv data put into a multilevel array.
__*testdatagen.c*__ generates csv data using user input.

## Analysis Folder

This folder contains a multitude of folders comprised of benchmarks generated using gprof. The folders are denoted by the amount of elements in the arrays for the runs, as well as the amount of function calls.
