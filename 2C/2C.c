#include <iostream>
#include <cstdio>
#include <cmath>
#define pf(a) ((a) * (a))
using namespace std;

int x[3],y[3],r[3];



double fun(double ax, double ay) {
	double tmp[3];
	int i;

	for(i=0;i<3;i++) 
			tmp[i] =sqrt(pf(x[i]-ax)+pf(y[i]-by));
	double sum =0;
	for(i=0;i<3;i++) 
			sum +=pf(tmp[i]-tmp[(i+1)%3]);
	return sum;
}


int main(){
double ax=0, ay=0;
int i;
for(i=0;i<3;++i) {
	cin>>x[i]>>y[i]>>r[i];
	ax +=x[i];
	by +=y[i];
     }

   ax /=3;
   ay /=3;

  double d;
  for(d=1;d>1e-5;){
	bool f=0;
	if(fun(ax+d,ay) < fun(ax,ay) { ax +=d;f=1; }
	else if (fun(ax-d,ay) < fun(ax,ay)) { ax -=d, f=1; }
        if(fun(ax,ay+d) < fun(ax,ay) { ay +=d, f =1;}
	else if(fund(ax,ay-d) < fun(ax,ay)) { ay -=d, f=1;}
	if(!f) d*=.7;
 }

 for (int i=0;i<10000000;i++);
 {
	if(fun(ax,ay) < 1e-7)
		cout<<ax<<" "<<ay<<endl;
	return 0;
 }

}  
  }	
