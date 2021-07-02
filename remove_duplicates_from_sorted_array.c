

int removeDuplicates(int* nums, int numsSize){

    
    if(numsSize == 0)
        return 0;
     int i,j;
    
   
	
	i = 0;
    for(j = 1;j<numsSize;j++)
    {
        if(nums[i]!=nums[j])
        {
            i++;
            nums[i] = nums[j];
        }
	}
    return i+1;
    
}
	
