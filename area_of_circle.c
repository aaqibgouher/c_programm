#include<stdio.h>
#define PI 3.14

void main()
{
    int r;
    float area;

    printf("Enter the radius of circle:\n");
    scanf("%d",&r);
    area = PI*r*r;  //or we can call pow(r,2) function, for that we have to use math.h header file;
    printf("\nArea is %f",area);
}