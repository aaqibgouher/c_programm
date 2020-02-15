#include<stdio.h>
#include<string.h>

void count(char s[4][2]){
	int i,j,count1=0;

	for(i=0;i<4;i++){
		for(j=0;j<2;j++){
			if(s[i][j] == 'H'){
				count1 ++;
			}
		}
		printf("%d\n",count1);
		count1 = 0;
	}
}

void main()
{
	int i,j;
	char s[4][2] = {"HH","HT","TH","TT"};
	for(i=0;i<4;i++){
		for(j=0;j<2;j++){
			count(s[i][j]);
		}
	}

}