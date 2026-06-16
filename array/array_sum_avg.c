#include<stdio.h>
int main()
{
	int s[5],sum=0,avg,i;
	printf("enetr the 5 elements of s[5]: \n");
	for(i=1;i<=5;i++)
	{
		scanf("%d",&s[i]);
		sum+=s[i];
		avg=sum/i;
	}
	printf("sum of s[] is: %d \n",sum);
	printf("average of s[] is %d\n",avg);
	return 0;
}

