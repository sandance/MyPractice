#include <iostream>
#include <algorithm>
#include <cmath>

#define rep(i,n) for(int i=0;i<n; i++)
#define MX 1000005
using namespace std;

int n,k,a[1000010],f[1000010],b[1000010];

int main(){

	cin>>n>>k;
	for(int i=0;i<n;i++)
			cin>>a[i];
	sort(a,a+n);
	rep(i,n) cout<<a[i]<<" "<<endl;

	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
				//cout<<"i "<<i<<"j "<<j
				f[a[i]-a[j]]++;
				cout<<"i "<<i<<" j "<<j<<" a[i]   "<<a[i]<<" a[j]  "<<a[j]<<" diff   "<<f[a[i]-f[j]]<<endl;

		}
	}
	rep(i,n)
		cout<<"F[] value"<<f[i]<<" "<<endl;
	
	
	
	return 0;
}

