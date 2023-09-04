class Solution {
    public int[] getConcatenation(int[] arr) {
        int[] ans = new int[arr.length * 2];
        for(int i = 0; i < arr.length; i++){
            ans[i] = arr[i];
        }
        for(int i = arr.length; i < arr.length*2; i++){
            ans[i] = arr[i - arr.length];
        }
        return ans;
    }
}
