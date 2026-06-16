#include<stdio.h>
int main()
{
        int num,rev=0,rem,temp;
        printf("enter the number to be reversed:\n");
        scanf("%d",&num);
	temp=num;
        while(num>0)
        {
                rem=num%10;
                rev=rev*10 + rem;
                num=num/10;
        }
        if(rev==temp)
	{
		printf("the num is palindrome\n");
	}
	else
	{
		printf("it is not palindrome\n");
	}

        return 0;
}
