#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *arr,i,j,target,n,returnSize[2],k = 0,sum = 0;
    printf("Enter the total number of elements:");
    scanf("%d",&n);
    
    arr = (int*)malloc(sizeof(int*)*n);
    for(i = 0;i<n;i++)
    {
    	scanf("%d",&arr[i]);
    }
    
    printf("Enter the target number:");
    scanf("%d",&target);
    
    for(i = 0;i<n;i++)
    {
        sum = target - arr[i];
       
        for(j = i+1;j<n;j++)
        {
            sum = sum - arr[j];
            if(sum == 0)
            {
                returnSize[k] = i;
                k++;
                returnSize[k] = j;
                k++;
                
            }
        }
    }
	for(i = 0;i<k;i++)
	{
		printf("%d ",returnSize[i]);
	}
	free(arr);
	return 0;
}
