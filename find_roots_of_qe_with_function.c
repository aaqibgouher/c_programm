#include<stdio.h>

int main()
{
    int a=10,b=4,c=5;
    int power_a,power_b,power_c, n=2;

    power_a = power(a,n);
    power_b = power(b,n);
    power_c = power(c,n);

    printf("%d to the power %d is %d\n",a,n,power_a);
    printf("%d to the power %d is %d\n",b,n,power_b);
    printf("%d to the power %d is %d\n",c,n,power_c);

    return(0);
}

int power(int number, int exp)
{
    int i, prod=1;
    for(i=1;i<=exp;i++)
    {
        prod= prod * number;
    }
    return(prod);
}


