#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,k,a[1000];
	cin>>n>>k;
	for(int i=0; i<n; i++) {
		cin>>a[i];
	}
	int ans=0;
	for(int i=0; i<n-k+1; i++) {
		int r=i+k-1;
		int l=i;
		int cnt=0;
		while(l<r) {
			if(a[l]!=a[r]) {
				cnt++;	
			}
			l++;
			r--;
		}
		if(cnt==1) ans++;
	}
	cout<<ans;
	return 0;
}
