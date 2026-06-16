#include<stdio.h>
int main()
{
	int a[5],i,largest,second;
	printf("enter elements:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	second=largest=a[0];
	for(i=1;i<5;i++)
	{
		if(a[i]>largest)
		{
			second=largest;
			largest=a[i];
		}
		else if(a[i]>second && a[i]!=largest)
		{
			second=a[i];
		}
	}
	printf("the second largest is %d\n",second);
	return 0;
}
