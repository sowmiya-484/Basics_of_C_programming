#include<stdio.h>
int square(int n)
{
	return n*n;
}
int cube(int n)
{
	return n*n*n;
}
int (*selectOperation(int choice))(int)
{
	if(choice==1)
	{
		return square;
	}
	else
	{
		return cube;
	}
}
int main()
{
	int choice,num;
	int (*operation)(int);
	printf("enter choice(1-square,2-cube): \n");
	scanf("%d",&choice);
	printf("enter number: \n");
	scanf("%d",&num);
	operation =selectOperation(choice);
	printf("Result=%d\n",operation(num));
	return 0;
}

