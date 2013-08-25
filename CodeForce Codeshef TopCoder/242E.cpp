#include<iostream>
using namespace std;

int arr[100005];
int n,m;

int main()
{
	
	int type,l,r,x,tmp=0,count=0;
	long long int sum=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	cin>>m;
	
	for(int t=0;t<m;t++)
	{
		cin>>type;
		if(type==1)
		{
			sum =0;
			cin>>l>>r;
			count=0;tmp=0;
			for(int i=l;i<=r;i++)
			{
				count++;
                    if(count==2000){
                        sum+=tmp;
                        count=0;
                        tmp=0;
                    }
				
				tmp +=arr[i];
			}
		 sum+=tmp;
		 cout<<sum<<endl;
		}
		else
		{
			cin>>l>>r>>x;
			for(int i=l;l<=r;i++){
			
				arr[i]^=x; 
		    }
		}
		
	}
}