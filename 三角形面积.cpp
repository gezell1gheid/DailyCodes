#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main(){
	double s,a,b,c,p;
	cin>>a>>b>>c;
	p=0.5*(a+b+c);
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	cout<<fixed<<setprecision(1);
	cout<<s;
	return 0;
}
