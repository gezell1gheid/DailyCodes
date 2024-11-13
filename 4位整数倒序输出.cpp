#include <iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a,b,c,d;
	a=n/1000;
	b=(n/100)%10;
	c=(n/10)%10;
	d=n%10;
	if(d==0&&c==0&&b==0) {
		cout<<a;
	} else {
		if(d==0&&c==0) {
			cout<<b<<a;
		} else {
			if(d==0) {
				cout<<c<<b<<a;
			} else {
				cout<<d<<c<<b<<a;
			}
		}
	}
	return 0;
}
