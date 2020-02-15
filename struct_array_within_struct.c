#include<stdio.h>
#include<string.h>

struct bank 
{
	int id;
	int phn_no[1];

}cust[1];

void main()
{
	struct bank cust[1];
	cust[0].id = 123;
	cust[0].phn_no[0] = 987;
	cust[0].phn_no[1] = 789;
	cust[1].id = 6543;
	cust[1].phn_no[0] = 2345;
	cust[1].phn_no[1] = 654;
	
	printf("cust1 id is %d\n",cust[0].id);
	printf("cust1 phn no.1  is %d\n",cust[0].phn_no[0]);
	printf("cust1 phn no.2 is %d\n",cust[1].phn_no[1]);
	printf("cust2 id is %d\n",cust[1].id);
	printf("cust2 phn no.1  is %d\n",cust[0].phn_no[0]);
	printf("cust2 phn no.2 is %d\n",cust[1].phn_no[1]);

}