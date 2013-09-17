#include<iostream>
#include<list>
using namespace std;

class Graph
{
	int V; //no of vertices
	list<int> *adj; // adjacency list for adjacency nodes
public:
	Graph(int V);
	void addEdge(int v,int w); 
	void BFS(int s);
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

void Graph::BFS(int s)

{

	bool *visited = new bool[V];
	for(int i=0;i<V;i++)
		visited[i] = false;

	//Create queue for BFS

	list<int> queue;

	// mark current node as visited 
	visited[s] = true;
	queue.push_back(s);

	// 'i' will be used to get all adjacent vertices of a vertex

	list<int>::iterator i;

	while(!queue.empty())
	{

			//Dequeue a vertex from from of the queue and print it
			s = queue.front();
			cout<<s<<" ";
			queue.pop_front();

			for(i=adj[s].begin(); i !=adj[s].end(); ++i){
				if(!visited[*i])
				{
					visited[*i] = true;
					queue.push_back(*i);
				}
			}

	}

}		



int main()
{
	int n,m;

	cout<<"Enter number of Vertices and Edges"<<"\n"<<endl;
	cin>>n>>m;

	Graph g(n);

	while(m--)
	{
		int x, y;
		cout<<"Enter the Edges (x, y) where x->->y "<<"\n"<<endl;
		cin>>x>>y;
		
		g.addEdge(x,y);
	}

	int find;

	cout<<"Enter the vertex from where you want to traverse "<<"\n"<<endl;
	cin>>find;

	cout<<"SO the breadth first list is "<<"\n"<<endl;

	g.BFS(find);

		
	return 0;

}		
