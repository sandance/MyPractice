#include<iostream>
#include<list>
using namespace std;

// This C++ program to check if a given graph is Eulerian or not

class Graph
{
	int V;	// No of Vertices
	list<int> *adj; // A dynamic array of Adjacency list

	public:
		// Constructor
		Graph(int V)
		{
			this->V= V;
			adj = new list<int> [V];
		}
	
		// Descructor
		~Graph()
		{
			delete [] adj; //to avoid memory leak
		}
	
		// Function to add an edge to graph
		void addEdge(int v, int w);
		
		// Method to check if this graph is Eulerian or not
		int isEulerian();
		
		//Method to check if all non-zero degree vertices are 
		//connected 
		bool isConnected();

		//Function to do a DFS starting from v
		void DFSUtil(int v, bool visited[]);
};


void Graph::addEdge(int v, int w)
{
	adj[v].push_back(w);
	adj[w].push_back(v); // adding both direction coz it is a undirected 
}

void Graph::DFSUtil(int v, bool visited[])
{
	// Mark the current node as visited and print it
	visited[v] = true;

	// Recursively traverse through all nodes adjacent to this node
	list<int>::iterator i;

	for(i=adj[v].begin(); i !=adj[v].end(); ++i)
		if(!visited[*i])
			DFSUtil(*i, visited);
}



bool Graph::isConnected()
{
//Method to check if all non-zero degree vertices are connected 

	bool visited[V]; // first mark all vertices are not visited 

	int i;
	
	for(i=0;i<V;i++)
		visited[i] =false;

	//Find a vertex with non-zero degree

	for(i=0;i<V;i++)
		if(adj[i].size() !=0)
			break;

	// If there are no edges in the graph , return true
	
	if(i==V)
		return true;
	
	//Start DFS traversal from a vertex with non-zero degree 
	DFSUtil(i,visited);
	
	for(i=0;i<V;i++)
		if(visited[i] ==false && adj[i].size() >0)
			return false;

	return true;
}

/* 
	
This function returns one of the following values 

	0 --> If graph is not Eulerian 
	1 --> If graph has an Euler Path (semi Eulerian)
	2 --> If graph has a euler circuit (Eulerian)
*/

int Graph::isEulerian()
{
	// Check if all non-zero vertices are connected 
	if(isConnected() == false)
		return 0;
	
	// count vertices with odd degree 

	int odd =0;
	for (int i=0; i<V;i++)
		if(adj[i].size() & 1)
			odd++;
	
	// If count is more than 2 , the graph is not 
	
	if(odd >2)
		return 0;

	// if odd count is 2 , then semi -eulerian 
	// if odd count is 0 , then eulerian 
	// Note that odd count can never be 1 in undirected graph
	
	return (odd) ? 1: 2;

}


void test(Graph &g)
{
	int res = g.isEulerian();
	
	if(res ==0)
		cout<<"Graph is not Eulerian"<<endl;
	else if (res ==1)
		cout<<"Graph is not a Euler Path"<<endl;
	else
		cout<<"Graph has a euler cycle"<<endl;
}


int main()
{
	Graph g1(5);

	g1.addEdge(1,0);
	g1.addEdge(0,2);
	g1.addEdge(2,1);
	g1.addEdge(0,3);
	g1.addEdge(0,3);
	test(g1);

	Graph g2(5);
	
	g2.addEdge(1,0);
	g2.addEdge(0,2);
	g2.addEdge(2,1);
	g2.addEdge(0,3);
	g2.addEdge(3,4);
	g2.addEdge(4,0);
	
	test(g2);

	return 0;
}


	
	
