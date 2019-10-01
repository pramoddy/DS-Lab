#include<stdio.h>
#include<stdlib.h>

#define max 3

void enqueue(int q[],int *f,int *r)
{
   if( ( *f==0 && *r==(max-1) ) || ( *r==(*f-1) ) )
       printf("Queue Full\n");
   else
      {
        if(*r==-1)
           *f=*r=0;
        else
           *r=(*r+1)%max;
        printf("Enter the number to be inserted: ");
        scanf("%d",&q[*r]);
      }
}

void dequeue(int q[],int *f,int *r)
{
  if (*f==-1)
    printf("Queue Empty\n");
  else
     {
       printf("Deleted number: %d\n",q[*f]);
       if(*f==*r)
          *f=*r=-1;
       else
          *f=(*f+1)%max;
     }
}

void display(int q[],int *f,int *r)
{
  int i;
  if(*f==-1)
     printf("Queue is  Empty\n");
  else
     {
       printf("Queue is: ");
       for(i=*f;;i++)
          {
            i=i%max;
            printf("%d ",q[i]);
            if(*r==i)
              break;
          }
        printf("\n");
     }
}

int main()
{
  int ch,f=-1,r=-1,q[max];
  do
   {
     printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
     printf("Enter your choice: ");
     scanf("%d",&ch);
     switch(ch)
        {
          case 1: enqueue(q,&f,&r);
                  break;
          case 2: dequeue(q,&f,&r);
                  break;
          case 3: display(q,&f,&r);
                  break;
          case 4: break;
          default:printf("invalid choice");
        }
    }while(ch!=4);
  return 0;
}


