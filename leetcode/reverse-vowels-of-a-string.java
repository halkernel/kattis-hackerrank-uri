class Solution {

    boolean isVowel(char a){
        a = Character.toLowerCase(a);
        return a =='a' || a == 'e' || a == 'i' || a == 'o' || a == 'u';        
    }

    void swap(char[] arr, int l, int r){
        char tmp = arr[l];
        arr[l] = arr[r];
        arr[r] = tmp;
    }

    public String reverseVowels(String s) {
        if(s.length() == 1)
            return s;
        char arr[] = s.toCharArray();
        int l = 0, r = arr.length-1;
        while(l<=r){
            if(!isVowel(arr[l])){
                l++;
                continue;
            }
            if(!isVowel(arr[r])){
                r--;
                continue;
            }
            if(isVowel(arr[l]) && isVowel(arr[r])){
                swap(arr, l, r);
                l++;
                r--;
            }
        }
        return String.valueOf(arr);
    }
}
