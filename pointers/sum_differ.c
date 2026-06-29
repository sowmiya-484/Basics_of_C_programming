#include <stdio.h>
void calculate(int a,int b,int *sum,int *diff)
{
    *sum = a + b;
    *diff = a - b;
}
int main()
{
    int a,b,sum,diff;
    printf("enter two numbers: ");
    scanf("%d%d",&a,&b);
    calculate(a,b,&sum,&diff);
    printf("sum = %d\n",sum);
    printf("difference = %d\n",diff);
    return 0;
}
