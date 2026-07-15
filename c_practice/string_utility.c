#include<stdio.h>
int length(char *p)
{
	int len=0;
	while(*p++)
	{
		len++;
	}
	return len;
}
void reverse(char *p)
{
	char *start=p;
	char *end=p+length(p)-1;
	char temp;
	while(start<end)
	{
		temp=*start;
		*start=*end;
		*end=temp;
		start++;
		end--;
	}
}
int palindrome(char *p)
{
	char *start=p;
	char *end=p+length(p)-1;
	while(start<end)
	{
		if(*start!=*end)
		{
			return 0;
		}
		start++;
		end--;
	}
	return 1;
}
void count (char *p)
{
	int v=0,c=0;
	while(*p)
	{
		if((*p>='A'&& *p<='Z')||(*p>='a'&&*p<='z'))
		{
			char ch=*p;
			if(ch>='A'&&ch<='Z')
			{
				ch=ch+32;
			}
			if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
			{
                		v++;
			}
            		else
			{
                		c++;
			}
		}
		p++;
	}
	printf("vowels=%d\n",v);
	printf("consonants=%d\n",c);
}
int main()
{
	char s[100];
	printf("enter string: ");
	scanf("%s",s);
	printf("\n length=%d\n",length(s));
	if (palindrome(s))
	{
		printf("palindrome\n");
	}
	else
	{
		printf("not palindrome\n");
	}
	count(s);
	reverse(s);
	printf("reverse=%s\n",s);
	return 0;
}























