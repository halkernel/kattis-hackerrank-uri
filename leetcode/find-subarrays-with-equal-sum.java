class Solution {
    public boolean findSubarrays(int[] arr) {
        Set<Integer> st = new HashSet<>();
        if(arr.length < 2)
            return false;
        for(int i = 0; i < arr.length-1; i++){
            if(!st.add(arr[i] + arr[i+1])){
                return true;
            }   
        }       
        return false;
    }
 
}
