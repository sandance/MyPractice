#include<iostream>
using namespace std;

int main()
{
	int x,y,a,b,count=0;
	int p[100], q[100];
	cin>>x>>y>>a>>b;
	
	// x here toss of vasya who wins
	// y here toss of Petya who loses
	// a num of head vasya got
	// b number of head Petya got
	
	for (int i=a;i<=x;i++)
	{	for(int j=b;i<=y;j++)
		{
				//if(i<j) continue;
				if(i>j)
				{
					count++;
				}
		}
	}	
	/*
	cout<<count<<endl;
	for(int i=a;i<=count;i++)
		cout<<p[i]<<q[i]<<endl;
	*/
	cout<<count<<endl;
	for(int i=a;i<=x;i++)
		for(int j=b;j<=y;j++)
			if(i>j)
				cout<<i<<" "<<j<<endl;
	
	
	
	
	return 0;
}