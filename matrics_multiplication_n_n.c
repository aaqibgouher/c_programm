#include<stdio.h>;
#include<math.h>;
#include<string.h>;

void main()
{
    int i,j,m,n,x,m1,n1,m2,n2,sum;
    int a[2][2] = {1,2,3,4};
    int b[2][3] = {1,2,3,4,5,6};
    int c[100][100];
    m1=2;n1=2;
    m2=2;n2=3;
    m=m1;n=n2;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            sum=0;
            for(x=0;x<n1;x++){
                sum+=a[i][x]*b[x][j];
            }
            c[i][j]= sum;
        }
    }

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%3d ", c[i][j]);
        }
        printf("\n");
    }
}


