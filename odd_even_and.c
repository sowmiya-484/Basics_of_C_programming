#include<stdio.h>
int main()
{
	int num;
	printf("enter the number: \n");
	scanf("%d",&num);
	if(num & 1)
	{
		printf("the value is odd \n");
	}
	else
	{
		printf("the value is even \n");
	}
return 0;
}
