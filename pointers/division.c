#include <stdio.h>
void divide(int a,int b,int *q,int *r)
{
    *q=a/b;
    *r=a%b;
}
int main()
{
    int a,b,q,r;
    printf("enter dividend and divisor:\n");
    scanf("%d%d",&a,&b);
    divide(a,b,&q,&r);
    printf("quotient=%d\n",q);
    printf("remainder=%d\n",r);
    return 0;
}
