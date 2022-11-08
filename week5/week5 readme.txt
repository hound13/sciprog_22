1. File Fibonacci.c
Displays the Fibonacci series upto n

The formulae for the Fibonacci series are Fn=Fn-1+Fn-2
Function fibo has two arguments *f2(stands for Fn-1) and *f1(stands for Fn-2). After its operation, Fn-1 will change into Fn and Fn-2 will change into Fn-1
In line 16, we print the first two digits at first, and then in line 17~20, we print the Fn in a loop

2. File Hyperbolic.c
Calculates the hyperbolic arc tangent by using two methods

Function artanh1 expresses the hyperbolic arc tangent as a Maclaurin series. As the series is infinite, we use a do-while loop to cumulative the results and stop when the element in the series is smaller than a given precision delta
Function artanh2 calculates the hyperbolic arc tangent by using natural logarithms
In line 27~33, we store the results for both methods in separate arrays and give the differences between the two methods where x ¡Ê [-0.9,0.9] and sampled every 0.01