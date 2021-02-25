class Solution {
    public int[] runningSum(int[] nums) {
        
        int i, sum = nums[0];
        int[] res = new int[nums.length];
        res[0] = sum;
        for(i = 1;i <= nums.length - 1; i++)
        {
            sum+= nums[i];
            res[i] = sum;
        }
        return res;
    }
}
