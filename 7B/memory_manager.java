import java.util.*;

public class memory_manager 
{
	public static void main(String[] args) 
	{
		new memory_manager();
	}
	
//#	boolean free(int [] data, int k)
//#	{
//#		boolean flag=false;
//#		int free=0;
//#		for(int i=0;i<data.length;i++)
//#		{
//#			if(data[i]==0) free++;
//#			else 
//#				free=0
//#
//#			if(free==n){
//#				for(int j=0; j<n;j+)
//#					data[i-j] = k;	
//#			   return true;
//#			}
//#		}
//#		return false;
//#	}
//# 	
//#
//#	void erase(int [] data, int id)
//#	{
//#		for(int i=0;i<data.length;i++)
//#		{
//#			if(data[i]==id)
//#				data[i]=0;
//#		}
//#	}
//#
//#	void defrag() 
//#	{
//#		Queue<Integer> q = new LinkedList<Integer> ();
//#		for(int i=0;i<m;i++)
//#		{
//#			if(data[i] !=0 )
//#				q.add(data[i]);
//#			}
//#		}
//#		
//#		int index =0;
//#		while(!q.isEmpty()) {
//#			data[index++] = q.poll();
//#			//index++;
//#		}
//#		
//#		while(index != data.length)
//#			data[index++] =0;
//#	}
//#		
//#	

	//global variable	

	int [] data;

	memory_manager()
	{
		Scanner in = new Scanner(System.in);
		int t= in.nextInt();
		int m= in.nextInt();
		int k =1;

		HashSet<Integer> set = new HashSet<Integer> ();

		
		data = new int [m];
		for(int i=0;i<t;i++)
		{
			command = i.next().trim();
			
			if(command.equals("defragment")) defrag(); //defragment 
			
			else if (command.equals("alloc")) { //alloc 
				int b = in.nextInt();
				boolean success = free(b,k);
			
				if(success)
				{
					System.out.println(k);
					set.add(k++);
				}
				else
					System.out.println("NULL");
			}	
					
			else {  // erase
			 	int id = in.nextInt();
				
				if(set.contains(id))
						//set.remove(id);
						erase(data,id);
						set.remove(id);
				else
					System.out.println("ILLEGAL_ERASE_ARGUMENT");
			}
		}

	}	

	boolean free(int size, int k)
        {
                boolean flag=false;
                int free=0;
                for(int i=0;i<data.length;i++)
                {
                        if(data[i]==0) free++;
                        else
                                free=0

                        if(free==size){
                                for(int j=0; j<size;j+)
                                        data[i-j] = k;
                           return true;
                        }
                }
                return false;
        }


        void erase(int [] data, int id)
        {
                for(int i=0;i<data.length;i++)
                {
                        if(data[i]==id)
                                data[i]=0;
                }
        }

        void defrag()
        {
                Queue<Integer> q = new LinkedList<Integer> ();
                for(int i=0;i<m;i++)
                {
                        if(data[i] !=0 )
                                q.add(data[i]);
                        }
                }

                int index =0;
                while(!q.isEmpty()) {
                        data[index++] = q.poll();
                        //index++;
                }

		                while(index != data.length)
                        data[index++] =0;
        }



}								
