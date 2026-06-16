#include<stdio.h>
int mystrlen(char str[]);
int mystrlen(char str[])
{
	int i=0;
	while(str[i])
	{
		i++;
	}
	return i;
}
int main()
{
	char str[100];
	printf("enter the input string:\n");
	scanf("%s",str);
	printf("length =%d\n",mystrlen(str));
	return 0;
}
