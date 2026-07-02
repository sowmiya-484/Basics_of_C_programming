#include <stdio.h>
int isPalindrome(int n)
{
    int original=n;
    int reverse=0;
    while(n>0)
    {
        int rem=n%10;
        reverse= reverse*10 +rem;
        n=n/10;
    }
    if(original==reverse)
        return 1;
    else
        return 0;
}
int main()
{
    int n,i;
    printf("enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements:\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int found=0;
    for (i=0;i<n;i++)
    {
        if (isPalindrome(arr[i]) == 0)
        {
            printf("First Non-Palindrome = %d\n", arr[i]);
            found = 1;
            break;
        }
    }
    if (found == 0)
    {
        printf("All numbers are palindrome\n");
    }
    return 0;
}
