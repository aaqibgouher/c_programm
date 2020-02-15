#include<stdio.h>

void main()
{
	int a[] = {1,2,3,4,5};
	int n = sizeof(a)/sizeof(a[0]);
	int i,pos=2;

	for(i=0;i<n;i++){
		if(i >= pos){
			a[i] = a[i+1];
			//n--;
		}
	}
	n--;

	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}