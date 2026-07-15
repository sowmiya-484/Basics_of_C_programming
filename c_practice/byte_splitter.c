#include<stdio.h>
typedef union {
    unsigned short word;
    unsigned char  bytes[2];
} WordBytes;
void splitWord(unsigned short w, unsigned char *hi, unsigned char *lo)
{
        WordBytes b;
	b.word=w;
	*hi=b.bytes[1];
	*lo=b.bytes[0];
}
int main()
{
	unsigned char hi,lo;
	unsigned short ab;
	printf("enter 16bit value:\n");
	scanf("%hX",&ab);
	splitWord(ab,&hi,&lo);
	printf("high byte :0x%02X\t low byte :0x%02X",hi,lo);
	return 0;
}
