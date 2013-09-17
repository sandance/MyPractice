#include<iostream>
#include<list>
#include<set>

using namespace std;

set<int> connected_set;



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
	adj[w].push_back(v);

}

void Graph::BFS(int s)

{

//	set<int> connected_set;


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
			connected_set.insert(s);


			queue.pop_front();

			for(i=adj[s].begin(); i !=adj[s].end(); ++i){
				if(!visited[*i])
				{
					visited[*i] = true;
					connected_set.insert(*i);
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

	
	if (connected_set.size() == n)
	{
		cout<<"\n";
		cout<<connected_set.count(find)<<"\n"<<endl;
		cout<< "The graph is strongly connected"<<"\n"<<endl;
	}
	else {
		cout<<"\n";	
		cout<<"The graph is not strongly connected"<<"\n"<<endl;
		 cout<<connected_set.count(find)<<"\n"<<endl;
	}

	return 0;

}		
