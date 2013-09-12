import java.io.*;

public class Main {
	static BufferedReader in;
	
	public static void main(String[] args) throws IOException {
		in = new BufferedReader(new InputStreamReader(System.in));
		StringBuffer sb = new StringBuffer(in.readLine());
		char [] p= (sb + "$" +sb.reverse()).toCharArray();

		int c=0;
		int next [] = new int[p.length +1];
		
		for(int i=1; i < p.length; i++)
		{
			while( c>0 && p[i] != p[c]){
				c = next[c];		
			}
			next[i+1] = p[i] == p[c] ? ++c : c;
			
