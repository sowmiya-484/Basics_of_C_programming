#include<stdio.h>
#include<string.h>
void sortWords(char *words[],int n)
{
	int i,j;
	char *temp;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmp(words[i],words[j])>0)
			{
				temp=words[i];
				words[i]=words[j];
				words[j]=temp;
			}
		}
	}
}
int main()
{
	int n,i;
	char name[10][50];
	char *words[10];
	printf("enter number of devices:\n");
	scanf("%d",&n);
	printf("enter device names:\n");
	for(i=0;i<n;i++)
	{
		scanf("%s",name[i]);
		words[i]=name[i];
	}
	sortWords(words,n);
	printf("\nSorted Device Names:\n");
	for(i=0;i<n;i++)
	{
		printf("%s ",words[i]);
	}
	return 0;
}
