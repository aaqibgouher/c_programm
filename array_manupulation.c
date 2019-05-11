#include<stdio.h>


void main(){
	int a[]={2, 5, 6};
	int n=sizeof(a)/sizeof(a[0]);
	int i, num, index;
	char opt;

	int loop=1;
	while(loop){
		printf("0: exit, 1: insert at end, 2: insert at begg, 3: insert at any pos\n");
		opt = getchar();
		switch(opt){
			case '0': loop=0; break;
			case '1': 
				printf("enter a number: ");
				scanf("%d", &num);
				a[n] = num;
				n++;
				break;
			case '2': 
				printf("enter a number: ");
				scanf("%d", &num);
				for(i=n-1;i>=0;i--) a[i+1]=a[i];
				a[0]= num;
				n++;
				break;
			case '3':
				printf("enter a number and index: ");
				scanf("%d%d", &num, &index);
				for(i=n-1;i>=index;i--) a[i+1]=a[i];
				a[index]= num;
				n++;
				break;
		}
		
		for(i=0;i<n;i++) printf("%d ", a[i]);
		printf("\n");
	}
}