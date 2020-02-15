#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}sNode;
struct node *head;

void insert_end(int n){
    struct node *snode, *temp;
    snode = (struct node*)malloc(sizeof(struct node));
    snode->data = n;
    
    if(head == NULL){
        snode->next = NULL;
        head = snode;
    }else{
        temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        snode->next = NULL;
        temp->next = snode;
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

void main()
{
    head=NULL;

    insert_end(2);
    insert_end(4);
    insert_end(6);

    print();
}
