#include<stdio.h>

int find_sum(int n){
    int rem;
    rem = n%10;
    n/=10;
    if(rem==0) return n;
    else return rem+find_sum(n);
}
void main()
{
    int n=12345;
    printf("%d", find_sum(n));
}
