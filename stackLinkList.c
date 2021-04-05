#include<stdio.h>
#include<stdlib.h>
	struct node
	{
		int data;
		struct node* link;
	};
	struct node* top=NULL;
	void Push(void);
	void Pop(void);
	void Display(void);
	int ch;
	
void main()
{
	
		printf("1.Push() \n");
		printf("2.Pop() \n");
		printf("3.Display() \n");
		printf("4.quit() \n");
		printf("\n \n");
		printf("Enter your choice :");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: Push();
					break;
			case 2: Pop();
					break;
			case 3: Display();
					break;
			case 4: exit(0);
					break;
			default: printf("you have entred wrong option");

		}
	
	
		
}

void Push()
{

	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter node data: \n");
  	scanf("%d",&temp->data);
	temp->link = top;
	top = temp;
	main();		
  
}
void Pop()
{
	struct node* temp;
	temp = top;
	if(top == NULL)
	{
		printf("Stack Underflow");
	}
	else
	{
		printf("Element we wants to detete %d",temp->data);
		top = top->link;
		temp->link=NULL;
		free(temp);
	}
	printf("\n\n");
	main();
}

void Display()
{
	struct node* temp;
	if(top == NULL)
	{
		printf("Stack is empty");
	}
	else
	{
		temp = top;
		while(temp != NULL)
		{
			printf("%d->",temp->data);
			temp = temp->link;
		}
	}
	
	printf("\n \n");
	main();
}
