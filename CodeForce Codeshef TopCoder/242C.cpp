#include <iostream>
#include <map>
#include <queue>
using namespace std;

int x[8] ={0,0,1,-1,1,-1,1,-1};
int y[8] ={1,-1,0,0,1,1,-1,-1};

int startx,starty,endx,endy,visited[1<<20],index,i,n,r,a,b,j,ans,curindex;
pair<int,int>  target,curpos,next;
map<pair<int,int>,int> mymap;

int main()
{
	cin>>startx>>starty>>endx>>endy;
	target =make_pair(endx,endy);
	
	index=1;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>r>>a>>b;
		for(j=a;j<=b;j++)
		{
			if(mymap.find(make_pair(r,j))==mymap.end())
			{
				visited[index]=-1;
				mymap[make_pair(r,j)]=index++;
			}
		}
	}
	
	queue <pair<int,int> > Q;
	
	Q.push(make_pair(startx,starty));
	visited[mymap[make_pair(startx,starty)]]=0;
	
	while(!Q.empty())
	{
		curpos=Q.front();
		Q.pop();
		
		curindex=mymap[curpos];
		
		for(i=0;i<8;i++)
		{
			next=make_pair(curpos.first+x[i], curpos.second+y[i]);
			if(mymap.find(next) !=mymap.end())
			{
				index =mymap[next];
				if(visited[index] ==-1)
						visited[index] =visited[curindex]+1, Q.push(next);
			}
		}
		
	}
	cout<<visited[mymap[target]];
	return 0;
}
	
			