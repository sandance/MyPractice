#include <iostream>
#include <cstdlib>
#include <cstring>
#include <algorithm>
using namespace std;

const int N=105;

struct node {
	int state, money;
}q[100000];

int x[N],y[N],a[N],dist[N];
int n,d;
bool v[N];

int dd (int i, int j)
{
	return abs(x[i]-x[j]) + abs(y[i]-y[j]);
}

bool spfa(int inimoney)
{
	int i,st,ed,money,state;
	
	for(i=1;i<=n;++i){
		dist[i] = -1;
		v[i] = false;
	}

	


int main()
{
	int i,l,r,mid,ans;
	scanf("%d%d",&n,&d);
	for(i=2;i<n;++i)
		scanf("%d",&a[i]);
	for(i=1;i<=n;++i)
		scanf("%d%d",&x[i],&y[i]);

	l=0, r =d*dd(1,n);

	while(l <= r){
		mid = (l+r)/2;
		if (spfa(mid)) r =mid-1, ans =mid;
		else l=mid+1;
	}
	print("%d\n",ans);
}
