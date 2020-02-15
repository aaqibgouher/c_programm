#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}sNode;

struct node* insert_beginning(struct node *head, int n){
    struct node *snode;
    snode = (struct node*)malloc(sizeof(struct node));
    snode->data = n;
    
    if(head == NULL){
        snode->next = NULL;
        head = snode;
    }else{
        snode->next = head;
        head=snode;
    }
    return head;
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

    head = insert_beginning(head, 2);
    head = insert_beginning(head, 4);
    head = insert_beginning(head, 6);

    print(head);
    // print(head);
}
