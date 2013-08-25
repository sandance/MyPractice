import java.io.*;
import java.util.*;

public class solution 
{
	public static String rep(String s, int t){
		String ret ="";
		for(int i=0;i<t;i++) ret +=s;
		return ret;
	}

		
	public static void main(Sring[] args) throws IOException 
	{
		Scanner in = new Scanner(System.in);
		int m =0;
		
		ArrayList<String> a = new ArrayList<String> ();
		while(in.hasNextLine()){
			a.add(in.nextLine());
			m = Math.max(m, a.get(a.size() -1).length());
		}
		System.out.println(rep("*",m+2));
		boolean left = true;

		for(String v: a){
			int t =(m-v.length());
			if (t %2 ==0){
				System.out.println("*"+rep(" ",t/2)+v+rep(" ",t/2)+"*");
			}
			else{
				int r=t/2, l=t/2;
				if(!left) l++;
				else r++;
				left=!left;
				System.out.println("*"+rep(" ",l)+v+rep(" ",r)+"*");
			}
		}
		System.out.println(rep("*",m+2));
	}
}
		
