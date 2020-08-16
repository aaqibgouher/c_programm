#include<stdio.h>
#include<math.h>

float get_mean(int a[], int n){
    int i,sum=0;
    for(i=0;i<n;i++){
        sum+=a[i];
    }
    return (float)sum/n;
}

void main()
{
    int i,n,a[]={5,3,6,1,4,8,9};
    float mean,var,dev;

    n=sizeof(a)/sizeof(a[0]);
    mean=get_mean(a,n);
    printf("mean : %f\n", mean);

    var=0;
    for(i=0;i<n;i++){
        var+=(pow(a[i]-mean,2));
    }
    printf("var : %f\n",var);
    dev=sqrt(var);
    printf("dev : %f",dev);
}
