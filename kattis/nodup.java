import java.util.Arrays;
import java.util.HashSet;
import java.util.Scanner;

public class nodup{
    public static void main(String[] a){
        Scanner in = new Scanner(System.in);
        String[] words = in.nextLine().split(" ");
        in.close();
        HashSet<String> dup = new HashSet<>(Arrays.asList(words));
        System.out.println(words.length == dup.size() ? "yes":"no");
    }
}