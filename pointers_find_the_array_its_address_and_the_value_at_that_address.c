#include<stdio.h>
#include<string.h>

void main()
{
    int a[5] ={1,2,3,4,5},*p,i;
    p = a;
    for(i=0;i<5;i++){
        printf("%d %d %d\n",a[i],p+i,*(p+i));
    }
}
