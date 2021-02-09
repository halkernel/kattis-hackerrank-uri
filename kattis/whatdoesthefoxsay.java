import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashSet;
import java.util.Scanner;

public class whatdoesthefoxsay{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();              
        in.nextLine();                   
        while(n-- > 0){
            String word = " ";
            String[] rec = in.nextLine().split(" ");
            ArrayList<String> recording = new ArrayList<>();        
            HashSet<String> noise = new HashSet<String>();
            recording.addAll(Arrays.asList(rec));        
            while(!word.equals("what does the fox say?")){
                word = in.nextLine();                                
                noise.add(word.split(" ")[2]);
                recording.removeAll(noise);
            }    
            System.out.println();
            recording.stream().map(s -> s + " ").forEach(System.out::print);        
        }                
        in.close();
    }
}