#include<stdio.h>
typedef struct {
    char  name[20];
    float price;
    int   qty;
} Product; 
int findMostExpensive(Product arr[], int n)
{
	int index=0;
	for(int i=1;i<n;i++)
	{
		if(arr[index].price<arr[i].price)
		{
			index=i;
		}
	}
	return index;
}
int main()
{
	Product p[10];
	int n,index;
	printf("enter no of products(max 10):\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("enter product %d details:\n",i+1);
		printf("name:\n");
		scanf("%s",p[i].name);
		printf("Price:\n");
		scanf("%f",&p[i].price);
		printf("quantity:\n");
		scanf("%d",&p[i].qty);
	}
	index=findMostExpensive(p,n);
	printf("Most Expensive: %s (Rs.%.2f)\n",p[index].name,p[index].price);
	return 0;
}
