import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class sol1 {

	public static void main(String[] args) throws IOException {

		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out = new PrintWriter(System.out);
		
		char [] s = in.readLine().toCharArray();

		int n =s.length;
		
		long h1 =0, h2 =0;
		long k =1000003, p =1;

		int [] res = new int[n];

		// Or you can something like this
		// StringBuffer res = new StringBuffer(a).reverse();

		for (int i =0; i <n;i++){
			h1 = h1 *k + s[i];
			out.println(h1);
			h2 = s[i]*p + h2;
			out.println(h2);
			p *=k;
			out.println(p);

			if(h1==h2) res[i] = res[(i-1)/2] + 1;
		}

		int ans =0;
		for(int i=0; i<n;i++) ans +=res[i];
		out.println(ans);
		out.flush();
	}	
}
