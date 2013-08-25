import java.lang.*;
import java.util.*;


public class Main {
	int n,d;
	int a[]=new int [105];
	int x[]=new int [105];
	int y[]=new int [105];
	int dist[][]= new int [105][105];

	public void init()
	{
		Scanner cin = new Scanner(System.in);
		n=cin.nextInt();
		d=cin.nextInt();
		for(int i=2;i<n;i++)
			a[i]=cin.nextInt();
		for(int i=1;i<=n;i++)
		{
			x[i]=cin.nextInt();
			y[i]=cin.nextInt();
		}
	}

	public void solve()
	{
		int i,j,k;

		for (i=1;i<=n;i++){
			for(j=1;j<=n;j++){
				dist[i][j]=i==j?0:(Math.abs(x[i]-x[j])+Math.abs(y[i]-y[j]))*d-a[i];
				System.out.println("i and j"+i);
				System.out.println(dist[i][j]);
			}
		}
			
	}

	public Main()

	{
		init();
		solve();
	}

	public static void main(String[] args){
		new Main();
	}
}
