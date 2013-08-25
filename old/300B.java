import java.io.*;
import java.util.*;

public class 300B {

	public static void main(String[] args) throws IOException {
		Scanner in = new Scanner(System.in);
		PrintWriter out= new PrintWriter(new OutputStreamWriter(System.out));
		int n = in.nextInt();
		int m = in.nextInt();
		int [] a = new int[m];
		int [] b = new int[m];
		for(int i=0; i<m; i++)
		{
			a[i]=in.nextInt();
			b[i]=in.nextInt();
		}

		int [] c= new int[n+1];
		


