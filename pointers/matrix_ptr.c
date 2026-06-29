#include <stdio.h>
int main()
{
    int a[2][3],i,j;
    int (*p)[3];
    printf("enter 6 elements:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
	{
            scanf("%d",&a[i][j]);
	}
    }
    p = a;
    printf("matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
	{
	    	printf("%d\t",p[i][j]);
	}
        printf("\n");
    }
    return 0;
}
