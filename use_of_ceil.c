#include<stdio.h>
#include<math.h>
 void cyclicswap(int *a,int *b,int *c);
int main()
{
    int a,b,c,t,u;
    scanf("%d %d %d",&a,&b,&c);
    cyclicswap(&a,&b,&c);
    printf("output =%d %d %d",a,b,c);

}
