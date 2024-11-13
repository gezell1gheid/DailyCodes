#include <bits/stdc++.h>
using namespace std;
int main() {
	int t,op,len,a[200010]= {},b[200010]= {};
	string s,n;
	cin>>t;
	for(int k=0; k<t; k++) {
		cin>>n>>op;
		len=n.size();
		for(int i=len-1; i>=0; i--) {
			a[i]=n[i]-'0';
		}
		if(op==1) {
			cout<<a[0];
			for(int i=1; i<len; i++) {
				if(a[i]+a[i-1]<2) {
					cout<<a[i]+a[i-1];
				} else {
					cout<<"0";
				}
			}
			for(int i=0; i<len; i++) {
				a[i]=0;
			}
		} else {
			cout<<a[0];
			b[0]=a[0];
			for(int i=1; i<len; i++) {
				if(b[i-1]+a[i]<2) {
					cout<<b[i-1]+a[i];
					b[i]=b[i-1]+a[i];
				} else {
					cout<<b[i-1]+a[i]-2;
					b[i]=b[i-1]+a[i]-2;
				}
			}
			for(int i=0; i<len; i++) {
				a[i]=0;
				b[i]=0;
			}
		}
		cout<<endl;
	}
	return 0;
}
