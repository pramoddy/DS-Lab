#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void inrare(int);
int i=0,r,key,val,s;
void delete_front();
void delete_give(int);
void display();
void insert(int x);
void insert_give(int,int);
struct node
{
		int data;
		struct node *next;

}*temp,*head,*ptr;

void main()
{
int ch,x;
clrscr();
while(1)
{
	printf("Entre your choice\n");
	printf("1: insert\t2: display\t3: insert rare\t4: delete_fornt\n");
	printf("5: insert_given pos\t 6: delete_give\t:7: exit\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: printf("Enter value to store\n");
				scanf("%d",&x);
				insert(x);
				break;
		case 2: display();
				break;
	case 3: printf("Enter to store value to rare\n");
		scanf("%d",&r);
		inrare(r);
		break;
	case 4: delete_front();
		break;
	case 5: printf("Enter the position where to store\n");
		scanf("%d",&key);
		printf("Enter the value to store\n");
		scanf("%d",&val);
		insert_give(key,val);
		break;
	case 6:printf("Enter the position where to delete\n");
		scanf("%d",&s);
		delete_give(s);
		break;
	case 7: exit(0);
		default: printf("your choice wrong\n");
	}
     }
//return 0;
}
void insert(int x)
{


	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->next=head;
	head=temp;
}
void display()
{
    temp=head;
    printf("The element in a list \n");
	while(temp!=NULL)
	{
	printf("%d\n",temp->data);
	temp=temp->next;
	}
}
void inrare(int r)
{


       ptr=head;
       while(ptr->next!=NULL)
       {
	  ptr=ptr->next;
       }
	temp->next=NULL;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=r;
	ptr->next=temp;
	temp=ptr;
}
void delete_front()
{
	temp=head;
	if(temp->data==NULL)
	{
		return;
	}
	else
	{
		head=head->next;
		free(temp);
	}
}
void insert_give(int key,int val)
{
	struct node *point;
	struct node *p_next;
	point=head;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=val;
	printf("the value; %d\n",temp->data);
	for(i=0;i<=key;i++)
	{       if(i==key)
		{

			p_next=point;
			p_next=p_next->next;
			point->next=temp;
			temp->next=p_next;
		}


	else
		{
			point=point->next;

		}

	}
}


void delete_give(int s)
{
	struct node *pre,*pn;
	temp=head;
	for(i=0;i<=s;i++)
	{
		if(i==s)
		{
			pn=temp;
			pn=temp->next;
			printf("deleting element is :%d\n",temp->data);
			free(temp);
			pre->next=pn;
			}
		else
		{
			pre=temp;
			temp=temp->next;
		}

	}
}