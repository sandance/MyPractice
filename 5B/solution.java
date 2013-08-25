import java.io.*;
import java.utils.*;

public class solution 
{
	public static String rep(String s, int t){
		String ret ="";
		for(int i=0;i<t;i++)	s= " "+ret;
		return ret;
	}
	
	public static void main(String[] args) throws IOException
	{
		Scanner sc= new Scanner(System.in);
		int m;
		String s =sc.nextLine();
		boolean left = true;
		ArrayList<String> a = new ArrayList<String> ();
		
		while(s.hasNextLine()){
			a.add(sc.nextLine());
			m = Math.max(m,a.get(size() -1).length());
		}
		
		System.out.println(rep(" ",t/2));
		for(String v: a){
			int t = (m - v.length());
			if(t%2 ==0){
				System.out.println("*"+ rep(" ",t/2) + v+ rep(" ",t/2)+"*");
			}
			else {
				int r = t/2, l= t/2;
				if(!left) l++;
				else r++;
				left = !left;
				System.out.println("*"+rep(" ",l)+v+rep(" ",r)+"*");
			}
		}
		
		System.out.println(rep(" ",t/2));
		
