#include<stdio.h>

void main()
{
    int n = 1600;

    if(n % 400 == 0){
        printf("leap year\n");
    }
    else{
        if(n % 100 == 0){
            printf("non leap year\n");
        }
        else{
            if(n % 4 == 0){
                printf("leap year\n");
            }
            else{
                printf("non leap year\n");
            }
        }
    }

}