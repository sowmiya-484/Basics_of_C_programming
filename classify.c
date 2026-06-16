#include<stdio.h>
#include<ctype.h>
int main()
{
	char str[100];
	int vowels=0,consonants=0,digits=0,spaces=0,i;
	printf("enter string:\n");
	fgets(str,sizeof(str),stdin);
	for (i=0;str[i]!='\0';i++)
	{
		char ch=str[i];
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
		{
			vowels++;
		}
		else if(isalpha(ch))
		{
			consonants++;
		}
		else if(isdigit(ch))
		{
			digits++;
		}
		else if(ch==' ')
		{
			spaces++;
		}
	}
	printf("the string has vowels:%d\nconsonants:%d\ndigits:%d\nspaces:%d\n",vowels,consonants,digits,spaces);
	return 0;
}
