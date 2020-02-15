//binary search tree , creating a binary search tree and making it in inorder:
#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node *left, *right;
} btree;
btree *root, *snode;

struct node* create(int data){
    snode = (struct node*)malloc(sizeof(struct node));
    snode->data = data;
    snode->left = NULL;
    snode->right = NULL;

    return snode;
}

struct node* insert(struct node *snode, int data){
	if(snode == NULL){
		snode = create(data);
	}else{
		if(data < snode->data) snode->left = insert(snode->left, data);
		else snode->right = insert(snode->right, data);
	}
	return snode;
}

void inorder(struct node *snode){
	if(snode != NULL){
		inorder(snode->left);
		printf("%d ", snode->data);
		inorder(snode->right);
	}
}

void main(){
	root = NULL;

	// creation of tree
	root = insert(root, 20);
	root = insert(root, 10);
	root = insert(root, 24);
	root = insert(root, 3);
	root = insert(root, 12);
	root = insert(root, 22);
	root = insert(root, 30);
	root = insert(root, 2);
	root = insert(root, 5);
	root = insert(root, 16);
	root = insert(root, 23);
	root = insert(root, 14);

	inorder(root);
}