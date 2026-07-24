#include<stdio.h>
typedef struct
{
	char city[20];
	int pincode;
}address;

typedef struct
{
	int rollNo;
	int marks[3];
	int total;
	float avg;
	char grade;
	address addr;
}student;

student tot_avg(student s)
{
	s.total=0;
	for(int i=0;i<3;i++)
	{
		s.total += s.marks[i];
	}
	s.avg=s.total/3.0;
	return s;
}
void  Grade(student *s)
{
	if (s->avg >= 90)
	{
		s->grade='A';
	}
	else if (s->avg >=75)
	{
		s->grade>='B';
	}
	else
	{
		s->grade='C';
	}
}

void display(student s)
{
    printf("\nStudent Details\n");
    printf("---------------------------\n");
    printf("Roll No  : %d\n", s.rollNo);
    printf("City     : %s\n", s.addr.city);
    printf("Pincode  : %d\n", s.addr.pincode);
    printf("Total    : %d\n", s.total);
    printf("Average  : %.2f\n", s.avg);
    printf("Grade    : %c\n", s.grade);
}

int main()
{
    student s = {101,{85,90,95},0,0.0,' ',{"Chennai",600100}};
    s=tot_avg(s);//pass by value and return struct
    Grade(&s);
    display(s);
    return 0;
}
