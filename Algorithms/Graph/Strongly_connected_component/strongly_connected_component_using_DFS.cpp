#include<iostream>
#include<list>
#include<stack>
using namespace std;

/* #################################################### Kosaraju's Algorithm for Strongly connected Components ###########################################



Following is detailed Kosaraju’s algorithm.
1) Create an empty stack ‘S’ and do DFS traversal of a graph. In DFS traversal, after calling recursive DFS for adjacent vertices of a vertex, push the vertex to stack.
2) Reverse directions of all arcs to obtain the transpose graph.
3) One by one pop a vertex from S while S is not empty. Let the popped vertex be ‘v’. Take v as source and do DFS (call DFSUtil(v)). The DFS starting from v prints strongly connected component of v.

http://www.geeksforgeeks.org/strongly-connected-components/ (URL)










##############################################################################################################################################################*/

class Graph
{
	int V; // No of vertices 
	list<int> *adj; // adjacency list 
	void DFSutil(int v, bool visited[]);

	// Fills stack with vertices (in increasing order of finishing times)
	// The top element of stack has the meximum finishing time

	void fillOrder(int v, bool visited[] , stack<int> &Stack);

public:
	Graph(int V); 
	void addEdge(int v, int w);
	// void DFS();
	// The main function that finds and prints strongly connected 
	// components 
	void printSCCs();


	// Funciton that retuns reverse or Traspose of the graph

	Graph getTranspose() ;


};





Graph::Graph(int V)
{
	this->V=V;
	adj = new list<int> [V];
}





void Graph::addEdge(int v, int w)
{
	adj[v].push_back(w);
}



// A recursive function to print DFS starting from v


void Graph::DFSutil(int v, bool visited[])
{
	visited[v] = true;

	cout<< v <<" ";

	list<int>::iterator i;

	// Recur for all the vertices adjacent to this vertex


	for(i=adj[v].begin(); i !=adj[v].end(); ++i)
		if(!visited[*i])
			DFSutil(*i, visited);
}


// So , basically using this we are doing a topological sorting of all vertices 



void Graph::fillOrder(int v, bool visited[] , stack<int> &Stack)
{

	// Mark the currecnt node as visited and print it 
	visited[v] = true;
	
	//Recur for all the vertices adjacent to this vertex
	list<int>::iterator i;
	for(i=adj[v].begin(); i != adj[v].end(); ++i)
		if(!visited[*i])
			fillOrder(*i, visited, Stack);
	
	// All vertices reachable from v are processed by nw, push v to stack
	
	Stack.push(v);
	


}

Graph Graph::getTranspose()
{
	Graph g(V);
	
	for(int v=0;v<V;v++)
	{
		// recur for all vertices adjacent to this vertex 
		
		list<int>::iterator i;
		for(i = adj[v].begin(); i!=adj[v].end(); ++i)
		{
			g.adj[*i].push_back(v);
		}
	}
	
	return g;
}


void Graph::printSCCs()
	
{
	stack<int> Stack;

	// Mark all vertices as not visited (for first DFS)
	bool *visited = new bool [V];
	
	for(int i=0;i<V;i++)
		visited[i] = false;

	// Fill vertices in stack according to their finishing time
	
	for(int i=0; i<V;i++)
		if(!visited[i])
			fillOrder(i, visited, Stack);

	// Create a reversed Graph 

	Graph gr = getTranspose();

	for(int i=0;i<V;i++)
		visited[i]=false;


	// Process all vertices in order definded by stack

	while(Stack.empty() == false)
	{
		// Pop a vertex from tack
		int v = Stack.top();
		Stack.pop();

		if(visited[v] == false)
		{
			gr.DFSutil(v,visited);
			cout<<endl;
		}
	}
}






int main()
{

	int n, m;
	int x,y;

	cout<<"Enter the vertex and Edge number of Graph"<<"\n"<<endl;
	cin>>n>>m;

	Graph g(n); 

	while(m--)
	{
	
		cout<<"Enter connecting edges (x->-> y) "<<"\n"<<endl;
		cin>>x>>y;
	
		g.addEdge(x,y);
		
	}

	cout << "Following are strongly connected components in given graph \n";
    	g.printSCCs();


}
	
	
	
	















	

