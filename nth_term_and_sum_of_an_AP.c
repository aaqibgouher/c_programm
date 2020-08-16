#include<stdio.h>

void main()
{
    int a,d,n,tn,sn;
   printf("enter the value of a,d and n\n");
   scanf("%d %d %d",&a,&d,&n);
   tn= a+(n-1)*d;
   printf("tn is equal to %d\n",tn);
   sn=n/2*(a+tn);
   printf("sn is equal to %d",sn);

}
