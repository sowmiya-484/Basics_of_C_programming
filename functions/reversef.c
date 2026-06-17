#include<stdio.h>
int reverse(int n)
{
	int rev=0;
	while(n!=0)
	{
		int rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	return rev;
}
int main()
{
	int n;
	printf("enter number :\n");
	scanf("%d",&n);
	printf("reversed:%d\n",reverse(n));
	return 0;
}
