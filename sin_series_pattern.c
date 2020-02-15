#include<stdio.h>
#include<math.h>

void main()
{
	float x,sum=0;
	int i,j,n,fact,k=1;

	printf("enter the value of x(degree) and n in the given series:\nsin(x) = [x - x^3/3! + x^5/5! ... x^n/n!\n");
	scanf("%f%d",&x,&n);
	x = (x*3.14)/180;
    
	for(i=1;i<=n;i=i+2){
        fact = 1;
		for(j=1;j<=i;j++){
			fact *= j;
		}
		sum = sum + ((pow(x,i))/fact)*k;
		k = -(k);
	}

	printf("Sin(x) = %7.2f",sum);
}
