class Solution {
    public int search(int[] nums, int target) {
        
        for(int i = 0; i < nums.length; i++){
            if(target == nums[i])
                return i;
            if(target == nums[nums.length-i-1])
                return nums.length-i-1;            
        }
        return -1;
    }
}
