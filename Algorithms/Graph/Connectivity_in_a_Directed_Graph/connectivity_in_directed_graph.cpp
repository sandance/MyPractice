#include<iostream>
#include<list>
#include<stack>
using namespace std;

/* ############################################################## Algorithm ####################################################

	http://www.geeksforgeeks.org/connectivity-in-a-directed-graph/

	BFS/ DFS only worked for all un-directed Graph for directed graph that does not work

	1)  Initialize all vertices as not visited.


	2) Do a DFS traversal of graph starting from any arbitrary vertex v. If DFS traversal doesn’t visit all vertices, then return false.

	3) Reverse all arcs (or find transpose or reverse of graph)

	4) Mark all vertices as not-visited in reversed graph.

	5) Do a DFS traversal of reversed graph starting from same vertex v (Same as step 2). If DFS traversal doesn’t visit all vertices, then return false. Otherwise return true.



	The idea is, if every node can be reached from a vertex v, and every node can reach v, then the graph is strongly connected.
	 In step 2, we check if all vertices are reachable from v. In step 4, we check if all vertices can reach v (In reversed graph, 
		if all vertices are reachable from v, then all vertices can reach v in original graph).


*/


class Graph {

	int V;
	list<int> *adj;
	void DFSUtil(int v, bool visited[]);
public:
	Graph(int V);
	~Graph();
	void addEdge(int v, int w);
	bool isSC(); // The main Function that returns "true" , if the graph is strongly connected , other wise it returns "false"
	
	Graph getTranspose(); // Function that returns reverse of the given graph 
	
};

Graph::Graph(int V)
{
	this->V=V;
	adj = new list<int> [V];
}

Graph::~Graph()
{
	delete [] adj;
}

void Graph::addEdge(int v, int w)
{
	adj[v].push_back(w);
}



void Graph::DFSUtil(int v, bool visited[])
{
	
