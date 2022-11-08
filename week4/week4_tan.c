#include <stdio.h>
#include <math.h>

double pi = 3.1415927;
double arr[20];
double degtorad(double degang) {
    return( (pi * degang)/180.0 );
}
double integral(int n){
    double a=0;
    double b=pi/3;
    double i=(b-a)/n;
    double fx=(b-a)/(2.0*n)*(tan(a)+tan(b));
    while (fabs(i-b)>0.0001){
        fx=fx+(b-a)/n*(tan(i));
        i=i+(b-a)/n;
    }
    return fx;
}

int main(void) {
    for(int i=0;i<=12;i++)
        arr[i]= tan(degtorad(i*5));
    for(int i=0;i<=12;i++)
        printf("%.4f ",arr[i]);
//0.0000 0.0875 0.1763 0.2679 0.3640 0.4663 0.5774 0.7002 0.8391 1.0000 1.1918 1.4281 1.7321
    printf("\n");
    printf("%.8f", integral(12));//0.69504487
}