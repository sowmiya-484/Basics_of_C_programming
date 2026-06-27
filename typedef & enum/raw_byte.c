#include<stdio.h>
union data
{
	int i;
	float f;
};
int main()
{
	union data d;
	d.i=1000;
	unsigned char *p=(unsigned char *)&d;
	printf("raw memory:\n");
	for (int i=0;i<sizeof(union data);i++)
	{
		printf("%02x ",p[i]);
	}
	printf("\n");
	return 0;
}
