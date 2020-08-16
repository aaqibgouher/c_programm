#include<stdio.h>


void main(){
    int a1[] = {1,3,5,7,9,11};
    int a2[] = {2,4,6,8,10};
    int n1 = sizeof(a1)/sizeof(a1[0]);
    int n2 = sizeof(a2)/sizeof(a2[0]);
    int n3 = n1 + n2;
    int a3[20];
    int k = 0;
    int i=0,j=0;

    // printf("%d %d %d",n1,n2,n3);

    while(i < n1 && j < n2){
        
        if(a1[i] < a2[j]){
            a3[k] = a1[i];
            i++;
            k++;
        }
        else{
            a3[k] = a2[j];
            j++;
            k++;
        }
        
    }

    while(i < n1){
        a3[k] = a1[i];
        i++;
        k++;
    }
    while(j < n2){
        a3[k] = a2[j];
        j++;
        k++;
    }

    for(i=0;i<n3;i++){
        printf("%d ",a3[i]);
    }
}