#include<stdio.h>;

void main()
{
    int i,m,n,lcm=1, flag=0;
    m=308; n=396;
    int max=(m>n) ? m : n;
    for(i=max;i<m*n;i++){
        if(i%m==0 && i%n==0){
            lcm=i;
            flag=1;
        }

        if(flag) break;
    }
    printf("%d", lcm);
}
