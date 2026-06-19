#include<stdio.h>
#include<stdlib.h>
#define max 5
int queue[max];
int front=-1,rear=-1;
void enqueue()
{
	int value;
	printf("enter value:");
	scanf("%d",&value);
	if((rear+1)%max==front)
	{
		printf("queue is full\n");
	}
	else
	{
		if(front==-1)
		front=0;
		rear=(rear+1)%max;
		queue[rear]=value;
		printf("inserted:%d\n",value);
	}
}
void dequeue()
{
	if(front==-1)
	{
		printf("queue is empty\n");
	}
	else
	{
	printf("deleted:%d\n",queue[front]);
	if(front==rear)
	{
		front=rear=-1;
	}
	else
	{
		front=(front==1)%max;
	}
	}
}
void display()
{
	if(front==-1)
	{
		printf("queue is empty\n");
	}
	else
	{
		int i=front;
		printf("queue elements:");
		while(1)
		{
			printf("%d",queue[i]);
			if(i==rear)
			break;
			i=(i+1)%max;
		}
		printf("\n");
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

