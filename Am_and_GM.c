//program to find arithmatic mean,geometric mean,hearmonic mean using function and returning the value to main function//
#include<stdio.h>
#include<math.h>

float choice(int a,int b,char type){
    //char A,G,H;
    float c = (float)(a+b)/2;
    float d = (float)sqrt(a*b);
    float e = (float)(2*a*b)/(a+b);
    switch(type){
        case 'A':
        printf("am is %f\n",c);
        return(c);
        case 'G':
        printf("gm is %f\n",d);
        return(d);
        case 'H':
        printf("hm is %f\n",e);
        return(e);
        default:
        printf("invalid");
        return(0.0);
    }
}

void main()
{
    int a=5,b=10;
    float AM = choice(a,b,'A');
    printf("AM is %f\n",AM);
}

