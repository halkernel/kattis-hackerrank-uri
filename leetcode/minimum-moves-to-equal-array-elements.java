class Solution {
    public int minMoves(int[] arr) {
        int min = Integer.MAX_VALUE;
        for(int n : arr){
            min = Math.min(n, min);
        }

        int ans = 0;
        for(int n : arr){
            ans += (n - min);
        }

        return ans;
    }
}

//1 2 3
//6 == 3



