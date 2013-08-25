#include<iostream>
#include<vector>
using namespace std;
vector<int> w,h;

int f(int i)
{

	if(dp[i] != -1)
		return dp[i];
	dp[i] =0;
	for(int j = 1; j< n+1; j++)
		if(w[j] > w[i] && h[i] < h[j])
		{
			int k = f(j) +1;
			if (k > dp[i])
			{
				


}


int main() {

	int w1,h1;
	cin>>n>>w1>>h1;

	w.push_back(w1);
	h.push_back(h1);

	for(int i=0; i < n; i++){
		cin>>w1>>h1;
		w.push_back(w1);
		h.push_back(h1);
	}
	for(int i=0; i < 5002; i++) dp[i] = -1;
	
	int ans=f(0), ii = p[0];
	cout<<ans<<endl;

	
