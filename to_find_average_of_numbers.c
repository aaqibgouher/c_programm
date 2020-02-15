#include<stdio.h>;

void main()
{
   int i,a,b,n=0,sum;
   printf("enter the value of a and b:");
   scanf("%d %d",&a,&b);
   for(i=a;i<=b;i++){
        sum += i;
        n++;
   }
   printf("average is %f",1.0*sum/n);
}
