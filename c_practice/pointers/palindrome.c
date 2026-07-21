#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	char *start,*end;
	int flag=1;
	printf("enter string: ");
	scanf("%s",str);
	start=str;
	end=str+strlen(str)-1;
	while(start<end)
	{
		if(*start != *end)
		{
			flag=0;
			break;
		}
		start++;
		end--;
	}
	if(flag)
	{
		printf("palindrome\n");
	}
	else
	{
		printf("not palindrome\n");
	}
	return 0;
}
