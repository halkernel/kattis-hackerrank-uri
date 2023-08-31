class Solution {

    int removeDuplicates(int[] arr) {
         if (arr.length == 1) return arr.length;

        int l = 0, r = 1;
        while(r < arr.length){
            if(arr[l] == arr[r]){
                r++;
            }
            else{
                arr[l+1] = arr[r];
                l++;
            }
        }
        return l+1;
    }
}
