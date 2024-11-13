#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,c[110];
	cin>>n;
	for(int i=n; i>=0; i--) {
		cin>>c[i];
		if(n==0) {
			cout<<"0";
		}
		if(c[i]==0) {
			cout<<"0"<<" ";
		} else {
			if(i!=0) {
				cout<<c[i]*i<<" ";
			}
		}
	}
	return 0;
}
