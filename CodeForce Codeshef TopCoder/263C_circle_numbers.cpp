#include <iostream>
#include <vector>
using namespace std;

/* psudocode
1. The number of vertices n and edges should be 2n
2. check total number of inputs equal to 4 or not
	if not "there are no solution"
3. if all degree of vertices equal to exactly 4 
	go for the solution
	
	
*/

#define maxn 100001
 vector <int> a[100001];
int n,deg[maxn],cn,res[maxn];
int cnt(int x,int y)
{
	for(int i=0;i<4;i++)
		if(a[x][i]==y) return 1;
		return 0;
}
 
void find(int x,int last)
{
	res[cn++]=x;
	deg[x]=1;
	for(int i=0;i<4;i++) {
			int u=a[x][i];
			if(deg(u))
				continue;
			if(last !=-1 && ) 
			
			for(int j=0;j<4;j++) {
				int v=a[u][j];
				if(v==x)
					continue;
				s +=cnt(v,x);
			}
			if(s==2)
			{
				find(u,x);
				return;
			}
		}
 
int main()
{
		cin>>n;
		for(int i=0;i<2*n;i++)
		{
			int u,v;
			cin>>u>>v;
			
			a[u].pushback(v);
			a[v].pushback(u);
			deg[u]++;
			deg[v]++;
		}
		// If degree of each number is not equal to 4 then get rid of it
		for (int i=1;i<n;i++)
			if(deg[i] !=4)
			{
				cout<<-1;
				return 0;
			}
		// If the number of vertics equal to 5 and also they have degree 4
		// then ans should be just 1 2 3 4 5
		if (n==5)
		{
			cout<<"1 2 3 4 5";
			return 0;
		}
		
		// If not
		
		 memset(deg,0,sizeof(deg)); // Fill the degree arry with 0
			
		find(1,-1);
		
		if(cn !=n)
		{
			cout<<-1;
			return 0;
		}
		
		for(int i=0;i<cn;i++)
				cout<<res[i]<<" ";
		
		return 0;
}
		
		
			
			
			
			
			
			
			
}			
			
			
			