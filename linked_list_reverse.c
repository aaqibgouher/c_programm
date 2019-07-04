#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}sNode;
struct node *head;

void insert(int n){
    struct node *snode, *temp, *prev;
    snode = (struct node*)malloc(sizeof(struct node));
    snode->data = n;
    
    if(head == NULL){
        snode->next = head;
        head = snode;
    }else{
        temp = head;
        prev = NULL;

        while(temp != NULL && n > temp->data){
            prev = temp;
            temp = temp->next;
        }
        if(prev == NULL){
            snode->next = head;
            head = snode;
        }else{
            snode->next = prev->next;
            prev->next = snode; 
        }
    }
}

void reverse() {
    struct node *current, *prev, *next;
    current = head;
    prev = NULL;

    while(current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
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

    insert(2);
    insert(6);
    insert(4); 
    insert(5); 
    insert(1); 
    print(); // 1 2 4 5 6
    reverse();
    print(); // 6 5 4 2 1
}
