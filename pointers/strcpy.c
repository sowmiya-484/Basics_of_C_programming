#include <stdio.h>
int main()
{
    char str1[100],str2[100];
    char *p,*q;
    printf("Enter string: ");
    scanf("%s",str1);
    p = str1;
    q = str2;
    while(*p!='\0')
    {
        *q=*p;
        p++;
        q++;
    }
    *q = '\0';
    printf("Copied string=%s\n",str2);
    return 0;
}
