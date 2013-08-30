import java.util.*;

public class solution 
{
	public static void main(String[] args)
	{
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int m = in.nextInt();
		int blocknum =1;
		
		int[]  data=new int[m];
		
		for(int i=0;i<n;i++)
		{
			String cmd = in.next();
			if (cmd.equals("alloc"))
			{
				int b = in.nextInt();
				int p = find(data,b);
				
				if ( p==-1)
					System.out.println("NULL");
				else
				{
					System.out.println(blocknum);
					for(int j=p;j<p+b;++j)
						data[i]=blocknum;
					++blocknum;
				}
			}

			else if (cmd.equals("erase"))
			{
				int b =in.nextInt();
				boolean did =false;
				for(int j=0;j<n;++j)
				{
					if(data[j]==b)
					{
						data[j]=0;
						did=true;
					}
				}
				if (b <1 || b >= blocknum || !did)
				{
					System.out.println("ILLIGAL_ERASE_ARGUMENT");		
				}

			}

			else 
				defrag(data);
			
		} //end of for loop
			

	}

	public static int find(int data[], int len)
	{
		int free=0;
		for (int p=0; p<data.length; ++p)
		{	
			if(data[p] ==0)
				++free;
			else
				free=0; // start all over again 
			if(free==len)
				return p-len +1;	
		}
		return -1;
	}
	
	public static void defrag(int [] data)
	{
		int [] ndata= new int[data.length];
			
		int p=0;
		for(int i=0;i<data.length;++i)
			if(data[i] >0)
				ndata[p++]=data[i];
		System.arraycopy(ndata,0,data,0,data.length);
	}

}	
