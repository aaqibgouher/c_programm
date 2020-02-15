#include<stdio.h>

void main()
{
	int a[] = {1,2,3,4,5};
	int n = sizeof(a)/sizeof(a[0]);
	int i,pos=2,k=10;

	for(i=n-1;i>=pos;i--){
		a[i+1] = a[i];
	}
	a[i+1] = k;
	n++;

	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}