File MatrixMultiplication.c
Multiplies two matrices

In line 7~13, we create a matrix A with a[i][j]=i+j
In line 15~21, we create a matrix B with b[i][j]=i-j
In line 22~26, we create a matrix C with c[i][j]=0
In line 28~36, we cumulative each element in matrix C by the formula
c[i][j]=a[i][0]b[0][j]+a[i][1]b[1][j]+...+a[i][p-1]b[p-1][j], and then we get the multiplication of A and B