#include<stdio.h>
union data
{
	unsigned short value;
	struct 
	{
		unsigned char low;
		unsigned char high;
	}byte;
};
int main()
{
	union data d;
	d.value=0x1234;
	printf("16 bit value=0x%04x\n",d.value);
	printf("low byte value=0x%02x\n",d.byte.low);
	printf("high byte value=0x%02x\n",d.byte.high);
	return 0;
}

	
	
	
