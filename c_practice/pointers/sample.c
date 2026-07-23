#include<stdio.h>
void display()
{
	printf("hello world\n");
}
int main()
{
	void(*ptr)();
	ptr=display;
	ptr();
	return 0;
}
