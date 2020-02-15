#include<stdio.h>

int compare(char *s1[],char *s2[]){
  while(*s1 == *s2){
    if(*s1 == '\0' || *s2 == '\0');
    break;
    s1++;
    s2++;
  }
  if(*s1 == '\0' && *s2 == '\0'){
    return 1;
  }
  else{
    return 0;
  }
}

void main()
{
  char str1[20],str2[20];

  printf("Enter the first string.\n");
  scanf("%s",str1);
  printf("Enter the second string.\n");
  scanf("%s",str2);

  if(compare(str1,str2) == 1) printf("Strings are equal.");
  else printf("Strings are not equal.");
}

