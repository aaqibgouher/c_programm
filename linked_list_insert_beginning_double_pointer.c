#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}sNode;

void insert_beginning(struct node **head_address, int n){
    struct node *snode, *head;
    head = *head_address;

    snode = (struct node*)malloc(sizeof(struct node));
    snode->data = n;
    
    if(head == NULL){
        snode->next = NULL;
        head = snode;
    }else{
        snode->next = head;
        head=snode;
    }
    printf("%d\n", head);
}

void print(struct node *head){
    // struct node *temp;
    // temp = head;
    while(head!=NULL){
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

void main()
{
    struct node *head=NULL;

    printf("%d\n", head);
    insert_beginning(&head, 2);
    printf("%d\n", head);
    // printf("%d\n", head->data);
    // insert_beginning(&head, 4);
    // insert_beginning(&head, 6);

    // print(head);
}
