#include<stdio.h>
#include<stdlib.h>
int** createMatrix(int m,int n)
{
	int **mat;
	int i;
	mat=(int**)malloc(m*sizeof(int*));
	if(mat==NULL)
	{
		printf("memory allocation failed\n");
		return NULL;
	}
	for(i=0;i<m;i++)
	{
		mat[i]=(int*)malloc(n*sizeof(int));
		if(mat[i]==NULL)
		{
			printf("memory allocation failed\n");
			for(int j=0;j<i;j++)
			{
				free(mat[i]);
			}
			free(mat);
			return NULL;
		}
	}
	return mat;
}
void freematrix(int **mat,int m)
{
	int i;
	for(i=0;i<m;i++)
	{
		free(mat[i]);
	}
	free(mat);
	printf("memory freed successfully\n");
}
int main()
{
	int m,n;
	int i,j;
	scanf("%d%d",&m,&n);
	int **matrix= createMatrix(m,n);
	if(matrix==NULL)
	{
		return 1;
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",matrix[i][j]);
		}
		printf("\n");
	}
	freematrix(matrix,m);
	return 0;
}
