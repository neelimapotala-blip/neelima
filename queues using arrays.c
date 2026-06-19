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
	if (rear==max-1)
	{
		printf("queue is overflow \n");
	}
	else
	{
		if(front==1)
		{
			front=0;
		}
		rear++;
		queue[rear]=value;
		printf("%d enqueued into queue \n",value);
	}
}
void dequeue()
{
	if(rear==-1||front>rear)
	{
		printf("queue is underflow\n");
	}
	else
	{
		printf("%d is dequeued from queue\n",queue[front]);
		front++;
	}
}
void display()
{
	if (rear==-1||front>rear)
	{
		printf("queue is empty\n");
	}
	else
	{
		printf("queue elements are:\n");
		int i;
		for (i=front;i<=rear;i++)
		{
			printf("%d->",queue[i]);
		}
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

