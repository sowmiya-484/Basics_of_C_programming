#include<stdio.h>
int validateInputs(int fan,int led,int alarm);
unsigned char packRegister(int fan,int led,int alarm);
void printBinary(unsigned char reg);
void unpackRegister(unsigned char reg,int *fan,int *led,int *alarm);
int main()
{
	int fan,led,alarm;
	int ufan,uled,ualarm;
	unsigned char reg;
	printf("enter fan speed(0-3):\n");
	scanf("%d",&fan);
	printf("enter led mode(0-3):\n");
	scanf("%d",&led);
	printf("enter alarm(0/1):\n");
	scanf("%d",&alarm);
	if(validateInputs(fan,led,alarm))
	{
		printf("\nValidation : Passed\n");
	}
	else
	{
		printf("\nValidation : Failed\n");
		return 0;
	}
	reg=packRegister(fan,led,alarm);
	printf("Packed 0x%02x\n",reg);
	printf("Binary:");
	printBinary(reg);
	unpackRegister(reg,&ufan,&uled,&ualarm);
	if(fan==ufan && led==uled && alarm==ualarm)
	{
		printf("Verify:OK\n");
	}
	else
	{
		printf("Verify:FAIL\n");
	}
	return 0;
}
int validateInputs(int fan,int led,int alarm)
{
	if(fan>=0 && fan<=3)
	{
		if(led>=0 && led<=3)
		{
			if(alarm==0 || alarm==1)
			{
				return 1;
			}
			else
			{
				printf("alarm must be 0/1\n");
				return 0;
			}
		}
		else
		{
			printf("led must be 0-3\n");
			return 0;
		}
	}
	else
	{
		printf("fan must be 0-3\n");
		return 0;
	}
}
unsigned char packRegister(int fan,int led,int alarm)
{
	unsigned char reg=0;
	reg=reg|fan;
	reg=reg|(led<<2);
	reg=reg|(alarm<<4);
	return reg;
}
void unpackRegister(unsigned char reg,int *fan,int *led,int *alarm)
{
	*fan=reg&0x03;
	*led=(reg>>2)&0x03;
	*alarm=(reg>>4)&0x01;
}
void printBinary(unsigned char reg)
{
	int i;
	for(i=7;i>=0;i--)
	{
		printf("%d",(reg>>i)&1);
	}
	printf("\n");
}
				






