#include<stdio.h>

int binary_search(int arr[],int n,int num){
	int left = 0;
	int right = n-1;
	int mid;

	while(left <= right){
		mid = (right + left)/2;
		if(arr[mid] == num){
			return mid;
		}
		else if(arr[mid] < num){
			left = mid + 1;
		}
		else{
			right = mid - 1;
		}
	}
	return -1;
}

void main(){
	
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int n = sizeof(arr)/sizeof(arr[0]);
	int num  = 11;

	int result = binary_search(arr,n,num);

	if(result >= 0){
		printf("It is present at %d\n",result);
	}
	else{
		printf("It is not present\n");
	}
}

