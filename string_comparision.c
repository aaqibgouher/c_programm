#include<stdio.h>
#include<string.h>

int compare(char s1[],char s2[],int n1,int n2){
	int i,j,flag = 0;

	for(i=0;i<n1;i++){
		for(j=i;j<=i;j++){
			if(s1[i] == s2[j]){
				flag ++;
			}
		}
	}
	return flag;
}

void main()
{
	char str1[20],str2[20];
	int flag = 0;

	printf("Enter the first string:\n");
	scanf("%s",str1);
	printf("Enter the second string:\n");
	scanf("%s",str2);
	int n1 = strlen(str1);
	int n2 = strlen(str2);

	flag = compare(str1,str2,n1,n2);
	//printf("n1 = %d and n2 = %d and flag = %d\n",n1,n2,flag);
	if(n1 == n2){
		if(flag == n1 || flag == n2) printf("Strings are equal.");
		else printf("Strings are not equal.");	
	}
	else{
		printf("Strings are not equal.");
	}
	
}
