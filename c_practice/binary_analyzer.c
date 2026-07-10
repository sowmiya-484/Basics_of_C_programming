#include<stdio.h>
void decimalToBinary(int n,int bits[],int *size)
{
	int i=0;
	while(n>0)
	{
		bits[i]=n%2;
		n=n/2;
		i++;
	}
	*size=i;
}
void printBinary(int bits[],int size)
{
	int padding=(4-(size%4))%4;
	int total = padding+size;
	int printed=0;
	for(int i=0;i<padding;i++)
	{
		printf("0");
		printed++;
		if(printed%4==0&&printed!=total)
		{
			printf(" ");
		}
	}
	for(int i= size-1;i>=0;i--)
	{
		printf("%d",bits[i]);
		printed++;
		if(printed%4==0&&printed!=total)
		{
			printf(" ");
		}
	}
	printf("\n");
}
int highestSetBit(int n)
{
	int position =0;
	while(n>1)
	{
		n=n>>1;
		position++;
	}
	return position;
}
int main()
{
	int n,bits[16],size,count=0;
	printf("enter no:\n");
	scanf("%d",&n);
	decimalToBinary(n,bits,&size);
	printf("Binary:");
	printBinary(bits,size);
	printf("bits used:%d\n",size);
	for(int i=0;i<n;i++)
	{
		if(bits[i]==1)
		{
			count++;
		}
	}
	printf("Set bits:%d\n",count);
	printf("highest bit position %d\n",highestSetBit(n));
	return 0;
}
