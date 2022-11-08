#include <stdio.h>

void fibo(int *f2, int *f1){
    int f3;
    f3=*f2+*f1;
    *f1=*f2;
    *f2=f3;
}

int main() {
    int n,f1=1,f0=0;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    if(n<2)
        return 0;
    printf("%d %d ", f0, f1);
    for (int i = 2; i <= n; ++i) {
        fibo(&f1,&f0);
        printf("%d ", f1);
    }
    /*
     Enter the value of n
     12
     0 1 1 2 3 5 8 13 21 34 55 89 144
     */
    return 0;
}