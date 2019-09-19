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

void newline(){
	printf("\n");
}

void preorder(struct node *snode){
	if(snode != NULL){
		printf("%d ", snode->data);
		preorder(snode->left);
		preorder(snode->right);
	}
}

void inorder(struct node *snode){
	if(snode != NULL){
		inorder(snode->left);
		printf("%d ", snode->data);
		inorder(snode->right);
	}
}

void postorder(struct node *snode){
	if(snode != NULL){
		postorder(snode->left);
		postorder(snode->right);
		printf("%d ", snode->data);
	}
}

int search(struct node *snode, int n){
	if(snode == NULL) return 0;

	if(n == snode->data) return 1;
	else if(n < snode->data) return search(snode->left, n);
	else return search(snode->right, n);
}

void main(){
	root = NULL;

	// creation of tree
	root = create(20);
	root->left = create(10);
	root->right = create(24);
	root->left->left = create(3);
	root->left->right = create(12);
	root->right->left = create(22);
	root->right->right = create(30);
	root->left->left->left = create(2);
	root->left->left->right = create(5);
	root->left->right->right = create(16);
	root->right->left->right = create(23);
	root->left->right->right->left = create(14);

	if(search(root, 16)) printf("found\n");
	else printf("not found\n");

	if(search(root, 99)) printf("found\n");
	else printf("not found\n");
}