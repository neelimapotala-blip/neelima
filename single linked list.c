#include<stdio.h>
#include<stdlib.h>
struct NODE
{
	int data;
	struct NODE *next;
};
 struct NODE *head=NULL;
 Void display()
 {
 	struct NODE *temp=head;
 	if(head==NULL)
 	{
 		printf("list is empty\n");
 		return;
	}
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("NULL\n");
 }
void insert begin()
{
	struct NODE *newnode;
	newnode=(struct node*)malloc(sizeof(struct NODE));
	
	printf("enter data:");
	scanf("%d",&newnode->data);
	
	newnode->next=head;
	head=newnode;
	display();
}
void insert End()
{
   struct NODE *newnode,*temp;
	newnode=(struct node*)malloc(sizeof(struct NODE));
	
	printf("enter data:");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	   temp=head;
	   while(temp->next!=NULL)
	   {
	   	temp=temp->next;
	   }
	   temp->next=newnode;
	display();	
}
void insert Pos()
{
	struct NODE *newnode*temp;
	int pos,i;
	printf("enter position:");
	scanf("%d",&pos);
	newnode=(struct node*)malloc(sizeof(struct NODE));
	
	printf("enter data:");
	scanf("%d",&newnode->data);
	temp=head;
	for(i=1;i<pos-1;i++)
	   temp=temp->next;
	newnode->next=temp->next;
	temp->next=newnode;
	display();
}
void delete_begin()
{
	struct NODE *temp;
	temp=head;
	head=head->next;
	free(temp);
	display();
}
void delete_end()
{
	struct NODE *temp,*prev;
	temp=head;
	while(temp->next!=NULL)
	{
		prev=temp;
		temp=temp->next;
	}
	prev->next=NULL;
	free(temp);
	display();
}
void delete_pos()
{
	struct NODE *temp,*prev;
	int pos,i;
	printf("enter position:");
	scanf("%d",&pos);
	temp=head;
	for(i=1;i<pos&&temp!=NULL;i++)
	{
		pre=temp;
		temp=temp->next;
	}
	prev->next=temp->next;
	free(temp);
	display()
}
void search()
{
	struct node *temp;
	int key,pos=1,found=0;
	printf("Enter element to search: ");
	scanf
	temp=head;
	while(temp!=NULL)
	{
		if(temp->data==key)
		{
			printf("Elements found at position %d\n",pos);
			found=1;
			break;
		}
		temp=temp->next;
		pos++;
	}
	if(found==0)
	printf("Element not found\n");
}
