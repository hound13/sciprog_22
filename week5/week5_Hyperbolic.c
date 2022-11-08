#include <stdio.h>
#include <math.h>

double artanh1(double x, double delta){
    double y=0,elem;
    int n=0;
    do{
        elem=pow(x, 2*n+1)/(2*n+1);
        y+= elem;
        n++;
    }while (fabs(elem)>=delta);
    return y;
}
double artanh2(double x){
    double y;
    y=0.5*(log(1+x)-log(1-x));
    return y;
}

int main(void) {
    double delta,x=-0.9;
    double a1[200],a2[200];
    int i=0;
    printf("Enter a real positive number delta: \n");
    scanf("%lf",&delta);
    while (x<=0.9){
        a1[i]= artanh1(x,delta);
        a2[i]= artanh2(x);
        printf("x=%.2f arctan1=%.10f arctan2=%.10f diff=%.10f\n",
               x,a1[i],a2[i], fabs(a1[i]-a2[i]));
        x+=0.01;
        i++;
    }
    /*
     Enter a real positive number delta:
     0.1
    x=-0.90 arctan1=-1.3294261286 arctan2=-1.4722194896 diff=0.1427933610
    x=-0.89 arctan1=-1.2998584769 arctan2=-1.4219258711 diff=0.1220673942
    x=-0.88 arctan1=-1.2710859447 arctan2=-1.3757676565 diff=0.1046817118
    x=-0.87 arctan1=-1.1891851841 arctan2=-1.3330796297 diff=0.1438944456
    x=-0.86 arctan1=-1.1661040702 arctan2=-1.2933446720 diff=0.1272406019
    x=-0.85 arctan1=-1.1434493958 arctan2=-1.2561528120 diff=0.1127034162
     ...
     */
}