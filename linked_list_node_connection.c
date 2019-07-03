#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
};

void main()
{
    struct node *n1, *n2, *n3, *head, *temp;

    // dynamic memory creation
    // created three node
    n1 = (struct node*)malloc(sizeof(struct node));
    n2 = (struct node*)malloc(sizeof(struct node));
    n3 = (struct node*)malloc(sizeof(struct node));

    // assign data in node
    n1->data = 2;
    n2->data = 4;
    n3->data = 6;

    // linking
    head = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = NULL;

    // print
    temp = head;
    while(temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
}
