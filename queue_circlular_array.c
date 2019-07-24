#include<stdio.h>
#define MAX 5

int a[100], front = -1, rear = -1;

int is_empty(){
	if(front==rear){
		return 1;
	}else return 0;
}

int is_full(){

}

void print() {
	int i;
	if(rear>front){
		for(i=front+1;i<=rear;i++) printf("%d ", a[i]);
	}else{
		for(i=front+1;i<MAX;i++) printf("%d ", a[i]);
			for(i=0;i<=rear;i++) printf("%d ", a[i]);
	}
	printf("\n");
	for(i=0;i<10;i++) printf("%d ", a[i]);
	printf("\nstart %d end %d\n", front, rear);
	printf("============\n");
}

void insert(int n){
	rear = (rear + 1)%MAX;
	a[rear] = n;
}

void delete(){
	if(!is_empty())
		front = (front+1)%MAX;
	else printf("Queue is empty cant delete\n");
}

void main(){
	insert(1);
	insert(2);
	insert(3);
	print(); // 1 2 3
	insert(4);
	insert(5);
	print(); // 1 2 3 4 5
	delete();
	delete();
	print(); // 3 4 5
	insert(6);
	print(); // 3 4 5 6
	insert(7);
	print(); // 3 4 5 6 7
}