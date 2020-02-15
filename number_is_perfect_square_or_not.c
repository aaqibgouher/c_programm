#include<stdio.h>
#include<math.h>

void is_perfect_square(int n){
    float m = sqrt(n);
    int p = m;
    if((m-p)==0){
        printf("yes");
    }
    else printf("no");
}

void main()
{
    int n;
    scanf("%d",&n);
    is_perfect_square(n);


}
