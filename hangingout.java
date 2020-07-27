import java.util.Scanner;

public class hangingout{
    public static void main(String[] args) {
        int safeLimit = 0, n = 0, peopleToEnterOrLeave = 0, people = 0;
        int notAllowed = 0;
        Scanner input = new Scanner(System.in);
        String event;

        safeLimit = input.nextInt();
        n = input.nextInt();
        input.nextLine();
        for(int i =0; i < n; i++){
            String word = input.nextLine();
            String[] e = word.split(" ");        
            event = e[0];            
            peopleToEnterOrLeave = Integer.parseInt(e[1]);
        
            if(event.equals("enter")){
                if(people + peopleToEnterOrLeave <= safeLimit){
                    people += peopleToEnterOrLeave;
                }            
                else{
                    notAllowed++;
                }                    
            }            
            else if(event.equals("leave")){
                people -= peopleToEnterOrLeave;
            }
        }
        System.out.println(notAllowed);
    }
}