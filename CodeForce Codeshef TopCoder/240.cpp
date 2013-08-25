#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define maxn 100005
vector<int> g[maxn],ans1,ans2;
int n,m,x,y,a,b;
int vis[maxn];
void print(vector<int> ans){
    for(int i=0;i<ans.size();i++)
    {
        if(i) cout<<" ";
        cout<<ans[i];
    }
    cout<<endl;
}
int main(){
    cin>>n>>m>>x>>y;
    for(int i=1;i<=m;i++){
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    for(int i=1;i<=n;i++){

        if(g[i].size()<=x) continue;
        int a=g[i].size()-1;
        int b;
        int c;
        for(int j=0;j<g[i].size();j++) vis[g[i][j]]=1;

        for(int j=0;j<g[i].size();j++){

            b=c=0;
            int v=g[i][j];

            for(int k=0;k<g[v].size();k++)
            {
                int t=g[v][k];
				cout<<"t val:"<<t<<"I val:"<<i<<endl;
                if(t==i) continue;

                if(vis[t]) b++;else c++;

                if(y-c<=b&&a-(y-c)>=x)
                {
                    cout<<"YES"<<endl;
                    cout<<i<<" "<<v<<endl;

                    int f=0;
                    for(int w=0;w<=k;w++)
                    if(g[v][w]==i) continue;
                    else if(vis[g[v][w]])
                    {
                        if(f<y-c){ ans2.push_back(g[v][w]);f++;vis[g[v][w]]=-1;}
                    }
                    else
                    {
                        ans2.push_back(g[v][w]);
                    }
                    f=0;
                    for(int w=0;w<g[i].size();w++)
                    if(vis[g[i][w]]!=-1&&(f<x)&&g[i][w]!=v) {ans1.push_back(g[i][w]);f++;}
                    print(ans1);
                    print(ans2);
                    return 0;
                }
            }
        }
         for(int j=0;j<g[i].size();j++) vis[g[i][j]]=0;

    }
    cout<<"NO"<<endl;


}