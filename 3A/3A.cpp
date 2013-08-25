#include <iostream>
using namespace std;

char a[3],b[3],c,d;

int main()
{
	cin>>a>>b;
	int x=a[0]-b[0];
	int y=a[1]-b[1];
	c=x<0? x=-x, 'R':'L';
	d=y<0? y=-y, 'U':'D';
	cout<<(x >y ? x:y)<<endl;
	
	while(x|y){
		if(x) x--, cout<<c;
		if(y) y--, cout<<d;
		cout<<endl;
	}

	return 0;
}
