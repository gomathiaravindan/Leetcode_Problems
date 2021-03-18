class Solution {
    public int searchInsert(int[] nums, int target) {
        
        if(nums[0] == target || nums[0] > target){
            return 0;
        }else{
        for(int i = 1;i<nums.length;i++){
            if(nums[i] == target||nums[i]>target){
                return i;
        }
        }
            return nums.length;
        }
        }
}
