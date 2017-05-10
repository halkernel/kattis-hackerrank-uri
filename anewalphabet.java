package kattis;

import java.util.HashMap;
import java.util.LinkedList;
import java.util.Scanner;

public class Main {
		

	public static void main(String[] args) {
		HashMap<String,String> alphabet = new HashMap<>(); 
		
		alphabet.put("a","@");
		alphabet.put("b","8");
		alphabet.put("c","(");
		alphabet.put("d","|)");
		alphabet.put("e","3");
		alphabet.put("f","#");
		alphabet.put("g","6");
		alphabet.put("h","[-]");
		alphabet.put("i","|");
		alphabet.put("j","_|");
		alphabet.put("k","|<");
		alphabet.put("l","1");
		alphabet.put("m","[]\\/[]");
		alphabet.put("n","[]\\[]");
		alphabet.put("o","0");
		alphabet.put("p","|D");
		alphabet.put("q","(,)");
		alphabet.put("r","|Z");
		alphabet.put("s","$");
		alphabet.put("t","']['");
		alphabet.put("u","|_|");
		alphabet.put("v","\\/");
		alphabet.put("w","\\/\\/");
		alphabet.put("x","}{");
		alphabet.put("y","`/");
		alphabet.put("z","2");
		
		Scanner sc = new Scanner(System.in);
		LinkedList<String> s = new LinkedList<>();
		
		String line = sc.nextLine();

		line = line.toLowerCase();
		char[] charArray = line.toCharArray();
		String result="";

		for(int i=0; i < charArray.length; i++){
			//characters
			if(alphabet.containsKey(line.substring(i, i+1))){
				s.add(alphabet.get(line.substring(i, i+1)));
			}
			//blank spaces and other signals
			else
				s.add(line.substring(i, i+1));
			
			result += s.removeFirst();
		}
		
		System.out.print(result);

		

	}

}
