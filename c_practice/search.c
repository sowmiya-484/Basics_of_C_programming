#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
}node;
int search(node *head,int key)
{
	node *temp=head;
	while(temp!=NULL)
	{
		if(temp->data==key)
		{
			return 1;
		}
		temp=temp->next;
	}
	return 0;
}
int main()
{
	node *head=NULL,*newNode,*temp;
	int values[5]={10,20,30,40,50};
	int key;
	for(int i=0;i<5;i++)
	{
		newNode=(node *)malloc(sizeof(node));
		newNode->data=values[i];
		newNode->next=NULL;
		if(head==NULL)
		{
			head=newNode;
		}
		else
		{
			temp=head;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=newNode;
		}
	}
	printf("enter element to be searched: \n");
	scanf("%d",&key);
	if(search(head,key))
	{
		printf("element found\n");
	}
	else
	{
		printf("element not found\n");
	}
	return 0;
}
