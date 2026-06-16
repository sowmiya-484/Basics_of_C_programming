#include<stdio.h>
int main()
{
	int num;
	printf("enter the number:\n");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf(" the number %d is EVEN\n",num);
	}
	else
	{
		printf("The number %d is ODD\n",num);
	}
	return 0;
}
