#include<stdio.h>
#include<ctype.h>
void classify(char str[]){
	int vowels=0,consonants=0,digits=0,spaces=0,i;
	for (i=0;str[i]!='\0';i++){
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
}
int main()
{
	char a[100];
	printf("enter string:\n");
	fgets(a,sizeof(a),stdin);
	classify(a);
	return 0;
}
