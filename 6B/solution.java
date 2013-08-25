import java.util.*;

public class solution {
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		int n=in.nextInt();
		int m=in.nextInt();
		char c=in.next().trim().charAt(0); // This is the way to take input of a single character , char c = in.next().trim().charAt(0)

		char [][] board = new char [n][m];

		HashSet<Character> found = new HashSet<Character> ();

	
		for(int i=0;i<n;i++)
			board[i] = in.next().trim().toCharArray(); // Taking input to the array as a character , in.next().trim().toCharArray()
	
//		for(int i=0;i<n;i++)
//			System.out.println(board[i]+" ");
		
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if (board[i][j] !=c)
						continue;
				for (int di =-1; di<=1;di++){
					for(int dj=-1;dj<=1;dj++){
						if(di*dj !=0)
							continue;
						int x=i+di;
						int y=j+dj;	
						
						if (x <0 || x >= n || y<0 || y >= m)
							continue;
						if (board[x][y] !=c && board[x][y] !='.')
							 	found.add(board[x][y]);
						}
					}
				}
			}

			System.out.println(found.size());
	
					
	}	

}
	  
