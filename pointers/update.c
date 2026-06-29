#include <stdio.h>
void increment(int *p)
{
    (*p)++;
}
int main()
{
    int n;
    printf("enter number: ");
    scanf("%d",&n);
    increment(&n);
    printf("after increment = %d",n);
    return 0;
}
