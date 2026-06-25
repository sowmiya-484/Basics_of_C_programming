#include<stdio.h>
#include<time.h>
struct DOB
{
	int day,month,year;
};
struct person
{
	char name[50];
	struct DOB dob;
};
int main()
{
	struct person p;
	int age;
	printf("enter name:");
	scanf("%[^\n]",p.name);
	printf("enter date of birth:\n");
	scanf("%02d%02d%04d",&p.dob.day,&p.dob.month,&p.dob.year);
	time_t t=time(NULL);
	struct tm *current = localtime(&t);
	int current_day   = current->tm_mday;
	int current_month = current->tm_mon+1;
	int current_year  = current->tm_year+1900;
	age = current_year - p.dob.year;
	if((p.dob.month > current_month) || (p.dob.month == current_month && p.dob.day < current_day))
	{
		age--;
	}
	printf("\nPERSON DETAILS\n");
	printf("NAME:%s\n",p.name);
	printf("DOB: %02d/%02d/%04d\n",p.dob.day,p.dob.month,p.dob.year);
	printf("AGE:%d\n",age);
	return 0;
}
