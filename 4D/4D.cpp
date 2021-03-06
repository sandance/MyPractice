#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

const int MAX = 5001;
int w[MX],h[MX],to[MX],d[MX];
int n;

int dfs(int v)
{
	if(d[v]) return d[v]; // if already visited
	d[v]=1; //visited now
	
	for(int i=0;i<=n; i++)
	{
		if(w[v]<w[i] && h[v]<h[i])
		{
			if (dfs(i)+1 > d[v])
			to[v]=i; 
			d[v]=d[v]+1;
		}
		return d[v];
	}
}
	


int main()
{
	cin>>n;
	for(int i=0;i<=n;i++)
	{
		cin>>w[i]>>h[i];
		to[i] = -1;
	}

	dfs(0);
	cout<<d[0]-1<<"\n";
	for(int i=to[0]; i!=-1;i=to[i])
		cout<<i<<" ";

	return 0;
}

