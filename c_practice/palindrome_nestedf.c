#include<stdio.h>
int reverse(int n)
{
	int rev=0,rem;
	while(n!=0)
	{
		rem=n%10;
		rev=(rev*10)+rem;
		n=n/10;
	}
	return rev;
}
int ispalindrome(int n)
{
	if(n==reverse(n))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
		
int main()
{
	int a[1000];
	int n,count=0,op,i;
	printf("enter 1 for integer palindrome,2-for count of 3 digit aplindrome:\n");
	scanf("%d",&op);
	switch(op)
	{
		case 1:
	 		printf("enter  n:\n");
			scanf("%d",&n);
			if (ispalindrome(n)==1)
			{
				printf("PALINDROME\n");
			}
			else
			{
				printf("NOT PALINDROME\n");
			}
			break;
		case 2:
			for(i=100;i<1000;i++)
			{
				if (ispalindrome(a[i]=i)==1)
				{	
					count++;
				}
			}
		

			printf("Total count:%d",count);
			break;
	}
	return 0;
}
