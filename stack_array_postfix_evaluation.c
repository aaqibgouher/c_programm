#include<stdio.h>
#include<string.h>

#define MAX 10

int a[MAX], top=-1;

int is_empty(){
	if(top<0) return 1;
	else return 0;
}

int is_full() {
	if(top>=MAX-1) return 1;
	else return 0;
}

void print(){
	int i;
	if(!is_empty()){
		for(i=0;i<=top;i++){
			printf("%d ", a[i]);
		}
		printf("\n");
	}else{
		printf("Stack is empty cant print.\n");
	}
}

void push(int c){
	if(!is_full()){
		top++;
		a[top] = c;
	}else{
		printf("Stack is full.\n");
	}
}

int pop(){
	if(!is_empty()){
		int c;
		c = a[top];
		top--;
		return c;
	}else{
		printf("Stack is empty.\n");
	}
}

int is_operator(char c){
	if(c == '+' || c == '-' || c == '*') return 1;
	else return 0;
}

int perform(int opr1, char opr, int opr2){
	int ans;
	switch(opr){
		case '+': ans = opr1 + opr2; break;
		case '-': ans = opr1 - opr2; break;
		case '*': ans = opr1 * opr2; break;
	}
	return ans;
}

int parse_int(char c){
	return c - '0';
}

void main(){
	char exp[100] = "123*+42*3+-", c;
	int i, l, opr1, opr2, res;
	l = strlen(exp);

	for(i=0;i<l;i++){
		c=exp[i];
		if(is_operator(c)){
			opr2 = pop();
			opr1 = pop();

			res = perform(opr1, c, opr2);
			push(res);
		}else{
			push(parse_int(c));
		}
	}

	printf("final result : %d\n", pop());
}