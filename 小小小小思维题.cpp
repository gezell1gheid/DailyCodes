#include <bits/stdc++.h>
using namespace std;
int main() {
	int a[100]= {},t,n,max=0;
	cin>>t;
	for(int i=1; i<=t; i++) {
		cin>>n;
		for(int j=1; j<=n; j++) {
			cin>>a[j];
		}
		if(n==1) {
			cout<<a[1]<<endl;
		} else {
			for(int j=1; j<=n; j=j+2) {
				if(a[j]>max) {
					max=a[j];
				}
			}
			cout<<max<<endl;
			max=0;
		}
	}
	return 0;
}
