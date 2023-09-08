class Solution {

    void print(int arr[]){
        for(int i = 0; i < arr.length; i++){
            System.out.printf("%d ", arr[i]);
        }
        System.out.println();
    }

    public int longestConsecutive(int[] arr) {
        if(arr.length == 0)
            return 0;
        Arrays.sort(arr);
       int count = 1, max = 1;
       for(int i = 0; i < arr.length - 1; i++){
           if(arr[i]+1 == arr[i+1]){
               count++;
           }else if(arr[i+1] ==  arr[i]){
               continue;
           }else {
               count = 1;
           }
           max = Math.max(max, count);
       }
       return max;
    }
}
/*

    Sort the Array.
    Check whether the (i+1)th element is equal to 1+ith element.
    If yes, we continue the count. Else, we break the count and reassign it to 1.
    Take the maximum of the current count or maxCount.
    Return the maxCount.

 */
