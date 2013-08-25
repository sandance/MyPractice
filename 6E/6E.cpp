#include<iostream>
#include<set>
using namespace std;

int a[100100], c[100100], n,k,b,m,p;

std::multiset<int> s;

int main()
{
	
	cin>>n>>k;

	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		s.insert(a[i]);

		while(*s.rbegin() - *s.begin() > k){
			//	cout<<s.find(a[b])<<endl; 
				s.erase(s.find(a[b++]));
		}

		if ( i -b +1==m)
		

		cout<<"i and b value"<<i<<" "<<b<<endl;
		if(i -b +1 >m )
			m=i -b +1, c[0]=b ,p=1;

			
	}

	for(std::multiset<int>::iterator it=s.begin(); it!=s.end(); ++it)
			cout<<' '<<*it;

	cout<<"\n";
	
	

		
	return 0;

}
		
