#include<stdio.h>
int main()
{
	int year;
	printf("enter the year:\n");
	scanf("%d",&year);
	if (year%4==0 && year%100!=0 || year%400 ==0)
	{
		printf("The year is leap year\n");
	}
	else
	{
		printf("the year is not leap year\n");
	}
	return 0;
}
