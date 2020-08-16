#include<stdio.h>
void main()
{
    int a,b,d,n,s,i;
    a=100; b=200; d=7;
    n=0;s=0;
    for(i=a;i<b;i++){
        if(i%d==0){
            s+=i;
            n++;
        }
    }
    printf("%d %d", n, s);

}


