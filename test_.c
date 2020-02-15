#include<stdio.h>

void main()
{
  char str[20];
  printf("Enter any sentence:\n");
  str[20] = gets();
  puts(str);
}