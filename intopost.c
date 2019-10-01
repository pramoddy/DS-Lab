#include<stdio.h>

#define s_size 10
#define exp_size 10
int top=-1;
char s[s_size];
int empty();
void push(char x)
{
	s[++top]=x;
}
void pop()
{
	top--;
}
int topp()
{
	return s[top];
}
int empty()
{
	if(top==-1)
		return 1;
	else
		return 0;
}
int slen(char s1[])
{
	int i=0,l=0;
		while(s1[i]!='\0')
		{
			i++;
			l++;
		}
	return l;
}
void main()
{
	int i,n=0;
	char res[exp_size]={0},exp[exp_size];

	printf("\nenter expression : ");
	scanf("%s",exp);
	for(i=0;i<slen(exp);i++)
	{
		if(exp[i]=='+'||exp[i]=='-')
		{		
			if(empty())
				push(exp[i]);
			else if(topp()=='+'||topp()=='-')
			{
				res[n++]=topp();
				pop();
				push(exp[i]);
			}
			else
			{
				while(!empty())
				{
					res[n++]=topp();
					pop();
				}
				push(exp[i]);
			}
		}
		else if(exp[i]=='*'||exp[i]=='/')
		{		
			if(empty())
				push(exp[i]);
			else if(topp()=='*'||topp()=='/')
			{
				res[n++]=topp();
				pop();
				push(exp[i]);
			}
			else
				push(exp[i]);
		}
		else if(exp[i]=='(')
			push(exp[i]);
		else if(exp[i]==')')
		{
			while(!empty() && topp()!='(')
			{
				res[n++]=topp();
				pop();
			}
			pop();
		}
		else
			res[n++]=exp[i];
	}
	while(!empty())
	{
		res[n++]=topp();
		pop();
	}
	printf("\ninfix expression : %s\n",exp);
	printf("\npostfix expression : %s\n\n",res);

}
