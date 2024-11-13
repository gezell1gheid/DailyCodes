#include <bits/stdc++.h>
using namespace std;
int main() {
	int t,n,m,a[10][10]= {},b[10][10]= {};
	cin>>t;
	for(int i=0; i<t; i++) {
		cin>>n>>m;
		for(int j=0; j<n; j++) {
			for(int k=0; k<m; k++) {
				cin>>a[j][k];
			}
		}
		if(m==1 && n==1) {
			cout<<"-1";
		} else {
			for(int j=0; j<n; j++) {
				for(int k=0; k<m; k++) {
					if(a[j][k]!=m*n){
						a[j][k]++;
					}else{
						a[j][k]=1;
					}
					cout<<a[j][k]<<" ";
				}
			}
		}
		cout<<endl;
	}

	return 0;
}
