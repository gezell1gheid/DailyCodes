#include <bits/stdc++.h>
using namespace std;
int main() {
	double a,b,c,x1,x2,sb,xb;
	cin>>a>>b>>c;
	if(b*b==4*a*c) {
		x1=(0-b + sqrt(b*b-4*a*c))/(2*a);
		std::cout << std::fixed << std::setprecision(5) <<"x1=x2="<< x1 ;
	} else if(b*b>4*a*c) {
		x1 = (0-b + sqrt(b*b-4*a*c))/(2*a);
		x2 = (0-b - sqrt(b*b-4*a*c))/(2*a);
		std::cout << std::fixed << std::setprecision(5) <<"x1="<<x1<<";x2="<< x2 ;
	} else {
		sb=0-b / (2*a);
		xb=sqrt(4*a*c-b*b) / (2*a);
		std::cout << std::fixed << std::setprecision(5) <<"x1="<<sb<<"+"<< xb <<"i;x2="<<sb<<"-"<<xb<<"i";
	}
	return 0;
}
