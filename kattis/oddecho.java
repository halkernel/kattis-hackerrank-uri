import java.util.*;


class Main{
    
    public static void main(String args[]){
        Scanner sn = new Scanner(System.in);
        int cases = sn.nextInt();
        for(int i =1 ; i <= cases; i++){
            String res = sn.next();
            if(i % 2 != 0){
                System.out.println(res);
            }
        }
    }
    
    
}
