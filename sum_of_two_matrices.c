#include<stdio.h>;
#include<math.h>;
#include<string.h>;

void main()
{
    int sum[10][10];
    int i,j,m,n;
    m=3; n=3;
    int mat1[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int mat2[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    printf("sum is :\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            sum[i][j] = mat1[i][j] + mat2[i][j];
            printf("%3d ",sum[i][j]);
        }
        printf("\n");
    }



}


