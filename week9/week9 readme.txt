1. File magic_square.h
Checks whether a square is magic

Function isMagicSquare takes the matrix and checks whether every row, column and main diagonals sum to the same value

Time complexity: total t(n)=4n^2+10n+2~4n^2+12n+2 --> Big-Theta(n^2)

2. File main.c
Reads the matrix in from a file and checks whether the square is magic

Function dimofmatrix gives the dimension of the square
In line 29, we get the dimension of the square from the file
In lines 33~37, we get all the elements of the square from the file and store them in an array
In line 39, we get the answer whether the square is magic

3. matrix.txt
A matrix with integer elements separated by spaces