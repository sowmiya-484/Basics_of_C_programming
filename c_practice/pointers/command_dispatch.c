#include<stdio.h>
typedef void (*commandHandler)(void);
void ledon(void)
{
	printf("LED ON\n");
}
void ledoff(void)
{
	printf("LED OFF\n");
}
void reset(void)
{
	printf("RESET\n");
}
void status(void)
{
	printf("STATUS\n");
}
void dispatch(commandHandler table[],int tablesize,int cmdid)
{
	if (cmdid>=0 && cmdid<tablesize)
	{
		table[cmdid]();
	}
	else
	{
		printf("invalid command \n");
	}
}
int main()
{
	commandHandler table[4]={ledon,ledoff,reset,status};
	int cmdid;
	printf("enter command id(0-3):");
	scanf("%d",&cmdid);
	dispatch(table,4,cmdid);
	return 0;
}

