#include <iostream>
#include <algorithm>
using namespace std;
	
	int main()
	{
		int n, l[100005], r[100005], i,x=1000000007,y=-1;
		cin>>n;
		
		for (i=1;i<=n;i++)
		{
			cin>>l[i]>>r[i];
			x=min(x,l[i]);
			y=max(y,r[i]);
		}

		for(i=1;i<=n;i++)
		{
			if(l[i]==x && r[i] ==y)
			{
				cout<<i<<endl;
				return 0;
			}
		}

		cout<<-1;
		return 0;
	}
		
	