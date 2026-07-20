#include<stdio.h>
void rowSums(int (*mat)[4],int rows,int sums[])
{
	int i,j;
	for(i=0;i<rows;i++)
	{
		sums[i]=0;
		for(j=0;j<4;j++)
		{
			sums[i]+= *(*(mat+i)+j);
		}
	}
}
int main()
{
	int grid[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	int sums[3];
	int i;
	rowSums(grid,3,sums);
	for(i=0;i<3;i++)
	{
		printf("row %d sum: %d\n",i,sums[i]);
	}
	return 0;
}
