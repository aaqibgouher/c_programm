#include<stdio.h>

int compare(char *str1,char *str2){
  while(*str1 == *str2){
    if(*str1 == '\0' || *str2 == '\0')
      break;
    str1 ++;
    str2 ++;
  }
  if(*str1 == '\0' && *str2 == '\0') return 1;
  else return 0;
}

void main()
{
  char str1[20],str2[20];
  printf("Enter first string:\n");
  scanf("%s",str1);
  printf("Enter second string:\n");
  scanf("%s",str2);

  if(compare(str1,str2) == 1) printf("Strings are equal.");
  else printf("strngs are not equal.");
}