#include<stdio.h>
#include<string.h>
#define max 30
signed int stack[30];
void push(int);
int pop();
int top=-1;
int main()
{
	char s[30];
	gets(s);
	int i,sum=0,val;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i] >= '1' && s[i] <= '9')
		{
			push(s[i] - '0');
		}
		else if(s[i] == 'D')
		{
			if(stack[top] < 0)
			{
				push(2*stack[top]);
			
			}
			else
				push(2*stack[top]);
			
		}
		else if(s[i]=='C')
		{
			pop();
			
		}
		else if(s[i]=='+')
		{
			push(stack[top] + stack[top-1]);
		}
		else if(s[i]=='-' && (s[i+1] >= '1' && s[i+1] <= '9'))
		{
			push(-(s[i+1] - '0'));
			i++;
		}
	}
	while(top!=-1)
	{
		sum += pop();
	}
	printf("%d",sum);
}

void push(int n)
{
	if(top!= max)
	{
		stack[top+1] = n;
		top++;
	}
	else
	{
		printf("The stack is full!!");
	}
}

int pop()
{
	int data;
	data = stack[top];
	top--; 
  return data;
}
