#include<stdio.h>

void main(){

    int num1 = 4, num2 = 6;
    int i, min, hcf;

    hcf = find_hcf(num1,num2);
    printf("HCF of %d and %d is %d",num1,num2,hcf);
}

int find_hcf(int a, int b)
{
    int i, min, HCF = 1;
    min = (a<b)?a:b;
    for(i = 1; i <= min; i++)
    {
        if(a%i == 0 && b%i == 0) HCF = i;
    }
    return(HCF);
}
