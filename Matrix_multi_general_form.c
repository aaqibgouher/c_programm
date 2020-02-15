#include<stdio.h>

void main()
{
	int m1,n1,m2,n2,i,j,k;
	int mat1[10][10],mat2[10][10],mat3[10][10];

	printf("enter the value of 1st matric row and columns:\n");
	scanf("%d %d",&m1,&n1);
	printf("Enter the value of 2nd matrix rows and column:\n");
	scanf("%d %d",&m2,&n2);

	printf("Enter matrix1 elemnts row wise:\n");
	for(i=0;i<m1;i++){
		for(j=0;j<n1;j++){
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("Enter matrix2 elemnts row wise:\n");
	for(i=0;i<m2;i++){
		for(j=0;j<n2;j++){
			scanf("%d",&mat2[i][j]);
		}
	}
	printf("Product is :\n");
	for(i=0;i<m1;i++){
		for(j=0;j<n2;j++){
				mat3[i][j] = 0;
			for(k=0;k<n1;k++){
				mat3[i][j] = mat3[i][j] + mat1[i][k] * mat2[k][j]; 
			}
			printf("%4d ",mat3[i][j]);
		}
		printf("\n");
	}
}