#include<stdio.h>

struct data
{
	int min, max;
} d;

int find_min(int a[], int n){
	int i, min = 9999;
	for(i=0;i<n;i++){
		if(a[i]<min) min=a[i];
	}
	return min;
}

int find_max(int a[], int n){
	int i, max = -9999;
	for(i=0;i<n;i++){
		if(a[i]>max) max=a[i];
	}
	return max;
}

void find(int a[], int n){
	int min = find_min(a, n);
	int max = find_max(a, n);

	d.min = min;
	d.max = max;
}

void main(){
	int a[5] = {2,8,4,1,5};
	int n=5;

	find(a, n);

	printf("min %d max %d\n", d.min, d.max);
}