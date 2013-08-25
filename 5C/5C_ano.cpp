#include<iostream>
#include<stack>
#include<string>
using namespace std;

stack<int> q;

const int maxn = 1000100;
char str[maxn];

void doit() { 
		int st=0; ans=0, res =1;
			
		for(int i=0;str[i];i++){
			if(str[i] == '(') q.push_back(i);
			else if (q.empty()) st = i;
			else {
				q.pop();
				int tmp= i -(q.empty() ? st : q.pop());
				
