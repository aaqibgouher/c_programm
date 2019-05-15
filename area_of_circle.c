#include<stdio.h>;
#include<math.h>;
#include<string.h>;

float AM(int a,int b){
float c = (float)(a+b)/2;
return(c);
}
float GM(int a,int b){
float d = (float)sqrt(a*b);
return(d);
}
float HM(int a,int b){
float e = (float)(2*a*b)/(a+b);
return(e);
}
float mean(int a,int b,char type[])
{
    float am = (float)(a+b)/2;
    float gm = (float)sqrt(a*b);
    float hm = (float)(2*a*b)/(a+b);
    switch(am){
        case (strsmp(type,"AM")==0): printf("am is %f",AM);break;
    }
}



void main()
{
    int a=12,b=3;
    float c = AM(a,b);
    float d = GM(a,b);
    float e = HM(a,b);
    float AM = mean(a,b,"AM");
    printf("AM is %f\n",c);
    printf("GM is %f\n",d);
    printf("HM is %f\n",e);
    printf("am is %f\n",AM);
}



