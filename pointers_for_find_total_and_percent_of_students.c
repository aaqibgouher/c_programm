#include<stdio.h>

float find_topper(float topper[],int n){
    float max = -99999.9;
    int i,flag=0;
    for(i=0;i<n;i++){
        if(topper[i]>max){
            max = topper[i];
        }
    }
    return(max);
}

struct student
{
    char *name[10];
    int p,c,m;
};

void main()
{
    int n =3,total=0,index=0;
    float topper[n];
    float percentage=0,top_percent;
    struct student student1[n],*ptr;
    for(ptr=student1;ptr<student1+n;ptr++){
        printf("enter Name and marks of p,c,m:");
        scanf("%s %d %d %d",ptr->name,&ptr->p,&ptr->c,&ptr->m);
        total = ptr->p + ptr->c + ptr->m;
        percentage = (float)(total/300.0)*100;

        topper[index] = percentage;
        index++;
        printf("Name: %s\nphysics marks: %d\nchemistry marks: %d\nmaths marks: %d\ntotal: %d\npercentage: %f",ptr->name,ptr->p,ptr->c,ptr->m,total,percentage);
        printf("\n");
        printf("\n");
    }
    top_percent = find_topper(topper,n);
    printf("highest percentage is %f",top_percent);

}






