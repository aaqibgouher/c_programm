#include<stdio.h>
#define MAX 5

int a[MAX], top=-1;

int is_empty(){
	if(top<0) return 1;
	else return 0;
}

int is_full() {
	if(top>=MAX-1) return 1;
	else return 0;
}

void print(){
	int i;
	if(!is_empty()){
		for(i=0;i<=top;i++){
			printf("%d ", a[i]);
		}
		printf("\n");
	}else{
		printf("Stack is empty cant print.\n");
	}
}

void push(int n){
	if(!is_full()){
		top++;
		a[top] = n;
		print();
	}else{
		printf("Stack is full.\n");
	}
}

void pop(){
	if(!is_empty()){
		printf("pop %d\n", a[top]);
		top--;
		print();
	}else{
		printf("Stack is empty.\n");
	}
}


void main(){
	pop(); // stack empty
	push(1); // 1
	push(2); // 1 2
	push(3); // 1 2 3
	push(4); // 1 2 3 4
	push(5); // 1 2 3 4 5
	push(6); // stack full
	pop(); // 1 2 3
	push(5); // 1 2 3 5
}