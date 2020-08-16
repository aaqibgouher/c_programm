#include<stdio.h>
#include<math.h>

void main()
{
    int a,b,c;
    float root1, root2, d;

    printf("Enter a,b,c for ax2+bx+c=0\n");
    scanf("%d%d%d", &a,&b,&c);

    d=pow(b,2)-4*a*c;

    printf("d=%f\n", d);
    if(d<0){
        printf("root are imagenory");
    }else{
        root1=(-b+sqrt(d))/(2*a);
        root2=(-b-sqrt(d))/(2*a);

        printf("root1 %f root2 %f", root1, root2);
    }
}
