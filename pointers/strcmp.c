#include <stdio.h>
int main()
{
    char str1[100],str2[100];
    char *p,*q;
    printf("Enter first string: ");
    scanf("%s",str1);
    printf("Enter second string: ");
    scanf("%s",str2);
    p = str1;
    q = str2;
    while(*p==*q && *p!='\0')
    {
        p++;
        q++;
    }
    if(*p=='\0' && *q=='\0'){
        printf("Strings are Equal\n");
    }
    else{
        printf("Strings are Not Equal\n");
    }
    return 0;
}
