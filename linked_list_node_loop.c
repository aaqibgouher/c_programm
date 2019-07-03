#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
};

void main()
{
    struct node *snode, *head, *temp=NULL;
    int i, a[3] = {2, 4, 6};

    for(i=0;i<3;i++){
        snode = (struct node*)malloc(sizeof(struct node));
        snode->data = a[i];
        if(temp == NULL){
            snode->next = NULL;
            temp = snode;
        }
        else{
            snode->next = temp;
            temp = snode;
        }
    }
    head = temp;
    // linking

    // print
    temp = head;
    while(temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
}
