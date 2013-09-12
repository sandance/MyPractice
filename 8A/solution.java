import java.io.*;
import java.util.*;


public class solution {

	static	boolean isOk(String s, String a, String b)
	{
		int ai = s.indexOf(a);
//		System.out.println("Index of a"+ai);
			
		if (ai== -1)
			return false;
		int bi=s.indexOf(b,ai+a.length());
//		System.out.println("Index of b"+bi);

		if (bi != -1)
			return true;

		
		return false;
	}
		
		
		
	
	public static void main(String[] args) throws IOException 
	{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String str = br.readLine();

		StringBuffer rev = new StringBuffer(str).reverse();
//		System.out.println("Reverse line"+rev);

		String first = br.readLine();
		String sec   = br.readLine();
		
		boolean fwd=isOk(str,first,sec);
		boolean bck=isOk(rev.toString(),first,sec);

		if(fwd&&bck)
			System.out.println("both");
		else if(fwd)
			System.out.println("forward");
		else if (bck)
			System.out.println("backward");
		else
			System.out.println("fantasy");

			

			
	}
}		
