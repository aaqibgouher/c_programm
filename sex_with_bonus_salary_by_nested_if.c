#include<stdio.h>;

void main()
{
    int a,b,i,n=0,sum=0,sum2=0,n2=0;
    printf("enter the values of a and b:");
    scanf("%d %d",&a,&b);
    for(i=a;i<b;i++)
    {
        if(i%9==0)
    {
            sum+=i;
            n++;
    }   else
    {
            sum2 += i;
            n2++;
    }
    }
    printf("number is %d and sum is %d",n,sum);
    printf("number is %d and sum is %d",n2,sum2);

 }
