#include<stdio.h>

int fact(int n){
    if(n==1) return(1);
    else return(n*fact(n-1));
}

void main()
{
    int n=145,temp;
    int rem,i,counter=0,number =0;
    temp =n;
    while(temp){
        rem = temp%10;
        number += fact(rem);
        temp/=10;

    }
    if(n==number){
        printf("it is strong number");
    }
    else printf("not strong number");


}
