#include<stdio.h>
#include<math.h>

int arr[] = {1,3,4,5,6,7};

void push_a_number(int k)
{

    int n = sizeof(arr)/sizeof(arr[0]);
    int i;
    for(i=0;i<=n;i++){
        if(i==n) printf("%d ",k);
        else printf("%d ",arr[i]);
    }


}
void display(int a[]){
    int n = sizeof(a)/sizeof(a[0]);
    int i;
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
void insert(int k,int m)
{

}


void main()
{
    push_a_number(99);
    display();
    insert(99,4);
}




