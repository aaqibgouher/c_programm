#include<stdio.h>

void change1(int n){
    n = n+10;
}

void change2(int *n){
    *n = *n + 10;
}

void main()
{
    int n=10;
    printf("initial value %d",n);
    change1(n);
    printf("\n");
    printf("after change %d",n);
    change2(&n);
    printf("\n");
    printf("as a pointer %d",n);
}
