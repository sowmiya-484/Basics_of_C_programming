#include<stdio.h>
void findMinMax(int *arr, int n, int *min, int *max)
{
	*max=*min=*arr;
	for(int i=1;i<n;i++)
	{
		if(*(arr+i)>*max)
		{
			*max=*(arr+i);
		}
		else if(*(arr+i)<*min && *(arr+i)!= *max)
		{
			*min=*(arr+i);
		}
	}
}
int computeRange(int *max,int *min)
{
	int diff = (*max) - (*min);
	return diff;
}		
int main()
{
	int a[10],n,i,min,max;
	printf("enter n:\n");
	scanf("%d",&n);
	printf("enter array elements:");
	for(int i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	findMinMax(a,n,&min,&max);
	int range=computeRange(&max,&min);
	printf("\n max: %d min : %d \nrange:%d\n",max,min,range);
	return 0;
}


