#include<stdio.h>

int a[10000],n=0;

// this function will display arr seperated by white space, nd finally new line
void display(){
    int i;
    if(n==0){
        printf("n = %d => Array empty\n",n);
    }
    else {
        printf("n = %d => ",n);
        for(i=0;i<n;i++){
            printf("%d ",a[i]);
        }
        printf("\n");
    }

}

// it will insert k in the last of the array
void push(int k){
    a[n]=k;
    n++;
}

// it will insert at specific position,
void insert(int k, int position){
    int i,p;
    p = position -1;
    for(i=n-1;i>=p;i--){
        a[i+1] = a[i];
    }
    a[p] =k;
    n++;

}

// it will remove last element
void pop()
{
    n--;
}

// it will remove from that position
void removee(int position)
{
    int i,p=position -1;
    //printf("%d \n",n);
    for(i=p;i<n-1;i++){
        a[i] = a[i+1];
    }
    n--;
}

// it will show the array in revere order
void reverse()
{
    int i,k;
    for(i=0;i<n;i++){
        printf("%d ",a[n-1-i]);

    }
    printf("\n");

}

// it will show the index of the element if exist in array, else show not found
int find(int k){
    int i;
    for(i=0;i<n;i++){
        if(a[i]==k) return(i);
    } return(0);
}

// it will show the sub array - both start n end are inclusive
void sub_array(int start, int end){
    int i;
    for(i=start;i<=end;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
void reverse2(){
    int i,t;
    for(i=0;i<n/2;i++){
        t=a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = t;
    }
}

void main()
{
    display();
    push(2); // 2
    display();
    push(5); // 2 5 // 2 6 5
    display();
    push(7);
    display();
    insert(6,2); // 2 6 5
    display();
    reverse(); // 5 6 2
    display();
    printf("%d \n",find(100)); // index - 2
    display();
    push(3); // 2 6 5 3
    display();
    push(9);
    display();
    sub_array(1,4); // 6 5
    display();
    removee(3); // 2 5 3
    display();
    removee(4);
    display();
    pop(); // 2 5
    display();

}
