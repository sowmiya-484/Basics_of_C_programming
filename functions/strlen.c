#include<stdio.h>
int len_str(char str[])
{
	int i=0;
	while(str[i]!=0)
	{
		i++;
	}
	return i;
}
int main()
{
	char str[200];
	printf("enter  the string:");
	scanf("%s",str);
	printf("the no. of characters: %d\n",len_str(str));
	return 0;
}
