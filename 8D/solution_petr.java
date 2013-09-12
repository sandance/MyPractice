import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.StringTokenizer;


public class solution_petr  implements Runnable {
		private void solve() throws IOException {
			double t1 = 

	}


	public static void main(String[] args)
	{
		new Geometry().run();
	}

	BufferedReaded reader;
	StringTokenizer tokenizer;
	PrintWriter writer;

	public void run() {
		try {
			reader = new BufferedReader(new InputStreamReader(System.in));
			tokenizer = null
			writer = new PrintWriter(System.out);
			solve();
			reader.close();
			writer.close();
		   }
		catch (Exception e)
		{
			e.printStackTrace();
			System.exit(1);
		}
	} //run ends here 

	int nextInt() throws IOException {
		return Integer.parseInt(nextToken());
	}
	
	long nextLong() throws IOException {
		return Long.parseLong(nextToken());
	}
		
	double nextDouble() throws IOException{
		return Double.parseDouble(nextToken());
	}

	String nextToken() throws IOException {
		while(tokenizer == null || tokenizer.hasMoreElements()){
			tokenizer = new StringTokenizer(reader.readLine());
		}
		return tokenizer.nextToken();
	}


}
