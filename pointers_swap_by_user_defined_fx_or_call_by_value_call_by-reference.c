#include<stdio.h>
#include<math.h>

void swap(int *ptr1,int *ptr2){
    int k;
    k = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = k;
}

void main()
{
    int a=5,b=4;
    swap(&a,&b);
    printf("a is %d,b is %d",a,b);
}
