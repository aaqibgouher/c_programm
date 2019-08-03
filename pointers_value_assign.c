#include<stdio.h>

struct student
{
    char *name;
    int age;
} student1,*ptr;

void main()
{
    struct student student1,*ptr;
    ptr = &student1;
    ptr->name= "aaqib";
    ptr->age= 18;
    printf("name = %s,age = %d",ptr->name,ptr->age);

}
