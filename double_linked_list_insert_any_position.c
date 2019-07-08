#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
}dNode;
struct node *head, *tail;

void insert(int n, int pos){
    struct node *dnode;
    dnode = (struct node*)malloc(sizeof(struct node));
    dnode->data = n;
    
    struct node *temp;

    if(pos == 1){
        dnode->next = NULL;
        dnode->prev = NULL;
        head = dnode;
        tail = dnode;
    }else{
        temp = head;
        int i;
        // for(i=0;i<pos-2;i++){
        //     temp = temp->next;
        // }
        temp->next->prev = dnode;
        dnode->prev = temp;
        dnode->next = temp->next;
        temp->next = dnode;

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

    insert(2, 1); // 2
    insert(4, 2); // 2 4
    // insert(6, 2); // 2 6 4
    // insert(8, 1); // 8 2 6 4

    print();
    print_reverse();
}
