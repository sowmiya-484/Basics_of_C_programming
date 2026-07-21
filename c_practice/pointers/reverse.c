#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	char *ptr;
	printf("enter  string : \n");
	scanf("%s",str);
	ptr=str+strlen(str)-1;
	printf("reversed string : ");
	while(ptr>=str)
	{
		printf("%c",*ptr);
		ptr--;
	}
	return 0;
}
