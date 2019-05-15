#include<stdio.h>;
#include<math.h>;
#include<string.h>;

float mean(int a,int b,char type[]){
    float am = (float)(a+b)/2;
    float gm = (float)(sqrt(a*b));
    float hm = (float)(2*a*b)/(a+b);
    printf("am inside function :%.2f\n",am);
    printf("gm inside function :%.2f\n",gm);
    printf("hm inside function :%.2f\n",hm);
    if(strcmp(type,"AM")==0) return(am);
    else if(strcmp(type,"GM")==0) return(gm);
    else if(strcmp(type,"HM")==0) return (hm);
         else return (0.0);
}
float mean2(int a,int b,char type[])
{
    float am = (float)(a+b)/2;
    float gm = (float)sqrt(a*b);
    float hm = (float)(2*a*b)/(a+b);
    switch(type){
        //case (strsmp(type,"AM")==0): printf("am is %f",AM);break;
        case (strcmp(type,"AM")==0): return(am);
        break;
    }
}
void main()
{
    int a=5,b=6;
    float AM = mean2(a,b,"AM");
    //float GM = mean(a,b,"GM");
    //float HM = mean(a,b,"HM");
    //float DM = mean(a,b,"DM");
    printf("AM is %.2f\n",AM);
    //printf("GM is %.2f\n",GM);
    //printf("HM is %.2f\n",HM);
    //printf("DM is %.2f\n",DM);
    printf("am in main function :%.2f",AM);

}
