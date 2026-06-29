#include <stdio.h>
int main()
{
    int *p =NULL;
    if (p==NULL)
    {
        printf("Pointer is NULL\n");
    }
    else
    {
        printf("%d\n", *p);
    }
    return 0;
}
