# Integer Overflow Bug in C
This repository demonstrates a common and dangerous bug in C programming: integer overflow.  The `bug.c` file contains code that is vulnerable to integer overflow. The `bugSolution.c` file provides a solution to mitigate the risk.

## Problem Description
The `bug.c` file shows a simple example of assigning an integer value to a variable that might cause an overflow.  The behavior of an integer overflow is undefined and can lead to unexpected program behavior, crashes, or security vulnerabilities.

## Solution
The `bugSolution.c` file introduces checks to prevent overflow.  Always validate user inputs and consider using wider data types if necessary to handle larger values.
