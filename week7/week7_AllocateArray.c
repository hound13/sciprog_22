#include <stdio.h>
#include <stdlib.h>

int *allocatearray(int n){
    int *p;
    p = (int *) malloc(n * sizeof(int));
    return p;
}

void fillwithones(int *p,int n){
    int i;
    for (i=0; i< n; i++){
        p[i]=1;
    }
}

void printarray(int *p, int n){
    int i;
    for (i=0; i< n; i++){
        printf("%d ", p[i]);
    }
}

void freeallocatearray(int *p){
    free(p);
}

int main(){
    int *p,n;
    printf("Enter the size of array: \n");
    scanf("%d",&n);
    p=allocatearray(n);
    fillwithones(p,n);
    printarray(p,n);
    freeallocatearray(p);
    return 0;
    /*
     Enter the size of array:
     5
     1 1 1 1 1
     Enter the size of array:
     10
     1 1 1 1 1 1 1 1 1 1
     */
}