#include <stdio.h>
void reverse(int n,int *rev)
{
    int rem;
    *rev=0;
    while(n!=0)
    {
        rem=n%10;
        *rev=*rev * 10 + rem;
        n=n/10;
    }
}
int main()
{
    int n,rev;
    printf("enter number: ");
    scanf("%d",&n);
    reverse(n,&rev);
    printf("reversed number = %d",rev);
    return 0;
}
