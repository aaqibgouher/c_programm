#include<stdio.h>
void main()
{
    int i,num=10,a[100],rem;
    int n=0;
    while(num){
        rem = num % 2;
        a[n]= rem;
        num/=2;
        n++;
    }
    for(i=0;i<n;i++){
        printf("%d",a[n-i-1]);
    }

}
