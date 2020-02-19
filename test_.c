#include<stdio.h>
#include<string.h>

void binary(int num,int y){
	int x = 0,a[100],rem,n=0,i;
	if(num == 0){
		for(i=0;i<y;i++){
			printf("%d",x);
		}
		printf("\n");
	}
	else{
		while(num){
			rem = num % 2;
			a[n] = rem;
			num = num / 2;
			n++;
	}	
		for(i=0;i<n;i++){
			printf("%d",a[n-1-i]);
		}
		printf("\n");	
	}
}

void main()
{
	char str[] = {'H','T'};
	int n = strlen(str);
	int i;
	printf("Enter the number of coins:\n");
	scanf("%d",&n);
	int total = 8;
	for(i=0;i<total;i++){
		binary(i,n);
	}
}