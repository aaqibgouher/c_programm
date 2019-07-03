#include<stdio.h>
#include<math.h>

int is_min(int hcff[],int n){
    int i,min = 99999;
    for(i=0;i<n;i++){
        if(hcff[i]<min) min = hcff[i];
    }
    return (min);
}

void main()
{
    int i,j,flag=0,hcf;
    int hcff[] = {2,4,6,12,13};
    int n = sizeof(hcff)/sizeof(hcff[0]);
    //printf("%d",n);
    int m = is_min(hcff,n);
    //printf("%d ",m);
    for(i=0;i<n;i++){
        for(j=2;j<=m;j++){
            if(hcff[i]%j==0){
                flag=1;
            }hcf=j;
        }
    }
    if(flag) printf("hcf is %d",hcf);
    else printf("hcf is 1");
}
    //if(flag=i) printf("hcf is %d",flag);
    //else printf("hcf is 1");
