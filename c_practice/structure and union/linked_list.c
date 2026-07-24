#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node *next;
}node;
int countNodes(node *head)
{
	int count=0;
	node *temp=head;
	while(temp!=NULL)
	{
		count++;
		temp=temp->next;
	}
	return count;
}
int main()
{
	node *head=NULL,*newNode,*temp;
	int values[]={10,20,30,40,50};
	for(int i=0;i<5;i++)
	{
		newNode=(node*)malloc(sizeof(node));
		newNode->data=values[i];
		newNode->next=NULL;
		if(head==NULL)
		{
			head=newNode;
		}
		else
		{
			temp=head;
			while(temp->next !=NULL)
			{
				temp=temp->next;
			}
			temp->next=newNode;
		}
	}
	printf("total =%d\n",countNodes(head));
	return 0;
}
