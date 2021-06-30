int singleNumber(int* nums, int numsSize){

    
    int exor = nums[0],i;
    
    for(i = 1;i<numsSize;i++)
    {
        exor ^= nums[i];
    }
    
    return exor;
}
