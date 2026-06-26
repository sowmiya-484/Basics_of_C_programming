#include<stdio.h>
struct date
{
	int day,month, year;
};
int main()
{
	struct date d;
	printf("enter day month year :\n");
	scanf("%d %d %d",&d.day,&d.month,&d.year);
	printf("date: %02d/%02d/%04d\n",d.day,d.month,d.year);
	return 0;
}

