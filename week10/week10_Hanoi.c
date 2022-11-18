#include<stdio.h>

void Hanio_Step(int n, char rod1, char rod2, char rod3)
//move n discs from rod 1 to rod 3, using rod 2 as an intermediary
//rod1, rod2, rod3 stand for the three rods
{
    if (n == 1)
        printf("%c->%c\n", rod1, rod3);
    else{
        Hanio_Step(n-1, rod1, rod3, rod2);
        // n-1 discs should be moved from rod 1 to rod 2, using rod 3 as an intermediary
        printf("%c->%c ", rod1, rod3);
        Hanio_Step(n-1, rod2, rod1, rod3);
        // n-1 discs should be moved from rod 2 to rod 3, using rod 1 as an intermediary
    }
}
int main()
{
    int n;
    printf("input the number of discs: \n");
    scanf("%d", &n);
    Hanio_Step(n, '1', '2', '3');
    return 0;
}