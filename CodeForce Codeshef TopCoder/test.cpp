
#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#include <sstream>
#define maxn 100001
using namespace std;
int abs(int x) {
	return (x<0? -x:x);	
}

vector<int> a[maxn];
int n,deg[maxn],cn,res[maxn];
int cnt(int x,int y) {
	for(int i = 0;i<4;i++)	
		if (a[x][i] == y) return 1;
	return 0;
}
void find(int x,int last) {
	for(int i = 0;i<4; i++) {
		int u = a[x][i];
		cout<<u<<" x  and i "<<x<<i<<endl;
	}	
	
	res[cn++] = x;
	deg[x] = 1;
	for(int i = 0;i<4; i++) {
		int u = a[x][i];
		cout<<u<<"i "<<i<<endl;
//		cout << x << " " << u << deg[u] <<  endl;
		if (deg[u]) continue;
		if (last != -1 && !cnt(last,u)) continue;
		int s = 0;
		for(int j = 0;j<4; j++)  {

			int v = a[u][j];
			if (v == x) continue;
			s+= cnt(v,x);
		}
		
//		cout << "sss " << s << endl;
		if (s == 2) {
			find(u,x);
			return;
		}		
	}	
}
int main() {
//	freopen("inp.txt","r",stdin);	freopen("out.txt","w",stdout);
	cin >> n;
	for(int i = 0;i<2*n;i++) {
		int u,v;
		cin >> u >> v;
		a[u].push_back(v);
		a[v].push_back(u);
		deg[u]++;
		deg[v]++;	
	}
	for(int i = 1;i<=n;i++)
		if (deg[i] != 4){
			cout << -1;
			return 0;	
		}
	
	if (n == 5) {
		cout << "1 2 3 4 5";
		return 0;
	}

	memset(deg,0,sizeof(deg));
	find(1,-1);
	if (cn != n) {
		cout << -1;
		return 0;	
	}	
	for(int i = 0;i<cn;i++)
		cout << res[i] << " ";
//	system("pause");
}