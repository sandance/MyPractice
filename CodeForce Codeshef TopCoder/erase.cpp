#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> myvector;
	
	for(int i=1;i<=10;i++) myvector.push_back(i);
	
	//erase the 6th element
	myvector.erase (myvector.begin()+5);
	
	// erase the first 3 element
	myvector.erase(myvector.begin(), myvector.end()+3);
	
	cout<<"My vector contains"<<endl;
	
	for(unsigned int i=0; i<myvector.size();i++)
			cout<<" "<<myvector[i];
	cout<<endl;
	
	for(vector<int>::iterator it=myvector.begin(); it !=myvector.end(); it++)
		cout<<*it<<" ";
	
	cout<<endl;

	return 0;
}