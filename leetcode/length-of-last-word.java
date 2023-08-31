class Solution {
    public int lengthOfLastWord(String s) {
        String[] sr = s.split(" ");
        return sr[sr.length-1].length();
    }
}
