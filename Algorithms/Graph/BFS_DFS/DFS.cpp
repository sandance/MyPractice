#include<iostream>
#include<queue>
using namespace std;

//###################################	Algorithm 	####################################################
/*

step1 :	Push the root node onto a stack.
step 2:	Pop a node from the stack and examine it.
	2.1 	If the element sought is found in this node, quit the search and return a result.
	2.2	Otherwise push all its successors (child nodes) that have not yet been discovered onto the stack.
step 3: If the stack is empty, every node in the tree has been examined – quit the search and return "not found".

step 4: If the stack is not empty, repeat from Step 2.



*/

void dfs_visit(queue<int> *v, int u, int *c, int *pi)
{

	int p;
	c[u]=1;
	
	cout<<"visited "<<pi[u]<<" "<<endl;

	while(v[u].size())
	{
		p=v[u].front();
		v[u].pop();

		

		if(c[p]==0)
		{
			pi[p] = u;
			dfs_visit(v,p,c,pi); //recursive call
		}
	}
}





void dfs(queue<int> *v,int *c, int *pi,int n)
{

	for(int i=1;i<n;i++)
	{
		if(c[i]==0)
		{
			cout<<"New Forest"<<endl;
			dfs_visit(v,i,c,pi);
		}
	}
}


int main()
{
	int n,m,a;

	cout<<"Number of Nodes: ";
	cin>>n;

	queue<int> v[n+1];

	int c[n+1],pi[n+1];

	for(int i=1;i<=n;i++)
	{
		cout<<"Number of Adjacent nodes of "<<i<<" : ";
		cin>>m;

		c[i]=0;
		pi[i]=0;
		
		cout<<"The nodes are : ";
		
		for(int j=0;j<m;j++)
		{
			cin>>a;
			v[i].push(a);
		}
	}

	dfs(v,c,pi,n);

	for(int i=1;i<=n; i++)
		cout<<pi[i]<<" ";	
	//system("pause");

	return 0;

}
