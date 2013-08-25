import java.util.*;



public class Main {
	public static void main(String[] args)  {
		Scanner sc = new Scanner(System.in);
		int n=sc.nextInt();
		
		HashMap<String, Integer > map = new HashMap<String, Integer> ();
		
		for (int i =0; i<n ; i++){
			String s= sc.next();
			
			if(!map.containsKey(s)) {
				System.out.println("OK");
				map.put(s,1);
			}
		
			else {
				System.out.println(s+map.get(s));
				map.put(s, map.get(s)+1);	
			}
		}
	}
} 
