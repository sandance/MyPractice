import java.util.*;

public class StringTokenizerDemo
{
	public static void main(String[] args)
	{
		StringTokenizer st=new StringTokenizer("Come/to/Learn");
		
		// checking elements
	//	while(st.hasMoreElements()) {
	//		System.out.println("Next element: "+st.nextElement());
	//	}
		
		// checking next token 
		System.out.println("Next token is : "+st.nextToken("/"));
		
	}
}	