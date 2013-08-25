import java.util.*;
import java.io.*;

public class solution {
	public static void main(String[] args) throws IOException {
			Scanner sc = new Scanner(System.in);
			char [] v = sc.next().trim().toCharArray(); //Convert it to a character array
			
			int best = 0;
			int best_freq = 1;
			int last = -1;
			Stack<Integer> s = new Stack<Integer> ();
		
			for(int i=0;i<v.length;i++){
					for(int j=0;j<s.size();j++) System.out.println("Stack element no: "+j+" "+s.peek()+"\n");
					
					if (v[i] == '(')
						s.push(i);
					else if (s.isEmpty())
						last = i;
					else {
						s.pop();
						int crnt = i - (s.isEmpty() ? last : s.peek());
						System.out.println("Intermediate Crnt "+crnt);
						if(crnt == best)
								best_freq +=1;
						if (crnt > best ){
								best = crnt;
								best_freq =1;
						}
					}
			}

			System.out.println(best+" "+best_freq);
	}

}
