#include <stdio.h>

int gcd1(int a, int b){
    while (b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}

int gcd2(int a, int b){
    if(b==0)
        return a;
    return gcd2(b,a%b);
}

int main() {
    printf("iterative gcd: %d\n",gcd1(8,12));
    //the iterative function gives 4
    printf("recursive gcd: %d\n",gcd2(8,12));
    //the recursive function gives 4
    return 0;
}