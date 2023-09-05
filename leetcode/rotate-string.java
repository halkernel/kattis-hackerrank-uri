class Solution {


    public boolean rotateString(String s, String goal) {

        char arr[] = s.toCharArray();
        char arr2[] = goal.toCharArray();
        Arrays.sort(arr);
        Arrays.sort(arr2);
        System.out.println(arr);
        System.out.println(arr2);
        String s1 = new String(arr);
        String s2 = new String(arr2);

        if(!s1.equals(s2))
            return false;
        if(s.length() > goal.length())
            return false;
        int startIndex = s.lastIndexOf(goal.charAt(0));
        System.out.println(startIndex);
        String sub = s.substring(startIndex + 1);
        return goal.contains(sub);
    }


}
