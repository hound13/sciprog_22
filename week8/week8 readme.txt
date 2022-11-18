File GCD.c
Calculates the Greatest Common Divisor (GCD) of a pair of integers passed as
arguments. The GCD of two or more non-zero integers is the largest positive integer that divides the numbers without a remainder. For example, the GCD of 8 and 12 is 4.

Function gcd1 is an iterative way to calculate the GCD. It replaces a with b and then makes b=a mod b. When b=0, it returns a.
Function gcd2 is a recursive way to calculate the GCD. When b=0, it returns a. Otherwise, it returns gcd2(b, a mod b).