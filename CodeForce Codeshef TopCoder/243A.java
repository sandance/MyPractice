import java.util.*;

public class Main
{
	public static void main(String[] args)
	{
		Scanner input=new Scanner(System.in);
		final int n=input.nextInt();
		int [] a=new int[n];
		for(int i=0;i<n;i++)
		{
			a[i]=input.nextInt();
		}
		Set<Integer> set =new HashSet<Integer> ();
		Set<Integer> all,next =new HashSet<Integer> ();
		
		for(int i=0;i<n;i++)
		{
			next.add(a[i]);
			for(int j: set)
			{
				next.add(a[i] | j);
			}
			all.addAll(next);
			set=next;
		}
		all.addAll(set);
		System.out.println(all.size());
	}
}