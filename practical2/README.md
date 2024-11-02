# Practical-2 Exercise Summary

This repository contains two main exercises, focusing on floating-point precision and summation in both C and FORTRAN.

## Exercise 1: Floating Point Precision
Files Required: Conversion.c

### Steps Performed:

* Compilation and Execution: Compiled and ran Conversion.c and Conversion.f90 to observe floating-point and integer representation issues.
* Observation: Noted cases where floating-point and integer representations did not produce the expected results.
* Binary Digits Calculation: Determined the number of binary digits represented by a float/real variable.
* Binary Digit Check: Created an expression in both C and FORTRAN code to check the number of binary digits.
* Logarithmic Calculation: Used log (math library in C) and log intrinsic (FORTRAN) to calculate binary digits.

### Output:
inum=6,  fnum=6.000000, inum in binary=110

## Exercise 2: Summation
Files Required: Sum.c (C)

### Steps Performed:
* Summation Code Completion: Added code to calculate the series: 1+ 1/2 + 1/3 +....+1/1000
* Difference Calculation: Computed and printed the difference between two summation methods (sum1 and sum2).
* Comparison: Compared sum1 and sum2 to check for mathematical differences.
 
### Output:
Sum1 = 7.485478
Sum2 = 7.485472
Difference between the two is 0.000007

