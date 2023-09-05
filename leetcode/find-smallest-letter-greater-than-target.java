class Solution {
    public char nextGreatestLetter(char[] arr, char target) {
        int l = 0, r = arr.length -1;        
        while(l <= r){
            int mid = l + (r-l)/2;
            if(target >= arr[mid]){
                l = mid+1;
            }
            else{
                r = mid-1;
            } // c f j
        }
        return arr[l%arr.length];
    }
}
