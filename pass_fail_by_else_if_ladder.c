#include<stdio.h>

void main()
{
    int m;
    printf("enter the marks:");
    scanf("%d",&m);
    if(m>79){
        printf("honor");
    }else if(m>60){
        printf("first");
    }else if(m>50){
        printf("second");
    }else if(m>40){
        printf("third");
    }else{
        printf("fail");
    }
 }
