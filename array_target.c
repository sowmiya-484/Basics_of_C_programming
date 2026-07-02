#include <stdio.h>
int main()
{
    int n,i,j,target;
    printf("Enter total no of elements in arr:\n");
    scanf("%d", &n);
    int num[n];
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &num[i]);
    }
    printf("Enter the target:\n");
    scanf("%d",&target);
    for(i = 0;i<(n - 1);i++)
    {
        for(j = i + 1;j<n;j++)
        {
            if(num[i]+num[j] == target)
            {
                printf("[%d, %d]\n",i,j);
                return 0;
            }
        }
    }
    printf("Result not found\n");
    return 0;
}
