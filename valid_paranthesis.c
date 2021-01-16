#include<stdio.h>
#include<string.h>
#define max 30
char stack[30];
int isfull(int);
int isempty(int);
int push(char);
int pop();
int top=-1;
int main()
{
	char s[30],ch,val;
	int i,j,len,d=0,flag=0;
	gets(s);
	len = strlen(s);
	
	for(i =0;s[i]!='\0';i++)
	{
		ch = s[i];
		if(ch=='{' || ch=='[' || ch=='(')
		{
			push(ch);
		}
		
		else{
		
			switch(ch)
			{
				case '}':
					{
					
						val=pop();
						
						if(val=='{')
							flag= 1;
						else
								d++;
						}
					break;
					
				case ']':
					
					{
						val=pop();
						if(val == '[')
							flag= 1;
						else
								d++;
						}
					break;
				
				case ')':
					{
					
						val=pop();
						if(val == '(')
							flag=1;
						else
								d++;
						}
					break;
				default:
					printf("Unbalanced");
					exit(1);
			}
		}
		}
		
		if(d==0 && top<0)
		{
			printf("Balanced");
		}
		else
		{
		
			printf("Unbalanced");
		}
	}


int isfull(int top)
{
	if(top==max)
		return 0;
	return 1;
}

int isempty(int top)
{
	if(top==-1)
		return 0;
	return 1;
}
int push(char ch)
{
	
		
		stack[top+1] = ch;
	    top++;
	    
}

int pop()
{
	char data;

	
			data = stack[top];
			top--;
		   
		     
		return data;
	
}
