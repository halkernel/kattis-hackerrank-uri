class Solution {
    public boolean canConstruct(String ransomNote, String magazine) {
        for(int i = 0; i < ransomNote.length(); i++){
            char c = ransomNote.charAt(i);

            int exists = magazine.indexOf(c);
            if(exists == -1)
                return false;
            magazine = magazine.substring(0, exists) + magazine.substring(exists + 1);
        }
        return true;
    }
}
