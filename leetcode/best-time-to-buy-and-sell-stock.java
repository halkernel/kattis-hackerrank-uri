class Solution {
    public int maxProfit(int[] arr) {
        int l = 0, r = 1;
        int profit = 0;
        int maxProfit = 0;
        while(r < arr.length){
            if(arr[l] < arr[r]){
                profit = arr[r] - arr[l];
                maxProfit = Math.max(maxProfit, profit);
            }else {
                l = r;
            }
            r++;
        }
        return maxProfit;
    }
}
