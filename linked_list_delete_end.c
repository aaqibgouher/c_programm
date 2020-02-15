#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}sNode;
struct node *head;

void insert_beginning(int n){
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
}

void delete_end(){
    struct node *temp, *prev;
    temp = head;
    prev = NULL;
    
    if(temp != NULL){
        if(temp->next != NULL){
            while(temp->next != NULL){
                prev = temp;
                temp = temp->next;
            }

            prev->next = NULL;
        }else{
            head = NULL;
        }
        printf("Number %d deleted\n", temp->data);
        free(temp);
    }else{
        printf("List is empty cant delete\n");
    }
}

void print(){
    struct node *temp;
    temp = head;
    if(head != NULL){
        while(temp!=NULL){
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }else{
        printf("List is empty\n");
    }
    printf("\n");
}

void main()
{
    head=NULL;

    insert_beginning(2);
    insert_beginning(4);
    insert_beginning(6);

    print(); // 6 4 2

    delete_end();

    print(); // 6 4

    delete_end();

    print(); // 6

    delete_end();

    print(); // 

    delete_end();
}
