#include<stdio.h>
void trackme()
{
	static int count = 0;
	count++;
	printf("I have been called %d times\n",count);
}
int main()
{
	trackme();
	trackme();
	trackme();
	return 0;
}
