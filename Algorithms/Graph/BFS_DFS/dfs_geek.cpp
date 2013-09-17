#include <iostream>
#include<list>
#include <queue>
using namespace std;


class Graph 
{
	int V; // number of vertices 
	list<int> *adj; //adjacency list
	void DFSUtil(int v, bool visited[]); // keep the log of visited node
public:
	Graph(int V); //constructor
	void addEdge(int v,int w); // function to add an edge to Graph
	void DFS(); //prints DFS traversal of the complete Graph
};

Graph::Graph(int V)
{
	this->V=V;
	adj = new list<int> [V];
}


void Graph::addEdge(int v,int w)
{
	adj[v].push_back(w);
}

void Graph::DFSUtil(int v, bool visited[])
{

	//MArk current node as visited and mark it

	visited[v] = true;
	cout<<v<<" ";

	//Recursive for all nodes as visited and print it

	list<int>::iterator i;

	for(i = adj[v].begin(); i !=adj[v].end(); ++i)
		if(!visited[*i])
			DFSUtil(*i, visited);
}


// the function to do the DFS traversal

void Graph::DFS()
{
	// Mark all vertices as not visited 	
	bool *visited = new bool[V];
	
	for(int i=0; i< V;i++)
		visited[i] = false;

	// Call the recursive helper function to print DFS traversal

	for(int i=0;i<V;i++)
		if(visited[i] == false)
			DFSUtil(i,visited);

}


int main()
{

	int n,m;
	
	cout<<"Enter number of Vertices"<<"\n"<<endl;

	cin>>n;
	cout<<"Enter number of Edges "<<"\n"<<endl;
	cin>>m;
	
	Graph g(n);

	while(m--)
	{
		int x,y;
		cout<<"Enter the connected Edges(vextex x , vertex y) or x->y  "<<"\n"<<endl;
		cin>>x>>y;
		g.addEdge(x,y);
	}
	
	cout<<"The DFS search is ............"<<endl;

	g.DFS();

	return 0;

}

	
