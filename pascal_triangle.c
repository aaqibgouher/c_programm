#include<stdio.h>
void main()
{
    int i,j,n=10,a[100][100];
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            if(i>0 && j>0) a[i][j]=a[i-1][j-1] + a[i-1][j];
            else a[i][j] = 1;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }
}
