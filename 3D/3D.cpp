#include <iostream>
#include <cstring>
#include <queue>
using namespace std;

const int mm=50009;
char s[mm];

priority_queue<pair<int,int> > q;

int main()
{
	int a,b;
	cin>>s;
	int len=strlen(s);
	long long sum=0; d=0; bool flag=0;
	
	for(int i=0;i<len;i++)
	{
		if (s[i]== '(') d++;
		else if (s[i] == ')') d--;
		else
		{
			d--;
			cin>>a>>b;
			sum +=b;
			s[i] =')';
			q.push(make_pair(b-a,i));
		}

		pair<int,int> t;
	
		if(d<0){
			if(q.empty()){
					flag=1; continue; }
			t=q.top(); sum -=t.first; s[t.second] = '('; d +=2; q.pop(); 
		}
	}		
		if (d !=0 || flag) cout<< "-1\n";
		else cout<<sum<<'\n'<<s<<"\n";
}