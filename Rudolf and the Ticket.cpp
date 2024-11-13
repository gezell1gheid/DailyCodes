#include <bits/stdc++.h>
using namespace std;
int b[1010],c[1010];
int main() {
	int n,m,k,t;
	cin>>t;
	for(int i=0; i<t; i++) {
		cin>>n>>m>>k;
		for(int j=0; j<n; j++) {
			cin>>b[j];
		}
		for(int j=0; j<m; j++) {
			cin>>c[j];
		}
		int count=0;
		for(int i=0; i<n; i++) {
			for(int j=0; j<m; j++) {
				if(b[i]+c[j]<=k) {
					count++;
				}
			}
		}
		cout<<count<<endl;
		for(int j=0; j<n; j++) {
			b[j]=0;
		}
		for(int j=0; j<m; j++) {
			c[j]=0;
		}
	}
	return 0;
}
