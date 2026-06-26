#include<stdio.h>
union sensor
{
	float temperature;
	int raw;
};
int main()
{
	union sensor s;
	s.temperature=36.5;
	printf("temperature=%.2f\n",s.temperature);
	printf("raw integer=%d\n",s.raw);
	unsigned char *ptr=(unsigned char *)&s;
	printf("\nraw memory(hex):\n");
	for (int i=0;i<sizeof(s);i++)
	{
		printf("%02X",ptr[i]);
	}
	printf("\n");
	return 0;
}


