#include<stdio.h>
#include<string.h>
void ispalin(char str[])
{
	int i,len,check;
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		if(str[i]==str[len-1-i])
		{
			check=1;
		}
		else
		{
			check=0;
		}
	}
	if (check==1)
	{
		printf("the string is palindrome\n");
	}
	else
	{
		printf("the string is not palindrome\n");
	}
}
int main()
{
	char a[100];
	printf("enter string:\n");
	scanf("%s",a);
	ispalin(a);
	return 0;
}
