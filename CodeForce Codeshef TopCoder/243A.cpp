#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <set>
using namespace std;

set<int> s,next,now;
int main()
{
	int n,*a;
	
	cin>>n;
	a=new int[n];
	for(int i=0;i<n;i++)
	{	
		cin>>a[i];
		next.clear();
		s.insert(a[i]);
		
		for(set<int>::iterator it=now.begin(); it !=now.end(); it++)
		{
			int b=*it|a[i];
			
			s.insert(b);
			next.insert(b);
		}	
		next.insert(a[i]);
		
		now=next;
	}
	printf("%d\n",s.size());
	return 0;
	
}