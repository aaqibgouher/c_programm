#include<stdio.h>;

void main()
{
    int u,charge;
   float total;
   printf("enter consumption unit:");
   scanf("%d",&u);
   if(u<=200){
        charge=0;
        total= charge + 0.50*u;
   }else if(u<=400){
        charge=100;
        total= charge  + (u%200)*0.65;
   }else if(u<=600){
        charge=230;
        total= charge  + (u%400)*0.80;
   }else
   {
        charge=390;
        total= charge + (u%600)* 1.00;
   }    printf("total is %f",total);
 }
