#include<stdio.h>

void tower(int n, char s, char a, char d){
    if(n==1) printf("move from %c to %c\n", s, d);
    else {
        tower(n-1, s, d, a);
        printf("move from %c to %c\n", s, d);
        tower(n-1, a, s, d);
    }
}

void main()
{
    tower(6, 's', 'a', 'd');
}
