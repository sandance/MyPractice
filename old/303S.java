import java.io.*;

public class 303S {
	public static void main(String[] args) throws IOException {
		StreamTokenizer in = new StreamTokenizer(new BufferedReader(new InputStreamReader (System.in)));
		PrintWriter out = new PrintWriter(new OutputStreamWriter(System.out));
		in.nextToken();
		int n=(int) in.nval;
		in.nextToken();
		int k=(int) in.nval;
		//Delcare an array to store input data
		int [] a = new int[n];
		int maxa =0;
		int mina =10000000;
		for(int i=0;i<n;i++){
			in.nextToken();
			a[i] =(int).in.nval;
			if (a[i] > maxa)
				maxa=a[i];
			if (a[i] < mina) 
				mina=a[i]
		}

		int r = maxa - mina +1;
		int p = k*(k+1)/2;
		int [] delta = new int[r];
		int [] test  = new int[maxa+1];
		
		for (int i=0;i<(n-1);i++)
			for(int j=i+1;j<r;j +=i) {
					ch +=delta[j];
						
					if (ch > p)
						break;
			}


		
			
		
		
