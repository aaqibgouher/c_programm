#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}sNode;
struct node *head;

struct node* create(){
    return (struct node*)malloc(sizeof(struct node));
}

void print(){
    struct node *temp;
    temp = head;
    if(head != NULL){
        printf("List is : ");
        while(temp!=NULL){
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }else{
        printf("List is empty\n");
    }
    printf("\n");
}

void insert_beginning(){
    struct node *snode;
    
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    snode = create();
    snode->data = n;
    
    if(head == NULL){
        snode->next = NULL;
        head = snode;
    }else{
        snode->next = head;
        head=snode;
    }
    print();
}

void insert_end(){
    struct node *snode, *temp;

    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    snode = create();
    snode->data = n;
    
    if(head == NULL){
        snode->next = NULL;
        head = snode;
    }else{
        temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        snode->next = NULL;
        temp->next = snode;
    }
    print();
}

void insert_any(){
    struct node *snode, *temp;

    int n, pos;
    printf("Enter the number and position: ");
    scanf("%d%d", &n, &pos);

    snode = create();
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
    print();
}

void delete_beginning(){
    struct node *temp;
    temp = head;

    if(head != NULL){
        head = head->next;
        printf("Number %d deleted\n", temp->data);
        free(temp);
    }else{
        printf("List is empty cant delete\n");
    }

    print();
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

    print();
}

void delete_any(){
    struct node *temp, *prev;
    int count = 0, pos;

    printf("Enter the position: ");
    scanf("%d", &pos);

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
    print();
}

void main()
{
    head=NULL;

    int option, suboption;
    while(1){
        printf("\nEnter your option\n");
        printf("1: Insert, 2: Delete, 3: Print, 4: Exit\n");
        scanf("%d", &option);

        switch(option){
            case 1:
                printf("What sub operation in insert\n");
                printf("1: Beginning, 2: End, 3: Any Position\n");
                scanf("%d", &suboption);
                switch(suboption){
                    case 1:
                        insert_beginning(); 
                        break;
                    case 2:
                        insert_end(); 
                        break;
                    case 3:
                        insert_any(); 
                        break;
                    default: return; break;
                } 
                break;
            case 2:
                printf("What sub operation in delete\n");
                printf("1: Beginning, 2: End, 3: Any Position\n");
                scanf("%d", &suboption);
                switch(suboption){
                    case 1:
                        delete_beginning(); 
                        break;
                    case 2:
                        delete_end(); 
                        break;
                    case 3:
                        delete_any(); 
                        break;
                    default: return; break;
                } 
                break; 
                break;
            case 3:
                print(); 
                break;
            case 4:
                printf("Thanks\n");
                return; 
                break;
            default:
                printf("Not a valid option\n"); 
                break;
        }
    }
}
