class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> values = new HashMap<>();
        for(int i = 0; i < nums.length; i++){
            int tmp = target - nums[i];
            if(values.containsKey(tmp))
                return new int[]{values.get(tmp), i}; // 1 2 3 4 = 5
            values.put(nums[i], i);
        }
        return null;
    }
}
//map=> (2,0), (2,2), (), (), ()
//tmp=> 4,     3,   , 2, , 
