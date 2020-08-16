#include<stdio.h>

void main()
{
  int s, cal_hour, cal_minute, cal_second;
  printf("enter time in second=");
  scanf("%d",&s);
  cal_hour= s/3600;
  printf("hour : %d\n", cal_hour);
  s=s%3600;
  cal_minute=s/60;
  printf("minute : %d\n", cal_minute);
  cal_second = s%60;
  printf("second : %d", cal_second);
}
