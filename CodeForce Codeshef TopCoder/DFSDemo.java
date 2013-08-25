import java.util.*;
import java.io.*;

class DFSDemo
{
    public static int V,E,i=0;
	public static int [] result;
	public static ArrayList<Integer> [] e;
	
	
	
	
	public static void DFSUtil(int v, boolean visited[])
	{
	    if(visited[v] == false)
		{
		
			result = new int [V];
			visited[v]= true;
			result[i++]=v;
			
			for(Integer k: e[v])
			{
				if(!visited[k])
					DFSUtil(k,visited);
			}
		}
	}
	public static void DFS (int v)
	{
		boolean [] visited= new boolean[V];
		Arrays.fill(visited,false);
		
		//for (int v=0;i<V;v++)
				DFSUtil(v,visited);
	}

	public static void main(String[] args)
	{
		
	
		
		Scanner input =new Scanner(System.in);
		 V=input.nextInt();
		 E=input.nextInt();
		
		//ArrayList<Integer> [] e=new ArrayList[V];
		
		e=new ArrayList[V];
		
		for (int i=0;i<V;i++)
			e[i] =new ArrayList<Integer> ();
			
		for(int i=0; i<E; i++) {
			int n1= input.nextInt();
			int n2=input.nextInt();
			e[n1].add(n2);
			e[n2].add(n1);
		}
		System.out.println("Find DFS from a given node, enter node"+"\n");
		int k=input.nextInt();
		System.out.println("Following is the DFS \n");
		DFS(k);
		
		for(int j=0;j<V;j++)
			System.out.println(result[j]+" ");
		
}

}		
			