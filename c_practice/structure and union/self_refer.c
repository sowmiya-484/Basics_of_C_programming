#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node
{
	int rollno;
	char name[20];
	struct node *next;
}node;
void display(node  *head)
{
	node *temp=head;
	while(temp!=NULL)
	{
		printf("Roll no: %d\n",temp->rollno);
		printf("Name:%s\n\n",temp->name);
		temp=temp->next;
	}
}
void searchStudent(node *head,int rollno)
{
	int found=1;
	while(head!=NULL)
	{
		if(head->rollno == rollno)
		{
			printf("\nstudent found\n");
			printf("roll no: %d\n",head->rollno);
			printf("name: %s\n",head->name);
			found=0;
			break;
		}
		head=head->next;
	}
	if(found)
	printf("student not found\n");
}
int main()
{
	node *first,*second,*third;
	first=(node *)malloc(sizeof(node));
	second=(node *)malloc(sizeof(node));
	third=(node *)malloc(sizeof(node));
	
	first->rollno=1;
	strcpy(first->name,"name1");

	second->rollno=2;
	strcpy(second->name,"name2");

	third->rollno=3;
	strcpy(third->name,"name3");

	first->next=second;
	second->next=third;
	third->next=NULL;

	display(first);
	searchStudent(first,2);
	return 0;
}




