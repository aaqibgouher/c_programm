#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next,*prev;
}d;

struct node *head,*tail;

void insert_at_Beg(int n){
	struct node *temp,*dnode;
	dnode = (struct node *)malloc(sizeof(struct node));
	dnode->data = n;

	if(head == NULL && tail == NULL){
		dnode->next = NULL;
		head = dnode;
		dnode->prev = NULL;
		tail = dnode;
	}
	else{
		dnode->next = head;
		head->prev = dnode;
		head = dnode;
		dnode->prev = NULL;

	}
}

void print1()
{
	struct node *dnode,*temp;
	temp = head;
									//printing temp = head or from left to right.						
	while(temp != NULL){
		printf("%d <=>",temp->data);
		temp = temp->next;
	}
}

void print()
{
	struct node *temp;
	temp = tail;

	while(temp != NULL){
		printf("%d <=>",temp->data);		//printing temp = tail or from right to left.
		temp = temp->prev;
	}
}

void insert_at_end(int n){
	struct node *dnode,*temp;
	dnode = (struct node *)malloc(sizeof(struct node));
	dnode->data = n;

	if(head == NULL && tail == NULL){
		dnode->next = NULL;
		head = dnode;
		dnode->prev = NULL;
		tail = dnode;
		temp = head;
	}
	else{
		while(temp->next = NULL){
			temp = temp->next;
		}
		dnode->next = NULL;
		temp->next = dnode;
		dnode->prev = temp;
		tail = dnode;
	}
}

void main()
{
	head = NULL;
	tail = NULL;
	//insertion in double linked list at the beginnin. 
	insert_at_Beg(2);//2
	insert_at_Beg(4);//4 2
	insert_at_Beg(6);//6 4 2
	insert_at_Beg(8);//8 6 4 2
	print1();
	printf("\n");
	//print();

	//insertion at end:
	insert_at_end(10); // 8 6 4 2 10
	insert_at_end(12); // 8 6 4 2 10 12
	print1();
}