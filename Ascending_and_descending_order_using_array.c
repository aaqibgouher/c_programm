//arranging array elements in ascending and descending order//
#include<stdio.h>

void ascending(int a[],int n){
	int i,j,k;
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if(a[i] > a[j]){
				k = a[i];
				a[i] = a[j];
				a[j] = k;
			}
		}
	}
	printf("Ascending order is :\n");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}

void descending(int a[],int n){
	int i,j,k;
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if(a[i] < a[j]){
				k = a[i];
				a[i] = a[j];
				a[j] = k;
			}
		}
	}
	printf("\nDescending order is :\n");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}

void main()
{
	int a[] = {90,100,40,10,70,50,80,20,30,60};
	int n = sizeof(a)/sizeof(a[0]);

	ascending(a,n);
	descending(a,n);
}