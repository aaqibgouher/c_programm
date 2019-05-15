#include<stdio.h>;
#include<math.h>;
#include<string.h>;

int sum(int n){
    if(n==0) return(0);
    else return(sum(n)+sum(n-1));

}

void main()
{
    int n = 123;
    printf("sum of digits is %d\n",sum);



}


