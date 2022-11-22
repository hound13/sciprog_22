#include <stdio.h>
#include <string.h>
#include "magic_square.h"

#define LINE_MAX 1024

int dimofmatrix(FILE *fp){
    char buf[LINE_MAX] = {0};
    int dim=0;          // dimension of matrix
    int line_len = 0;   // length of each line
    fgets(buf, LINE_MAX, fp); // read the first line
    line_len = strlen(buf);
    for (int i = 0; i < line_len; i++){
        if (buf[i]==' ') // if the character read is a space, dim plus 1
		//in the file matrix.txt, only one space is allowed between adjacent elements in each row
            dim++;
        }
    return dim+1;
}

int main() {
    int dim;
    FILE* fpread;
    fpread = fopen("D:\\matrix.txt", "r");
    if (fpread == NULL)
    {
        printf("file is error.");
        return -1;
    }
    dim=dimofmatrix(fpread); // get the dimension of matrix
    fclose(fpread);
    fpread = fopen("D:\\matrix.txt", "r");
    int a[dim][dim]; // store the matrix in an array
    for (int i = 0; i < dim; i++){
        for (int j = 0; j < dim; j++){
            fscanf(fpread, "%d", &a[i][j]);
        }
    }
    fclose(fpread);
    isMagicSquare((int **)a,dim); // check to see if it is magic
    return 0;
}