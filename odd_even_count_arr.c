#include<stdio.h>
int main()
{
	int a[10],i,c_odd=0,c_even=0;
	printf("enter the elements of a[10]: \t");
	for (i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<10;i++)
	{
		if(a[i]%2==0)
		{
			c_even+=1;
		}
		else
		{
			c_odd+=1;
		}
	}
	printf("the no. of odd values is %d \n",c_odd);
	printf("the no. of  even values is %d \n",c_even);
	return 0;
}
