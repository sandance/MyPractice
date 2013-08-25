
import java.util.*;

public class DFS
{
	public static void main(String[] args)
	{
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int m=sc.nextInt();
		int k=sc.nextInt();
		
		ArrayList<Integer> [] e=new ArrayList[n];
		
		for (int i=0;i<n;i++)
			e[i]=new ArrayList<Integer> ();
		
		for(int i =0;i<m;i++)
		{
			int n1=sc.nextInt()-1;
			int n2=sc.nextInt()-1;
			
			e[n1].add(n2);
			e[n2].add(n1);
		}
		sc.close();
		
		int center =0;
		int [] time =new int [n];
		
		Arrays.fill(time, -1);
		ArrayList<Integer> res=new ArrayList<>();
		
		res.add(center);
		time[0]=0;
		
		out: for(int it=1;it<m;it++)
				for(Integer v:e[center])
				{
					if(time[v] <0)
					{
						time[v]=it;
						res.add(v);
						center =v;
						continue out;
					}
					
					if(-time[v]+time[center] >=k)
					{
						res.subList(0, time[v].clear());
						break out;
					}
				}
			System.out.println(res.size());
			for(int i=0, len=res.size(); i<len;i++)
				System.out.println((1+res.get(i))+" ");
	}
}	
		
		
			