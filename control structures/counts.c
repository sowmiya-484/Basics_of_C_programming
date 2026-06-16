#include<stdio.h>
int main()
{
	int num,count=0;
	printf("enter the number: \n");
	scanf("%d",&num);
	while(num>0)
	{
		count++;
		num=num/10;
	}
	printf("the no.of. digits in number is %d \n",count);
	return 0;
}
