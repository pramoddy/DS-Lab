#include<stdio.h>
#include<stdlib.h>
void insert();
void delete();
void display();
struct node 
{
   int data;
   struct node *next;
}*temp,*top;
void main()
{
   int c;

   while(1)
   {
      printf("Enter your choice\n");
      printf("!: insert 2:delete 3:display 4:exit\n");
      scanf("%d",&c);
      switch(c)
      {
         case 1: insert();
                  break;
         case 2:delete();
                  break;
         case 3: display();
                  break;
         case 4: exit(0);
         default: printf("Your chioce is wrong\n");
       }
    }
    }
void insert()
{
   int n;
   temp=top;
   printf("Enter to insert\n");
   scanf("%d",&n); 
    temp=(struct node*)malloc(sizeof(struct node));
   temp->data=n;
    temp->next=top;
    top=temp;
 }
 void delete()
 {
   temp=top;
   if(temp==NULL)
   printf("List is empty\n");
   else
   {
   printf("The deleted item is : %d\n",temp->data); 
   top=top->next;
   free(temp);
   }
  }void display()
  {
  temp=top;
  if(temp==NULL)
  printf("The lisit is empty\n");
  else
  {
  printf("The stck element is :\n");
  while(temp!=NULL)
  {
   printf("%d\n",temp->data);
   temp=temp->next;
   }
   }
   }
   
