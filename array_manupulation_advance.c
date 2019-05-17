#include<stdio.h>

int a[10000],n=0;

// this function will display arr seperated by white space, nd finally new line
void display(){

}

// it will insert k in the last of the array
void push(int k){
    
}

// it will insert at specific position, 
void insert(int k, int position){
    
}

// it will remove last element
void pop(){
    
}

// it will remove from that position
void remove(int position){

}

// it will show the array in revere order
void reverse(){

}

// it will show the index of the element if exist in array, else show not found
void find(int k){

}

// it will show the sub array - both start n end are inclusive
void sub_array(int start, int end){
    
}

void main()
{
    display();
    push(2); // 2
    push(5); // 2 5 // 2 6 5
    insert(6,2); // 2 6 5
    display();
    reverse(); // 5 6 2
    find(6); // index - 2
    push(3); // 2 6 5 3
    sub_array(1,2); // 6 5
    remove(2); // 2 5 3
    pop(); // 2 5
    display();
}