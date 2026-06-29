#include <stdio.h>
int main()
{
    char str[100];
    char *p;
    int count=0;
    printf("Enter string: ");
    scanf("%s",str);
    p = str;
    while(*p!='\0')
    {
        if(*p=='A' || *p=='E' || *p=='I' || *p=='O' || *p=='U' ||
           *p=='a' || *p=='e' || *p=='i' || *p=='o' || *p=='u')
        {
            count++;
        }
        p++;
    }
    printf("Number of vowels = %d", count);
    return 0;
}
