#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* link;
};

struct node* root = NULL;
int len;
void Create(void);
void Add(void);
int Length(void);
void Display(void);
void Delete(void);
void main()
{
	int ch;
	while(1)
	  {
		printf("1.Create() \n");
		printf("2.Add() \n");
		printf("3.Length() \n");
		printf("4.Display() \n");
		printf("5.Delete() \n");
		printf("6.quit");
		printf("\n \n");
		printf("Enter your choice :");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: Create();
					break;
			case 2: Add();
					break;
			case 3: Length();
					break;
			case 4: Display();
					break;
			case 5: Delete();
					break;
			case 6: exit(0);
			default: printf("you have entred wrong option");

		}
	}
	
}

void Create()
{
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));// malloc method reserve memory dynamicaly 
	printf("Enter Node Data");
	scanf("%d",&temp->data);
	temp->link=NULL;
	if(root == NULL)
	{
		root = temp;
	}
	else
	{
		struct node* p;
		p = root;
		while(p->link != NULL)
		{
			p = p->link;
		}
		p->link=temp;
	}
}

void Display()
{
	struct node* temp;
	temp = root;
	if(temp == NULL)
	{
		printf("List is empty \n");
	}
	else
	{
		while(temp != NULL)
		{
			printf("%d-->",temp->data);
			temp = temp->link;
		}
		printf("\n\n");
	}
}
int Length()
{
	int count = 0;
	struct node* temp;
	temp = root;
	while(temp != NULL)
	{
		count++;
		temp = temp->link;
	}
	return count;
}
void Add()
{
	int loc,i=1;
	struct node* temp,*p;
	printf("Enter location");
	scanf("%d",&loc);
	len = Length();
	if(loc > len)
	{
		printf("Invalid Location");
		printf("Current List is having %d nodes",len);
	}
	else
	{
		p = root;
		while(i<loc)
		{
			p = p->link;
			i++;
		}
		temp=(struct node*)malloc(sizeof(struct node));
		printf("Enter node data");
		scanf("%d",&temp->data);
		temp->link=NULL;
		temp->link=p->link;
		p->link=temp;
	}
}
void Delete()
{
	struct node* temp;
	int loc;
	printf("Enter the location to detele:");
	scanf("%d",&loc);
	if(loc > Length())
	{
		printf("Invalid location");
	}
	else if(loc==1)
	{
		temp = root;
		root = temp->link;
		temp->link = NULL;
		free(temp);//free method will release the memory
	}
	else if(loc == Length())
	{
		struct node *p,*q;
		int i=1;
		p=root;
		while(i<loc)
		{
			p = p->link;
			i++;
		}
		q = p->link;
		p->link=NULL;
		free(q);
	}
	else
	{
		struct node *p,*q;
		int i=1;
		p=root;
		while(i<loc-1)
		{
			p = p->link;
			i++;
		}
		q = p->link;
		p->link=q->link;
		q->link=NULL;
		free(q);
	}
}
