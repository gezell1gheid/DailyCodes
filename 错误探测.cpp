#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,a[100][100],counth=0,countl=0;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0; i<n; i++) {
		int sumh=0;
		for(int j=0; j<n; j++) {
			sumh+=a[i][j];
		}
		if(sumh%2==0) counth++;
	}
	for(int j=0; j<n; j++) {
		int suml=0;
		for(int i=0; i<n; i++) {
			suml+=a[i][j];
		}
		if(suml%2==0) countl++;
	}
	if(countl==n && counth==n) {
		cout<<"OK";
	} else if(countl != n-1 && counth != n-1) {
		cout<<"Corrupt";
	} else {
		for(int i=0; i<n; i++) {
			int sumh=0;
			for(int j=0; j<n; j++) {
				sumh+=a[i][j];
			}
			if(sumh%2!=0) {
				cout<<i+1<<" ";
				break;
			}
		}
		for(int j=0; j<n; j++) {
			int suml=0;
			for(int i=0; i<n; i++) {
				suml+=a[i][j];
			}
			if(suml%2!=0) {
				cout<<j+1;
				break;
			}
		}
	}
	return 0;
}
