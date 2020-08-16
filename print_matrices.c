#include<stdio.h>
#include<math.h>
#include<string.h>

void main()
{
    int mat[3][3] ={1,2,3,4,5,6,7,8,9};
    int tmat[3][3];
    int i,j,m=3,n=3;

    printf("matrix form is:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    printf("transpose of matrix:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            tmat[i][j] = mat[j][i];
            printf("%d ",tmat[i][j]);
        }
        printf("\n");
    }




}


