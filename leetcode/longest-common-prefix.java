class Solution {
    public String longestCommonPrefix(String[] strs) {
        Arrays.sort(strs);
        String s1 = strs[0];
        String s2 = strs[strs.length -1];
        int pos = 0;
        while(pos < s1.length() && pos < s2.length()){
            if(s1.charAt(pos) == s2.charAt(pos)){
                pos+=1;
            }
            else {
                break;
            }
        }
        return s1.substring(0, pos);
    }
}
