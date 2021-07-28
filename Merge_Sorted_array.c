

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    
    int i,j;
    
    for(i = nums1Size-1,j = nums2Size - 1;j >=0;)
    {
        
            nums1[i] = nums2[j];
            i--;
            j--;
        
    }
    for(i = 0;i<nums1Size;i++)
    {
        for(j = i+1;j<nums1Size;j++)
        {
            if(nums1[i] > nums1[j])
            {
                nums1[i] = nums1[i] ^ nums1[j];
                nums1[j] = nums1[j] ^ nums1[i];
                nums1[i] = nums1[i] ^ nums1[j];
            }
        }
    }

}
