#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int data;
}s_node;

void main()
{
    printf("Enter a number: ");
    s_node *n1, *n2;
    n1 = (s_node*)malloc(sizeof(s_node));
    scanf("%d", &n1->data);
    printf("number is %d", n1->data);

    n2 = (s_node*)malloc(sizeof(s_node));
    scanf("%d", &n2->data);
    printf("another number is %d", n2->data);
}
