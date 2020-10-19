#include<stdio.h>
#include<string.h>
int numerals(char);
int main()
{
	int i,sum=0;
	char s[100];
	printf("Enter a string:");
	gets(s);
	while(s[i])
	{
		if(numerals(s[i])>=numerals(s[i+1]))
		{
			sum = sum+numerals(s[i]);
		}
		else{
			sum = sum+(numerals(s[i+1])-numerals(s[i]));
			i++;
		}
		i++;
	}
	printf("%d",sum);
}

int numerals(char ch)
{
	int value = 0;
	switch(ch)
	{
		case 'I': value = 1;break;
		case 'V': value = 5;break;
		case 'X': value = 10;break;
		case 'L': value = 50;break;
		case 'C': value = 100;break;
		case 'D': value = 500;break;
		case 'M': value = 1000;break;
		default:value = -1;
	}
	return value;
}
