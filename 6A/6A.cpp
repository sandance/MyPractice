#include<iostream>
#include<algorithm>
using namespace std;


int a[4];

int main()
{
	cin>>a[0]>>a[1]>>a[2]>>a[3];
	sort(a,a+4);
	
	if(a[1]+a[2] > a[3] || a[0]+[1] > a[2])
		cout<<"TRIANGLE";
	else if (a[1]+a[2]==a[3] || a[0]+a[1]==a[2])
		cout<<"SEGMENT";
	else cout<<"IMPOSSIBLE";

	return 0;
}
