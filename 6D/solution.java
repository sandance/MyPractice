import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.io.StreamTokenizer;

public class solution {

	static StreamTokenizer in;
	static PrintWriter out;
	
	static int nextInt() throws IOException {
		in.nextToken();
		return (int) in.nval;
	}

	static String nextString() throws IOException {
		in.nextToken();
		return in.sval;
	}

	public static void main(String[] args) throws IOException {
		in = new StreamTokenizer(new BufferedReader(new InputStreamReader(System.in)));
		out = new PrintWriter(System.out);

		n = nextInt();
		a = nextInt();
		b = nextInt();
		h = new int [n];
		
		for(int i=0;i<n;i++) h[i] = nextInt();
		
		//DP memorization 

		memo = new Integer[n][20][20];

		q = new int [n][20][20];
		out.println(	
		
