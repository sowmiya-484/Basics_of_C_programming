#include<stdio.h>
int main()
{
	int a[4],i;
	printf("enter the 4 elements array : \n");
	for (i=0;i<4;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("REVERESED ARRAY\n");
	for (i=3;i>=0;i--)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
