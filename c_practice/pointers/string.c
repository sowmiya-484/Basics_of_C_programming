#include<stdio.h>
#include<string.h>
#include<ctype.h>
typedef int(*stringOperation)(char*);
int stringLength(char str[])
{
	return strlen(str);
}
int  countVowels(char str[])
{
	int count=0;
	for(int i =0;str[i]!='\0';i++)
	{
		char ch=tolower(str[i]);
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
		{
			count++;
		}
	}
	return count;
}
int  stringReverse(char str[])
{
	int len =strlen(str);
	printf("reversed string : ");
	for(int i=len-i;i>=0;i++)
	{
		printf("%c",str[i]);
	}
	printf("\n");
	return 0;
}
int main()
{
	char str[100];
	int choice;
	stringOperation operation[4]={stringLength,stringReverse,countVowels};
	printf("enter a string : ");
	fgets(str,sizeof(str),stdin);
	str[strcspn(str,"\n")]='\0';
	printf("enter choice(1-len 2-rev 3-vowels): \n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("length =%d\n",operation[0](str));
			break;
		case 2:
			operation[1](str);
			break;
		case 3:
			printf("vowels: %d\n",operation[2](str));
			break;
		default:
			printf("invalid choice \n");
	}
	return 0;
}

