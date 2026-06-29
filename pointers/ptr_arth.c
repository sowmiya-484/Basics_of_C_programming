#include <stdio.h>
int main()
{
    int a[100],n,i;
    int *p;
    printf("enter size: ");
    scanf("%d",&n);
    printf("enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    p = a;
    printf("array elements:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d\t",*(p+i));
    }
    return 0;
}
