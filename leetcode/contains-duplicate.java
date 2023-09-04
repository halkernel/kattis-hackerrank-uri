import java.lang.*;
import java.util.*;

class Solution {
    public boolean containsDuplicate(int[] nums) {
        Set<Integer> numbers = new HashSet<>();
        for(int i = 0; i < nums.length; i++){
            if(!numbers.add(nums[i])){
                return true;
            }
        }
        return false;
    }
}
