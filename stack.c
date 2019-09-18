#include<stdio.h>
#include<stdlib.h>
#define MAX 6
void push();
void pop();
void display();
int item[MAX],top=-1;
int main()
{ 
	while(1)
	{
	int choice;
	printf("1:push     2:pop    3:display     4:exit\n");
	printf("enter your choice\n\n");
	scanf("%d",&choice);
	
		switch(choice)
		{
			case 1: push();
				break;
			case 2: pop();
        			break;
			case 3: display();
        			break;
			case 4: exit(0);
        			break;
			default: printf("you entered option is incurrect\n");
        			break;
		}
	  }
// getchar(); 
}	
		void push()
		{	
			int num;
			if(top==MAX-1)
			{
				printf("stack is full\n");
			}
			else
			{
				printf("Enter number you want to store\n");
				scanf("%d",&num);
				top=top+1;
				item[top]=num;
				
			}
		
		}


	void pop()
	{
		
		if(top==-1)
		{
			printf("the stack is underflow\n");
			
		}
		else
		{
			printf("item deleted number is :%d\n",item[top]);
			top=top-1;
			
		}
	}
		
	void display(int i)
	{
		if(top==-1)
		printf("stack is empty\n");	
		else
		{
			for(i=top;i>=0;--i)
			printf("%d\n",item[i]);
			
		}
	} 


	
