#include<stdio.h>
int main()
{
	int n,i,sum=0,rem,temp;
	printf("Enter the number:");
	scanf("%d",&n);
	temp = n;
	if(n<0)
	{
		printf("The given number is not a palindrome");
	}
	else{
	
	while(n!=0)
	{
		rem = n%10;
		sum = sum*10+rem;
		n/=10;
	}
	sum == temp?printf("The given number is palindrome"):printf("The given number is not a palindrome"); 
}
}
