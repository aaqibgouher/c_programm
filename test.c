#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct node{
	int data;
	struct node *next;
}snode;

struct node *head;

void insert_end(int n){
	struct node *snode,*temp;
	snode = (struct node*)malloc(sizeof(struct node));
	snode->data = n;

	if(head == NULL){
		snode->next = NULL;
		head = snode;
	}
	else{
		temp = head;
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = snode;
		snode->next = NULL;
	}
}

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

void insert_any(int n,int pos){
	struct node *snode,*temp;
	snode = (struct node*)malloc(sizeof(struct node));
	snode->data = n;
	int i;
	

	if(pos == 1){
		snode->next = head;
		head = snode;
	}else{
		temp = head;
		for(i=1;i<pos-1;i++){
			temp = temp->next;
		}

		snode->next = temp->next;
		temp->next = snode;
		
	}
}

int count_nodes(){
	struct node *temp;
	int count = 0;
	temp = head;

	while(temp != NULL){
		count ++;
		temp = temp->next;
	}

	return count;
}

void print(){
	struct node *temp;
	temp = head;

	while(temp != NULL){
		printf("%d -> ",temp->data);
		temp = temp->next;
	}

	printf("\n");
}

void main(){
	head = NULL;

	insert_end(1);
	insert_end(2);
	insert_end(3);
	insert_end(4);
	insert_end(5);
	print();
	insert_beg(7);
	insert_beg(8);
	insert_beg(9);
	print();		/*9 8 7 1 2 3 4 5*/
	insert_any(10,1);
	insert_any(11,3);
	insert_any(12,8);
	print();

	printf("%d ",count_nodes());

}