import java.util.*;

public class d { 
	public static int [] l,ws,hs;
	public static int n;
	
	public static void main(String [] args) {
		Scanner in = new Scanner(System.in);
		n = in.nextInt();
	
		ws = new int [n+1];
		hs = new int [n+1];
		l  = new int [n+1];
	
		Arrays.fill(l, -1); 
		for (int i=0;i<=n;i++){
			ws[i] = in.nextInt();
			hs[i] = in.nextInt(); 	
		}

		level(0);
		System.out.println(l[0]);
		
		if (l[0] ==0) return;
		int cur = 0; 
		while(l[cur] >0){
			for(int i=0; i<n; i++) {
				if(graph(cur, i) && l[cur] == l[i]+1) {
					System.out.print(i + " ");
					cur = i;
				}
			}
		}
		System.out.println();
	}
	public static boolean graph (int a, int b){
		return ws[a] < ws[b] && hs[a] < hs[b];
	}

	public static int level(int cur) {
		int best = 0;
		
		if (l[cur] !=-1)
				return l[cur];
		for(int i=0; i<=n;i++) {
			if(graph(cur,i))
				best = Math.max(best, level(i)+1);
		} 
		return l[cur] = best;
	}

}	
