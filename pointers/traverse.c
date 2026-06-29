#include <stdio.h>
int main()
{
    int a[100],n,i;
    int *p;
    printf("enter size:\n");
    scanf("%d",&n);
    printf("enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    p = a;
    printf("using *(p+i):\n");
    for(i=0;i<n;i++)
    {
        printf("%d",*(p+i));
    }
    printf("\nusing p[i]:\n");
    for(i=0;i<n;i++)
    {
     	    printf("%d",p[i]);
    }
    printf("\nusing *(i+p):\n");
    for(i = 0; i < n; i++)
    {
        printf("%d",*(i+p));
    }
    return 0;
}
