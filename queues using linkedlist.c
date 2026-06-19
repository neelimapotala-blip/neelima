#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *rear=NULL,*front=NULL;
void enqueue()
{
	int value;
	struct node *newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("enter value\n");
	scanf("%d",&value);
	newnode->data=value;
	newnode->next=NULL;
	if(rear==NULL)
	{
		rear=newnode;
		front=newnode;
	}
	else
	{
		rear->next=newnode;
		rear=newnode;
	}
	printf("inserted %d\n",value);
}
void dequeue()
{
	struct node *temp;
	if(front==NULL)
	{
		printf("queue is underflow\n");
		return;
	}
	temp=front;
	printf("deleted %d\n",front->data);
	front=front->next;
	free(temp);
}
void display()
{
	struct node *temp;
	if(front==NULL)
	{
		printf("queue is empty\n");
		return;
	}
	temp=front;
	printf("queue elements are \n");
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
main()
{
	int choice;
	while(1)
	{
		printf("\n---MENU---\n");
		printf("1.enqueue\n 2.dequeue\n 3.display\n 4.exit\n");
		printf("enter the choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:enqueue();break;
			case 2:dequeue();break;
			case 3:display();break;
			case 4:exit(0);
			default:printf("invaild choice");
		}
	}
}


