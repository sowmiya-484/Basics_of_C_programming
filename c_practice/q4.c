#include <stdio.h>
#include <string.h>
#include <ctype.h>
int countVowels(char str[])
{
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        char ch = tolower(str[i]);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            count++;
        }
    }
    return count;
}
void removeSpaces(char str[], char result[])
{
    int i = 0, j = 0;
    while(str[i] != '\0')
    {
        if(str[i] != ' ')
        {
            result[j] = str[i];
            j++;
        }
        i++;
    }
    result[j] = '\0';
}
int isPalindromeTag(char str[])
{
    int left = 0;
    int right = strlen(str) - 1;
    while(left < right)
    {
        if(tolower(str[left]) != tolower(str[right]))
        {
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}
int main()
{
    char line[100];
    char result[100];
    char tag[50];
    printf("Enter Log Line: ");
    scanf("%[^\n]", line);
    printf("Vowel Count : %d\n", countVowels(line));
    removeSpaces(line, result);
    printf("Cleaned Line : %s\n", result);
    printf("Enter Tag : ");
    scanf("%s", tag);
    if(isPalindromeTag(tag))
    {
        printf("PALINDROME TAG\n");
    }
    else
    {
        printf("NOT A PALINDROME TAG\n");
    }
    return 0;
}
