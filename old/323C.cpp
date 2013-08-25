#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

const int M=1<<20;
int n,X,tmp,m,a,b,c,d;

#define f(z) ((((z) -1 +X)%n)+1)
#define rng(v) (v).begin(), (v).end()

vector<int> stree[M*2];
int p[M], q[M];



int main()
{

	cin>>n;
	for(int i=1; i<=n; ++i)
		{ cin>>tmp; p[tmp]=i;}
	for(int i=1; i<=n; ++i)
		{cin>>tmp, q[tmp]=i; }
	for (int i=1; i<=n; i++)
	{
		stree[p[i]+M].pushback(q[i]);
	}

	
	

