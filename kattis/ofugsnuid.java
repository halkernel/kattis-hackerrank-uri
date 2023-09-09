import java.util.*;


class Main {
    
    public static void main( String args[] ){
        Scanner sn = new Scanner(System.in);
        int n = sn.nextInt();
        int arr[] = new int[n];
        
        for(int i = 0; i < n; i++){
            arr[n-i-1] = sn.nextInt();    
        }

        for(int i = 0; i < n; i++){
            System.out.println(arr[i]);
        }        
    }
    
}
