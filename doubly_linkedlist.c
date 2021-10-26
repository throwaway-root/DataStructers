#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node*next;
	struct node*prev;
};

struct node*head=NULL;
struct node*tail=NULL;

struct node *getnode(int val)
{
	struct node * temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=val;
}

insert(int v)
{
	struct node*ptr=head;
	ptr=getnode(v);
	if(tail==NULL)
	{
		ptr->prev=tail;
		tail=ptr;
	}
	else
	{
		struct node*run=tail;
		while(run->prev!=NULL)
		{
			run=run->prev;
		}
		run->prev=ptr;
		ptr->prev=NULL;
	}
	ptr->next=head;
	head=ptr;
}

display()
{
	struct node*run=tail;
	while(run!=NULL)
	{
		printf("%d ",run->data);
		run=run->prev;
	}
}

void main()
{
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	display();
}
