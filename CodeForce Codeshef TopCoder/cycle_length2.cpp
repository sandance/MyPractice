//Problem 263D Cycle in Graph

#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N, M, K;
vector<int> V[100002];
int ST[100002];
bool S[100002];

void Dfs(int x, int done)
{
	S[x] = true;
	ST[++ST[0]] = x;
	
	if (done >= K + 1)
		for (vector<int>::iterator it = V[x].begin(); it != V[x].end(); ++it)
			if (*it == 1)
			{
				cout << ST[0] << '\n';
				for (int i = 1; i <= ST[0]; ++i)
					cout << ST[i] << ' ';
				exit(0);
			}
	
	for (vector<int>::iterator it = V[x].begin(); it != V[x].end(); ++it)
		if (!S[*it])
			Dfs(*it, done + 1);
	--ST[0];
}

int main()
{
	cin >> N >> M >> K;
	for (int i = 1, nod1, nod2; i <= M; ++i)
	{
		cin >> nod1 >> nod2;
		V[nod1].push_back(nod2);
		V[nod2].push_back(nod1);
	}

	Dfs(1, 1);

}