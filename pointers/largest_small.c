#include<stdio.h>
int main()
{
    int a[100],n,i;
    int *p;
    int small,large;
    printf("enter size: ");
    scanf("%d",&n);
    printf("enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    p = a;
    small = *p;
    large = *p;
    for(i=1;i<n;i++)
    {
        p++;
        if(*p < small){
            small = *p;
	}
	else if(*p > large){
            large = *p;
	}
    }
    printf("smallest = %d\n",small);
    printf("largest = %d\n",large);
    return 0;
}
