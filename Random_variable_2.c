#include<stdio.h>
#include<string.h>

int count(char *name){
	int i,j,count1=0;

	for(i=0;i<3;i++){
		if(*(name+i) == 'H'){
			count1 ++;
		}
	}
	return count1;
}

void main()
{
	int i,j,flag=-1;
	char *name[8] = {"HHH","HHT","HTH","HTT","THH","THT","TTH","TTT"};
	for(i=0;i<8;i++){
		if(count(name[i]) != 0){
			printf("head is present.\n");
		}
		else{
			printf("Head is not present.\n");
		}
	}
}