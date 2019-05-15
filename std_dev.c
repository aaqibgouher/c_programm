#include<stdio.h>;
#include<math.h>;

float get_mean(int a[], int n){
    int sum=0,i;
    for(i=0;i<n;i++) sum+=a[i];

    return (float)sum/n;
}
void main()
{
    int i,a[]={5,2,6,9,7,8,1,2};
    float mean;
    int n=sizeof(a)/sizeof(a[0]);

    mean = get_mean(a, n);
    int sum=0;
    for(i=0;i<n;i++){
        sum+= pow((a[i]-mean),2);
    }
    float var = (float)sum/n;
    float dev = sqrt(var);
    printf("%f", dev);
}
