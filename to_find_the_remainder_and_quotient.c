#include<stdio.h>

void main()
{
   int x,p,r,quotient;
   printf("enter the values of x and p");
   scanf("%d %d",&x,&p);
   r= x % p;
   printf("remainder is %d\n",r);
   quotient=(x-r)/p;
   printf("quotient is %d",quotient);

}
