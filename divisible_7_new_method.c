#include<stdio.h>

int is_divisible_by_seven(int n){
	int rem, res;

	rem = n%10;
	n = n/10;
	res = n + rem*5;

	if(res % 7 == 0) return 1;
	else return 0;
}

void main()
{
	int i;
	for(i=2; i<1000000000;i++){
		if(is_divisible_by_seven(i) == 0 && i%7==0){
			printf("%d\n", i);
		}
	}
	printf("done\n");
}