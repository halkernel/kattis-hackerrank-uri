class Solution {
    public int jump(int[] arr) {
        int jump = 0, end = 0, farthest = 0;
        for(int i = 0; i < arr.length-1; i++){
            farthest = Math.max(farthest, i + arr[i]);
            if(i == end){
                jump++;
                end = farthest;
            }
        }
        return jump;
    }
}

/*


        int end = 0, farthest = 0;
        int jump = 0;

        for(int i = 0; i < nums.length-1; i++){
            farthest = Math.max(farthest, i + nums[i]);
            if(i == end){
                jump++;
                end = farthest;
            }
        }
        return jump;

        f=4
        i=2
        end=2
        j=1

 */
