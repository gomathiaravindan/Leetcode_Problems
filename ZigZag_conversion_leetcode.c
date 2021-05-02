##Print the output for the given string
Sample Case: Input PAYPALSHIRING
Enter the number of rows: 3 (only accepted)
Output PAHNAPLSIIGYIR






#include<stdio.h>
#include<string.h>
int main()
{
	char s[30];
	int i,j,rows;
	
	gets(s);
	printf("Enter the number of rows:");
	scanf("%d",&rows);
	
	
		for(i = 0;i<rows;i++)
		{
			if(i != rows/2)
			{
				for(j = i;j<strlen(s);j+=rows+1)
				{
					printf("%c",s[j]);
				}
				printf("\n");
			}
			else if(i == rows/2)
			{
				for(j = i;j<strlen(s);j+=rows-1)
				{
					printf("%c",s[j]);
				}
				printf("\n");
			}
		}
	
}
