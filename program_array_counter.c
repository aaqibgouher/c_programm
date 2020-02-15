
#include<stdio.h>

void main()
{
	int a[10] = {0,0,0,0,0,0,0,0,0,0};
	int i,n;

	while(1){
		printf("enter the numbers:\n");
		scanf("%d",&n);

		if(n < 0 || n > 9) break;
		a[n] ++;

	}

	for(i=0;i<n;i++){
		printf("%2d = %2d\n",i,a[i]);
	}

}	