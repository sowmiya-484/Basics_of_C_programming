#include<stdio.h>
float square(float num)
{
	return num*num;
}
int main()
{
	int num;
	printf("enter the num to be square :\n");
	scanf("%d",&num);
	printf("the square of %d is %f\n",num,square(num));
	return 0;
}
