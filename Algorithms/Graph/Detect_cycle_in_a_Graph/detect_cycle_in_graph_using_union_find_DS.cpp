#include<iostream>
#include<list>
#include<stdlib.h>
#include<string.h>

using namespace std;


/* ############################################# Union Find algorithm for detecting cycle in a Graph  ###########################################
	This is another method to find cycle in a Graph and it assumes there are no self loop
	URL: http://www.geeksforgeeks.org/union-find/

	Let us consider the following graph:

        0
        |  \
        |    \
        1-----2
	For each edge, make subsets using both the vertices of the edge. If both the vertices are in the same subset, a cycle is found.

	Initially, all slots of parent array are initialized to -1 (means there is only one item in every subset).

	0   1   2
	-1 -1  -1 

	Now process all edges one by one.

	Edge 0-1: Find the subsets in which vertices 0 and 1 are. Since they are in different subsets, we take the union of them. For taking the union, either make node 0 as parent of node 1 or vice-versa.

	0   1   2    <----- 1 is made parent of 0 (1 is now representative of subset {0, 1})
	1  -1  -1
	
	Edge 1-2: 1 is in subset 1 and 2 is in subset 2. So, take union.

	0   1   2    <----- 2 is made parent of 1 (2 is now representative of subset {0, 1, 2})
	1   2  -1
	Edge 0-2: 0 is in subset 2 and 2 is also in subset 2. Hence, including this edge forms a cycle.

	
	How subset of 0 is same as 2?
	0->1->2 // 1 is parent of 0 and 2 is parent of 1





#################################################################################################################################################*/

class Graph {

	int V;
	list<int> *adj;
public:
	Graph(int v);

	void addEdge(int v, int w);
	int find(int a[], int v);
	void Union(int a[], int v, int w);
	void isCycle();
};


	
Graph::Graph(int V)
{
	this-V=V;
	adj = list<int> [V];
}


void Graph::addEdge(int v, int w)
{
	adj[v].push_back(w);
}

int Graph::find(int parent[], int v)
{
	if(parent[v] == -1)
		return v;
	return find(parent, parent[i]);

}


int isCycle()
{
	int *parent = new int [V];

	
	for(int i=0;i<V;i++)
		parent[i] =-1;
	
	for(int i=0;i<V;i++)
	{
		int x = find(parent, 
