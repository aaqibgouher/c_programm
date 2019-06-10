#include<stdio.h>
#include<math.h>

int find_min(int a[],int n){
    int i,min=999999;
    for(i=0;i<n;i++){
        if(a[i]<min) min=a[i];
    }
    return (min);
}

void main()
{
    int a[] = {5,5,10};
    int i,j,common_div;
    int n = sizeof(a)/sizeof(a[0]);
    //printf("%d",n);
    int m = find_min(a,n);
    //printf("%d",m);
    int hcf, count;
    for(j=1;j<=m;j++){
        count=0;
        for(i=0;i<n;i++){
            if(a[i]%j==0){
                count++;
            }
        }
        if(count==n) hcf=j;
    }
    printf("hcf %d", hcf);
}


