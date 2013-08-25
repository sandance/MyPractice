#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <complex>
#define INF 0x3f3f3f3f

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef complex<ll> pt;

vector<int> adj[100001];
int n, m, h, t, a, b;

int main()
{
    ios::sync_with_stdio(0);
    cin >> n >> m >> h >> t;
    for (int i = 0; i < m; ++i)
    {
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for (int i = 1; i <= n; ++i)
    {
        sort(adj[i].begin(), adj[i].end());
        adj[i].push_back(INF);
    }
    for (int head = 1; head <= n; ++head)
    for (int k = 0; k < adj[head].size()-1; ++k)
    {
        int tail = adj[head][k];
        if (adj[head].size() < h || adj[tail].size() < t)
            continue;
        vector<int> hfin, tfin, both;
        hfin.reserve(h), tfin.reserve(t), both.reserve(h+t);

        int i = 0, j = 0;
        while (hfin.size() + tfin.size() + both.size() < h + t)
        {
            if (adj[head][i] == tail)
                ++i;
            else if (adj[tail][j] == head)
                ++j;
            else if (adj[head][i] < adj[tail][j])
            {
                if (hfin.size() < h)
                    hfin.push_back(adj[head][i]), ++i;
                else
                    i = adj[head].size()-1;
            }
            else if (adj[head][i] > adj[tail][j])
            {
                if (tfin.size() < t)
                    tfin.push_back(adj[tail][j]), ++j;
                else
                    j = adj[tail].size()-1;
            }
            else
            {
                if (adj[head][i] < INF)
                    both.push_back(adj[head][i]), ++i, ++j;
                else
                    break;
            }
        }
        if (hfin.size() + tfin.size() + both.size() < h + t)
            continue;
        i = 0;
        while (hfin.size() < h)
            hfin.push_back(both[i]), ++i;
        while (tfin.size() < t)
            tfin.push_back(both[i]), ++i;

        cout << "YES" << endl << head << ' ' << tail << endl;
        for (int i = 0; i < h; ++i)
            cout << hfin[i] << ' ';
        cout << endl;
        for (int i = 0; i < t; ++i)
            cout << tfin[i] << ' ';
        cout << endl;
        exit(0);
    }
    cout << "NO" << endl;
}