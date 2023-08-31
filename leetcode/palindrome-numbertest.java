class Solution {
    public boolean isPalindrome(int x) {
        char[] pal = String.valueOf(x).toCharArray();
        for(int i = 0; i < pal.length/2; i++){
            if(pal[i] != pal[pal.length -i -1])
                return false;
        }
        return true;
    }
}
