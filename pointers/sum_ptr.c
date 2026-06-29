#include <stdio.h>
int main()
{
    int a[100],n,i,sum = 0;
    int *p;
    printf("enter size: ");
    scanf("%d",&n);
    printf("enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    p = a;
    for(i=0;i<n;i++)
    {
        sum+= *p;
        p++;
    }
    printf("\nsum = %d\n",sum);
    return 0;
}
