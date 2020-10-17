#include<stdio.h>
int main()
{
	int i,j,target,a[100],n;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the target to find the sum:");
	scanf("%d",&target);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<=n-1;j++)
		{
			if(a[i]+a[j]==target)
			{
				printf("[%d,%d]",i,j);
				break;
			}
		}
	}
}
