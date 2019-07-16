#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}snode;

struct node *head;

void insert_beg(int n){
    struct node *snode;
    snode = (struct node*)malloc(sizeof(struct node));
    snode->data = n;

    if(head==NULL){
        snode->next = NULL;
        head = snode;
    }
    else{
        snode->next = head;
        head = snode;
    }
}
void print(){
    struct node *temp;
    temp = head;

    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }

}
int find_len(){
    int count = 0;
    struct node *temp;
    temp = head;

    while(temp != NULL){
        count++;
        temp = temp->next;

    }
    return(count);
}



void delete_any(int pos){
    struct node *temp,*after;
    int count = 1;
    temp = head;

    if(pos > find_len()){
        printf("invalid input");
    }

    if(pos == 1){
        head = head->next;
    }
    else{
        while(count < pos-1){
            temp = temp->next;
            count++;
        }
        after = temp->next;
        temp->next = after->next;
        after->next = NULL;
        free(after);
    }
    if(head == NULL){
        printf("linked list is empty");
    }
}

void main()
{
    head = NULL;

    insert_beg(2);
    insert_beg(6);
    insert_beg(1);
    insert_beg(9);
    insert_beg(4);
    find_len();
    //printf("length is %d",find_len());
    delete_any(1);//9 1 6 2
    print();
    printf("\n");
    delete_any(2);//9 6 2 `
    print();
    printf("\n");
    delete_any(3);//9 6
    print();
    printf("\n");
    delete_any(2);//9
    print();
    printf("\n");
    delete_any(1);//linked list is empty
    print();
    printf("\n");

}
