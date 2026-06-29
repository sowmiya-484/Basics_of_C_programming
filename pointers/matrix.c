#include<stdio.h>
int main()
{
	int a[10][10],r,c,i,j;
	int (*p)[10];
	printf("enter rows nd column:\n");
	scanf("%d%d",&r,&c);
	printf("enter elements:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	p=a;
	printf("matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",*(*(p+i)+j));
		}
		printf("\n");
	}
	return 0;
}
