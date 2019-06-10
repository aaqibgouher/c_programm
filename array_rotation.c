#include<stdio.h>
#include<math.h>
#include<ctype.h>

void print(int a[], int n){
    int i;
    for(i=0;i<n;i++) printf("%d ", a[i]);
    printf("\n");
}

void rotate(int a[], int n){
    int i, t;
    for(i=n-1;i>=0;i--){
        if(i==n-1) t=a[i];
        else a[i+1]=a[i];
    }
    a[0]=t;
    print(a, n);
}

void rotate_cc(int a[], int n){
    int i, t;
    for(i=0;i<n;i++){
        if(i==0) t=a[i];
        else a[i-1]=a[i];
    }
    a[n-1]=t;
    print(a, n);
}
void main()
{
    int i, n, a[] = {2,5,6,4};
    n=sizeof(a)/sizeof(a[0]);
    print(a, n);
    rotate(a, n);
    rotate_cc(a, n);
}
