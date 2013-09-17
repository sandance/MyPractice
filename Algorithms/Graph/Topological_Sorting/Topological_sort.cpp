#include<iostream>
#include<list>
#include<stack>
using namespace std;

/* ################## Tologocial Sort Algo ######################

	
	http://www.geeksforgeeks.org/topological-sorting/
	
	We can modify DFS to find Topological Sorting of a graph. In DFS, we start from a vertex, we first print it and then recursively call DFS for its adjacent vertices.
	
	In topological sorting, we use a temporary stack. We don’t print the vertex immediately, 
	
	we first recursively call topological sorting for all its adjacent vertices, then push it to a stack. 

	Finally, print contents of stack. Note that a vertex is pushed to stack only when all of its adjacent vertices (and their adjacent vertices and so on) are already in stack.


   ###############################################################
*/

class Graph
{
	int V;
	list<int> *adj; // Pointer to array
	void topologicalSortUtil(int v,bool visited[] , stack<int> &Stack);
	// This function is used by topological sort

public :
	Graph(int V); //constructor
	void addEdge(int v, int w); 
	void topologicalSort();
};

Graph::Graph(int V)
{
	this->V=V;
	adj = new list<int> [V];
}

void Graph::addEdge(int v, int w)
{
	adj[v].push_back(w); // add w to v's list

}



void Graph::topologicalSortUtil(int v, bool visited[], stack<int> &Stack)
{

	// Mark the current node as visited 
	visited[v] = true;
	
	//Recursively go for all the vertices adjacent to this vertex
	list<int>::iterator i;

	for(i=adj[v].begin(); i !=adj[v].end(); ++i)
		if(!visited[*i])
			topologicalSortUtil(*i, visited, Stack);

	// push current vertex to stack
	
	Stack.push(v);
}


//Recursive topological sort

void Graph::topologicalSort()
{

	stack<int> Stack;

	//Mark all the vertices that are not visited

	bool *visited = new bool[V];
	for(int i=0;i<V;i++)
		visited[i] = false;

	// call the recursive helper function to store 
	// Topological sorting starting from all vertices one by one

	for(int i=0;i<V;i++)
		if(visited[i] == false)
			topologicalSortUtil(i, visited, Stack);


	//print contents of Stack

	while(Stack.empty() == false)
	{
		cout<< Stack.top() <<" ";
		Stack.pop();
	}
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

        cout<<"The Topological sorting  is ............"<<endl;

        g.topologicalSort();

        return 0;

}
	




	
