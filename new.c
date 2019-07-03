#include<stdio.h>
#include<math.h>

void main()
{
	int a=1,b=1,c,i,n=10;
	for(i=0;i<n;i++){
		if(i==0){
			printf("0");
		}
		else{
			c = a+b;
			printf("%d",c);
			a=b;
			c=b;
		}
	}
}