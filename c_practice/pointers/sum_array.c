#include<stdio.h>
unsigned int sumSamples(volatile unsigned int *buf,int n)
{
	unsigned int sum=0;
	while(n>0)
	{
		sum =sum + *buf;
		buf++;
		n--;
	}
	return sum;
}
int main()
{
	volatile unsigned int adc[10];
	int n,i;
	unsigned int total;
	printf("enter no of samples:");
	scanf("%d",&n);
	printf("\nenter readings:");
	for (i=0;i<n;i++)
	{
		scanf("%u",&adc[i]);
	}
	total=sumSamples(adc,n);
	printf("sum:%u",total);
	return 0;
}
