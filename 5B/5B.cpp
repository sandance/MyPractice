#include <iostream>
#include <string>
using namespace std;

string s[1111];
int i,j,n=0,x=0;

bool t =true

int main()
{
	while(getline(cin,s[n]) !=0)
	{	
		if ( x < s[n].size()) x = s[n].size();
		n++;
	}
	
	for(i=0;i<x+2;i++) cout<<"*";
	cout<<endl;
	for(i=0;i<n;i++){
			cout<<"*";
			if((x-s[i].size())%2 !=0)
				t =!t;
			cout<<s[i];
			for(j=(x-s[i].size()+t)/2; j<x-s[i].size(); j++)
				cout<<' ';
			cout<<"*"<<endl;
	}
	for(i=0;i<x+2;i++) cout<<'*';
	return 0;
}
