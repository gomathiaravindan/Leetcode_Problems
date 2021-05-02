##Print the given as zigzag conversion.
Sample Case:Input PAYPALISHIRING
rows = 3
Output PAHNAPLSIIGYIR






#include<stdio.h>
#include<string.h>
int main()
{
	char s[30],res[30][30];
	int i,j=0,rows,k = 0,pos,column;
	
	gets(s);
	
	printf("Enter the number of rows:");
	scanf("%d",&rows);
	pos = rows - 1;
	
	for(i = 0;i < strlen(s);i++)
	{
		if(j >= strlen(s))
		{	column = i;
		 	break;
		}
		if(pos == 0)
		 	pos = rows - 1;
		if(pos == rows - 1)
		{
			for(k = 0;k<rows;k++)
			{
				if(j < strlen(s))
				{
					res[k][i] = s[j++];
				}
				else
					res[k][i] = '*';
			}
		}
		else
		{
			for(k = 0;k<rows;k++)
			{
				if(k == pos && k < strlen(s))
					res[k][i] = s[j++];
				else
				 	res[k][i] = '*';
			}
		}
		pos--;
	}
		
		for(i = 0;i<rows;i++)
		{
			for(j = 0;j<column;j++)
			{
				if(res[i][j] != '*')
					printf("%c",res[i][j]);
			}
		}
	return 0;
}
