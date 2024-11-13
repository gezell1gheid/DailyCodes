#include <bits/stdc++.h>
using namespace std;
int main(){
	int h,r;
	double v,n;
	cin>>h>>r;
	v=h*3.14*r*r/1000;
	n=20/v;
	int a;
	a=ceil(n); 
	cout<<a;
	return 0;
}
