#include<stdio.h>
#include<string.h>
int main()
{
	char str[80];
	int i,len,check;
	printf("enter the string:\n");
	scanf("%s",str);
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
	return 0;
}
