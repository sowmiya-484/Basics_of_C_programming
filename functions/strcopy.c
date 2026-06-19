#include<stdio.h>
void strcopy(char a[],char b[])
{
	int i=0;
	while(a[i]!=0)
	{
		b[i]=a[i];
		i++;
	}
	b[i]='\0';
}
int main()
{
	char source[100],dest[100];
	printf("enter source string:\n");
	fgets(source,sizeof(source),stdin);
	printf("source:%s",source);
	strcopy(source,dest);
	printf("The destination string:%s\n",dest);
	return 0;
}

