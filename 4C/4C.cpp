#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	map<string,int> dic;
	
	while (n--) {
		string s;
		cin>>s;
		cout<<"Diction msg"<< dic[s]<<endl;
		int c = dic[s]++;
		if (c==0) cout <<"OK"<<endl;
		else 	  cout<<s<<c<<endl;
	}
	return 0;
} 
