#include<stdio.h>
#include<string.h>

int count(char *name){
	int i,j,count1=0;

	for(i=0;i<2;i++){
		if(*(name+i) == 'H'){
			count1 ++;
		}
	}
	return count1;
}

void main()
{
	int i,j;
	char *name[4] = {"HH","HT","TH","TT"};
	for(i=0;i<4;i++){
		printf("%s = %d\n",name[i],count(name[i]));
	}
}