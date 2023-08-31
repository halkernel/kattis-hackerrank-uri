class Solution {
    public int longestValidParentheses(String s) {
        if(s.length() <= 1){
            return 0;
        }
        Stack<Character> st = new Stack<>();
        char[] arr = s.toCharArray();
        int sum = 0;
        for(int i = 0; i < arr.length; i++){
            if(arr[i] == '(') {
                st.push(')');
                sum += 2;
            }
            else if(!st.isEmpty() && st.pop() == arr[i]){
                sum -= 2;
            }
        }
        return sum;
    }
}
