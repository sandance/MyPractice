#include <iostream>
#include <vector>
using namespace std;
#define maxn 100005
int n,m,x,y,a,b;
int visited[maxn];
vector<int> g[maxn];
int main()
{
	cin>>n>>m>>x>>y;
	for(int i=0;i<=m;i++)
	{
		cin>>a>>b;
		g[a].push_back(b);
		g[b].push_back(a);
		
	}
	
	for(int i=0;i<=m;i++)
	{
		if(g[i].size() <=x) continue; // In this case there are no hydra
		
		//if((g[i].size() >= x+y+1))
		for(int j=0;j<=g[i].size(); j++)
			int v=g[i][j];
			
			if( (g[i].size() >x+y+1 )| g[v] >= x+y+1) // there are some hydra
			{
				
				
			
			
			