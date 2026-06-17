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
int palin(int num)
{
	if (num==reverse(num)){
		return 1;
	}
	else{
		return 0;
	}
}
int main()
{
	int n;
	printf("enter number:\n");
	scanf("%d",&n);
	if(palin(n)){
		printf("the number is palindrome\n");
	}
	else{
		printf("the number is not palindrome\n");
	}
	return 0;
}

