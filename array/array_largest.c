#include<stdio.h>
int main()
{
	int a[10],i,largest=a[0];
	printf("enter the 10 elements of array:\t");
	for (i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<10;i++)
	{
		if(a[i]>largest)
		{
			largest=a[i];
		}	
	}	
	printf("the largest is %d\n",largest);
	return 0;
}
