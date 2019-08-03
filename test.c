#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *left,*right;
}btree;

btree *root,*snode;

struct node* create(int n){

    snode = (struct node*)malloc(sizeof(struct node));
    snode->data = n;
    snode->left = NULL;
    snode->right = NULL;
    printf("%d ",snode->data);
    return snode;
}

int count(struct node *snode){
    if(snode == NULL) return 0;
    else return count(snode->left) + count(snode->right) + 1;

}

int leaf_count(struct node *snode){
    if(snode == NULL) return 0;
    else if(snode->left == NULL && snode->right == NULL) return 1;
    else return leaf_count(snode->left) + leaf_count(snode->right);

}

int max(int a,int b){
    if(a>b) return a;
    else return b;
}

int find_height(struct node *snode){
    if(snode == NULL) return 0;
    else return max(find_height(snode->left),find_height(snode->right)) + 1;
}

void main()
{
    root = create(1);
    root->left = create(2);
    root->right = create(3);
    root->left->left = create(4);
    root->left->right = create(5);
    root->right->right = create(6);
    root->left->left->right = create(7);
    root->left->right->left = create(8);
    root->right->right->left = create(9);

    printf("\nnumber of nodes are %d",count(root));
    printf("\nnumber of leaf nodes are %d",leaf_count(root));
    printf("\nHeight of tree is %d",find_height(root));
}