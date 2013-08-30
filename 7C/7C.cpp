#include<iostream>
using namespace std;

long long a,b,c,t,tt,x,y;

void gcd(long long a, long long b)
{
	if(b==0) { x=1,y=0; return; }
	gcd(b,a%b);
	long long t=x;
	x=y, y=t-(a/b)*y;
	


}

int main()
{
cin>>a>>b>>c;
gcd(a,b);

cout<<"X and Y"<<x<<"  "<<y<<endl;


//t=a*x+b*y;
		
return 0;
}	
