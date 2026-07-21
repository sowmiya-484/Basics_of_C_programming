#include<stdio.h>
typedef struct 
{
	unsigned char uartrx:1;
	unsigned char uarttx:1;
	unsigned char timer:1;
	unsigned char reserved:5;
}IRQFlags;
typedef union 
{
	IRQFlags fields;
	unsigned char raw;
}IRQRegister;
void setFlag(IRQRegister *reg,int flagBit)
{
	switch(flagBit)
	{
		case 0:
			reg->fields.uartrx=1;
			break;
		case 1:
			reg->fields.uarttx=1;
			break;
		case 2:
			reg->fields.timer=1;
			break;
	}
}
void clearFlag(IRQRegister *reg,int flagBit)
{
	switch(flagBit)
	{
		case 0:
			reg->fields.uartrx=0;
			break;
		case 1:
			reg->fields.uarttx=0;
			break;
		case 2:
			reg->fields.timer=0;
			break;
	}
}
void printFlags(IRQRegister reg)
{
    printf("\nRaw : 0x%02X\n",reg.raw);
    printf("uartRx : %d\n",reg.fields.uartrx);
    printf("uartTx : %d\n",reg.fields.uarttx);
    printf("timer  : %d\n",reg.fields.timer);
}
int main()
{
    IRQRegister reg;
    reg.raw = 0x00;
    setFlag(&reg,0);
    setFlag(&reg,2);
    printf("After Setting Flags\n");
    printFlags(reg);
    clearFlag(&reg,0);
    printf("\nAfter Clearing UART_RX\n");
    printFlags(reg);
    return 0;
}
