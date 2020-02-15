#include<stdio.h>

int fact(int n){
	int i;
	float fact = 1.0;

	for(i=1;i<=n;i++){
		fact *= i;
	}

	return fact;
}

void main()
{
	int N,R;
	float NCR;
	printf("Enter the value of NcR:\n");
	scanf("%d %d",&N,&R);

	NCR = fact(N)/(fact(R)*fact(N-R));

	printf("Value of NCR is %.0f",NCR);
}