

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){

    int merge_array[nums1Size+nums2Size],i=0,j=0,k = 0;
    
    double median = 0.000000;
    
    while(i < nums1Size && j < nums2Size)
    {
        if(nums1[i] < nums2[j])
        {
            merge_array[k] = nums1[i];
            i++;
            k++;
        }
        else if(nums2[j] < nums1[i])
        {
            merge_array[k] = nums2[j];
            k++;
            j++;
        }
    }
    
    while(i != nums1Size)
    {
        merge_array[k] = nums1[i];
        i++;
        k++;
    }
    while(j != nums2Size)
    {
        merge_array[k] = nums2[j];
        j++;
        k++;
    }
    
    if(k % 2 == 1)
    {
        median = merge_array[k/2];
    }
    else
    {
        median = (merge_array[k/2] + merge_array[(k/2) - 1])/2.0;
    }
    return median;
}
