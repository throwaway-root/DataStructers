#include<stdio.h>
#include<string.h>
#define SIZE 20
char STACK[SIZE];
int top=-1;
void push(char item)
{
	if(top==SIZE-1)
	printf("\nSTACK IS OVERFLOW");
	else
	{
		top++;
		STACK[top]=item;
	}
}
void pop()
{
if(top==-1)
printf("\nunderflow");
else
top--;	
}
int main(void)
{
	char exp[SIZE];
	int len,i;
	printf("\nenter the expression");
	scanf("%s",exp);
	len=strlen(exp);
	for(i=0;i<len;i++)
	{
		
		if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
		{
			push(exp[i]);
			continue;
		}
		else if(exp[i]==')' || exp[i]=='}' || exp[i]==']')
		{
			if(exp[i]==')')
			{
				if(STACK[top]=='(')
				{
					pop();
				}
				else
				{
					printf("\nUNBALANCED PARENTHESIS");
					return 0;
				}
			}
			else if(exp[i]=='}')
			{
				if(STACK[top]=='{')
				{
					pop();
				}
				else
				{
					printf("\nUNBALANCED PARENTHESIS");
					return 0;
				}
			}
				else if(exp[i]==']')
				{
					if(STACK[top]=='[')
					{
						pop();
					}
					else
					{
						printf("\nUNBALANCED PARENTHESIS");
						return 0;
					}
				}
			}
		}
	
	if(top!=-1)
	printf("\nUNBALANCED PARENTHESIS");
	else
	printf("\nBALANCED PARENTHESIS");
	return 0;
}
