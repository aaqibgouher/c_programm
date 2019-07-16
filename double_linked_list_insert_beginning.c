#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
}dNode;
struct node *head, *tail;

void insert_beginning(int n){
    struct node *dnode;
    dnode = (struct node*)malloc(sizeof(struct node));
    dnode->data = n;
    
    if(head == NULL && tail == NULL){
        dnode->next = NULL;
        dnode->prev = NULL;
        head = dnode;
        tail = dnode;
    }else{
        head->prev = dnode;
        dnode->next = head;
        head=dnode;
        dnode->prev = NULL;
    }
}

void print(){
    struct node *temp;
    temp = head;
    while(temp!=NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void print_reverse(){
    struct node *temp;
    temp = tail;
    while(temp!=NULL){
        printf("%d ", temp->data);
        temp = temp->prev;
    }
    printf("\n");
}

void main()
{
    head=NULL; tail=NULL;

    insert_beginning(2);
    insert_beginning(4);
    insert_beginning(6);

    print();
    print_reverse();
}
