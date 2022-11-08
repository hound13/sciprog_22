#include <stdio.h>

int main() {
    int n=5,p=3,q=4;
    double a[n][p],b[p][q],c[n][q];
    printf("A=\n");
    for (int i = 0; i <n ; ++i) {
        for (int j = 0; j < p; ++j) {
            a[i][j]=i+j;
            printf("%.2lf ",a[i][j]);
        }
        printf("\n");
    }
    printf("B=\n");
    for (int i = 0; i <p ; ++i) {
        for (int j = 0; j < q; ++j) {
            b[i][j]=i-j;
            printf("%.2lf ",b[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i <n ; ++i) {
        for (int j = 0; j < q; ++j) {
            c[i][j]=0;
        }
    }
    printf("C=\n");
    for (int i = 0; i <n ; ++i) {
        for (int j = 0; j < q; ++j) {
            for (int k = 0; k < p; ++k) {
                c[i][j]+=a[i][k]*b[k][j];
            }
            printf("%.2lf ",c[i][j]);
        }
        printf("\n");
    }
    /*
    A=
    0.00 1.00 2.00
    1.00 2.00 3.00
    2.00 3.00 4.00
    3.00 4.00 5.00
    4.00 5.00 6.00
    B=
    0.00 -1.00 -2.00 -3.00
    1.00 0.00 -1.00 -2.00
    2.00 1.00 0.00 -1.00
    C=
    5.00 2.00 -1.00 -4.00
    8.00 2.00 -4.00 -10.00
    11.00 2.00 -7.00 -16.00
    14.00 2.00 -10.00 -22.00
    17.00 2.00 -13.00 -28.00
     */
}