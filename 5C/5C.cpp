#include<iostream>
#include<string.h>
using namespace std;
#define ran 100010

int st[ran],top;
char s[ran];

int main()
{
	int res=0,num=1;
	cin>>s;
	st[top++] = -1;
	for(int i=0; s[i];i++)
		if(s[i] == '('){
			st[top++]=i;
		}
		else{
			if(top==1)
				st[0]=i;
			else {
				--top;
				int l = i - st[top-1];
		//		cout<<"Added "<<l<<endl;
				if (res < l) res =l ,num=1; 
				else if (res==l) num++;
			}
		}

		cout<<res<<" "<<num;
		return 0;
}
		
