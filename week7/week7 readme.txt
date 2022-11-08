File AllocateArray.c
Creates an integer array by dynamic memory allocation

Function allocatearray takes an integer as an argument and returns a pointer to an allocated memory block of that many integers
Function fillwithones takes a pointer to an array of integers and an integer as two arguments and fills every cell of the array with a one
Function printarray() that takes a pointer to an array of integers and an integer as two arguments and prints its elements on the screen
Function freeallocatearray frees the allocated memory

File estimate_e.c
Estimates the value of e by setting x = 1. First inputs the order of the polynomial needed, dynamically allocate an array of type double which stores the term for each power of x separately. Compares the estimate against the true value. Evaluates the estimates from 1st order to 15th order polynomials

Has similar design with AllocateArray.c. However, the array type is double. And we use function factorial to calculate the factorial of n and use function sumarray to cumulative the estimate of e
Finally, we find that the estimate gets closer and closer to e before the order of the polynomial=12 and gets bigger and bigger than e after the order of the polynomial=13