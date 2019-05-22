#include<stdio.h>

void main()
{
    int fact[100005];
    int i,j,n=100,counter=1,mul,rem,carry;

    for(i=0;i<=100005;i++){
        fact[i] = 0;
    }
    fact[0]=1;
    for(i=1;i<=n;i++){
        carry=0;
        printf("i = %d | ",i);
        for(j=0;j<counter;j++){
            mul = i*fact[j] + carry;
            rem = mul % 10;
            fact[j] = rem;
            carry = mul/10;
            printf("%d", rem);
        }
        while(carry){
            rem = carry%10;
            fact[counter] = rem;
            carry/=10;
            counter++;
            printf("%d", rem);
        }
        printf("\n");
    }

    printf("final answer : total %d digit\n", counter);
    for(i=0;i<counter;i++){
        printf("%d",fact[counter-1-i]);
    }
    printf("\n");

}
