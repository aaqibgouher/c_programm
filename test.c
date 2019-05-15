#include<stdio.h>;
#include<math.h>;

int prime(int n)
{
    int i;
    printf("n inside function is %d\n",n);
    for(i=2;i<n;i++)
    {
        printf("i is : %d\n",i);
        if(n%i==0)
        {
            printf("%d is not a Prime Number, it is divisible by %d\n",n,i);
            return(0);
        }
    }
    if(i==n){
        printf("%d is a Prime Number\n", n);
    }
    return(1);
}


void main()
{
   int n=21;
   printf("n should be : %d\n",n);
   int c = prime(n);
   printf("%d",c);
}




