class Solution {

    void swap(int a, int b, int arr[]){
        int tmp = arr[a];
        arr[a] = arr[b];
        arr[b] = tmp;
    }

    public void moveZeroes(int[] arr) {
        int l = 0, r = 1;
        while(r < arr.length){
            if(arr[l] == 0){
                if(arr[r] != 0){
                    swap(l, r, arr);
                    l++;
                }
            }
            else{
                l++;
            }
            r++;
        }
    }
}
