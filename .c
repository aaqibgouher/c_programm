#include<stdio.h>;
#include<math.h>;

void main()
{
    int a=5,b=10;
    char choice;
    printf("enter type of mean choice:");
    scanf("%c",&choice);
    switch(choice){
        case 'A':
        printf("A mean is %f\n",(float)(a+b)/2);

        case 'G':
        printf("G mean is %f\n",(float)sqrt(a*b));

        case 'H':
        printf("H mean is %f\n",(float)(2*a*b)/(a+b));
        break;

        default :
        printf("not defined");
    }
    printf("jjj");
}
