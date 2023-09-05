class Solution {
    public int[] findArray(int[] pref) {
        int arr[] = new int[pref.length];
        int l = 0, r = 1;
        arr[0] = pref[0];
        while(l < pref.length - 1){
           arr[l+1] = pref[l] ^ pref[r];
           l++;
           r++;
        }
        return arr;
    }
}
