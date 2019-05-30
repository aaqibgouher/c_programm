#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void print(struct node *head)
{
    while(head!=NULL){
        printf("%d ", head->data);
        head=head->next;
    }
}

void push_front(struct node **head, int data){
    struct node *node_new = (struct node*)malloc(sizeof(struct node));

    node_new->data=data;
    node_new->next=*head;

    *head=node_new;
}

void push_back(struct node **head, int data){
    struct node *node_new = (struct node*)malloc(sizeof(struct node)), *temp=NULL;

    node_new->data=data;
    node_new->next=NULL;

    temp=*head;
    while(temp->next){
        temp=temp->next;
    }
    temp->next=node_new;
}

int main()
{
    struct node *head=NULL;
    push_front(&head, 1);
    push_front(&head, 2);
    push_front(&head, 3);
    push_back(&head, 4);
    print(head);
    return 0;
}
