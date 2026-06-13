#include<stdio.h>
int main()
{
	int num,rev=0,rem;
	printf("enter the number to be reversed:\n");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		rev=rev*10 + rem;
		num=num/10;
	}
	printf("reversed no is %d\n",rev);
	
	return 0;
}
