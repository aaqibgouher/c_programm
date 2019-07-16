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

void delete_any(int pos){
    struct node *temp, *prev;
    int count = 0;
    temp = head;
    prev = NULL;

    if(temp != NULL){
        if(temp->next != NULL){
            while(count < pos-1){
                prev = temp;
                temp = temp->next;
                count++;
            }
            prev->next = temp->next;
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

    delete_any(1);

    print(); // 6 2

    delete_any(2);

    print(); // 6

    //delete_any(1);

    //print(); //

    //delete_any(5);
}
