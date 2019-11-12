#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
int data;
struct node *next;
}node;
node *head=NULL;
node *front=NULL;
node *temp;

void create(int x)
{
temp=(node *)malloc(sizeof(node));
temp->data=x;
}
void enqueue(int);
void dequeue();
void display();
void main()
{
int ele;
int choice;
do
{
printf("1.enqueue\n2.dequeue\n3.display\n4.exit");

printf("enter the choice  = ");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("enter the element = ");
scanf("%d",&ele);
enqueue(ele);
break;
case 2:dequeue();
break;
case 3:display();
break;
case 4:exit(0);
break;
default:printf("invalid");

}
}while(choice!=4);
}
void enqueue(int p)
{
node *ptr;
ptr=head;
create(p);
if(head==NULL)
{
head=temp;
head->next=NULL;
front=head;
}
else
{
head->next=temp;
temp->next=NULL;
head=temp;
}
}
void dequeue()
{
node *ptr;
ptr=front;
if(head==NULL)
printf("empty");

else
{
front=front->next;
free(ptr);
}
}
void display()
{
int i;
node *ptr;
ptr=front;
if(head==NULL)
{
printf("list is empty");
}
for(i=0;ptr!=NULL;i++)
{
printf("\n%d",ptr->data);
ptr=ptr->next;
}
}
