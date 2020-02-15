#include<stdio.h>
#include<math.h>

int arr[] = {1,3,4,5,6,7};
int n = sizeof(arr)/sizeof(arr[0]);

void insert_At_End(int k)
{

    //int n = sizeof(arr)/sizeof(arr[0]);
    int i;
    for(i=0;i<=n;i++){
        if(i == n){
            arr[i] = k;
            n++;    
        }    
    }
}
void display(){
    //int n = sizeof(arr)/sizeof(arr[0]);
    int i;
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void insert_At_Any(int k,int m)
{
    //int n = sizeof(arr)/sizeof(arr[0]);
    int i;
    for(i=n-1;i>=m;i--){
        if(i == m) arr[i] = k;
        else arr[i+1] = arr[i];
    }
}


void main()
{
    insert_At_End(99);//1 3 4 5 6 7 99
    display();  //1 3 4 5 6 7 99
    insert_At_Any(99,4); // 1 3 4 5 99 6 7 99
    display();

}





