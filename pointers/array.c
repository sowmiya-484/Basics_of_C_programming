#include <stdio.h>
void printarray(int *p, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\n",*(p + i));
    }
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
    printarray(a,n);
    return 0;
}
