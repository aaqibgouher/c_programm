#include<stdio.h>;
#include<math.h>;
#include<string.h>;

void main()
{
    int a[] = {1,2,3,4,5};
    int n = sizeof(a)/sizeof(a[0]);
    int i,index=0, t, m=3,j;

    while(m--){
        t=a[n-1];
        for(i=n-1;i>0;i--){
            a[i]=a[i-1];
        }
        a[0]=t;
    }
    for(i=0;i<n;i++) printf("%d ", a[i]);

}


