#include<stdio.h>
#include<math.h>

void total_salary(int *ptr,int b){
    *ptr = *ptr + b;
}

void main()
{
    int salary,bonus;
    printf("enter the salary:");
    scanf("%d",&salary);
    printf("enter the bonus:");
    scanf("%d",&bonus);
    total_salary(&salary,bonus);
    printf("salary is %d ",salary);
}
