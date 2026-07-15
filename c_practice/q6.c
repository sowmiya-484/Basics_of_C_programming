#include<stdio.h>
typedef struct {
    unsigned char enable   : 1;
    unsigned char mode     : 2;
    unsigned char speed    : 2;
    unsigned char reserved : 3;
} RegisterFields; 
typedef union {
    RegisterFields fields;
    unsigned char  raw;
} ControlRegister; 
void toggleEnable(ControlRegister *reg)
{
	reg->fields.enable =!reg->fields.enable;
}
void printRegister(ControlRegister reg)
{
	printf("\nraw :0x%02x",reg.raw);
	printf("\nenable : %d mode:%d speed:%d",reg.fields.enable,reg.fields.mode,reg.fields.speed);
}
int main()
{
	ControlRegister reg;
	reg.raw=0x00;
	reg.fields.mode=2;
	reg.fields.speed=3;
        printRegister(reg);
	toggleEnable(&reg);
	printRegister(reg);
	toggleEnable(&reg);
	printRegister(reg);
	return 0;
}

