#include <stdio.h>
int findmax(int *p,int n)
{
    int max = *p;
    int i;
    for(i=1;i<n;i++)
    {
        if(*(p+i)>max)
        {
            max=*(p + i);
        }
    }
    return max;
}
int main()
{
    int a[100],n,i;
    printf("enter size:\n");
    scanf("%d",&n);
    printf("enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("maximum=%d",findmax(a,n));
    return 0;
}
