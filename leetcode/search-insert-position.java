class Solution {
    public int searchInsert(int[] arr, int target) {
        int beg = 0, end = arr.length-1;
        while(beg <= end){
            int mid = (beg + end)/2;
            if(arr[mid] == target) return mid;
            else if(arr[mid] > target) end = mid-1;
            else if(arr[mid] < target) beg = mid + 1;
        }
        return beg;
    }
}

//0 1 2 3 4 5 6 
//5
