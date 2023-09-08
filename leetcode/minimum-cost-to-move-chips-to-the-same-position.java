class Solution {
    public int minCostToMoveChips(int[] pos) {
        int even = 0, odd = 0;
        for(int p : pos){
            if(p % 2 == 0) 
                even++;
            else 
                odd++;
        }
        return Math.min(even, odd);
    }
}
