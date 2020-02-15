#include<stdio.h>;

void main()
{
    int n=12345, rem;
    while(n){
        rem=n%10;
        printf("%d", rem);
        n/=10;
    }
    printf("\n");
}
