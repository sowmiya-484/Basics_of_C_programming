#include<stdio.h>
int main()
{
	int a[5],i,key,found=0;
	printf("enter the elements of array:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element to be searched in array:\n");
	scanf("%d",&key);
	for (i=0;i<5;i++)
	{
		if(a[i]==key)
		{
			printf("Founded %d at a[%d]!!\n",key,i);
			found=1;
			break;
		}
	}
	if (found==0)
	{
		printf("entered key elmenet is not found\n");
	}
	return 0;
}

