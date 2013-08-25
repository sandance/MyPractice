#include <iostream>
#include <map>
using namespace std;

int main()
{
	
	/*
	mymap['b']=100;
	mymap['a']=200;
	mymap['c']=300;
	
	for(std::map<char,int>::iterator it=mymap.begin(); it !=mymap.end(); it++)
		std::cout<<it->first<<" => "<<it->second <<"\n";
		
	*/
	
	pair<int,int> play1(10,20);
	pair<int,int> play2;
	//play2=make_pair(
	map<pair<int,int>,int> mymap;
	//map<,int>::iterator it;
	
	mymap[make_pair(20,30)]=100;
	
	
	cout<<mymap[]<<endl;
	cout<<mymap[30]<<endl;
	
	
	
	
	 return 0;
	
}
	