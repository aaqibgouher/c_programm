#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}snode;

snode *head;

void insert_beg(int n){
	struct node *snode;
	snode = (struct node*)malloc(sizeof(struct node));
	snode->data = n;

	if(head == NULL){
		snode->next = NULL;
		head = snode;
	}
	else{
		snode->next = head;
		head = snode;
	}
}

void print()
{
	struct node *snode,*temp;
	temp = head;

	while(temp != NULL){
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}

void max()
{
	struct node *snode,*temp;
	temp = head;

	while(temp != NULL){
		if(temp->data)
	}
}

void main()
{
	head = NULL;

	insert_beg(2); 
	insert_beg(8); 
	insert_beg(10);
	insert_beg(12); 

	print();
	max();
}