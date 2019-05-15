#include<stdio.h>;
#include<math.h>;
#include<string.h>;

void main()
{
    int i,j,m,n,x,y;
    int a[3][3] = {1,2,3,4,5,6,7,8,9};
    int b[3][3] = {1,2,3,4,5,6,7,8,9};
    int c[3][3];
    m=3;n=3;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            c[i][j]= a[i][0]*b[0][j] + a[i][1]*b[1][j] + a[i][2]*b[2][j];
        }
    }

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%3d ", c[i][j]);
        }
        printf("\n");
    }
}


