#include<stdio.h>;
#include<math.h>;


void main()
{
    int n=5, i, count, a[]={1,0,1,0,0}, rem;

    int d=0;
    for(i=0;i<n;i++){
        d+=(a[n-1-i]*pow(2,i));
    }
    printf("%d", d);
}
