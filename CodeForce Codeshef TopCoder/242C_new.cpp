#include<cstdio>
#include <iostream>
#include<map>
#include<queue>
using namespace std;

#define PB push_back
#define MP make_pair
#define PII pair < int , int >

int x[]={0,0,1,-1,1,1,-1,-1};
int y[]={1,-1,0,0,1,-1,1,-1};
int startx,starty,endx,endy,vis[1<<20],ind,i,n,r,a,b,j,ans,curind;
PII curpos,target,next;
map < PII ,int > mymap;
int main()
{
	scanf("%d%d%d%d",&startx,&starty,&endx,&endy);
	target=MP(endx,endy);
	ind=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&r,&a,&b);
		for(j=a;j<=b;j++)
		{	
			if(mymap.find(MP(r,j))==mymap.end())
			{
				cout<<"index"<<ind<<endl;
				vis[ind]=-1;
				mymap[MP(r,j)]=ind++;
				
			}
		}
	}
	queue < PII  > Q;
	Q.push( MP(startx,starty));
	vis[mymap[MP(startx,starty)]]=0;
	while(!Q.empty())
	{
		curpos=Q.front();
		Q.pop();

		curind=mymap[curpos];
		cout<<"Current Index"<<curind<<endl;
		for(i=0;i<8;i++)
		{
			next=MP(curpos.first+x[i],curpos.second+y[i]);
			if(mymap.find(next)!=mymap.end())
			{
				ind=mymap[next];
				cout<<"index queue"<<ind<<endl;
				if(vis[ind]==-1)
					vis[ind]=vis[curind]+1,Q.push(next),cout<<vis[ind]<<" "<<endl;
			}
		}
	}
	printf("%d\n",vis[mymap[target]]);
	return 0;
}