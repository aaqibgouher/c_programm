#include<stdio.h>;

void main()
{
    int i,n,flag;
    flag=0;
    n=7;

    for(i=2;i<n;i++){
        if(n%i==0) flag=1;
    }

    if(flag) printf("non prime");
    else printf("prime");
}
