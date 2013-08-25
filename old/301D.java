import java.io.*;
import java.util.*;

public class 301D {
	public static void main(String[] args) throws IOException {
		StreamTokenizer in = new StreamTokenizer (new BufferedReader(new InputStreamReader(System.in)));
		PrintWriter out = new PrintWriter(new OutputStreamWriter(System.out));
		in.nextToken();
		int n =(int) in.nval;
		in.nextToken();
		int m =(int) in.nval;
		int [] a  = new int[n];
		int [] a1 = new int[n];

		for(int i=0;i<n;i++){
			in.nextToken();
			a[i] = ((int) in.nval) -1;
			a1[a[i]] = i;
		// So these means that 
		// a1[a[1]]= 1; a1[a[2]]=2, a1[a[3]]=3
		
		}
		
		// To take the argument m 's 

		int [][] p   = new int [m][3];
		int [] ans   = new int [m];

		for (int i =0; i<m; i++){
			in.nextToken();
			p[i][0]=((int) in.nval) - 1;
			in.nextToken();
			p[i][1]=((int) in.nval) - 1;
			p[i][2] = i;
		}

	Comparator<int[]> c= new Comparator<int[]>() {
		public int compare(int[] x, int[] y]){
			return -x[0]+y[1];
		}
	}

		Arrays.sort(p,c);	
	
		int [] ch = new int [n];
		for(int i=1;	
		
	
		
		
