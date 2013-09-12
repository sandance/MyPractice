#include<iostream>
#include<cstring>
#include<cstdio>
#include <bits/types.h>
#include<string.h>
#include<stdio.h>
using namespace std;

char s[100001],a[101],b[101], *x,*y,*c,*d;
int main()
{
	cin>>s>>a>>b;

	x = strstr(s,a);
	
	if(x)
		x =strstr(x+strlen(a),b);
	
	c=strrev(a);
	d=strrev(b);
	
	y=strstr(s,d);

	if(y)
		y=strstr(y+strlen(d),c);

	if(x&&y)
		cout<<"both"<<endl;
	else if(x)
		cout<<"forward"<<endl;
	else if(y)
		cout<<"backward"<<endl;
	else
		cout<<"fantasy"<<endl;


	return 0;
}
