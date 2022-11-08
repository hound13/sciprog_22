#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double *allocatearray(int n){
    double *p;
    p = (double *) malloc(n * sizeof(double));
    return p;
}

int factorial(int n){
    if(n==0)
        return 1;
    return n*factorial(n-1);
}

void fillwithterms(double *p,int n){
    int i;
    p[0]=1;
    for (i=1; i<= n; i++){
        p[i]=1.0/ factorial(i);
    }
}
double sumarray(double *p, int n){
    int i;
    double sum=0;
    for (i=0; i<= n; i++){
        sum+=p[i];
    }
    return sum;
}

void freeallocatearray(double *p){
    free(p);
}
int main(){
    int n;
    double *p,e=2.718281828459045;
    for (int i = 1; i <=15 ; ++i) {
        printf("inputs the order of the polynomial: \n");
        scanf("%d",&n);
        p=allocatearray(n);
        fillwithterms(p,n);
        printf("estimate=%.15f diff=%.15f\n",sumarray(p,n),fabs(sumarray(p,n)-e));
        freeallocatearray(p);
    }
    return 0;
    //the estimate gets worse when the order of the polynomial=13
    //the estimate gets closer and closer to e before the order of the polynomial=12
    //the estimate gets bigger and bigger than e after the order of the polynomial=13
    /*
inputs the order of the polynomial:
1
estimate=2.000000000000000 diff=0.718281828459045
inputs the order of the polynomial:
2
estimate=2.500000000000000 diff=0.218281828459045
inputs the order of the polynomial:
3
estimate=2.666666666666667 diff=0.051615161792379
inputs the order of the polynomial:
4
estimate=2.708333333333333 diff=0.009948495125712
inputs the order of the polynomial:
5
estimate=2.716666666666666 diff=0.001615161792379
inputs the order of the polynomial:
6
estimate=2.718055555555555 diff=0.000226272903490
inputs the order of the polynomial:
7
estimate=2.718253968253968 diff=0.000027860205077
inputs the order of the polynomial:
8
estimate=2.718278769841270 diff=0.000003058617775
inputs the order of the polynomial:
9
estimate=2.718281525573192 diff=0.000000302885853
inputs the order of the polynomial:
10
estimate=2.718281801146385 diff=0.000000027312661
inputs the order of the polynomial:
11
estimate=2.718281826198493 diff=0.000000002260552
inputs the order of the polynomial:
12
estimate=2.718281828286169 diff=0.000000000172876
inputs the order of the polynomial:
13
estimate=2.718281828803753 diff=0.000000000344708
inputs the order of the polynomial:
14
estimate=2.718281829585647 diff=0.000000001126602
inputs the order of the polynomial:
15
estimate=2.718281830084572 diff=0.000000001625527
     */
}