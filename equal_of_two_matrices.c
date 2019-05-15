#include<stdio.h>;
#include<math.h>;
#include<string.h>;

void main()
{
    int mat1[3][3] ={1,2,3,4,5,6,7,8,9};
    int mat2[3][3] ={1,2,3,4,50,6,7,8,9};
    int i,j,m=3,n=3,flag=1;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(mat1[i][j] != mat2[i][j]) flag=0;

        }
    }
    if(flag==1)printf("matrix is equal.\n");
    else printf("not equal.\n");





}


