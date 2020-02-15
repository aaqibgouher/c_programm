#include<stdio.h>;
#include<math.h>;
#include<string.h>;

void main()
{
   int mat1[3][3];
   int mat2[3][3];
   int i,j,n,sum=0;
   printf("enter the mat1:",n);
   for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        scanf("%d ",&n);
        sum+=mat1[i][j];

    }
   }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",sum);
        }
        printf("\n ");
    }

}


