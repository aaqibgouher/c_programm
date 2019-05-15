#include<stdio.h>;

void main()
{
    int i,m,n,hcf;
    hcf=1;

    m=6; n=4;
    int min = (m<n) ? m : n;
    for(i=1;i<=min;i++){
        if(m%i==0 && n%i==0) hcf=i;
    }
    printf("%d", hcf);
}
