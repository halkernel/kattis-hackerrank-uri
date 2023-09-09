import java.util.*;

class Main{
    
    static String rev(String st){
        if(st.isEmpty())
            return "";
        return rev(st.substring(1)) + st.charAt(0);
    }
    
    public static void main (String args[]){
        Scanner st = new Scanner(System.in);
        String ans = st.next();
        System.out.println(rev(ans));
    }
}

