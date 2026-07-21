#include<stdio.h>
int main()
{
	int n,i,arr[100],*ptr,s;
	printf("enter n: ");
	scanf("%d",&n);
	printf("enter elements: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	ptr=arr;
	s=*ptr;
	for(i=1;i<n;i++)
	{
		ptr++;
		if(*ptr<s)
		{
			s= *ptr;
		}
	}
	printf("smallest=%d\n",s);
	return 0;
}
