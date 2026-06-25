#include<stdio.h>
union data
{
	int i;
	float f;
	char c;
};
int main()
{
	union data d;
	d.i=100;
	printf("integer=%d\n",d.i);
	d.f=25.75;
	printf("float=%.2f\n",d.f);
	d.c='a';
	printf("character=%c\n",d.c);
	printf("integer=%d\n",d.i);
	printf("float=%.2f\n",d.f);
	printf("character=%c\n",d.c);
	return 0;
}

