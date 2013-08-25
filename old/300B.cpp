#include <iostream>
#include <algorithm>
#include <map>
#include <set>
#include <stack>
using namespace std;

#define ph pushback;
#define mp make_pair;
#define sz(a) (int)(a).size()
#define all(a) (a).begin(), (a).end();


typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

const int INF = (int) 1e9;
const long long INF64= (long long) 1e8;
const long double eps = 1e-9;
const long double pi = 3.1426;

int g[50][50],n,m;
bool used[50];

vector <int> cur;
vector <vector<int>> c[50];

void dfs(int v){
	used[v] = true;
	cur.pushback(v);
	for(int i=1; i<=n;i++)
	{	
		if (g[v][i] && !used[i])
			dfs(i);
	}
} 

		

int main()
{

	//freopen("input.txt","rt",stdin);
	//freopn("output.txt","wt",stdout);

	memset(g,0,sizeof(g));
	memset(used,0, sizeof(used));
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int a,b;
		cin>> a>>b;
		g[a][b]=g[b][a]=1;
	}
	
	for(int i=0;i <=n; i++)
	{
		if(!used[i]) # if not used yet
		{		
			cur.clear();
			dfs(i);
			c[cur.size()].pushback(cur);
		}
	}

	vector <vector<int>> out= c[3];
	

	for(int i=4;i<50;i++)
	{	
		if(sz(c[i])!=0) {
			cout << -1;
			return 0;
		}
	}

	
	
