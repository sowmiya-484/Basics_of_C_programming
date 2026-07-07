#include<stdio.h>
struct sensor
{
	int ID;
	char Name[20];
	float reading;
};
int main()
{
	int n,i,j;
	printf("enter no of sensor inputs :\n");
	scanf("%d",&n);
	struct sensor s[n],temp;
	for (i=0;i<n;i++)
	{
		printf("enter sensor%d details\n",i+1);
		printf("enter Id,name,reading:\n");
		scanf("%d\t%s\t%f",&s[i].ID,s[i].Name,&s[i].reading);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(s[i].reading<s[j].reading)
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	printf("ID : %d\n Name:%s \nReading: %.2f\n",s[0].ID,s[0].Name,s[0].reading);
	float sum=0,avg;
	for(i=0;i<n;i++)
	{
		sum+=s[i].reading;
	}
	avg=sum/n;
	printf("\nAverage Reading=%.2f\n",avg);
	return 0;
}
	

