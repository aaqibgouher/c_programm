#include<Stdio.h>

int gcd(int a, int b){
    while(a!=b){
        if(a>b) return gcd(a-b, b);
        else return gcd(a, b-a);
    }
    return a;
}

void main()
{
    int a=9, b=6;
    int hcf;
    hcf = gcd(a,b);
    printf("%d", hcf);
}
