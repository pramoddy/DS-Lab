#include<stdio.h>
#include<stdlib.h>
#define MAX 5
void push();
void pop();
void display();
int front=0,rare=0,item[MAX],i,num;
void main()
{
	while(1)
	{
		int ch;
		printf("Enter your choice\n");
		printf("1:push  2:pop  3:display  4:exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: push();
				break;
			case 2:pop();
				break;
			case 3:display();
				break;
			case 4:exit(0);
				break;
			default: printf("your choice is wromg\n");
		}
	}

}
 void push()
  {
	if(front==MAX)
		printf("queue is empty\n\n");
	else
		{ 
		  printf("Enter the nos to store\n");
		  scanf("%d",&num);  
		  front++;  
		  item[front]=num; 
		  
}
  }
  void pop()
  {
	if(front<rare)
		printf("queue is empty\n\n");
	else
		{  
		   printf("The item deleted is :%d\n",item[rare]);
		   rare++;
		}
  }	
	void display(int i)
	{
		if(rare>front)
		printf("queue is empty\n\n");	
		else
		{       rare++;
			for(i=rare;i<=front;i++)
			printf("%d\n",item[i]);
			
		}
	} 


	





