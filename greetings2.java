import java.util.Collections;
import java.util.Scanner;



public class greetings2 {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String in = scanner.next();
        String substring = in.substring(1, in.length() - 1);
        String join = String.join("", Collections.nCopies(2, substring));
        in = in.replace(substring,join);
        scanner.close();
        System.out.println(in);
    }
}
