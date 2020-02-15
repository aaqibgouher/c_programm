//finding a given number in an array using binary search //
#include<stdio.h>

int binary_search(int a[], int left, int right, int k)
{
    int mid;
    if(left<=right){
        mid=(left+right)/2;
        if(k==a[mid]){
            return mid;
        }else if(k<a[mid]){
            return binary_search(a, left, mid-1, k);
        }else{
            return binary_search(a, mid+1, right, k);
        }
    }
    return -1;
}

void main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int k=40;
    int n=sizeof(a)/sizeof(a[0]);
    int index = binary_search(a, 0, n-1, k);
    if(index>=0) printf("present at %d index", index);
    else printf("not present");
}
