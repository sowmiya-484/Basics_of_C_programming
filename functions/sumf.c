#include <stdio.h>
int sum_digits(int num)
{
	int  sum=0;
	while (num!=0)
	{
		int rem=num%10;
		sum=rem+sum;
		num=num/10;
	}
	return sum;
}
int main()
{
	int num;
	printf("enter number:\n");
	scanf("%d",&num);
	int result=sum_digits(num);
	printf("RESULT:%d\n",result);
	return 0;
}
