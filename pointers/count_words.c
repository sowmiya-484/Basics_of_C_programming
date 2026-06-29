#include <stdio.h>
int main()
{
    char str[100];
    char *p;
    int count=0;
    printf("enter a sentence: ");
    scanf(" %[^\n]",str);
    p = str;
    if (*p!='\0'){
        count = 1;
    }
    while (*p!='\0')
    {
        if (*p == ' ' && *(p + 1) != ' ' && *(p + 1) != '\0'){
            count++;
	}
        p++;
    }
    printf("number of words = %d\n",count);
    return 0;
}
