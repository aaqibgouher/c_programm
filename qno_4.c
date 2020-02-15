#include<stdio.h>

void main()
{
	int a[100]={1,2,3,4,5}, i, n, x=5;
	n=5;

	for(i=n-1;i>=0;i--){
		a[i+1]=a[i];
	}
	a[0]=x;
	n++;

	for(i=0;i<n;i++) printf("%d ", a[i]);
}
