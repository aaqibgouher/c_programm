//finding Am,gm,and hm in main function directly//
#include<stdio.h>;
#include<math.h>;
#include<string.h>;

float mean(int a,int b,char type[]){
    if(strcmp(type,"AM")==0) return((float)(a+b)/2);
    else if(strcmp(type,"GM")==0) return((float)(sqrt(a*b)));
    else  return ((float)(2*a*b)/(a+b));

}

void main()
{
    int a=5,b=6;
    float AM = mean(a,b,"AM");
    float GM = mean(a,b,"GM");
    float HM = mean(a,b,"HM");
    printf("AM is %.2f\n",AM);
    printf("GM is %.2f\n",GM);
    printf("HM is %.2f",HM);

}
