#include<stdio.h>

void main()
{
    int i,n=10,a=1,b=2,c;

    for(i=1;i<=n;i++){
        if(i==1){
            printf("0 ");
        }
        if(i==2 || i==3){
            printf("1 ");
        }
        if(i==4){
            printf("2 ");
        }
        if(i>4){
            c = a+b;
            printf("%d ",c);
            a = b;
            b = c;
        }
    }
}
