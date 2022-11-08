#include <stdio.h>
#include <math.h>
int main() {
    int n=12;
    double pi=3.14159267;
    double a=0;
    double b=pi/3;
    double i=(b-a)/n;
    double fx=(b-a)/(2.0*n)*(tan(a)+tan(b));
    while (fabs(i-b)>0.0001){
        fx=fx+(b-a)/n*(tan(i));
        i=i+(b-a)/n;
    }
    printf("%.8f\n",fx);
    /*result is 0.69504485, approximately equal to log(2)=0.69314718*/
}