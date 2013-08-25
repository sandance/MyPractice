import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.StringTokenizer;
// this is the program for Circle Numbers problem 263C


public class C {
	
	static class Scanner{
		BufferedReader br=null;
		StringTokenizer tk=null;
		public Scanner(){
			br=new BufferedReader(new InputStreamReader(System.in));
		}
		public String next() throws IOException{
			while(tk==null || !tk.hasMoreTokens())
				tk=new StringTokenizer(br.readLine());
			return tk.nextToken();
		}
		public int nextInt() throws NumberFormatException, IOException{
			return Integer.valueOf(next());
		}
		public double nextDouble() throws NumberFormatException, IOException{
			return Double.valueOf(next());
		}
	}
	
	static LinkedList<Integer>[] g;
	static boolean[] visited;
	
	
	public static void main(String args[]) throws NumberFormatException, IOException{
		Scanner sc=new Scanner();
		int N=sc.nextInt();
		g=new LinkedList[N];
		visited=new boolean[N];
		for(int i=0;i<N;i++){
			g[i]=new LinkedList<Integer>();
			visited[i]=false;
		}
		for(int i=0;i<2*N;i++){
			int a=sc.nextInt();
			int b=sc.nextInt();
			a--;b--;
			g[a].add(b);
			g[b].add(a);
		}
		for(int i=0;i<N;i++){
			if (g[i].size()!=4){
				System.out.println("-1");
				return;
			}
		}
		boolean flag=false;
		ArrayList<Integer> sol=new ArrayList<Integer>();
		for(int i=0;i<4 && !flag;i++){
			for(int j=i+1;j<4 && !flag;j++){
				int a=g[0].get(i);
				System.out.println("Value of g[0] "+g[0]+"\n");
				System.out.println("Value of a "+a+"at"+i+"\n");
				int b=g[0].get(j);
				System.out.println("Value of b "+b+"at"+j+"\n");
				if (g[a].contains(b) && g[b].contains(a)){
					sol.clear();
					sol.add(0);
					sol.add(a);
					sol.add(b);
					if (simulate(sol,N)){
						flag=true;
						break;
					}
					sol.clear();
					sol.add(0);
					sol.add(b);
					sol.add(a);
					if (simulate(sol,N)){
						flag=true;
						break;
					}
				}
			}
		}
		if (!flag)
			System.out.println("-1");
		else{
			for(int e: sol)
				System.out.print((e+1)+" ");
			System.out.println();
		}
	}
	
	
	static boolean simulate(ArrayList<Integer> a,int N){
		for(int i=0;i<N;i++)
			visited[i]=false;
		for(int e: a)
			visited[e]=true;
		while(a.size()<N){
			System.out.println("Value of a size"+a.size()+"\n");
			int f=a.get(a.size() - 3);
			System.out.println("Value of f "+f+"\n");
			int s=a.get(a.size() - 2);
			System.out.println("Value of a s "+s+"\n");
			int t=a.get(a.size() - 1);
			System.out.println("Value of a t "+t+"\n");
			boolean found=false;
			for(int e: g[s]){
				if (e!=f && g[t].contains(e)){
					if (visited[e])
						continue;
					found=true;
					a.add(e);
					visited[e]=true;
					break;
				}
			}
			if (!found)
				return false;
		}
		return true;
	}
}