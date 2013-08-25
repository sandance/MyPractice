import java.io.*;
import java.utils.*;

public class sol {
		public static void main(String[] args) throws IOException
		{
			int n=0; 
			int m=0; 
			Scanner sc = new Scanner(System.in());
			String s= "\0";

			while(sc.hasNextLine()){
				s=sc.nextLine();
			
				if (s.charAt(0) == '+' ) 
					n++;
				else if(s.charAt(0) == '-' )
					n--;
				else
					m += (s.length() - s.indexOf(':') -1)*n;
			}
		

		System.out.print(m);
	}
}
