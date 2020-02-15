#include<stdio.h>
#include<stdlib.h>
#define MAX 5

typedef struct node
{
    int data;
    struct node *next;
}stack;

stack *top;
int count = 0;

int is_full(){
    if(count == MAX+1) return 1;
    else return 0;
}

int is_empty(){
    if(count == 0) return 1;
    else return 0;
}

void push(int n){
    struct node *stack,*temp;
    stack = (struct node*)malloc(sizeof(struct node));
    stack->data = n;
    count ++;

    if(!is_full()){
        if(top == NULL){
            stack->next = NULL;
            top = stack;
        }
        else{
            stack->next = top;
            top = stack;
        }
    }
    else{
        printf("stack is full");
    }
}

void pop(){
    if(!is_empty()){
        top = top->next;
    }
    else{
        printf("\nstack is empty");
    }
}

void print(){
    struct node *stack,*temp;
    temp = top;

    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void main()
{
    top = NULL;
    push(1);//1
    push(2);//2 1
    push(3);//3 2 1
    push(4);//4 3 2 1
    push(5);//5 4 3 2 1
    print();

    pop();//4 3 2 1
    print();
}