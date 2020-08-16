#include<stdio.h>

void main()
{
    float salary,bonus;
    char sex;
    printf("enter your sex and salary ");
    scanf("%c %f",&sex,&salary);
    if(sex=='f'){
        if(salary>5000){
            bonus= 0.05 * salary;
        }
        else{
            bonus = 0.03 * salary;
        }
    }
    else{
        bonus= 0.02 * salary;
    }
    salary = salary + bonus;
    printf("%f",salary);
 }
