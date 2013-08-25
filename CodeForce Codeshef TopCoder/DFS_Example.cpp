#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include <string>
#include <set>
#include <map>
#include <cstdio>
using namespace std;
#define N 100100

vector <int> adj[N];
bool mark[N];

bool is(int u, int y)
{
	for(int i = 0; i < adj[u].size(); i ++)
		if(y == adj[u][i])
			return true;
	return false;
}

bool dfs(int u)
{
	mark[u] = true;
	for(int i = 0; i < adj[u].size(); i ++)
		if(mark[adj[u][i]] == false)
			dfs(adj[u][i]);
	
}

int n;
int aa[N];
bool possible;

void back(int x, int now, int y, int id)
{ 
	// cout << x << " " << now << " " << y << " " << id << endl;
	if(possible == true)
		return;
		
	if(id == n-2)
	{
		if(is(y, aa[0]))
		{
			// cout << "YESS ";
			possible = true;
			for(int i = 0; i < n-3; i ++)
				cout << aa[i] << " ";
			cout << x << " " << now << " " << y << endl;
		}
		return;
	}
	
	for(int i = 0; i < adj[now].size(); i ++)
	{
		if(mark[adj[now][i]] == false && is(y, adj[now][i]))
		{
			aa[id] = now;
			mark[now] = true;
			back(now, y, adj[now][i], id+1);
			mark[now] = false;
		}
	}
}

int main()
{
	int x, y;
	cin >> n;
	for(int i = 2*n; i >= 1; i --)
	{
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	
	memset(mark, 0, sizeof mark);
	int cmp = 0;
	for(int i = 1; i <= n; i ++)
		if(mark[i] == false)
		{
			dfs(i); // DFS used here to find any vertex which is not reachable
			
			cmp ++;
			cout<<"CMP Value and cor. i value"<<cmp<<" "<<i<<endl;
		}
	
	possible = true;
	for(int i = 1; i <= n; i ++)
	{
		if(adj[i].size() != 4)
			possible = false;
	}
	if(possible == false || cmp > 1)
	{
		cout << -1 << endl;
		return 0;
	}
	
	memset(mark, 0, sizeof mark);
	
	possible = false;
	for(int i=0;i<4;i++)
	{
		cout<<"i value"<<i<<" "<<adj[1][i]<<endl;
	}
	
	for(int i = 0; possible == false && i < 4; i ++)
	{
		for(int j = i+1; possible == false && j < 4; j ++)
		{
			x = adj[1][i];
			y = adj[1][j];
			if(is(x, y))
			{
				aa[0] = x;
				mark[x] = true;
				
				back(x, 1, y, 1);
				
				mark[x] = false;
			}
		}
	}
	
	if(possible == false)
		cout << -1 << endl;

	return 0;
}