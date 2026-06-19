#include<stdio.h>
#include<stdlib.h>
#define max 5
int stack [max],top=-1;
void push()
{
	int value;
	printf("enter value");
	scanf("%d",&value);
	if(top==max-1)
	{
		printf("stack is overflow");
	}
	else
	{
		top++;
		stack[top]=value;
		printf("%d is pushed into stack",stack[top]);
	}
}
	void pop()
	{
		if(top==-1)
		{
			printf("stack is underflow");
		}
		else
		{
			printf("%d is deleted\n",stack[top]);
			top--;
		}
	}
	void display()
	{
		if(top==-1)
		{
			printf("stack is empty");
		}
		else
		{
			int i;
			for(i=top;i>=0;i--)
			{
				printf("%d\n",stack[i]);
			}
		}
	}
	main()
	{
		int choice;
		while(1)
		{
			printf("1.push\n 2.pop\n 3.display\n 4.exit\n");
			printf(" enter the choice");
			scanf("%d",&choice);
			switch(choice)
			{
				case 1:push();
				break;
				case 2:pop();
				break;
				case 3:display();
				break;
				case 4:exit(0);
				default:printf("invaild choice");
			}
		}
	
	}
	


