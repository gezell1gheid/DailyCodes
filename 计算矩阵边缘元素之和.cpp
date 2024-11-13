#include <bits/stdc++.h>
using namespace std;
int main() {
	int m,n,i,j,sum=0,arr[100][100];
	cin>>m>>n;
	for(i=0; i<m; i++) {
		for(j=0; j<n; j++) {
			cin>>arr[i][j];
		}
	}
	for(i=0; i<m; i++) {
		for(j=0; j<n; j++) {
			if(i==0 || j==0 || i==m-1 || j==n-1){
				sum+=arr[i][j];
			}
		}
	}
	cout<<sum;
	return 0;
}
