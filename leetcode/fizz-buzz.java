class Solution {
    public List<String> fizzBuzz(int n) {
        List<String> lst = new ArrayList<>();
        int cnt = 0;
        while(cnt++ < n){
            String s = "";
            if(cnt % 3 == 0){
                s+="Fizz";
            }
            if(cnt % 5 == 0){
                s+="Buzz";
            }
            lst.add(s.equals("") ? String.valueOf(cnt) : s);
            
        }
        return lst;
    }
}
