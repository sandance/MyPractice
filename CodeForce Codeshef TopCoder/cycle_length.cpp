#include<cstdio>
#include<iostream>
#include<list>
#include<cstring>
using namespace std;

#define MAXX 100111

int n,m,k,max=0,i,j;
std::list<int>edge[MAXX];
int dist[MAXX];
int pre[MAXX];

void dfs(int now)
{
    for(std::list<int>::const_iterator it(edge[now].begin());it!=edge[now].end();++it)
        if(dist[*it])
        {
            if(max<dist[now]-dist[*it])
            {
                max=dist[now]-dist[*it];
                j=now;
            }
        }
        else
        {
			cout<<"it value"<<*it<<"and"<<dist[now];
            dist[*it]=dist[now]+1;
            pre[*it]=now;
            dfs(*it);
        }
}

int main()
{
    scanf("%d %d %d",&n,&m,&k);
    while(m--)
    {
        scanf("%d %d",&i,&j);
        edge[i].push_back(j);
        edge[j].push_back(i);
    }
    dist[1]=1;
    dfs(1);
    ++max;
    printf("%d\n",max);
    for(;max--;j=pre[j])
        printf("%d ",j);
    puts("");
    return 0;
}