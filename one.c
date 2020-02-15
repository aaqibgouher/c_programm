#include<stdio.h>
#include<string.h>

int to_int(char str){
    int n = str - '0';
    return (n);
}

void main()
{
    char str[3];
    char c1,c2,opr;
    int ans,n1,n2;

    while(1){
        scanf("%s",str);
        c1=str[0];
        opr=str[1];
        c2=str[2];

        n1 = to_int(c1);
        n2 = to_int(c2);

        switch(opr){
            case '+': ans=n1+n2; break;
            case '-': ans=n1-n2; break;
            case '*': ans=n1*n2; break;
        }
        printf("ans: %d\n", ans);
    }
}
