#include<stdio.h>;
void main()
{
    int i,a,b,sum;
    sum = 0;
    printf("enter the value of a and b:");
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i+=2){
        sum += i;
    }   printf("%d",sum);


}


