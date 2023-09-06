class Solution {
    public static boolean isPalindrome(String s) {
        char[] chars = s.toLowerCase().toCharArray();
        int beg = 0, end = s.length() -1;
        while (beg < end){
            if(!Character.isLetterOrDigit(chars[beg])){
                beg++;
                continue;
            }
            if(!Character.isLetterOrDigit(chars[end])){
                end--;
                continue;
            }
            if(chars[beg] != chars[end]){
                return false;
            }
            beg++;
            end--;
        }
        return true;
    }
}
