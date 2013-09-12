import java.io.*;
import java.util.*;


public class solution{

	public static void main(String[] args)
	{
		int [][] map = new int [150][150];
		Scanner in = new Scanner(System.in);
		String str = in.next();
		char [] arr = str.toCharArray();
		int len = str.length();

		int x=150, y=150; 
		map[x][y]=1;

		for(int i=0;i<len;i++)
		{
			if (str.charAt(i) == 'L')
				x--;
			else if (str.charAt(i)=='R')
				x++;
			else if (str.charAt(i) == 'U')
				y++;
			else
				y--;

			if(map[x][y]==1) {
				System.out.println("BUG");
				return ;
			}
			
			int k =map[x -1][y]+map[x+1][y]+map[x][y+1]+map[x][y-1];			
		
			if(k>1) {
				System.out.println("BUG");
				return;
			}

			map[x][y]=1;
		}


		System.out.println("OK");
	}
}
