#include <iostream>
using namespace std;

char arr[9][10];

int main()
{
	int i,j;
	for(i=0;i<8;i++)
		cin>>arr[i];
	for (i=0;i<8;i++){
		for(j=0;j<8;j++)
			if (arr[i][j]=='W')
				break;
		if(j==8) an++;
		for(j=0;j<8;j++)
			if(arr[j][
