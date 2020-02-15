#include<stdio.h>

int a(int x,int y){
    if(x == 0){
        return (y+1);
    }
    else if(x > 0 && y == 0){
        return (a(x-1,1));
    }
    else{
        return a(x-1,a(x,y-1));
    }

}

void main()
{
    int x = 1,y = 2;
    printf("answer is %d",a(x,y));
}