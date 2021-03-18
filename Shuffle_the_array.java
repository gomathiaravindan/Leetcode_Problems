class Solution {
    public int[] shuffle(int[] nums, int n) {
        int[] out = new int[nums.length];
        int k = 0;
        
        for(int i=0, j=n; i<j && j<nums.length;){
            out[k++] = nums[i++];
            out[k++] = nums[j++];   
        }
        return out;
    }
}
