#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *newnode, *top=NULL;

void push()
{
	int value;
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter the value");
	scanf("%d",&value);
	newnode->data=value;
	newnode->next=top;
	top=newnode;
	printf("inserted %d\n",value);
}

void pop()
{
	struct node *temp;
	if(top==NULL)
	{
		printf("stack underflow\n");
		return;
	}
	temp=top;
	printf("deleted %d\n",top->data);
	top=top->next;
	free(temp);
}

void display()
{
	struct node *temp;
	if(top==NULL)
	{
		printf("stack is empty\n");
		return;
	}
	temp=top;
	printf("stack elements are\n");
	
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
		printf("\n---stack menu---\n");
		printf("\n1.push\n 2.pop\n 3.display\n 4.exit\n");
		printf("enter choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:push();break;
			case 2:pop();break;
			case 3:display();break;
			case 4:exit(0);
			default:printf("invalid choice");
		}
	}
}
