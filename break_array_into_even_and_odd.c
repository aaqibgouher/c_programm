#include<stdio.h>;
#include<math.h>;
#include<string.h>;

void main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int even[100],odd[100];
    int n = sizeof(a)/sizeof(a[0]),i;
    int index1=0,index2=0;

    for(i=0;i<n;i++){
        if(a[i]%2==0){
            even[index1] = a[i];
            index1++;
        }
        else {
            odd[index2] = a[i];
            index2++;
             }
    }
    for(i=0;i<index1;i++){
        printf("%d ",even[i]);
    }
    printf("\n");
    for(i=0;i<index2;i++){
        printf("%d ",odd[i]);
    }


}


