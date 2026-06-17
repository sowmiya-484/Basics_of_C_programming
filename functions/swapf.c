#include<stdio.h>
int swap(int x, int y)
{
	int temp =x;
	x=y;
	y=temp;
	printf("the value of x and y is %d and %d inside the function.\n",x,y);
}
int main()
{
	int x=10,y=12;
	printf("the value of x and y before function call is %d and %d\n",x,y);
	swap(x,y);
	printf("the value of x and y after function call is %d and %d \n",x,y);
	return 0;
}
