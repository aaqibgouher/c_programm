#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
} *head=NULL;

struct node* create(){
    struct node *new_node = (struct node*)malloc(sizeof(struct node));
    return new_node;
}

void print()
{
    struct node *temp;
    temp=head;
    while(temp!=NULL){
        printf("%d ", temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void push_front(int data){
    struct node *new_node = create();

    new_node->data=data;
    new_node->next=head;

    head=new_node;
}

void push_back(int data){
    struct node *new_node = create(), *temp=NULL;

    new_node->data=data;
    new_node->next=NULL;

    temp=head;
    while(temp->next){
        temp=temp->next;
    }
    temp->next=new_node;
}

void push_at(int data, int pos){
    struct node *new_node = create(), *temp=NULL;
    int count=0;

    new_node->data=data;

    temp=head;
    while(temp->next){
        count++;
        if(count==pos) break;
        temp=temp->next;
    }
    new_node->next=temp->next;
    temp->next=new_node;
}

void pop_front(){
    struct node *temp;

    if(head==NULL) printf("Already empty");
    else{
        temp=head;
        head=head->next;
        printf("deleted first number is %d", temp->data);
        free(temp);
    }
    printf("\n");
}

void pop_back(){
    struct node *temp, *last_node;

    if(head==NULL) printf("Already empty");
    else{
        temp=head;
        last_node=head;
        while(temp->next){
            last_node=temp;
            temp=temp->next;
        }
        last_node->next=NULL;
        printf("deleted last number is %d", temp->data);
        free(temp);
    }
    printf("\n");
}

void reverse(){
    struct node *temp,*current, *prev;

    if(head!=NULL){
        temp=head;
        prev=temp;
        current=temp->next;
        temp=temp->next;

        prev->next=NULL;
        while(temp!=NULL){
            temp=temp->next;
            current->next=prev;
            prev=current;
            current=temp;
        }
        head=prev;
    }
}

int main()
{
    push_front(1);
    push_front(2);
    push_front(3);
    push_back(4);
    push_back(5);
    push_at(6,3);
    print();
    pop_front();
    pop_back();
    print();
    reverse();
    print();
    return 0;
}
