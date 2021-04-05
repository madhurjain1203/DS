#include<stdio.h>
#include<stdlib.h>
void Enqueue();
void Dequeue();
void Display();
struct node
	{
		int data;
		struct node* link;
	};
	struct node* front=NULL;
	struct node* rear=NULL;
	int ch;
	void main()
	{
		printf("Enter 1 for Enqueue \n");
		printf("Enter 2 for dequeue \n");
		printf("Enter 3 for Display \n");
		printf("Enter 4 for quit");
		printf("\n\n");
		printf("Enter the your choice:");
		scanf("%d",&ch);	
		while(1)
		{
			switch(ch)
			{
				case 1 : Enqueue();
						 break;
				case 2 : Dequeue();
						 break;
				case 3 : Display();
						 break;
				case 4 : exit(0);
			}
		}
	}
	void Enqueue()
	{
		struct node* temp;
		temp=(struct node*)malloc(sizeof(struct node));
		printf("Enter data: \n");
		scanf("%d",&temp->data);
		temp->link=NULL;
		if(front==NULL && rear == NULL)
		{
			front = rear = temp;
		}
		else
		{
			rear->link=temp;
			rear=temp;
		}
		main();
	}
	void Display()
	{
		struct node* temp;
		temp=front;
		if(front==0 && rear ==0)
		{
			printf("queue is empty");
		}
		else
		{
			while(temp !=NULL)
			{
				printf("%d->",temp->data);
				temp = temp->link;
			}
		}
		printf("\n\n");
		main();
	}
	void Dequeue()
	{
		struct node* temp;
		temp = front;
		if(front == 0 && rear == 0)
		{
			printf("queue is empty");
		}
		else
		{
			printf("here is element we are going to detete %d",temp->data);
			front=front->link;
			free(temp);
		}
		printf("\n\n");
		main();
	}
