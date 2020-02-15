#include<stdio.h>
#include<stdlib.h>
#define MAX 5

typedef struct node{
	int data;
	struct node *next;
}stack;

stack *top;
int count=0;

stack* create(){
    return (stack*)malloc(sizeof(stack));
}

int is_empty(){
	if(top==NULL) return 1;
	else return 0;
}

int is_full(){
	if(count==MAX) return 1;
	else return 0;
}

void print(){
	stack *temp;
	temp = top;
	if(top != NULL){
	    while(temp!=NULL){
	        printf("%d ", temp->data);
	        temp = temp->next;
	    }
	}else{
	    printf("Stack is empty\n");
	}
	printf("\n");
}

void push(int n){
	if(!is_full()){
		stack *snode;
		snode = create();

		snode->data = n;
		count++;

		if(top == NULL){
	        snode->next = NULL;
	        top = snode;
	    }else{
	        snode->next = top;
	        top=snode;
	    }
	    print();
	}else{
		printf("Stack is full.\n");
	}
}

void pop(){
	stack *temp;
	temp = top;

	if(!is_empty()){
		count--;
	    top = top->next;
	    printf("Number %d deleted\n", temp->data);
	    free(temp);
	    print();
	}else{
	    printf("List is empty cant delete\n");
	}
}

void main(){
	top=NULL;

	pop(); // stack is empty
	push(1); // 1
	push(2); // 2 1
	push(3); // 3 2 1
	push(4); // 4 3 2 1
	push(5); // 5 4 3 2 1
	push(6); // stack is full
	pop(); // 2 1
	push(4); // 4 2 1
}