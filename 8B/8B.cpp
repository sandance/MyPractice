#include<stdio.h>
bool g[222][222];

char s[102];

int main()
{

	cin>>s;
	
	int x=102, y =102;

	for(int i=0;s[i];i++)
	{
		g[x][y]=1;
		
		if(s[i]=='L') y--;
		else if (s[i]=='R') y++;
		else if (s[i]=='U') x--;
		else 
			x++;

		if(g[x+1][y]+g[x-1][y]+g[x][y+1]+g[x][y-1]+g[x][y]>1) break;
   	}
    		
		if(s[i])puts("BUG");
    		else puts("OK");
    		return 0;

}
