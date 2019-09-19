#include<stdio.h>

int a[100], front=-1, rear=-1;

int is_empty(){
	if(front==rear) return 1;
	else return 0;
}

void print(){
	int i;
	if(!is_empty()){
		for(i=front+1;i<=rear;i++) printf("%d ", a[i]);
		printf("\n");
	}else{
		printf("Queue is empty.\n");
	}
}

void insert(int n){
	rear++;
	a[rear] = n;
}

void delete(){
	if(!is_empty())
		front++;
	else printf("Queue is empty cant delete\n");
}

void main(){
	insert(1);
	insert(2);
	insert(3);
	print(); // 1 2 3
	delete();
	delete();
	delete();
	delete();
	print(); // 3
}