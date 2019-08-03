#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}sNode;
struct node *head;

void insert(int n, int pos){
    struct node *snode, *temp;
    snode = (struct node*)malloc(sizeof(struct node));
    snode->data = n;
    
    if(pos == 1){
        snode->next = head;
        head = snode;
    }else{
        temp = head;
        int i;
        for(i=0;i<pos-2;i++){
            temp = temp->next;
        }
        snode->next = temp->next;
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

    insert(2, 1); // 2
    insert(4, 2); // 2 4
    insert(6, 1); // 6 2 4
    insert(8, 2); // 6 8 2 4
    insert(10, 3); // 6 8 10 2 4

    print();
}
