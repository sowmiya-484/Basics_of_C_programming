#include<stdio.h>
int* sharedvar()
{
	static int x=0;
	return &x;
}
void increment()
{
	(*sharedvar())++;
}
void display()
{
	printf("value = %d\n",*sharedvar());
}
int main()
{
	increment();
	increment();
	display();
	return 0;
}
