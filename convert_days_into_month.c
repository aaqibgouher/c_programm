#include<stdio.h>

void main()
{
   int d;
   int cal_d, cal_m;
   printf("Enter number of days : ");
   scanf("%d", &d);
   cal_m = d/30;
   cal_d = d%30;
   printf("m = %d d = %d", cal_m, cal_d);

}
